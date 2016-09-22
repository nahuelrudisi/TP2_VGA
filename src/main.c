#include <stdint.h>
#include "bsp/bsp.h"
#include "lib_draw.h"
#include "imagenes/fondo.h"
#include "imagenes/fondo5.h"
#include "imagenes/nave0.h"
#include "imagenes/nave1.h"
#include "imagenes/pelota.h"
#include "imagenes/minion.h"

#define izq_pelota 0
#define der_pelota 1
#define abajo_pelota 0
#define arriba_pelota 1

int main(void) {
	uint8_t sube = 1, baja = 1, der = 1, izq = 1, cabezasos = 0, velocidad = 5;
	int16_t horizontal = 1, vertical = 1;
	uint16_t posx_pelota = 155, posy_pelota = 55, posx_minion = 140, posy_minion = 10;
	uint32_t nave = 0;

	bsp_init();

	while (1) {

		der = get_sw_state(0);
		izq = get_sw_state(1);
		sube  = get_sw_state(2);
		baja  = get_sw_state(3);

		VGA_DrawImage(&fondo5, 0, 0);

		if(horizontal == izq_pelota)
			posx_pelota-=velocidad;
		else
			posx_pelota+=velocidad;
		if(vertical == abajo_pelota)
			posy_pelota-=velocidad;
		else
			posy_pelota+=velocidad;
		if(posx_pelota < velocidad)
			horizontal = der_pelota;
		if(posx_pelota > 295)
			horizontal = izq_pelota;
		if(posy_pelota < velocidad)
			vertical = arriba_pelota;
		if(posy_pelota > 180)
			vertical = abajo_pelota;
		VGA_DrawImageAlpha(&pelota, posx_pelota, posy_pelota, 0x01);
		if((der == 0)||(izq == 0)||(sube == 0)||(baja==0))
		{
			if((der == 0)&&(posx_minion != 270))
				posx_minion+=10;
			if((izq == 0)&&(posx_minion != 0))
				posx_minion-=10;
			if((sube == 0)&&(posy_minion < 50))
				posy_minion+=10;
			if((baja == 0)&&(posy_minion > 15))
				posy_minion-=10;
		}

		VGA_DrawImageAlpha(&minion, posx_minion, posy_minion, 0xD7);

		if((posx_pelota >= posx_minion-10) && (posx_pelota <= posx_minion+40) && (posy_pelota >= posy_minion+25) && (posy_pelota <= posy_minion+45))
		{
			vertical = arriba_pelota;
			cabezasos++;
		}
		if((cabezasos > 5) && (velocidad != 12))
		{
			velocidad++;
			cabezasos = 0;
		}
		bsp_draw();
	}
}

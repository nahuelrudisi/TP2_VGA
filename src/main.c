#include <stdint.h>
#include "bsp/bsp.h"
#include "lib_draw.h"
#include "imagenes/fondo.h"
#include "imagenes/fondo4.h"
#include "imagenes/nave0.h"
#include "imagenes/nave1.h"
#include "imagenes/pelota.h"
#include "imagenes/minion.h"

#define izquierda 0
#define derecha 1
#define abajo 0
#define arriba 1

int main(void) {
	int16_t a = 0, b = 0, horizontal = 1, vertical = 1;
	uint16_t posx = 142, posy = 100;
	uint32_t nave = 0;

	bsp_init();

	while (1) {
		VGA_DrawImage(&fondo4, 0, 0);
		posx = 140, posy = 100;

		if(horizontal == izquierda)
			a-=5;
		else
			a+=5;
		if(vertical == abajo)
			b-=5;
		else
			b+=5;

		posx += a;
		posy += b;

		if(posx < 5)
			horizontal = derecha;
		if(posx > 295)
			horizontal = izquierda;
		if(posy < 5)
			vertical = arriba;
		if(posy > 180)
			vertical = abajo;

		VGA_DrawImageAlpha(&pelota, posx, posy, 0x01);

		posx = 125, posy = 50;
		VGA_DrawImageAlpha(&minion, posx, posy, 0x01);

		bsp_draw();
	}
}

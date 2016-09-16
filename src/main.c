#include <stdint.h>
#include "bsp/bsp.h"
#include "lib_draw.h"
#include "imagenes/fondo.h"
#include "imagenes/fondo4.h"
#include "imagenes/nave0.h"
#include "imagenes/nave1.h"
#include "imagenes/pelota.h"
#include "imagenes/minion.h"

int main(void) {
	uint8_t posx = 142, posy = 100;
	uint32_t nave = 0;

	bsp_init();

	while (1) {
		VGA_DrawImage(&fondo4, 0, 0);
		posx = 142, posy = 100;
		if (nave++ % 8 > 3) {
			VGA_DrawImageAlpha(&pelota, posx, posy, 0x01);
		} else {
			VGA_DrawImageAlpha(&pelota, posx, posy, 0x01);
		}
		posx = 125, posy = 50;
		if (nave++ % 8 > 3) {
			VGA_DrawImageAlpha(&minion, posx, posy, 0x01);
		} else {
			VGA_DrawImageAlpha(&minion, posx, posy, 0x01);
		}
		bsp_draw();
	}
}

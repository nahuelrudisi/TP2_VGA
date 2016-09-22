#include "..\lib_draw.h"


const uint8_t minion_Table[] = {
		0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,
		0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,
		0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,
		0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,
		0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xDB,0xB2,
		0xB7,0xDB,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,
		0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,
		0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,
		0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,
		0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,
		0xD7,0xDB,0xB7,0x24,0x92,0xDB,0xDB,0xD7,
		0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,
		0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,
		0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,
		0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,
		0xD7,0xD7,0xD7,0xD7,0xD7,0xDB,0x6D,0x20,
		0x92,0xDB,0xD7,0xDB,0xD7,0xD7,0xD7,0xD7,
		0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,
		0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,
		0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,
		0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,
		0xDB,0xB7,0x24,0x24,0x6E,0x44,0x48,0xDB,
		0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,
		0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,
		0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,
		0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,
		0xD7,0xD7,0xD7,0xDB,0xDB,0x24,0x69,0x6D,
		0x49,0x24,0x6D,0xDB,0xD7,0xD7,0xD7,0xD7,
		0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,
		0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,
		0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,
		0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xDB,0x6D,
		0x49,0x24,0x44,0x49,0x49,0xB7,0xDB,0xD7,
		0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,
		0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,
		0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,
		0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,
		0xDB,0xFA,0xF9,0x88,0x69,0x69,0x20,0x24,
		0x6E,0xDB,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,
		0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,
		0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,
		0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,
		0xDB,0xDA,0xFA,0xFD,0xFD,0xF9,0xF8,0xAC,
		0x00,0x24,0x6D,0x20,0x24,0x6D,0xDB,0xD7,
		0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,
		0xD7,0xD7,0xD7,0xD7,0xDB,0xDB,0xD7,0xD7,
		0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,
		0xDB,0xDB,0xFA,0xFD,0xF9,0xF9,0xF9,0xF8,
		0xF8,0xF4,0xD5,0xD7,0x6D,0xDB,0xDB,0xB2,
		0x00,0x49,0xDB,0xD7,0xD7,0xD7,0xD7,0xD7,
		0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xDB,0xD7,
		0x96,0xB6,0xDB,0xFA,0xFA,0xFA,0xFA,0xFE,
		0xFE,0xFE,0xFE,0xFE,0xF9,0xD9,0xD5,0xF8,
		0xF8,0xF4,0xF4,0xF5,0xD6,0xDB,0xD7,0xDB,
		0xDB,0xD7,0xD7,0xDB,0xD7,0xDB,0xD7,0xD7,
		0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,
		0xDB,0xD7,0x92,0x72,0x72,0xB2,0xF9,0xF9,
		0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xB6,
		0x72,0x72,0x92,0xF9,0xF9,0xF9,0xFA,0xFB,
		0xDB,0xB6,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,
		0xDB,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,
		0xD7,0xD7,0xD7,0xDB,0xB7,0x72,0x6E,0x72,
		0x72,0xD5,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,
		0xFD,0xDA,0x72,0x72,0x92,0xD5,0xF9,0xF9,
		0xF9,0xF9,0xF8,0xF9,0xB6,0xDB,0xFF,0xFF,
		0xFF,0xDB,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,
		0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xDB,
		0x6E,0x72,0x72,0x72,0x72,0xF9,0xFD,0xFD,
		0xFD,0xFD,0xFD,0xF9,0x92,0x72,0x96,0xD5,
		0xF8,0xF9,0xF9,0xF9,0xF9,0xF9,0xFA,0xB6,
		0xDB,0xDB,0xB6,0xB6,0xFF,0xFF,0xFF,0xD7,
		0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,
		0xD7,0xD7,0xDB,0x92,0x4E,0x4E,0x72,0x72,
		0x72,0x72,0x92,0x96,0x92,0xB6,0x91,0x72,
		0x72,0x92,0xF5,0xF9,0xF9,0xFD,0xF9,0xF9,
		0xF9,0xDA,0x96,0xB6,0x49,0x49,0x6D,0x49,
		0x24,0x92,0xFF,0xFF,0xD7,0xD7,0xD7,0xD7,
		0xD7,0xD7,0xD7,0xD7,0xD7,0xDB,0xD7,0x4D,
		0x4E,0x4E,0x72,0x72,0x72,0x72,0x72,0x72,
		0x4E,0x72,0x24,0x6D,0xB6,0xF8,0xFD,0xFD,
		0xFD,0xFD,0xF9,0xF9,0xF9,0x92,0xB6,0x6D,
		0xDB,0xFF,0xFF,0xDB,0xB6,0x49,0x6D,0xFF,
		0xDB,0xD7,0xD7,0xD7,0xD7,0xDB,0xD7,0xD7,
		0xD7,0xDB,0x92,0x4D,0x4E,0x4E,0x72,0x72,
		0x72,0x72,0x72,0x72,0x72,0x4E,0x72,0x72,
		0xD5,0xFD,0xFD,0xFD,0x8C,0x6D,0xB1,0xF8,
		0xD6,0x92,0xB6,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0xB6,0x49,0xB6,0xFF,0xD7,0xD7,0xD7,
		0xDB,0xD7,0xDB,0xD7,0xD7,0xDB,0x6D,0x4D,
		0x4E,0x6E,0x72,0x72,0x72,0x72,0x72,0x72,
		0x72,0x72,0x72,0x72,0xF9,0xFD,0xFD,0x24,
		0x00,0x92,0xF9,0xF4,0xB6,0xB6,0xDB,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x92,0x6D,
		0xFF,0xDB,0xD7,0xD7,0xDB,0x00,0x49,0xDB,
		0xDB,0xD7,0x29,0x4E,0x4E,0x4E,0x72,0x72,
		0x72,0x72,0x72,0x72,0x72,0x72,0x72,0x72,
		0xF9,0xFD,0x44,0x00,0x00,0xD6,0xF4,0xD0,
		0xB6,0xB6,0xFF,0xFF,0xFF,0x92,0x92,0xFF,
		0xFF,0xFF,0xB6,0x49,0xFF,0xDB,0xD7,0xD7,
		0xDB,0x00,0x00,0x92,0xDB,0x29,0x29,0x4E,
		0x4E,0x72,0x72,0x72,0x72,0x52,0x72,0x72,
		0x72,0x72,0x72,0x72,0xFD,0xF5,0x20,0x00,
		0x00,0xFA,0xF4,0xB0,0xB6,0xB6,0xFF,0xFF,
		0x6D,0x68,0x6D,0x91,0xFF,0xFF,0xB6,0x6D,
		0xDB,0xDB,0xD7,0xD7,0xDB,0x00,0x00,0x24,
		0x25,0x00,0x49,0x4E,0x4E,0x4E,0x4E,0x4E,
		0x4E,0x72,0x72,0x72,0x72,0x4E,0x72,0x72,
		0xFD,0xD1,0x20,0x00,0x00,0xF9,0xF4,0xB0,
		0xB6,0xB6,0xFF,0xFF,0x8D,0x68,0x25,0x68,
		0xFF,0xFF,0xB6,0x6D,0xDB,0xFD,0xDB,0xD7,
		0xDB,0x00,0x00,0x00,0x25,0x04,0x49,0x4D,
		0x4E,0x72,0x4E,0x4E,0x4E,0x72,0x72,0x72,
		0x72,0x4E,0x72,0x92,0xFD,0xAD,0x20,0x00,
		0x24,0xF5,0xF4,0xD0,0xB2,0x92,0xDB,0xFF,
		0xD6,0x8C,0x8C,0x92,0xFF,0xFF,0x6D,0xB7,
		0xDB,0xF9,0xDB,0xD7,0xDB,0x24,0x00,0x00,
		0x24,0x04,0x4D,0x4D,0x4E,0x72,0x4E,0x4E,
		0x4E,0x72,0x72,0x96,0x72,0x4E,0x4E,0x72,
		0xFD,0x89,0x00,0x00,0x6D,0xF4,0xF4,0xD0,
		0x88,0xB6,0x92,0xFF,0xFF,0xFF,0xDB,0xFF,
		0xFF,0xB6,0xB6,0xB6,0xFA,0xF9,0xDA,0xD7,
		0xDB,0x49,0x00,0x00,0x00,0x00,0x4D,0x4D,
		0x6E,0x72,0x72,0x52,0x4E,0x72,0x72,0x92,
		0x72,0x4E,0x4E,0x92,0xFD,0x64,0x00,0x00,
		0x6D,0xF8,0xF4,0xD0,0x8C,0x6D,0x92,0x92,
		0xDB,0xFF,0xFF,0xDB,0xDB,0xB6,0xB6,0xD6,
		0xF9,0xF9,0xFA,0xD7,0xDB,0x6E,0x00,0x49,
		0x00,0x00,0x4D,0x4E,0x4E,0x4E,0x52,0x52,
		0x4E,0x4E,0x72,0x72,0x72,0x4E,0x4E,0x92,
		0xFD,0x44,0x00,0x00,0x24,0xF8,0xF4,0xD0,
		0x8C,0x44,0xB6,0x92,0xB6,0xB6,0xB6,0xB6,
		0xB6,0xB6,0xB5,0xF9,0xF9,0xF9,0xFA,0xD7,
		0xDB,0x49,0x00,0x00,0x04,0x00,0x4D,0x4E,
		0x4E,0x4E,0x4E,0x4E,0x4D,0x72,0x72,0x72,
		0x72,0x4E,0x4E,0x92,0xFD,0x64,0x00,0x00,
		0x91,0xF8,0xF4,0xD0,0x8C,0xB6,0x92,0x92,
		0x6D,0x6D,0x6D,0x92,0xB6,0xFF,0xF9,0xF9,
		0xF9,0xF9,0xFA,0xD7,0xDB,0x00,0x00,0x00,
		0x25,0x04,0x49,0x4D,0x4E,0x4E,0x4E,0x4E,
		0x4E,0x6E,0x72,0x4E,0x72,0x4E,0x4E,0x91,
		0xFC,0x64,0x00,0x00,0xB6,0xF8,0xF4,0xD0,
		0xB6,0x92,0x6D,0x6D,0x92,0xB6,0x92,0x49,
		0x49,0xB6,0xFF,0xF9,0xF9,0xF9,0xFA,0xD7,
		0xD7,0x00,0x24,0x00,0x24,0x04,0x49,0x4D,
		0x4E,0x4E,0x4E,0x4E,0x4E,0x4E,0x4E,0x4E,
		0x4E,0x4E,0x4E,0x91,0xFC,0x8C,0x00,0x00,
		0xD6,0xF8,0xF4,0xD6,0x92,0x92,0xDB,0xFF,
		0xFF,0xFF,0xFF,0xB6,0x6D,0x49,0xDB,0xFE,
		0xF9,0xF9,0xDB,0xD7,0xD7,0x24,0x00,0x24,
		0x00,0x04,0x29,0x4E,0x4E,0x4E,0x4E,0x4E,
		0x4E,0x72,0x4E,0x4E,0x52,0x4E,0x4E,0xB1,
		0xF8,0xD4,0x00,0x00,0xB1,0xF8,0xD0,0xB6,
		0x92,0xDB,0xFF,0xDB,0x68,0x8D,0xDB,0xFF,
		0xB6,0x49,0x92,0xDF,0xF9,0xF9,0xDB,0xD7,
		0xD7,0x00,0x6D,0xDB,0xD7,0x00,0x29,0x49,
		0x4E,0x4E,0x4E,0x72,0x4E,0x72,0x4E,0x4E,
		0x4E,0x4E,0x4E,0xB1,0xF8,0xFD,0x24,0x00,
		0xDA,0xF4,0xB1,0xB6,0xB6,0xFF,0xFF,0x8D,
		0x68,0x49,0x89,0xFF,0xFF,0x92,0x6D,0xBB,
		0xF9,0xF9,0xDB,0xD7,0xDB,0xDB,0xDB,0xD7,
		0xDB,0x92,0x29,0x49,0x4D,0x4E,0x4E,0x4E,
		0x4E,0x4E,0x4E,0x4E,0x4E,0x4E,0x4E,0xB1,
		0xF8,0xF8,0xF8,0x00,0x92,0xF4,0xB1,0x92,
		0xB6,0xFF,0xFF,0xB1,0xD0,0x69,0x89,0xFF,
		0xFF,0x92,0x6D,0xB6,0xFE,0xFA,0xD7,0xD7,
		0xD7,0xD7,0xD7,0xD7,0xD7,0xDB,0x25,0x49,
		0x4D,0x4E,0x72,0x4E,0x4E,0x4E,0x4E,0x4E,
		0x6E,0x49,0x49,0x91,0xF8,0xF8,0xF8,0xF4,
		0xB0,0xF4,0xB1,0x96,0xB6,0xFF,0xFF,0xFF,
		0xB1,0xB1,0xDB,0xFF,0xFF,0x92,0x6D,0xB6,
		0xF9,0xDB,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,
		0xD7,0xDB,0x6E,0x49,0x4E,0x6E,0x4E,0x2E,
		0x4E,0x4E,0x4E,0x2E,0x49,0x24,0x25,0x91,
		0xF4,0xF8,0xF4,0xF4,0xF4,0xF4,0xB0,0x96,
		0xB6,0xDB,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xFF,0x6D,0x92,0xB7,0xF9,0xD7,0xD7,0xD7,
		0xD7,0xD7,0xD7,0xD7,0xD7,0xDB,0xB6,0x49,
		0x4E,0x4E,0x72,0x4E,0x4D,0x91,0x91,0xB1,
		0x91,0x6D,0x4E,0x2E,0x91,0xF4,0xF4,0xF4,
		0xF4,0xF4,0xD0,0xB6,0x92,0xDB,0xDB,0xFF,
		0xFF,0xFF,0xFF,0xFF,0xDB,0x6D,0xB6,0xDA,
		0xDB,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,
		0xD7,0xD7,0xDB,0x49,0x4E,0x4E,0x29,0x4E,
		0x4E,0xD0,0xD4,0xD4,0xD4,0xD4,0x8D,0x4E,
		0x4E,0x8D,0xF4,0xF4,0xF4,0xF4,0xF4,0xB0,
		0x96,0x92,0xDB,0xDB,0xDB,0xFF,0xFF,0xDB,
		0x92,0xB6,0xB6,0xFA,0xD7,0xD7,0xD7,0xD7,
		0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xDB,0xB7,
		0x29,0x6E,0x29,0x4E,0x4E,0xB0,0xD5,0xD4,
		0xD4,0xD4,0xD4,0x91,0x4E,0x4E,0x6D,0xF4,
		0xF4,0xF4,0xF4,0xF4,0xB1,0x92,0x92,0xB6,
		0xDB,0xDB,0xB6,0xB6,0xB6,0xB6,0xFA,0xDB,
		0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,
		0xD7,0xD7,0xD7,0xDB,0x92,0x49,0x4E,0x6E,
		0x72,0xB1,0xD5,0xD4,0xD4,0xD5,0xD4,0xF4,
		0x6D,0x2A,0x4A,0x8C,0xF4,0xD4,0xF4,0xF4,
		0xD4,0xD1,0x6D,0x92,0x92,0x92,0xB6,0x92,
		0xB6,0xFA,0xDB,0xD7,0xD7,0xD7,0xD7,0xD7,
		0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,
		0xDB,0x92,0x4D,0x4E,0x4E,0xB1,0xD5,0xD5,
		0xD5,0xD5,0xD5,0xD5,0xF4,0x6D,0x29,0x4A,
		0xB0,0xF4,0xD4,0xF4,0xD4,0xB0,0x6D,0x6D,
		0x92,0x6D,0x6D,0xF9,0xFA,0xD7,0xD7,0xD7,
		0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,
		0xD7,0xD7,0xD7,0xD7,0xD7,0xDB,0xD7,0x92,
		0x6E,0x91,0xD5,0xD5,0xD5,0xD5,0xD5,0xD5,
		0xD5,0xF5,0x91,0x4E,0x4E,0xD5,0xF5,0xD4,
		0xD0,0xD0,0x68,0x24,0x24,0x6D,0xB6,0xDB,
		0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,
		0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,
		0xD7,0xD7,0xDB,0xDB,0xB7,0xD7,0xDB,0xDB,
		0xDB,0xDA,0xDA,0xDA,0xD5,0xD5,0xD4,0x8D,
		0x6D,0x8C,0x88,0xD5,0xB6,0xD6,0x6D,0x92,
		0x92,0xDB,0xDB,0xD7,0xD7,0xD7,0xD7,0xD7,
		0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,
		0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,
		0xDB,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,
		0xD7,0xDB,0xD6,0xD5,0xD0,0xB0,0xAC,0xAC,
		0xD1,0xDB,0xDB,0xDB,0xDB,0xD7,0xD7,0xD7,
		0xDB,0xDB,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,
		0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,
		0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,
		0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xDB,
		0xDB,0xD6,0xD0,0xD0,0xB0,0xB0,0xD5,0xDB,
		0xDB,0xDB,0xDB,0xDB,0x6D,0xB6,0xDB,0xD7,
		0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,
		0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,
		0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,
		0xD7,0xD7,0xD7,0xD7,0xD7,0xDB,0xDB,0xD6,
		0xD4,0xD4,0xF4,0xD4,0x00,0x92,0xFB,0x24,
		0x00,0x29,0xDB,0xD7,0xD7,0xD7,0xD7,0xD7,
		0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,
		0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,
		0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,
		0xD7,0xD7,0xD7,0xD7,0xDB,0xD6,0xF4,0x44,
		0x04,0x24,0x00,0x20,0x00,0x92,0xDB,0xD7,
		0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,
		0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,
		0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,
		0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,
		0xD7,0xDB,0xD7,0x00,0x00,0x00,0x24,0x49,
		0x92,0xFB,0xDB,0xD7,0xD7,0xD7,0xD7,0xD7,
		0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,
		0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,
		0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,
		0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xDB,0xDB,
		0x6D,0x00,0x24,0x29,0x24,0x8D,0xDB,0xDB,
		0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,
		0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,
		0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,
		0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,
		0xD7,0xD7,0xD7,0xDB,0xDB,0x24,0x00,0x25,
		0x00,0x24,0x49,0xDB,0xD7,0xD7,0xD7,0xD7,
		0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,
		0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,
		0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,
		0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,
		0xDB,0xD7,0x00,0x48,0xB7,0x04,0x24,0xDB,
		0xDB,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,
		0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,
		0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,
		0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,
		0xD7,0xD7,0xD7,0xD7,0xD7,0xDB,0x49,0x24,
		0xB7,0xDB,0xDB,0xDB,0xD7,0xD7,0xD7,0xD7,
		0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,
		0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,
		0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,
		0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,
		0xD7,0xDB,0xB7,0x00,0xB7,0xDB,0xD7,0xD7,
		0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,
		0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,
		0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,
		0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,
		0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xDB,0xDB,
		0xDB,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,
};

VGA_Image minion = { minion_Table, 44, 50, };

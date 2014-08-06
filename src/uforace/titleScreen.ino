const byte logo[] PROGMEM = {64,36,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x80,0x0,0x0,0x0,0x0,0x30,0x40,0x1,0x80,0x0,0x0,0x0,0x0,0x60,0xe0,0x1,0x81,0x9b,0xe7,0x80,0x0,0xc1,0xf0,0x1,0x81,0x9b,0xef,0xc0,0x1,0xc1,0xf8,0x1,0x81,0x9b,0xc,0xc0,0x3,0xfd,0xf0,0x1,0x81,0x9b,0xc,0xc0,0x3,0xfc,0xe4,0x1,0x81,0x9b,0xc,0xc0,0x7,0xf8,0x40,0x1,0x81,0x9b,0xec,0xc0,0xf,0xf0,0x0,0x1,0x81,0x9b,0xec,0xc0,0x18,0x18,0xc2,0x1,0x81,0x9b,0xc,0xc0,0x38,0x3c,0xe6,0x1,0x81,0x9b,0xc,0xc0,0x30,0x7f,0xe7,0x1,0x81,0x9b,0xc,0xc0,0x7f,0xfd,0xff,0x1,0x81,0x9b,0xc,0xc0,0xff,0x3d,0xff,0x81,0x81,0x9b,0xc,0xc1,0xfe,0x18,0xcf,0x81,0x81,0xfb,0xf,0xc1,0xfc,0x0,0xce,0x41,0x80,0xf3,0x7,0x83,0x4,0x10,0x6,0x21,0x80,0x0,0x0,0x6,0xe,0x38,0x84,0x1f,0x80,0x0,0x0,0x0,0xf,0x79,0x84,0x3f,0x9f,0x6,0xf,0x3e,0x1f,0xfb,0xce,0x3f,0x9f,0x86,0x1f,0xbe,0x1f,0x7f,0xdf,0x7f,0x99,0x8f,0x19,0xb0,0xe,0x7b,0xff,0x1,0x99,0x8f,0x19,0xb0,0x6,0x33,0xde,0x1,0x99,0x8f,0x19,0xb0,0x4,0x21,0x8e,0x1,0x9f,0x8f,0x18,0x30,0x2,0x1,0x4,0x11,0x9f,0x9f,0x99,0xbe,0x2,0x60,0x7,0xe1,0x9f,0x1f,0x9b,0x3e,0x0,0x73,0x8f,0xc1,0x9b,0x19,0x98,0x30,0x1,0xf7,0xdf,0xc1,0x9b,0x19,0x99,0xb0,0x0,0xff,0xff,0x81,0x9b,0x1f,0x99,0xb0,0x0,0xf7,0xc0,0x1,0x9b,0xbf,0xd9,0xb0,0x0,0xe3,0x80,0x1,0x99,0xb0,0xdf,0xbe,0x0,0x61,0x4,0x1,0x99,0xb0,0xcf,0x3e,0x0,0x0,0x0,0x1,0x80,0x0,0x0,0x0,0x65,0x33,0xb3,0xb9,0x80,0x1,0x80,0x0,0x72,0x3a,0xaa,0x91,0xff,0xff,0xff,0xff,0x72,0x2b,0xb3,0x93,};

void drawTitleScreen(){
  gb.titleScreen(logo);
  gb.pickRandomSeed(); //pick a different random seed each time for games to be different
}

const unsigned char wifi_url[512] PROGMEM = { /* 0X20,0X01,0X40,0X00,0X40,0X00, */
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0XE0,0XFF,0XF8,0X07,0X98,0X80,0XFF,0X07,0XF0,0XFF,0XF1,0X07,0X98,0X80,0XFF,0X0F,
0X30,0X80,0XE1,0XFF,0X7F,0XC0,0X01,0X0E,0X30,0X80,0XE1,0XFF,0X7F,0XC0,0X00,0X0C,
0X30,0X9F,0X61,0XE0,0X7F,0XC6,0XFC,0X0C,0X30,0X9F,0XE1,0XC0,0X7F,0XC6,0XFC,0X0C,
0X30,0X9F,0X99,0X07,0X7E,0XC8,0XFC,0X0C,0X30,0X9F,0X11,0X07,0X3E,0XCC,0XFC,0X0C,
0X30,0X9F,0X01,0X7E,0X00,0XCE,0XFC,0X0C,0X30,0X80,0X01,0XFC,0X00,0XCC,0X00,0X0C,
0X30,0X80,0X01,0XF8,0X67,0XC8,0X01,0X0E,0XF0,0XFF,0X01,0XF8,0X77,0X88,0XFF,0X0F,
0XE0,0XFF,0X98,0X99,0X99,0X89,0XFF,0X07,0X00,0X00,0X00,0X7E,0XF8,0X09,0X00,0X00,
0X00,0X00,0X00,0X66,0XF8,0X09,0X00,0X00,0X00,0XF1,0X11,0XFF,0XC0,0X37,0X00,0X00,
0X00,0XF3,0X99,0X9F,0X81,0X27,0X30,0X0C,0XF0,0XEE,0X7E,0XFE,0X8F,0X07,0XC2,0X0C,
0XF0,0XEE,0X7E,0XFE,0X9F,0X03,0XC3,0X0C,0XC0,0XBF,0X7B,0XE0,0XF9,0XE1,0XFF,0X0F,
0XC0,0XBF,0X7B,0XE0,0XF9,0XE1,0XFF,0X0F,0XF0,0XEF,0X86,0X79,0XF8,0XC3,0XC3,0X03,
0XF0,0XCF,0X86,0X79,0XF8,0XC3,0XC3,0X03,0X30,0XC0,0X9B,0XE1,0XDF,0X61,0XF3,0X00,
0X30,0XE0,0X9B,0XE1,0XDF,0X71,0XF3,0X00,0X00,0XFF,0XFE,0X81,0XF7,0XFF,0X00,0X03,
0X00,0XFF,0XFE,0X81,0XF7,0XFF,0X00,0X03,0XF0,0XBE,0X01,0X66,0XD8,0X39,0XCC,0X03,
0XF0,0XBE,0X03,0X66,0XD8,0X79,0XCC,0X03,0XC0,0XEF,0X7E,0X66,0XF8,0XF9,0X03,0X0F,
0XC0,0XC7,0X7E,0X66,0XF8,0XF8,0X03,0X0F,0X30,0XC3,0X9F,0X87,0X1F,0X38,0X3C,0X03,
0XB0,0XC1,0XBF,0X87,0X1F,0X3C,0X3C,0X03,0XC0,0X00,0XE6,0X61,0XE0,0X3F,0XFC,0X0F,
0XC0,0X00,0XC6,0X61,0XE0,0X7F,0XF8,0X0F,0X30,0X13,0X81,0X19,0XE6,0XFF,0XC0,0X0F,
0XE0,0X33,0X83,0X1B,0XF6,0XFF,0XC0,0X07,0XC0,0X33,0X86,0X1F,0XFE,0XDD,0XCC,0X03,
0XE0,0X31,0X06,0X1F,0XFF,0XFF,0XCD,0X03,0X30,0X30,0X07,0XE0,0X07,0XFE,0XCF,0X0F,
0X00,0X00,0X08,0X7F,0XC7,0X1F,0X0C,0X0F,0X00,0X00,0X98,0X7F,0XE6,0X0F,0X0C,0X0F,
0XC0,0X7F,0X80,0X63,0XC0,0X8F,0X8C,0X0F,0XF0,0XFF,0X81,0X61,0X80,0XCD,0XCC,0X0F,
0X70,0XC0,0XF1,0X87,0X63,0X0F,0X0C,0X00,0X30,0X80,0X79,0X86,0X67,0X0F,0X0C,0X00,
0X30,0X9F,0XF9,0X8F,0XC7,0XFD,0X3F,0X08,0X30,0X9F,0XF9,0X9F,0X87,0XFD,0X3F,0X0C,
0X30,0X9F,0X81,0XEF,0XFF,0XDF,0X3F,0X03,0X30,0X9F,0X81,0XE7,0XFF,0XDF,0X3F,0X03,
0X30,0X9F,0X91,0X7F,0X1E,0X7C,0XDC,0X0D,0X30,0X9F,0X91,0X7F,0X1E,0X38,0XCC,0X0C,
0X30,0X80,0X81,0X19,0XF6,0X30,0X77,0X03,0X70,0XC0,0X81,0X19,0XE6,0X30,0X37,0X03,
0XF0,0XFF,0X61,0X60,0X78,0XF8,0XCC,0X0F,0XE0,0XFF,0X60,0X60,0X78,0XF8,0XCC,0X0F,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
};

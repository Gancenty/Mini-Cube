const unsigned char dayhaze[28][128] PROGMEM = { /* 0X20,0X01,0X20,0X00,0X20,0X00, */
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X80,0X00,0X00,
0X00,0X80,0X00,0X00,0X00,0X80,0X00,0X00,0X40,0X80,0X00,0X01,0XC0,0X80,0X80,0X01,
0X80,0X01,0XC0,0X00,0X00,0X03,0X60,0X00,0X00,0XF0,0X07,0X00,0X00,0X18,0X0C,0X00,
0X00,0X0C,0X18,0X00,0X00,0X00,0X10,0X00,0X00,0X00,0X30,0X00,0XF8,0X3F,0X30,0X1F,
0X00,0X00,0X30,0X1F,0X00,0X00,0X30,0X00,0X00,0X00,0X10,0X00,0X80,0XFF,0X19,0X00,
0X00,0X00,0X0C,0X00,0X00,0X00,0X06,0X00,0XF0,0X3F,0X60,0X00,0XF8,0X3F,0XC0,0X00,
0X00,0X80,0X80,0X01,0X00,0X80,0X00,0X01,0X00,0X80,0X00,0X00,0X00,0X80,0X00,0X00,
0X00,0X80,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,

0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X80,0X00,0X00,
0X00,0X80,0X00,0X00,0X00,0X80,0X00,0X00,0X40,0X80,0X00,0X01,0XC0,0X80,0X80,0X01,
0X80,0X01,0XC0,0X00,0X00,0X03,0X60,0X00,0X00,0XF0,0X07,0X00,0X00,0X18,0X0C,0X00,
0X00,0X0C,0X18,0X00,0X00,0X00,0X10,0X00,0X00,0X00,0X30,0X00,0XF8,0X3F,0X30,0X1F,
0X00,0X00,0X30,0X1F,0X00,0X00,0X30,0X00,0X00,0X00,0X10,0X00,0X80,0XFF,0X19,0X00,
0X00,0X00,0X0C,0X00,0X00,0X00,0X06,0X00,0XF8,0X1F,0X60,0X00,0XF8,0X3F,0XC0,0X00,
0X00,0X80,0X80,0X01,0X00,0X80,0X00,0X01,0X00,0X80,0X00,0X00,0X00,0X80,0X00,0X00,
0X00,0X80,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,

0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X80,0X00,0X00,
0X00,0X80,0X00,0X00,0X00,0X80,0X00,0X00,0X40,0X80,0X00,0X01,0XC0,0X80,0X80,0X01,
0X80,0X01,0XC0,0X00,0X00,0X03,0X60,0X00,0X00,0XF0,0X07,0X00,0X00,0X18,0X0C,0X00,
0X00,0X0C,0X18,0X00,0X00,0X00,0X10,0X00,0X00,0X00,0X30,0X00,0XF8,0X3F,0X30,0X1F,
0X00,0X00,0X30,0X0F,0X00,0X00,0X30,0X00,0X00,0X00,0X10,0X00,0X80,0XFF,0X19,0X00,
0X00,0X00,0X0C,0X00,0X00,0X00,0X06,0X00,0XF8,0X1F,0X60,0X00,0XF8,0X3F,0XC0,0X00,
0X00,0X80,0X80,0X01,0X00,0X80,0X00,0X01,0X00,0X80,0X00,0X00,0X00,0X80,0X00,0X00,
0X00,0X80,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,

0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X80,0X00,0X00,
0X00,0X80,0X00,0X00,0X00,0X80,0X00,0X00,0X00,0X80,0X00,0X01,0XC0,0X80,0X80,0X00,
0X80,0X01,0XC0,0X00,0X00,0X01,0X60,0X00,0X00,0XF0,0X07,0X00,0X00,0X18,0X0C,0X00,
0X00,0X0C,0X18,0X00,0X00,0X00,0X10,0X00,0X00,0X00,0X30,0X00,0XF8,0X3F,0X30,0X1F,
0X00,0X00,0X30,0X00,0X00,0X00,0X30,0X00,0X00,0X00,0X10,0X00,0X80,0XFF,0X19,0X00,
0X00,0X00,0X0C,0X00,0X00,0X00,0X06,0X00,0XF8,0X1F,0X60,0X00,0XF8,0X1F,0XC0,0X00,
0X00,0X80,0X80,0X01,0X00,0X80,0X00,0X01,0X00,0X80,0X00,0X00,0X00,0X80,0X00,0X00,
0X00,0X80,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,

0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0XC0,0X00,0X00,
0X00,0XC0,0X00,0X00,0X00,0XC0,0X00,0X00,0X00,0XC0,0X80,0X01,0X40,0X80,0X80,0X00,
0X80,0X00,0X40,0X00,0X00,0X01,0X20,0X00,0X00,0XF0,0X07,0X00,0X00,0X18,0X0C,0X00,
0X00,0X0C,0X18,0X00,0X00,0X00,0X10,0X00,0X00,0X00,0X30,0X00,0XF8,0X3F,0X30,0X1F,
0X00,0X00,0X30,0X00,0X00,0X00,0X30,0X00,0X00,0X00,0X10,0X00,0X80,0XFF,0X1B,0X00,
0X00,0X00,0X0C,0X00,0X00,0X00,0X06,0X00,0XF8,0X1F,0X60,0X00,0XF8,0X1F,0XC0,0X00,
0X00,0X80,0X80,0X01,0X00,0X80,0X00,0X00,0X00,0X80,0X00,0X00,0X00,0X80,0X00,0X00,
0X00,0X80,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,

0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0XC0,0X00,0X00,
0X00,0XC0,0X00,0X00,0X00,0XC0,0X00,0X00,0X00,0XC0,0X80,0X01,0X60,0X00,0XC0,0X00,
0XC0,0X00,0X60,0X00,0X80,0X01,0X20,0X00,0X00,0XF0,0X07,0X00,0X00,0X18,0X0C,0X00,
0X00,0X0C,0X18,0X00,0X00,0X00,0X10,0X00,0X00,0X00,0X30,0X00,0XF8,0X3F,0X30,0X1F,
0X00,0X00,0X30,0X00,0X00,0X00,0X30,0X00,0X00,0X00,0X10,0X00,0X80,0XFF,0X1B,0X00,
0X00,0X00,0X0C,0X00,0X00,0X00,0X06,0X00,0XF8,0X1F,0X60,0X00,0XF8,0X1F,0XC0,0X00,
0X00,0X80,0X00,0X01,0X00,0X80,0X00,0X00,0X00,0X80,0X00,0X00,0X00,0X80,0X00,0X00,
0X00,0X80,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,

0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X40,0X00,0X00,
0X00,0XC0,0X00,0X00,0X00,0XC0,0X00,0X00,0X00,0XC0,0X80,0X01,0X60,0X00,0XC0,0X00,
0XC0,0X00,0X60,0X00,0X80,0X01,0X20,0X00,0X00,0XF1,0X07,0X00,0X00,0X18,0X0C,0X00,
0X00,0X0C,0X18,0X00,0X00,0X00,0X10,0X00,0X00,0X00,0X30,0X00,0XFC,0X3F,0X30,0X1F,
0X00,0X00,0X30,0X00,0X00,0X00,0X30,0X00,0X00,0X00,0X10,0X00,0X80,0XFF,0X1B,0X00,
0X00,0X00,0X0C,0X00,0X00,0X00,0X06,0X00,0XF8,0X0F,0X60,0X00,0XF8,0X1F,0X80,0X01,
0X00,0X80,0X00,0X01,0X00,0X80,0X00,0X00,0X00,0X80,0X00,0X00,0X00,0X80,0X01,0X00,
0X00,0X80,0X01,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,

0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X40,0X00,0X00,
0X00,0X40,0X00,0X00,0X00,0X40,0X00,0X00,0X00,0XC0,0X80,0X01,0X60,0X40,0XC0,0X00,
0XC0,0X00,0X60,0X00,0X80,0X01,0X20,0X00,0X00,0XF1,0X07,0X00,0X00,0X18,0X0C,0X00,
0X00,0X0C,0X18,0X00,0X00,0X00,0X10,0X00,0X00,0X00,0X30,0X00,0XFC,0X1F,0X30,0X1F,
0X00,0X00,0X30,0X00,0X00,0X00,0X30,0X00,0X00,0X00,0X10,0X00,0X80,0XFF,0X1B,0X00,
0X00,0X00,0X0C,0X00,0X00,0X00,0X06,0X00,0XF8,0X0F,0XC0,0X00,0XF8,0X1F,0X80,0X01,
0X00,0X80,0X00,0X01,0X00,0X80,0X00,0X00,0X00,0X80,0X01,0X00,0X00,0X80,0X01,0X00,
0X00,0X80,0X01,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,

0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X40,0X00,0X00,
0X00,0X40,0X00,0X00,0X00,0X40,0X00,0X00,0X00,0XC0,0X80,0X01,0X60,0X40,0XC0,0X00,
0XC0,0X00,0X60,0X00,0X80,0X01,0X20,0X00,0X00,0XF1,0X07,0X00,0X00,0X18,0X0C,0X00,
0X00,0X0C,0X18,0X00,0X00,0X00,0X10,0X00,0X00,0X00,0X30,0X00,0XFC,0X1F,0X30,0X1F,
0X00,0X00,0X30,0X00,0X00,0X00,0X30,0X00,0X00,0X00,0X10,0X00,0X80,0XFF,0X1B,0X00,
0X00,0X00,0X0C,0X00,0X00,0X00,0X06,0X00,0XF8,0X0F,0XC0,0X00,0XF8,0X1F,0X80,0X01,
0X00,0X80,0X00,0X01,0X00,0X80,0X00,0X00,0X00,0X80,0X01,0X00,0X00,0X80,0X01,0X00,
0X00,0X80,0X01,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,

0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X40,0X00,0X00,
0X00,0X40,0X00,0X00,0X00,0X40,0X00,0X00,0X00,0XC0,0X80,0X01,0X60,0X40,0XC0,0X00,
0XC0,0X00,0X60,0X00,0X80,0X01,0X20,0X00,0X00,0XF1,0X07,0X00,0X00,0X18,0X0C,0X00,
0X00,0X0C,0X18,0X00,0X00,0X00,0X10,0X00,0X00,0X00,0X30,0X00,0XFC,0X1F,0X30,0X1F,
0X00,0X00,0X30,0X00,0X00,0X00,0X30,0X00,0X00,0X00,0X10,0X00,0X80,0XFF,0X1B,0X00,
0X00,0X00,0X0C,0X00,0X00,0X00,0X06,0X00,0XF8,0X1F,0XC0,0X00,0XF8,0X1F,0X80,0X01,
0X00,0X80,0X00,0X01,0X00,0X80,0X00,0X00,0X00,0X80,0X01,0X00,0X00,0X80,0X01,0X00,
0X00,0X80,0X01,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,

0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X40,0X00,0X00,
0X00,0XC0,0X00,0X00,0X00,0XC0,0X00,0X00,0X00,0XC0,0X80,0X01,0X60,0X00,0XC0,0X00,
0XC0,0X00,0X60,0X00,0X80,0X01,0X20,0X00,0X00,0XF1,0X07,0X00,0X00,0X18,0X0C,0X00,
0X00,0X0C,0X18,0X00,0X00,0X00,0X10,0X00,0X00,0X00,0X30,0X00,0XFC,0X1F,0X30,0X1F,
0X00,0X00,0X30,0X00,0X00,0X00,0X30,0X00,0X00,0X00,0X10,0X00,0X80,0XFF,0X1B,0X00,
0X00,0X00,0X0C,0X00,0X00,0X00,0X06,0X00,0XF8,0X1F,0X40,0X00,0XF8,0X1F,0X80,0X01,
0X00,0X80,0X00,0X01,0X00,0X80,0X00,0X00,0X00,0X80,0X00,0X00,0X00,0X80,0X01,0X00,
0X00,0X80,0X01,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,

0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0XC0,0X00,0X00,
0X00,0XC0,0X00,0X00,0X00,0XC0,0X00,0X00,0X00,0XC0,0X80,0X01,0X60,0X00,0XC0,0X00,
0XC0,0X00,0X60,0X00,0X80,0X01,0X20,0X00,0X00,0XF0,0X07,0X00,0X00,0X18,0X0C,0X00,
0X00,0X0C,0X18,0X00,0X00,0X00,0X10,0X00,0X00,0X00,0X30,0X00,0XFC,0X1F,0X30,0X1F,
0X00,0X00,0X30,0X00,0X00,0X00,0X30,0X00,0X00,0X00,0X10,0X00,0X80,0XFF,0X19,0X00,
0X00,0X00,0X0C,0X00,0X00,0X00,0X06,0X00,0XF0,0X1F,0X60,0X00,0XF8,0X3F,0XC0,0X00,
0X00,0X80,0X00,0X01,0X00,0X80,0X00,0X00,0X00,0X80,0X00,0X00,0X00,0X80,0X00,0X00,
0X00,0X80,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,

0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0XC0,0X00,0X00,
0X00,0XC0,0X00,0X00,0X00,0XC0,0X00,0X00,0X00,0XC0,0X00,0X01,0X40,0X80,0X80,0X00,
0X80,0X00,0X40,0X00,0X00,0X01,0X20,0X00,0X00,0XF0,0X07,0X00,0X00,0X18,0X0C,0X00,
0X00,0X0C,0X18,0X00,0X00,0X00,0X10,0X00,0X00,0X00,0X30,0X00,0XFC,0X1F,0X30,0X1F,
0X00,0X00,0X30,0X00,0X00,0X00,0X30,0X00,0X00,0X00,0X10,0X00,0X80,0XFF,0X19,0X00,
0X00,0X00,0X0C,0X00,0X00,0X00,0X06,0X00,0XF0,0X3F,0X60,0X00,0XF0,0X3F,0XC0,0X00,
0X00,0X80,0X80,0X01,0X00,0X80,0X00,0X00,0X00,0X80,0X00,0X00,0X00,0X80,0X00,0X00,
0X00,0X80,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,

0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X80,0X00,0X00,
0X00,0X80,0X00,0X00,0X00,0X80,0X00,0X00,0X00,0X80,0X00,0X01,0XC0,0X80,0X80,0X01,
0X80,0X01,0XC0,0X00,0X00,0X03,0X60,0X00,0X00,0XF0,0X07,0X00,0X00,0X18,0X0C,0X00,
0X00,0X0C,0X18,0X00,0X00,0X00,0X10,0X00,0X00,0X00,0X30,0X00,0XFC,0X1F,0X30,0X1F,
0X00,0X00,0X30,0X01,0X00,0X00,0X30,0X00,0X00,0X00,0X10,0X00,0X80,0XFF,0X19,0X00,
0X00,0X00,0X0C,0X00,0X00,0X00,0X06,0X00,0XF0,0X3F,0X60,0X00,0XF0,0X7F,0XC0,0X00,
0X00,0X80,0X80,0X01,0X00,0X80,0X00,0X01,0X00,0X80,0X00,0X00,0X00,0X80,0X00,0X00,
0X00,0X80,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,

0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X80,0X00,0X00,
0X00,0X80,0X00,0X00,0X00,0X80,0X00,0X00,0X40,0X80,0X00,0X01,0XC0,0X80,0X80,0X01,
0X80,0X01,0XC0,0X00,0X00,0X03,0X60,0X00,0X00,0XF0,0X07,0X00,0X00,0X18,0X0C,0X00,
0X00,0X0C,0X18,0X00,0X00,0X00,0X10,0X00,0X00,0X00,0X30,0X00,0XFC,0X1F,0X30,0X1F,
0X00,0X00,0X30,0X1F,0X00,0X00,0X30,0X00,0X00,0X00,0X10,0X00,0XC0,0XFF,0X19,0X00,
0X00,0X00,0X0C,0X00,0X00,0X00,0X06,0X00,0XF0,0X7F,0X60,0X00,0XF0,0X7F,0XC0,0X00,
0X00,0X80,0X80,0X01,0X00,0X80,0X00,0X01,0X00,0X80,0X00,0X00,0X00,0X80,0X00,0X00,
0X00,0X80,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,

0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X80,0X00,0X00,
0X00,0X80,0X00,0X00,0X00,0X80,0X00,0X00,0X40,0X80,0X00,0X01,0XC0,0X80,0X80,0X01,
0X80,0X01,0XC0,0X00,0X00,0X03,0X60,0X00,0X00,0XF0,0X07,0X00,0X00,0X18,0X0C,0X00,
0X00,0X0C,0X18,0X00,0X00,0X00,0X10,0X00,0X00,0X00,0X30,0X00,0XF8,0X1F,0X30,0X01,
0X00,0X00,0X30,0X1F,0X00,0X00,0X30,0X00,0X00,0X00,0X10,0X00,0XC0,0XFF,0X19,0X00,
0X00,0X00,0X0C,0X00,0X00,0X00,0X06,0X00,0XF0,0X7F,0X60,0X00,0XF0,0X7F,0XC0,0X00,
0X00,0X80,0X80,0X01,0X00,0X80,0X00,0X01,0X00,0X80,0X00,0X00,0X00,0X80,0X00,0X00,
0X00,0X80,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,

0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X80,0X00,0X00,
0X00,0X80,0X00,0X00,0X00,0X80,0X00,0X00,0X40,0X80,0X00,0X00,0XC0,0X80,0X80,0X01,
0X80,0X01,0XC0,0X00,0X00,0X03,0X60,0X00,0X00,0XF0,0X07,0X00,0X00,0X18,0X0C,0X00,
0X00,0X0C,0X18,0X00,0X00,0X00,0X10,0X00,0X00,0X00,0X30,0X00,0XF8,0X3F,0X30,0X00,
0X00,0X00,0X30,0X1F,0X00,0X00,0X30,0X00,0X00,0X00,0X10,0X00,0XE0,0XFF,0X19,0X00,
0X00,0X00,0X0C,0X00,0X00,0X00,0X06,0X00,0XF0,0X7F,0X20,0X00,0XF0,0X7F,0X40,0X00,
0X00,0X80,0X80,0X00,0X00,0XC0,0X00,0X01,0X00,0XC0,0X00,0X00,0X00,0XC0,0X00,0X00,
0X00,0XC0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,

0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X80,0X00,0X00,
0X00,0X80,0X00,0X00,0X00,0X80,0X00,0X00,0X40,0X80,0X00,0X00,0X80,0X80,0X00,0X01,
0X80,0X01,0XC0,0X00,0X00,0X03,0X60,0X00,0X00,0XF0,0X07,0X00,0X00,0X18,0X0C,0X00,
0X00,0X0C,0X18,0X00,0X00,0X00,0X10,0X00,0X00,0X00,0X30,0X00,0XF8,0X3F,0X30,0X00,
0X00,0X00,0X30,0X1F,0X00,0X00,0X30,0X00,0X00,0X00,0X10,0X00,0XE0,0XFF,0X18,0X00,
0X00,0X00,0X0C,0X00,0X00,0X00,0X06,0X00,0XF0,0X7F,0X20,0X00,0XF0,0X7F,0X60,0X00,
0X00,0X00,0XC0,0X00,0X00,0XC0,0X80,0X01,0X00,0XC0,0X00,0X00,0X00,0XC0,0X00,0X00,
0X00,0XC0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,

0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X80,0X01,0X00,
0X00,0X80,0X01,0X00,0X00,0X80,0X00,0X00,0XC0,0X80,0X00,0X00,0X80,0X80,0X00,0X01,
0X00,0X01,0X80,0X01,0X00,0X02,0X40,0X00,0X00,0XF0,0X07,0X00,0X00,0X18,0X0C,0X00,
0X00,0X0C,0X18,0X00,0X00,0X00,0X10,0X00,0X00,0X00,0X30,0X00,0XF0,0X3F,0X30,0X00,
0X00,0X00,0X30,0X1F,0X00,0X00,0X30,0X00,0X00,0X00,0X10,0X00,0XE0,0XFF,0X18,0X00,
0X00,0X00,0X0C,0X00,0X00,0X00,0X06,0X00,0XF0,0X7F,0X20,0X00,0XF0,0X7F,0X60,0X00,
0X00,0X00,0XC0,0X00,0X00,0XC0,0X80,0X01,0X00,0XC0,0X00,0X00,0X00,0XC0,0X00,0X00,
0X00,0X40,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,

0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X80,0X01,0X00,
0X00,0X80,0X01,0X00,0X00,0X80,0X01,0X00,0XC0,0X80,0X00,0X00,0X80,0X81,0X00,0X01,
0X00,0X01,0X80,0X01,0X00,0X02,0XC0,0X00,0X00,0XF0,0X07,0X00,0X00,0X18,0X0C,0X00,
0X00,0X0C,0X18,0X00,0X00,0X00,0X10,0X00,0X00,0X00,0X30,0X00,0XF0,0X3F,0X30,0X00,
0X00,0X00,0X30,0X1F,0X00,0X00,0X30,0X00,0X00,0X00,0X10,0X00,0XE0,0XFF,0X18,0X00,
0X00,0X00,0X0C,0X00,0X00,0X00,0X06,0X00,0XF0,0X7F,0X20,0X00,0XF0,0X7F,0X60,0X00,
0X00,0X40,0XC0,0X00,0X00,0XC0,0X80,0X01,0X00,0X40,0X00,0X00,0X00,0X40,0X00,0X00,
0X00,0X40,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,

0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X80,0X01,0X00,
0X00,0X80,0X01,0X00,0X00,0X80,0X01,0X00,0XC0,0X80,0X00,0X00,0X80,0X81,0X00,0X03,
0X00,0X01,0X80,0X01,0X00,0X02,0XC0,0X00,0X00,0XF0,0X07,0X00,0X00,0X18,0X0C,0X00,
0X00,0X0C,0X18,0X00,0X00,0X00,0X10,0X00,0X00,0X00,0X30,0X00,0XF0,0X7F,0X30,0X00,
0X00,0X00,0X30,0X1F,0X00,0X00,0X30,0X00,0X00,0X00,0X10,0X00,0XE0,0XFF,0X18,0X00,
0X00,0X00,0X0C,0X00,0X00,0X00,0X06,0X00,0XF0,0X7F,0X20,0X00,0XF0,0X7F,0X60,0X00,
0X00,0X40,0XC0,0X00,0X00,0XC0,0X80,0X01,0X00,0X40,0X00,0X00,0X00,0X40,0X00,0X00,
0X00,0X40,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,

0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X80,0X01,0X00,
0X00,0X80,0X01,0X00,0X00,0X80,0X01,0X00,0XC0,0X80,0X00,0X00,0X80,0X81,0X00,0X01,
0X00,0X01,0X80,0X01,0X00,0X02,0XC0,0X00,0X00,0XF0,0X07,0X00,0X00,0X18,0X0C,0X00,
0X00,0X0C,0X18,0X00,0X00,0X00,0X10,0X00,0X00,0X00,0X30,0X00,0XF0,0X7F,0X30,0X00,
0X00,0X00,0X30,0X1F,0X00,0X00,0X30,0X00,0X00,0X00,0X10,0X00,0XE0,0XFF,0X18,0X00,
0X00,0X00,0X0C,0X00,0X00,0X00,0X06,0X00,0XF0,0X3F,0X20,0X00,0XF0,0X7F,0X60,0X00,
0X00,0X40,0XC0,0X00,0X00,0XC0,0X80,0X01,0X00,0X40,0X00,0X00,0X00,0X40,0X00,0X00,
0X00,0X40,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,

0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X80,0X01,0X00,
0X00,0X80,0X01,0X00,0X00,0X80,0X00,0X00,0XC0,0X80,0X00,0X00,0X80,0X80,0X00,0X01,
0X00,0X01,0X80,0X01,0X00,0X02,0X40,0X00,0X00,0XF0,0X07,0X00,0X00,0X18,0X0C,0X00,
0X00,0X0C,0X18,0X00,0X00,0X00,0X10,0X00,0X00,0X00,0X30,0X00,0XE0,0X7F,0X30,0X00,
0X00,0X00,0X30,0X1F,0X00,0X00,0X30,0X00,0X00,0X00,0X10,0X00,0XE0,0XFF,0X18,0X00,
0X00,0X00,0X0C,0X00,0X00,0X00,0X06,0X00,0XF0,0X3F,0X20,0X00,0XF0,0X7F,0X60,0X00,
0X00,0X00,0XC0,0X00,0X00,0XC0,0X80,0X01,0X00,0XC0,0X00,0X00,0X00,0XC0,0X00,0X00,
0X00,0X40,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,

0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X80,0X00,0X00,
0X00,0X80,0X00,0X00,0X00,0X80,0X00,0X00,0X40,0X80,0X00,0X00,0X80,0X80,0X00,0X01,
0X80,0X01,0XC0,0X00,0X00,0X03,0X60,0X00,0X00,0XF0,0X07,0X00,0X00,0X18,0X0C,0X00,
0X00,0X0C,0X18,0X00,0X00,0X00,0X10,0X00,0X00,0X00,0X30,0X00,0XE0,0X7F,0X30,0X00,
0X00,0X00,0X30,0X1F,0X00,0X00,0X30,0X00,0X00,0X00,0X10,0X00,0XC0,0XFF,0X18,0X00,
0X00,0X00,0X0C,0X00,0X00,0X00,0X06,0X00,0XF0,0X3F,0X20,0X00,0XF0,0X3F,0X60,0X00,
0X00,0X00,0XC0,0X00,0X00,0XC0,0X80,0X01,0X00,0XC0,0X00,0X00,0X00,0XC0,0X00,0X00,
0X00,0XC0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,

0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X80,0X00,0X00,
0X00,0X80,0X00,0X00,0X00,0X80,0X00,0X00,0X40,0X80,0X00,0X00,0XC0,0X80,0X80,0X01,
0X80,0X01,0XC0,0X00,0X00,0X03,0X60,0X00,0X00,0XF0,0X07,0X00,0X00,0X18,0X0C,0X00,
0X00,0X0C,0X18,0X00,0X00,0X00,0X10,0X00,0X00,0X00,0X30,0X00,0XF0,0X3F,0X30,0X00,
0X00,0X00,0X30,0X1F,0X00,0X00,0X30,0X00,0X00,0X00,0X10,0X00,0XC0,0XFF,0X19,0X00,
0X00,0X00,0X0C,0X00,0X00,0X00,0X06,0X00,0XF0,0X3F,0X20,0X00,0XF0,0X3F,0X40,0X00,
0X00,0X80,0X80,0X00,0X00,0XC0,0X80,0X01,0X00,0XC0,0X00,0X00,0X00,0XC0,0X00,0X00,
0X00,0XC0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,

0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X80,0X00,0X00,
0X00,0X80,0X00,0X00,0X00,0X80,0X00,0X00,0X40,0X80,0X00,0X01,0XC0,0X80,0X80,0X01,
0X80,0X01,0XC0,0X00,0X00,0X03,0X60,0X00,0X00,0XF0,0X07,0X00,0X00,0X18,0X0C,0X00,
0X00,0X0C,0X18,0X00,0X00,0X00,0X10,0X00,0X00,0X00,0X30,0X00,0XF0,0X3F,0X30,0X00,
0X00,0X00,0X30,0X1F,0X00,0X00,0X30,0X00,0X00,0X00,0X10,0X00,0XC0,0XFF,0X19,0X00,
0X00,0X00,0X0C,0X00,0X00,0X00,0X06,0X00,0XF0,0X3F,0X60,0X00,0XF0,0X3F,0XC0,0X00,
0X00,0X80,0X80,0X00,0X00,0X80,0X00,0X01,0X00,0X80,0X00,0X00,0X00,0X80,0X00,0X00,
0X00,0X80,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,

0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X80,0X00,0X00,
0X00,0X80,0X00,0X00,0X00,0X80,0X00,0X00,0X40,0X80,0X00,0X01,0XC0,0X80,0X80,0X01,
0X80,0X01,0XC0,0X00,0X00,0X03,0X60,0X00,0X00,0XF0,0X07,0X00,0X00,0X18,0X0C,0X00,
0X00,0X0C,0X18,0X00,0X00,0X00,0X10,0X00,0X00,0X00,0X30,0X00,0XF0,0X3F,0X30,0X0F,
0X00,0X00,0X30,0X1F,0X00,0X00,0X30,0X00,0X00,0X00,0X10,0X00,0XC0,0XFF,0X19,0X00,
0X00,0X00,0X0C,0X00,0X00,0X00,0X06,0X00,0XF0,0X3F,0X60,0X00,0XF8,0X3F,0XC0,0X00,
0X00,0X80,0X80,0X01,0X00,0X80,0X00,0X01,0X00,0X80,0X00,0X00,0X00,0X80,0X00,0X00,
0X00,0X80,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,

0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X80,0X00,0X00,
0X00,0X80,0X00,0X00,0X00,0X80,0X00,0X00,0X40,0X80,0X00,0X01,0XC0,0X80,0X80,0X01,
0X80,0X01,0XC0,0X00,0X00,0X03,0X60,0X00,0X00,0XF0,0X07,0X00,0X00,0X18,0X0C,0X00,
0X00,0X0C,0X18,0X00,0X00,0X00,0X10,0X00,0X00,0X00,0X30,0X00,0XF8,0X3F,0X30,0X1F,
0X00,0X00,0X30,0X1F,0X00,0X00,0X30,0X00,0X00,0X00,0X10,0X00,0X80,0XFF,0X19,0X00,
0X00,0X00,0X0C,0X00,0X00,0X00,0X06,0X00,0XF0,0X3F,0X60,0X00,0XF8,0X3F,0XC0,0X00,
0X00,0X80,0X80,0X01,0X00,0X80,0X00,0X01,0X00,0X80,0X00,0X00,0X00,0X80,0X00,0X00,
0X00,0X80,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
};
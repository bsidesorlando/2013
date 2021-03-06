#define PIN_SCE   4 //Pin 3 on LCD
#define PIN_RESET 3 //Pin 4 on LCD
#define PIN_DC    5 //Pin 5 on LCD
#define PIN_SDIN  6 //Pin 6 on LCD
#define PIN_SCLK  7 //Pin 7 on LCD

//The DC pin tells the LCD if we are sending a command or data
#define LCD_COMMAND 0 
#define LCD_DATA  1

//You may find a different size screen, but this one is 84 by 48 pixels
#define LCD_X     84
#define LCD_Y     48

//This is the first frame
char frame1[] = {
0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,
0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0xF8,0xFC,0xFC,0xFC,0xF8,0xF8,
0xF0,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xC0,0xE0,0xE0,0xF0,0xF0,0xF8,
0xF8,0xF8,0xFC,0xFC,0xFE,0xFE,0xFE,0xFE,0xFE,0xFF,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,
0xFE,0xFE,0xFE,0xFE,0xFE,0xFC,0xF8,0xF8,0xF8,0xF8,0xF0,0xE0,0xE0,0xC0,0x80,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0xFE,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xFC,0xFF,0xFF,0xFF,0xFF,
0xFF,0xDF,0xDF,0x8F,0x07,0x03,0x00,0x00,0x00,0xC0,0xF8,0xFC,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0x3F,0x1F,0x0F,0x0F,0x07,0x07,0x03,0x83,0xC3,0xC3,0xC1,
0xC1,0xC1,0x83,0x83,0x03,0x03,0x07,0x07,0x0F,0x1F,0x3F,0x7F,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFE,0xF8,0xF0,0x00,0x00,0x00,0xF0,0xFE,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xF7,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF9,0xF9,0xFF,
0xFF,0xFF,0xFF,0x7F,0x7F,0x7F,0x7F,0x3F,0x07,0x00,0x70,0x7C,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xC0,0x80,0x80,0x00,0x00,0x00,0x00,0x0F,
0x1F,0x1F,0x3F,0x3F,0x3F,0x3F,0x1F,0x1F,0x0E,0x00,0x00,0x00,0x80,0xC0,0xC0,0xC5,
0x8F,0x8F,0x8F,0x8F,0x8F,0x8F,0x8F,0x0F,0x1F,0x1F,0x1F,0x00,0x00,0x02,0x03,0x03,
0x03,0x03,0x03,0x03,0xF3,0xF3,0xF3,0xF3,0xF3,0xF3,0xF3,0xF3,0xF3,0xF3,0x73,0x13,
0x03,0x03,0x01,0x01,0x00,0x00,0xC0,0xE0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xE0,0xC0,
0x00,0x00,0x01,0x01,0x03,0x07,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFE,0xFC,0x00,0x00,0xF0,0xF8,0xF8,0xF8,0xF8,0xFC,0xFC,0xFC,0xFC,0xFE,0x9E,0x9F,
0x1F,0x8F,0x0F,0x1F,0x1F,0x1F,0x3F,0x3F,0x3F,0x3F,0x1F,0x0F,0x03,0x01,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x1F,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xF8,0xF0,0xE0,0xC0,0xC0,0x80,0x80,0x81,0x83,0x07,0x07,0x07,0x07,
0x87,0x87,0x83,0x81,0xC0,0xC0,0xE0,0xF0,0xF8,0xFC,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0x7F,0x3F,0x07,0x80,0xE0,0xC7,0xCF,0x8F,0x9F,0x1F,0x1F,0x1F,0x3F,
0x3F,0x3F,0x3F,0x3F,0x7F,0x7F,0x7F,0xFF,0xFF,0xFF,0xFE,0xFE,0xFE,0xFC,0xFC,0xF8,
0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x01,0x03,0x07,0x0F,0x0F,0x1F,0x1F,0x3F,0x3F,0x3F,0x7F,0x7F,0x7F,0x7F,0x7F,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x7F,0x7F,0x7F,0x7F,0x3F,0x3F,0x3F,0x3F,0x1F,
0x1F,0x0F,0x0F,0x07,0x03,0x01,0x00,0x08,0x0C,0x1F,0x3F,0x3F,0x1F,0x1F,0x3F,0x7F,
0x7F,0x7F,0x7E,0x7E,0x7E,0x7E,0x7E,0x7E,0x7E,0x7E,0x7F,0x7F,0x3F,0x3F,0x3F,0x1F,
0x1F,0x0F,0x07,0x03,0x01,0x00,0x00,0x00,
};

void setup(void) {
  LCDInit(); //Init the LCD
}

void loop(void) {
  LCDBitmap(frame1);
}

void gotoXY(int x, int y) {
  LCDWrite(0, 0x80 | x);  // Column.
  LCDWrite(0, 0x40 | y);  // Row.  ?
}

//This takes a large array of bits and sends them to the LCD
void LCDBitmap(char my_array[]){
  for (int index = 0 ; index < (LCD_X * LCD_Y / 8) ; index++)
    LCDWrite(LCD_DATA, my_array[index]);
}

//This function takes in a character, looks it up in the font table/array
//And writes it to the screen
//Each character is 8 bits tall and 5 bits wide. We pad one blank column of
//pixels on each side of the character for readability.
void LCDCharacter(char character) {
  LCDWrite(LCD_DATA, 0x00); //Blank vertical line padding


  LCDWrite(LCD_DATA, 0x00); //Blank vertical line padding
}

//Given a string of characters, one by one is passed to the LCD
void LCDString(char *characters) {
  while (*characters)
    LCDCharacter(*characters++);
}

//Clears the LCD by writing zeros to the entire screen
void LCDClear(void) {
  for (int index = 0 ; index < (LCD_X * LCD_Y / 8) ; index++)
    LCDWrite(LCD_DATA, 0x00);
    
  gotoXY(0, 0); //After we clear the display, return to the home position
}

//This sends the magical commands to the PCD8544
void LCDInit(void) {

  //Configure control pins
  pinMode(PIN_SCE, OUTPUT);
  pinMode(PIN_RESET, OUTPUT);
  pinMode(PIN_DC, OUTPUT);
  pinMode(PIN_SDIN, OUTPUT);
  pinMode(PIN_SCLK, OUTPUT);

  //Reset the LCD to a known state
  digitalWrite(PIN_RESET, LOW);
  digitalWrite(PIN_RESET, HIGH);

  LCDWrite(LCD_COMMAND, 0x21); //Tell LCD that extended commands follow
  LCDWrite(LCD_COMMAND, 0xBA); //Set LCD Vop (Contrast): Try 0xB1(good @ 3.3V) or 0xBF if your display is too dark
  LCDWrite(LCD_COMMAND, 0x04); //Set Temp coefficent
  LCDWrite(LCD_COMMAND, 0x14); //LCD bias mode 1:48: Try 0x13 or 0x14

  LCDWrite(LCD_COMMAND, 0x20); //We must send 0x20 before modifying the display control mode
  LCDWrite(LCD_COMMAND, 0x0C); //Set display control, normal mode. 0x0D for inverse
}

//There are two memory banks in the LCD, data/RAM and commands. This 
//function sets the DC pin high or low depending, and then sends
//the data byte
void LCDWrite(byte data_or_command, byte data) {
  digitalWrite(PIN_DC, data_or_command); //Tell the LCD that we are writing either to data or a command

  //Send the data
  digitalWrite(PIN_SCE, LOW);
  shiftOut(PIN_SDIN, PIN_SCLK, MSBFIRST, data);
  digitalWrite(PIN_SCE, HIGH);
}

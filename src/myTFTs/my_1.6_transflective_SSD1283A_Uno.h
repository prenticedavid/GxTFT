// e.g https://www.aliexpress.com/item/4000116854157.html

#include "../GxIO/GxIO_SPI/GxIO_SPI.h"
#include "../GxCTRL/GxCTRL_SSD1283A/GxCTRL_SSD1283A.h" // 130x130
GxIO_Class io(SPI, 10, 9, 8, 7); // on Uno
GxCTRL_Class controller(io); // #define GxCTRL_Class is in the selected header file
TFT_Class tft(io, controller, 130, 130); // square 130x130

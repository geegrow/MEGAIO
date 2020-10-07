# MEGAIO

This library is specially written to provide access to ATMEGA2560 pins,
which are not defined in Arduino framework (e.g. PORTJ pins). At the moment
alternative functions of pinMode(), digitalRead() and digitalWrite() are 
implemented.

For more information you can visit https://github.com/geegrow/MEGAIO

--------------------------------------------------------------------

"___________________________________" <--   This is a place for very motivating
                                            and enthusiastic slogan!

Please visit our store https://geegrow.ru and check out for some cool stuff!



<!-- START COMPATIBILITY TABLE -->

## Compatibility

MCU                | Tested Works | Doesn't Work | Not Tested  | Notes
------------------ | :----------: | :----------: | :---------: | -----
Atmega328 @ 16MHz  |              |              |     X       |
Atmega328 @ 12MHz  |              |              |     X       |
Atmega32u4 @ 16MHz |              |              |     X       |  
ESP8266            |              |              |     X       |
Atmega2560 @ 16MHz |      X       |              |             |
ATSAM3X8E          |              |              |     X       |
ATSAM21D           |              |              |     X       |
Intel Curie @ 32MHz|              |              |     X       |
STM32F2            |              |              |     X       |

  * ATmega328 @ 16MHz : Arduino UNO
  * ATmega328 @ 12MHz : Adafruit Pro Trinket 3V
  * ATmega32u4 @ 16MHz : Arduino Leonardo, Arduino Micro, Arduino Yun, Geegrow DaVinci
  * ESP8266 :
  * ATmega2560 @ 16MHz : Arduino Mega
  * ATSAM3X8E : Arduino Due
  * ATSAM21D : Arduino Zero, M0 Pro

<!-- END COMPATIBILITY TABLE -->

//#include "libraries\Adafruit_GFX.h"
//#include "libraries\Adafruit_SSD1306.h"
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

Adafruit_SSD1306 display(40, 39, 42, 41, 43);

void setup()
{
  pinMode(28,OUTPUT);
  digitalWrite(28,LOW);

  display.begin(SSD1306_SWITCHCAPVCC);
  display.display();
  delay(2000);
}

void loop() 
{

}

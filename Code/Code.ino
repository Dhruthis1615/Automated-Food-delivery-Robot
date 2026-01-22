//CODE:
#include <Keypad.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 32
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);
int enA = 10;
int in1 = 11;
int in2 = 12;
// Motor B connections
int enB = 0;
int in3 = A0;
int in4 = A1;

const char number_of_rows = 4;
const char number_of_columns = 4;

char row_pins[number_of_rows] = {2, 3, 4, 5};
char column_pins[number_of_columns] = {6, 7, 8, 9};

char key_array[number_of_rows][number_of_columns] = {  
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
  };

Keypad k = Keypad(makeKeymap(key_array),row_pins , column_pins, number_of_rows, number_of_columns);

void setup()
{
  Serial.begin(9600);
  pinMode(enA, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  digitalWrite(in1, LOW);

  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, HIGH);
  digitalWrite(enA, LOW);
  digitalWrite(enB, HIGH);
     }

void loop()
{
  char key_pressed = k.getKey();
  if(key_pressed)
  {
    Serial.println(key_pressed);
  }
  if(key_pressed == 'B')
  {
    digitalWrite(enA, HIGH);
    digitalWrite(enB, HIGH);
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    digitalWrite(in3, HIGH);

    digitalWrite(in4, LOW);
    if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
       Serial.println("SSD1306 allocation failed");
      for (;;);
    }
    display.clearDisplay();  // Clear buffer
    display.setTextSize(1);  // Text size
    display.setTextColor(SSD1306_WHITE);
    display.setCursor(10, 10);
    display.println("table 1");
    display.display(); // Show text on screen  


    delay(  5000);
    digitalWrite(enA, HIGH);
    digitalWrite(enB, HIGH);
    digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
    delay(5000);
  }
  if(key_pressed == '#')
  {

    digitalWrite(enA, LOW);
    digitalWrite(enB, LOW);
    digitalWrite(in1, LOW);
    digitalWrite(in2, LOW);
    digitalWrite(in3, LOW);

    digitalWrite(in4, LOW);

    delay(5000);

    if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
      Serial.println("SSD1306 allocation failed");
      for (;;);
    }
    display.clearDisplay();  // Clear buffer
    display.setTextSize(1);  // Text size
    display.setTextColor(SSD1306_WHITE);
    display.setCursor(10, 10);
    display.println("no");
    display.display(); // Show text on screen  
  }
    if(key_pressed == '7')
  {
    digitalWrite(enA, HIGH);
    digitalWrite(enB, HIGH);
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
    if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
      Serial.println("SSD1306 allocation failed");
      for (;;);
    }
    display.clearDisplay();  // Clear buffer
    display.setTextSize(1);  // Text size
    display.setTextColor(SSD1306_WHITE);
    display.setCursor(10, 10);
    display.println("table 2");
    display.display(); // Show text on screen  
    delay(5000);
    digitalWrite(enA, HIGH);
    digitalWrite(enB, HIGH);
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);

    digitalWrite(in3, LOW);
    digitalWrite(in4, HIGH);
    delay(5000);
}
}


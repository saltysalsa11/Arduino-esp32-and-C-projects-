//HIGH on the relay turns the lights on.

#include <DS3231.h>

int Relay = 4;

DS3231 rtc(SDA, SCL);
Time t;

const int OnHour = 12;
const int OnMin = 0;
const int OffHour = 21;
const int OffMin = 0;

void setup() {
  Serial.begin(115200);
  rtc.begin();
  pinMode(Relay, OUTPUT);
  t = rtc.getTime();
   if(t.hour >= OnHour && t.hour < OffHour){
    digitalWrite(Relay, LOW);
    Serial.println("LIGHT ON");
    }
    
    else{
      digitalWrite(Relay,HIGH);
      Serial.println("LIGHT OFF");
    } 

}

void loop() {
  t = rtc.getTime();
  Serial.print(t.hour);
  Serial.print(" hour(s), ");
  Serial.print(t.min);
  Serial.print(" minute(s)");
  Serial.println(" ");
  delay (1000);
  
  if(t.hour == OnHour && t.min == OnMin){
    digitalWrite(Relay,LOW);
    Serial.println("LIGHT ON");
    }
    
    else if(t.hour == OffHour && t.min == OffMin){
      digitalWrite(Relay,HIGH);
      Serial.println("LIGHT OFF");
    }
}

#include <Arduino.h>
#include <M5StickCPlus2.h>

void setup() {
    auto cfg = M5.config();
    StickCP2.begin(cfg);
    StickCP2.Display.setRotation(1);
    StickCP2.Display.setTextColor(CYAN);
    StickCP2.Display.setTextDatum(middle_center);
    StickCP2.Display.setTextFont(&fonts::DejaVu9);
    StickCP2.Display.setTextSize(3);

}

void loop() {
    StickCP2.Display.clear();
    int vol = StickCP2.Power.getBatteryVoltage();
    StickCP2.Display.setCursor(10, 30);
    StickCP2.Display.printf("BAT: %dmv", vol);
    StickCP2.Display.setCursor(10, 60);
    StickCP2.Display.println("brnomt");
    delay(1000);
}
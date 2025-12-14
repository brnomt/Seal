#include <Arduino.h>
#include <M5StickCPlus2.h>


//Hopefully i start working on this before next week.
//Line above written at 18-05-2025 (DD-MM-YYYY bc I use that format.)
//Above comments are unnecessary? yes.
//It is fun to write them? Absolutely.

//K i'm going to sleep, bye.

enum MenuState {
    MAIN_MENU,
    WIFI,
    BLUETOOTH,
    SETTINGS,
};

enum WifiMenuItems {
    WIFI_SCAN,
    WIFI_DETAILS,
};

enum BluetoothMenuItems {
    BT_SCAN,
    BT_DETAILS,
    BT_JAMMER,
};


MenuState currentState = MAIN_MENU;
int currentMenuItem = 0;


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

    //show menu

    //=== Show battery ===
    //StickCP2.Display.clear();
    //int vol = StickCP2.Power.getBatteryVoltage();
    //StickCP2.Display.setCursor(10, 30);
    //StickCP2.Display.printf("BAT: %dmv", vol);
    //StickCP2.Display.setCursor(10, 60);
    //StickCP2.Display.println("brnomt");
    //delay(1000);
}

//renderMenu
//One at a time @args: MenuState, WifiMenuItems, BluetoothMenuItems
void renderMenu();
    {
    StickCP2.Display.clear();
    switch (currentState) {
        case MAIN_MENU:
            StickCP2.Display.setCursor(80, 20);
            StickCP2.Display.println("MAIN MENU");
            StickCP2.Display.setCursor(20, 60);
            StickCP2.Display.println(currentMenuItem == 0 ? "> WiFi" : "  WiFi");
            StickCP2.Display.setCursor(20, 100);
            StickCP2.Display.println(currentMenuItem == 1 ? "> Bluetooth" : "  Bluetooth");
            StickCP2.Display.setCursor(20, 140);
            StickCP2.Display.println(currentMenuItem == 2 ? "> Settings" : "  Settings");
            break;
        case WIFI:
            StickCP2.Display.setCursor(80, 20);
            StickCP2.Display.println("WIFI MENU");
            StickCP2.Display.setCursor(20, 60);
            StickCP2.Display.println(currentMenuItem == 0 ? "> Scan" : "  Scan");
            StickCP2.Display.setCursor(20, 100);
            StickCP2.Display.println(currentMenuItem == 1 ? "> Details" : "  Details");
            break;
        case BLUETOOTH:
            StickCP2.Display.setCursor(80, 20);
            StickCP2.Display.println("BLUETOOTH MENU");
            StickCP2.Display.setCursor(20, 60);
            StickCP2.Display.println(currentMenuItem == 0 ? "> Scan" : "  Scan");
            StickCP2.Display.setCursor(20, 100);
            StickCP2.Display.println(currentMenuItem == 1 ? "> Details" : "  Details");
            StickCP2.Display.setCursor(20, 140);
            StickCP2.Display.println(currentMenuItem == 2 ? "> Jammer" : "  Jammer");
            break;
        case SETTINGS:
            StickCP2.Display.setCursor(80, 20);
            StickCP2.Display.println("SETTINGS MENU");
            //Add settings items here
            break;
            

    }
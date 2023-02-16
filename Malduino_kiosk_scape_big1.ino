#include <Keyboard.h>

void setup() {
  // Se inicia la comunicación con el ordenador
  Keyboard.begin();
  delay(1000); // Delay para dar tiempo a abrir la ventana deseada

  // Se pulsa la combinación de teclas ALT + F4
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_F4);
  delay(100);
  Keyboard.releaseAll();
  delay(700);

  // Se pulsa la combinación de teclas ALT + ESPACIO
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(' ');
  delay(100);
  Keyboard.releaseAll();
  delay(700);

  // Se pulsa la combinación de teclas ALT + TAB
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_TAB);
  delay(100);
  Keyboard.releaseAll();
  delay(700);

  // Se pulsa la combinación de teclas CTRL + B
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('b');
  delay(100);
  Keyboard.releaseAll();
  delay(700);

  // Se pulsa la combinación de teclas CTRL + ALT + DEL
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_DELETE);
  delay(100);
  Keyboard.releaseAll();
  delay(700);

  // Se pulsa la combinación de teclas CTRL + ESC
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_ESC);
  delay(100);
  Keyboard.releaseAll();
  delay(700);

  // Se pulsa la combinación de teclas CTRL + F4
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_F4);
  delay(100);
  Keyboard.releaseAll();
  delay(700);

  // Se pulsa la combinación de teclas CTRL + P
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('p');
  delay(100);
  Keyboard.releaseAll();
  delay(700);

  // Se pulsa la combinación de teclas CTRL + SHIFT + ESC
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_SHIFT);
  Keyboard.press(KEY_ESC);
  delay(100);
  Keyboard.releaseAll();
  delay(700);

  // Se pulsa la combinación de teclas CTRL + TAB
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_TAB);
  delay(100);
  Keyboard.releaseAll();
  delay(700);

  // Se pulsa la combinación de teclas CTRL + GUI + F
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('f');
  delay(100);
  Keyboard.releaseAll();
  delay(700);


  delay(500);
 
  Keyboard.press(KEY_LEFT_GUI); // presionamos la tecla Windows (GUI)
  Keyboard.press('e'); // presionamos la letra 'e' junto con la tecla Windows (GUI)
  delay(100);
  Keyboard.releaseAll(); // liberamos todas las teclas

  delay(500);
 
  Keyboard.press(KEY_LEFT_GUI); // presionamos la tecla Windows (GUI)
  Keyboard.press('r'); // presionamos la letra 'r' junto con la tecla Windows (GUI)
  delay(100);
  Keyboard.releaseAll(); // liberamos todas las teclas
  
  Keyboard.print("shell:Personal"); // Escribimos el comando
  Keyboard.press(KEY_RETURN); // presionamos Enter
  delay(100);
  Keyboard.releaseAll(); // liberamos todas las teclas
  
  delay(500);
  
  Keyboard.press(KEY_LEFT_GUI); // presionamos la tecla Windows (GUI)
  Keyboard.press('r'); // presionamos la letra 'r' junto con la tecla Windows (GUI)
  delay(100);
  Keyboard.releaseAll(); // liberamos todas las teclas
  
  Keyboard.print("shell:SearchHomeFolder"); // Escribimos el comando
  Keyboard.press(KEY_RETURN); // presionamos Enter
  delay(100);
  Keyboard.releaseAll(); // liberamos todas las teclas
  
  delay(500);
  
}

void loop() {
  // Este código no requiere del loop
}

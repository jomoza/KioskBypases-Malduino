#include <Adafruit_FT6206.h>
#include <Mouse.h>

Adafruit_FT6206 ts = Adafruit_FT6206(); //Inicializar el objeto TS

void setup() {
  Serial.begin(9600);
  if (!ts.begin(40)) {  //Iniciar la pantalla táctil
    Serial.println("No se pudo encontrar el controlador de pantalla táctil!");
    while (1);
  }
  Mouse.begin(); // Iniciar la librería Mouse
}

void loop() {
  if (ts.touched()) { // Detectar si la pantalla táctil está siendo tocada
    TS_Point p = ts.getPoint(); // Obtener la posición del toque
    if (p.z > 5) { // Si la presión del toque es suficiente, considerar el toque como válido
      int x = map(p.y, TS_MINX, TS_MAXX, 0, 1023); // Mapear la coordenada X del toque al rango del eje X del Mouse
      int y = map(p.x, TS_MINY, TS_MAXY, 0, 767); // Mapear la coordenada Y del toque al rango del eje Y del Mouse
      Mouse.move(x, y, 0); // Mover el cursor del Mouse a la posición del toque
      delay(10); // Esperar un poco antes de simular el clic
      Mouse.click(MOUSE_LEFT); // Hacer clic en el botón izquierdo del Mouse
      delay(10); // Esperar un poco antes de continuar con el siguiente toque
    }
  }
}

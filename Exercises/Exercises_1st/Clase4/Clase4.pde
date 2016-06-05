// Declarar variable del tipo PImage
PImage img; 
void setup() {
  size(320,240);
  // Crear una imagen
  img = loadImage("caballo1.jpg");
}
void draw() {
  background(255);
  // Dibujar la imagen
  image(img,100,0);
}
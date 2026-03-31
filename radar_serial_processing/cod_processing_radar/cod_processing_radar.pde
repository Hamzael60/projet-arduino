import processing.serial.*;

Serial myPort;
String data = "";
float angle = 0;
float distance = 0;

void setup() {
  size(800, 600);
  myPort = new Serial(this, "COM7", 9600); // بدل COM3 بالport ديالك
  myPort.bufferUntil('.');
}

void draw() {
  background(0);

  translate(width/2, height);

  stroke(0, 255, 0);
  strokeWeight(2);
  noFill();

  arc(0, 0, 700, 700, PI, TWO_PI);

  float x = 350 * cos(radians(angle));
  float y = -350 * sin(radians(angle));
  line(0, 0, x, y);

  float dMap = map(distance, 0, 100, 0, 350);
  float ox = dMap * cos(radians(angle));
  float oy = -dMap * sin(radians(angle));

  fill(255, 0, 0);
  noStroke();
  ellipse(ox, oy, 12, 12);
}

void serialEvent(Serial myPort) {
  data = myPort.readStringUntil('.');

  if (data != null) {
    data = trim(data);
    int commaIndex = data.indexOf(',');

    if (commaIndex > 0) {
      angle = float(data.substring(0, commaIndex));
      distance = float(data.substring(commaIndex + 1));
    }
  }
}

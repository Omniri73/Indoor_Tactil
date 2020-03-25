void setup() {
  Serial.begin(9600);

  Serial.print("TFT size is ");
  Serial.print(tft.width());
  Serial.print("x");
  Serial.println(tft.height());

  pinMode(13, OUTPUT);
  pinMode(DHTPIN, INPUT_PULLUP);

  dht.begin();

  tft.reset();
  tft.begin(0x9341);
  tft.fillScreen(BLACK);

  HomeScreen();
  Serial.println("Starting Loop");
}
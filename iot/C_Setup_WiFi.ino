///////////////////////////////////////// CONECTAR O ESP A REDE WI-FI /////////////////////////////////////////
/*
 * NÃO E NESSESARIO MEXER EM ABSOLUTAMENTE NADA NESSA ABA DE CÓDIGO 
 * ENTÃO...
 * NÃO MEXA!!!
*/
void setup_wifi() {

  delay(10);
  // We start by connecting to a WiFi network
  Serial.println();
  Serial.print("Connecting to ");
  Serial.println(ssid);

  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  randomSeed(micros());

  Serial.println("");
  Serial.println("WiFi connected");
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());
}
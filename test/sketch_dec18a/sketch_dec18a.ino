/*
 * Titre : Code de Gestion du Détecteur de Mouvement PIR
 * Plateforme : Arduino Uno
 * Date : Janvier 2026
 */

// --- Déclaration des constantes ---
const int PIN_PIR = 4;    // Entrée du capteur
const int PIN_LED = 13;   // Sortie visuelle
const int PIN_BUZZER = 8; // Sortie sonore
// --- Variables ---
int etatCapteur = 0;      
void setup() {
  Serial.begin(9600);           // Pour le débogage
  pinMode(PIN_PIR, INPUT);      // Configurer le PIR en entrée
  pinMode(PIN_LED, OUTPUT);     // Configurer la LED en sortie
  pinMode(PIN_BUZZER, OUTPUT);  // Configurer le Buzzer en sortie
  Serial.println("Calibrage du capteur en cours...");
  delay(2000); // Temps de chauffe du capteur
}
void loop() {
  etatCapteur = digitalRead(PIN_PIR);  // Lecture du signal
  if (etatCapteur == HIGH) {
    digitalWrite(PIN_LED, HIGH);    // Action si mouvement détecté
    digitalWrite(PIN_BUZZER, HIGH);
    Serial.println("Mouvement détecté !");
  } 
  else {
    digitalWrite(PIN_LED, LOW);   // Action si aucun mouvement
    digitalWrite(PIN_BUZZER, LOW);
  }
}
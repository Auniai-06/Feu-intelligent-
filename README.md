# Feu Piéton Intelligent pour Personnes Malvoyantes

##  Description
Ce projet Arduino simule un feu de signalisation intelligent pour aider les personnes aveugles ou malvoyantes à traverser en sécurité.

### Fonctionnalités :
- Alternance automatique entre feu vert et rouge
- Détection de présence via un capteur PIR
- Emission de sons distincts selon la couleur du feu
- Lecture non bloquante de mélodies
- Signal sonore durant 20 secondes après détection

##  Matériel requis
- Arduino (UNO ou compatible)
- LED NeoPixel WS2812
- Capteur PIR
- Buzzer passif
- Fils de connexion
- Résistance (si besoin)
- Alimentation 5V

## Branchements
- PIR : GND, A2
- Buzzer (avec breadboard): A0, 12-GND

##  Installation
1. Charger le code `feu_pieton.ino` sur votre carte Arduino.
2. Placer le fichier `pitches.h` dans le même dossier.
3. Vérifiez le câblage et connectez le matériel.
4. Ouvrir le moniteur série à 115200 bauds.

##  Auteurs
Projet réalisé dans le cadre de l'UE de Communication sans fil du terrestre au spatial, à l’Université Côte d’Azur par Aimé FLEURY, Ninon SEILER et Aurélia SICARD.

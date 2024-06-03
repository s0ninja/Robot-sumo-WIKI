/*déclaration des fonctions et bibliothèque associées*/
#include <SoftwareSerial.h>


//bibliothèques associées
//définir ici les bibliothèques associées au programme

//ENTRÉES/SORTIES NUMÉRIQUES

    //connececter les RIPS du deux capteurs "line finder" aux broches suivantes (D2 et D4)
    //broche arduino UNO D5  
      #define RxD 5
    //broche arduino UNO D6
      #define TxD 6 
      
    //connecter les 6 entrées de l'interface de puissance L298 
    //sont connectés via le "shield" aux pins suivants
    // moteur gauche
      #define sensMGauche 12
      #define marcheGauche 9
      #define puissanceGauche 3

    // moteur droit
      #define sensMDroit 13
      #define marcheDroit 8
      #define puissanceDroit 11
                                                                    
// DÉCLARATION DES CONSTANTES
    //capteur de vitesse                                              
      #define AFOND 130
      #define PRUDENT 60
      #define NBMESURE 4

//Déclaration des variables
word w = 128; //mot qui reçoit les trames émises

//Initialisation des E/S et communication
SoftwareSerial blueTooth(RxD,TxD);

//déclaration des fonctions

void arret(){//compléter la fonction arrêt et faire valider par le professeur
  Serial.println("Je stoppe");
}

void moteurDroite(int v){//compléter la fonction moteurDroite et faire valider par le professeur
  //remarque : la fonction ne fonctionnera pas si on ne lui indique pas la vitesse
  Serial.println("Je tourne a gauche");
  //commande des MCC pour tourner à droite
}

void moteurGauche(int v){//compléter la fonction moteurGauche et faire valider par le professeur
  //remarque : la fonction ne fonctionnera pas si on ne lui indique pas la vitesse
  Serial.println("Je tourne a gdroite");
  //commande des MCC pour tourner à gauche
}

void moteurDroiteR(int v){//compléter la fonction moteurDroiteR (marche arrière) et faire valider par le professeur
  //remarque : la fonction ne fonctionnera pas si on ne lui indique pas la vitesse
  Serial.println("Je tourne a droite en reculant");
  //commande des MCC pour tourner à droite
}

void moteurGaucheR(int v){//compléter la fonction moteurgaucheR (marche arrière) et faire valider par le professeur
//remarque : la fonction ne fonctionnera pas si on ne lui indique pas la vitesse
  Serial.println("Je tourne a gauche en reculant");
  //commande des MCC pour tourner à droite
}


void recevoir(){
/*compléter ici la fonction recevoir
appuyez vous sur le docuement ressource*/

}

void setupBluetooth()
{ 
  blueTooth.print("AT");//commande permettant de régler le module GROVE bluetooth
  delay(400); 
  blueTooth.print("AT+DEFAULT"); //commande réglages origines
  delay(400); 
  blueTooth.print("AT+ROLES"); //le module bluetooth est en mode "reception"
  delay(400); 
  blueTooth.print("AT+BAUD8");  //réglage de la vitesse de transmission
  delay(400);
  blueTooth.begin(9600); //réglage de la vitesse de transmission
  delay(400); 
  blueTooth.flush();//attente de la fin du message
}
  
void setup()
{
//initialisation des pins de sortie
  //Setup moteurgauche
    pinMode(sensMGauche, OUTPUT); //Initialise la broche  "sens de rotation moteur gauche" 
    pinMode(marcheGauche, OUTPUT);  //Initialise la broche  "mise en rotation" du moteur Gauche
    pinMode(puissanceGauche, OUTPUT); //Initialise la broche  "puissance" du moteur Gauche
  //Setup moteurdroite
    pinMode(sensMDroit, OUTPUT); //Initialise la broche  "sens de rotation moteur droit" 
    pinMode(marcheDroit, OUTPUT);  //Initialise la broche  "mise en rotation" du moteur droit
    pinMode(puissanceDroit, OUTPUT);   //Initialise la broche  "puissance" du moteur droit                                  
  
  //setup bluetooth
    pinMode(RxD, INPUT);
    pinMode(TxD, OUTPUT);
    setupBluetooth();

  //affichage moniteur série
    Serial.begin(9600);
    
  //initialisation des moteurs (arrêt)  
    digitalWrite(marcheDroit, LOW);
    digitalWrite(marcheGauche, LOW);
                   
}
    
      
void loop() {//le programme effectuera cette boucle à l'infini
/*c'est ici que vous ferez appel aux différentes fonctions et réaliserez 
il faudra commander le robot telegidé via cette interface*/

}

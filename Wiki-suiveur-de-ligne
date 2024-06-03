/*déclaration des fonctions et bibliothèque associées*/

//ENTRÉES/SORTIES NUMÉRIQUES

    //connececter les RIPS du deux capteurs "line finder" aux broches suivantes (D2 et D4)
    //broche arduino UNO D2
      #define linefinderGauche 2
    //broche arduino UNO D4
      #define linefinderDroite 4
    //connecter le RIP du bouton de marche arret à la broche analogique A2
    //bouton marche
      #define boutonMarche A2
      
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

//déclaration des variables
  bool LFG = 0 , LFD = 0;
  int X =0 ;
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


byte acquisition(){/*compléter la fonction acquisition et faire valider par le professeur
  remarque : cette fonction permettrra s'acquérir l'état de tous les capteurs suiveurs de ligne 
  et les stockera dans des variables
  les variables seront ensuite utilisées dans le programme principal*/
  LFD = digitalRead(linefinderDroite);
  LFG = digitalRead(linefinderGauche);

  if (LFD==0 && LFD == 0) //si les deux capteurs captent la couleur blanche (la ligne)
  {
    /* la valeur retournée par la fonction pour la condition choisie sera de 0*/
  return 0; 
  } else if (LFD==0)
            {
              /* appeler fonctions */
            return 1;
            }
            else if (LFD==0)
                    {
                      /* appeler fonctions */
                    return 2;
                    }         
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

  //suiveurs de ligne
    pinMode(linefinderGauche, INPUT);//
    pinMode(linefinderDroite, INPUT);
      
  //affichage moniteur série
    Serial.begin(9600);

  //temporisation permettant à l'utilisateur de demarrer le robot quand il le souhaite 
   do {X  = analogRead(boutonMarche);
      delay(20);}
   while (X<1000);                       
}
    
      
void loop() {//le programme effectuera cette boucle à l'infini
/*c'est ici que vous ferez appel aux différentes fonctions et réaliserez 
les différents test afin de pouvoir faire fonctionner le robot sur le circuit
je vous propose d'utiliser une fonction switch case et d'utiser la fonction acquisition que vous avez défini précedemment*/

switch (acquisition())
{
case 0 : //definir ici ce que fais le robot en fonction de l'état des deux capteurs suiveurs de ligne
  /* code */
  break;

case 1 : //definir ici ce que fais le robot en fonction de l'état des deux capteurs suiveurs de ligne
  /* code */
  break;

case 2 : //definir ici ce que fais le robot en fonction de l'état des deux capteurs suiveurs de ligne
  /* code */
  break;

case 3 : //definir ici ce que fais le robot en fonction de l'état des deux capteurs suiveurs de ligne
  /* code */
  break;

default://la fonction défaut est ici déjà définie, et correspondra à un arrêt du robot
arret();
  break;
}

}

//Ultraschallsensor
int trigger=7; 
int echo=6; 
long dauer=0; 
long entfernung=0; 

//Pumpe
int Pumpe=9;

//Benachrichtigung 
int Benachrichtigung = 8;

void setup()
{
//Ultraschallsensor         
pinMode(trigger, OUTPUT); 
pinMode(echo, INPUT);

//Pumpe
pinMode(Pumpe, OUTPUT);

//Benachrichtigung
pinMode(Benachrichtigung, OUTPUT);

}
void loop()
{

//Messvorgang
digitalWrite(trigger, LOW); 
delay(5); 
digitalWrite(trigger, HIGH); 
delay(10);
digitalWrite(trigger, LOW);
dauer = pulseIn(echo, HIGH); 
entfernung = (dauer/2) * 0.03432; 


//Ausgabe(Umsetzung)
if(entfernung <= 12 && entfernung > 1) {

    digitalWrite(Pumpe, HIGH);
    digitalWrite(Benachrichtigung, HIGH);
    delay(800);
    digitalWrite(Pumpe, LOW);
    digitalWrite(Benachrichtigung, LOW);
}
delay(3000);   
}
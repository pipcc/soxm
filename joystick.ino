int mx,my;
int xmin=480;
int xmin2=500;
int xmax=570;
int xmax2=550;
int ymin=459;
int ymin2=479;
int ymax=539;
int ymax2=519;
int upin=3;
int dpin=4;
int lpin=5;
int rpin=6;
int rc=0;
int lc=0;
int uc=0;
int dc=0;

void setup() {
// put your setup code here, to run once:
//Serial.begin(9600);
pinMode(upin,OUTPUT);
pinMode(dpin,OUTPUT);
pinMode(lpin,OUTPUT);
pinMode(rpin,OUTPUT);
digitalWrite(upin,HIGH);
digitalWrite(dpin,HIGH);
digitalWrite(lpin,HIGH);
digitalWrite(rpin,HIGH);
}

void loop() {
// put your main code here, to run repeatedly:
mx=analogRead(0);
my=analogRead(1);

if(mx<xmin && rc==0){
rc=1;
//Serial.println("right");
digitalWrite(rpin,LOW);
}
if(rc==1){
if(mx>xmin2){
rc=0;
//Serial.println("right off");
digitalWrite(rpin,HIGH);
}
}
if(mx>xmax && lc==0){
lc=1;
//Serial.println("left");
digitalWrite(lpin,LOW);
}
if(lc==1){
if(mx<xmax2){
lc=0;
//Serial.println("left off");
digitalWrite(lpin,HIGH);
}
}



if(my<ymin && dc==0){
dc=1;
//Serial.println("down");
digitalWrite(dpin,LOW);
}
if(dc==1){
if(my>ymin2){
dc=0;
//Serial.println("down off");
digitalWrite(dpin,HIGH);
}
}
if(my>ymax && uc==0){
uc=1;
//Serial.println("up");
digitalWrite(upin,LOW);
}
if(uc==1){
if(my<ymax2){
uc=0;
//Serial.println("up off");
digitalWrite(upin,HIGH);
}
}



}


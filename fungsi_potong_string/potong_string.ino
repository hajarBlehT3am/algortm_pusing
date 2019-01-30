String banyak[20]={};

void nulis_epp_digit(int ngone,String isine,int nilai){
  String hasile="";
  unsigned int adde; 
  char dat[nilai]="";
 for(int i=0;i<=nilai;i++) {
        adde= ngone +i;
        eeprom_write_byte((unsigned char *) adde,isine[i]);
      }
}
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
String data="";
while(Serial.available()){
 data = Serial.readString();
 }
String datao[data.length()/5]={};
 
//if (data!="") nulis_epp_digit(10,data,5);
//Serial.println(potong(data,3));
//Serial.println(data[4]);
//int a=potong(data,3).toInt();
//Serial.println(a+23);
//if(data[4]=='b')Serial.println("boooom");
//str.replace("nyala_","")
//  delay(500);

if (data!=""){potong2(data,5,datao);for(int i;i<=data.length()/5;i++){
  Serial.print(datao[i]);Serial.print(" ");Serial.print(potong(datao[i],3));Serial.print(" ");String buff=datao[i];Serial.print(buff[4]);Serial.print(" ");Serial.println(datao[i][4]);//ternyata aray 2d
  }
 }
//delay(1000);

}

void potong2 (String a,int b,String out[]){
String dat="";
int j=0,k=0;
  for (int i=0;i<=a.length();i++){
  dat+=a[i];
  j++;
  if(j==b){j=0;out[k]=dat;k++;dat="";}
  }
}


String potong(String a,int b){
  String c="";
  for(int i=0;i<=b;i++){
   c+=a[i];
  }
  return c;
}

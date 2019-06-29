//Made By ENG: Hossam Hassan HHassan@nu.edu.eg Mazen Ahmed M.Taha@nu.edu.eg



//initiate Variable to help decode the Coming msg 
long V = 0;
long Steering_degree=95;
long msgs;
long msgs2;
long msgs3;
long pos;
long  degree;


String inByte;

void setup() {
  Serial.begin(9600);
}
void loop() {
  // read from port 0, send to port 1:
  if (Serial.available()) {
   // inByte=Serial.readStringUntil('A');  // uncomment if you want the ardunio to read till specific char is recivied. 
   //( He will read what is before the char but not the charchter itself then store it into the variable then read what is after it. 
    inByte=Serial.readString();
    Serial.print(inByte);
  
      msgs = inByte.toInt();  // Turn recived massege into int to deal mathmatically with it easily decode the coming signal 
      pos = ( msgs / 1000000 );
      msgs2=(msgs - (pos*1000000));
      degree= (msgs2/1000);
      msgs3= (msgs2-(degree*1000));
      V=msgs3;
    // To easily understand here is an example (if raspberry-pi send (11222444A) Ardunio will recive the whole msg 
    // inserting pos=11 the first two char then degree=222 the second three char lastly V=444 the last 3 char 
    //Take care it ignored the 'A' char because it was uncommneted 

D_Value=degree;
V_Value=V;
//rename the above names to suit your algorithm 
//Insert your algorithm here
  }


}

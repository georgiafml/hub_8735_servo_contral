#include <AmebaServo.h>
AmebaServo myservo;
AmebaServo myservo1;
AmebaServo myservo2;

void setup() {
    myservo.attach(9);  //F6 claw
    myservo1.attach(8); //F7 middle
    myservo2.attach(7); //F8 right
}

void loop() {
//        delay(5000);
        myservo1.write(0);//向前
        myservo2.write(90);//向前
        delay(5000);
        myservo2.write(120);
        delay(2000);


        myservo.write(90);//夾取
        delay(2000);
        myservo.write(150);
        delay(2000);

        myservo2.write(90);//回位
        delay(5000);

        myservo1.write(90);//旋轉

        myservo2.write(90);//向前
        delay(5000);
        myservo2.write(120);
        delay(2000);

        myservo.write(150);//放置
        delay(2000);
        myservo.write(90);//收
        delay(2000);


        myservo2.write(90);//回位
        delay(5000);


 }

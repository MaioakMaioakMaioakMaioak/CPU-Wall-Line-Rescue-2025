void Box2() {
  delay(250);
  BB(100, 300);
  servoWrite(CH_SERVO_FRONT, ServoFront_Lock);
  SetBack(25);
  STOP();

  TR(70, 15, 300); STOP();

  FF(80, 100);
  TR(70, 15, 300); STOP();

  FF(100, 300);
  TR(70, 15, 300); STOP();

  FF(50, 200);
  servoWrite(CH_SERVO_FRONT, ServoFront_Drop);
  delay(250);
  servoWrite(CH_SERVO_FRONT, ServoFront_Lock);
}


    #include <Stepper.h>
    #define STEPS  100  
    Stepper small_stepper(STEPS, 2, 4, 3, 5);
    int  Steps2Take;
    void setup()  
    {
    }

    void loop()  
    {
      small_stepper.setSpeed(250);  
      Steps2Take  =  2048;  
      // Rotate CW For a complete rotation
      // Change this number for change the degrees of the rotation
      small_stepper.step(Steps2Take);
      delay(200);
      small_stepper.setSpeed(200);  
      // Change this for change the speed
      Steps2Take  =  -2048;  // Rotate CCW
      small_stepper.step(Steps2Take);
      delay(200);}


# DC Motors Speed and Dirction Control
**This Repository will explain my 2nd task in Electronics and Electrical Power departmentt at [SMART METHODS](https://github.com/smart-methods) summer training.**

## Task Requirements: 
  - Control the DC motor using H-Bridge in clockwise and then counter clockwise direction.
  - Use potentiometer to control the speed of DC motor, and push button to swap the direction of DC motor.

## Detailed Steps:
1. Connect the circuit diagram in [Tinkercad](https://www.tinkercad.com) website.
    - Use L293D H-bridge IC [(datasheet)](https://pdf1.alldatasheet.com/datasheet-pdf/view/99683/STMICROELECTRONICS/L293D.html) which is similar to L298D. 
    - Vss=5v from controller, Vs= 5v to 36v power supplay, Enable= PWM control, Input= Direction control.
   
   <p align='center'><img width="30%" src="https://github.com/mo7ammed-saleh/DC_Motors_Speed_Dir_Control/blob/main/Circuit%20Diagram/L293D-Motor-driver.jpg"/>
    </p>
    
    - Circuit digram with direction and speed control [(see the code with explination in comments).](https://github.com/mo7ammed-saleh/DC_Motors_Speed_Dir_Control/blob/main/Code/1-%20Task_2_Control_speed_dir_of_DC_motor.ino)
     
    <p align='center'><img width="60%" src="https://github.com/mo7ammed-saleh/DC_Motors_Speed_Dir_Control/blob/main/Circuit%20Diagram/1-%20DC%20Motor%20Control.PNG"/>
    </p>    
    
2. Now, use potentiometer and push button to control the speed and direction of DC motors [(see the code with explination in comments).](https://github.com/mo7ammed-saleh/DC_Motors_Speed_Dir_Control/blob/main/Code/2-%20Task_2_control_DC_motor_with_PB_Potemeter.ino)
   - Note that the potentiometer read an analog value from 0-1023 and we should convert it using map() command into PWM which is from 0-255.
   - To consider safety, the motors will not start until the push button is pressed for the first time. 

    <p align='center'><img width="60%" src="https://github.com/mo7ammed-saleh/DC_Motors_Speed_Dir_Control/blob/main/Circuit%20Diagram/2-%20DC%20Motor%20Control%20with%20PB%20and%20Potmeter.PNG"/>
    </p>  
    
 3. Printing the max value of potentiometer which is max PWM value 

  <p align='center'><img width="90%" src="https://github.com/mo7ammed-saleh/DC_Motors_Speed_Dir_Control/blob/main/Circuit%20Diagram/Max%20speed%20at%20max%20volt%20in%20serial.PNG"/>
    </p>  
    
4. Task is Done :heart_eyes:


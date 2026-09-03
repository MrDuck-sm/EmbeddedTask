# Ultrasonic
Ultrasonic use timer1 driver because we need the input capture mode to capture the time of an event.

The ultrasonic have 2 pins trigger that i give a small pulse for 10 micro second the close again and the echo that work after the trigger is closed from the echo pin we calculate the time it took the waves to hit an object and then send it bake to the microcontroller that display it on the lcd.

The input capture mode work when it detect of a rising edge or falling edge on ICP pin (PORTD.6), the TCNT1 value is loaded into the ICR1 register and the ICF1 flag will get set.

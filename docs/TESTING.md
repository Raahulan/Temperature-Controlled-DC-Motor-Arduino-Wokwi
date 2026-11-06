# Wokwi Simulation Testing

1. Open the `sketch.ino` and `diagram.json` files in a new Arduino UNO Wokwi project.
2. Start simulation; open the Serial Monitor (9600 baud).
3. At a simulated ~24 °C, expect a small PWM value around 16–17 and a dim LED.
4. Change sensor temperature to 20 °C: expect `PWM: 0` (LED off).
5. Change it to 40 °C: expect `PWM: 85` (medium LED).
6. Change it to 60 °C: expect `PWM: 170` (brighter LED).
7. Change it to 80 °C: expect `PWM: 255` (full brightness).
8. Above 80 °C the PWM remains 255; below 20 °C it remains 0.

The temperature reading and PWM are printed every 200 ms. Minor differences due to ADC discretization are normal.

**Status:** Files and JSON can be checked locally, but this circuit has not been independently executed in Wokwi. Verify the behavior in the simulator.

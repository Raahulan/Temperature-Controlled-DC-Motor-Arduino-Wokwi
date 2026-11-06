# Circuit Wiring

## Arduino UNO and NTC temperature sensor

- `NTC VCC` → `Arduino 5V`
- `NTC GND` → `Arduino GND`
- `NTC OUT` → `Arduino A0`

## PWM indicator LED

- `Arduino D3` → `220 Ω resistor` → `Red LED anode (+)`
- `Red LED cathode (−)` → `Arduino GND`

The output is a **5 V PWM logic signal for an LED**. Do not wire a DC motor directly to D3. A physical motor implementation would require an appropriately designed, rated driver, independent power supply, and protection, with adult/qualified supervision where necessary. This package is only a low-voltage simulation.

The uploaded screenshot shows the NTC board pins `S`, `+`, `−`; the equivalent Wokwi model pins are `OUT`, `VCC`, `GND` respectively.

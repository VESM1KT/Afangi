# Blátt LED blikkar með 2 sek. millibili 
# Tengingar og kóði: https://wokwi.com/projects/452532316363250689

from machine import Pin    # Notum Pin úr machine kóðasafninu til að skilgreina pinnana á ESP. 
from time import sleep_ms  # Notum svo sleep_ms til að láta forritið bíða

# Búum til breytuna led og tengjum hana við pinna 4 á ESP. 
led = Pin(4, Pin.OUT)   # Segjum að pinni 4 sé úttakspinni.

led_state = False  # Our boolean variable

while True:
    # Set the LED to the current boolean state (False=0, True=1)
    led.value(led_state)
    
    # Flip the boolean
    led_state = not led_state
    
    # Wait 500 milliseconds
    sleep_ms(500)

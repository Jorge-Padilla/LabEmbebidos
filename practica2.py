from grove_rgb_lcd import *
import time
import grovepi
import math

sensor = 0
button = 4
grovepi.pinMode(button, "INPUT")

while True:
    try:
        button_status= grovepi.digitalRead(button)
        if button_status:
            setRGB(0,255,0)
            temp = grovepi.temp(sensor,'1.1')
            text = "temp = " +  str(temp) + " C"
            print(text)
            setText(text)
            time.sleep(.5)
        else:
            setRGB(255,0,0)
            print("Presiona el boton")
            setText("Presiona el\n boton")
            time.sleep(.5)
    except IOError:
        print ("Error")
            
            

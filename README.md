# ArduinoController


## Serial connection between Arduino and Java [Tutorial]

<small> See this text in portuguese [here](http://lite.acad.univali.br/pt/27/11/2015/410/) </small>

The idea of this code is to show an easy way to “Makerize” your environment through the communication between Java and Arduino, for that some basic notions are necessary:

### Arduino
Arduino is an electronic prototyping platform, created in Italy, consisting basically of a microcontroller board, a typical language and programming with a development environment and support for the input and output of data and signals.
It was created in 2005 with the objective of serving as a basis for low-cost projects, being simple enough to be used by amateur developers.
It is quite flexible and does not require a profound mastery of electronics, which made it quite popular with artists and beginners, as well as experienced developers who do not have access to more complex platforms.

### Serial Communication
Serial communication makes it possible for the Arduino to communicate with a computer or other devices.
All Arduino boards have at least one serial port (also known as UART or USART). 

Communication takes place via digital pins 0 (RX) and 1 (TX), as well as a USB connection.
In this way, if you use this functionality, pins 0 and 1 cannot be used as a digital input or output.

### Functions
```c
begin();
end();
available();
read();
flush();
print();
println();
write();
```
### JSSC
JSSC is the Java library that we will use to double the computer communication with Arduino through the Serial port. It can be found on this website.

### Circuit
For the circuit, we will do at first something simple, a circuit that lights a led.

![](https://i.imgur.com/EvzbBGf.png)
> Arduino and led virtual sketch

After sending the C code to Arduino through the Arduino IDE and executing the code in Java through NetBeans, just choose the port where the Arduino is and control the Led.

![](https://i.imgur.com/TPPF8f1.jpg)
> Arduino control console integrated with JSSSC

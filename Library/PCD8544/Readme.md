What is it?
===========

**PCD8544** is a library for the [Arduino](http://arduino.cc/) to interface with LCDs based on the
Philips PCD8544 controller ([datasheet](https://github.com/carlosefr/pcd8544/blob/docs/docs/pcd8544.pdf?raw=true))
or compatibles. These displays are commonly found on older monochrome mobile phones, such as the
[Nokia 3310](http://en.wikipedia.org/wiki/Nokia_3310) or [5110](http://en.wikipedia.org/wiki/Nokia_5110),
so if you have one of these stuck in a drawer, take it out and start hacking away! :)



Installation
============

Download the library and place it in your Arduino Uno library folder. 


How it Works
============

The following pins are used by the Nokia Display

Display Pin       | Arduino Pin
------------------|------------
Pin 1             | +3.3V Pin
Pin 2 (SCLK)      | Digital Pin 13
Pin 3 (SDIN/MOSI) | Digital Pin 11
Pin 4 (D/C)       | Digital Pin 4
Pin 5 (SCE)       | Digital Pin 3
Pin 8 (RST)       | Digital Pin 2


Now, take a moment and read through the included [`HelloWorld.ino`](examples/HelloWorld/HelloWorld.ino) example.
It shows how to use the basic features of the library. There is also another
[`Thermometer.ino`](examples/Thermometer/Thermometer.ino) example that demonstrates bitmapped graphics and charts.

Custom Symbols
==============

The library allows the use of custom bitmap symbols (5x8), defined by an array of five bytes.
To make it easy to create custom symbols, there's a graphical glyph editor
[available online](http://cloud.carlos-rodrigues.com/projects/pcd8544/).

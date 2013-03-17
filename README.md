Website Visit Blink
===================

Make a Arduino blink when you have a visitor on your website

Requirements:
- Linux/Unix server
- Apache
- PHP

How it did it
--------------------
I got this working on a Ubuntu-server 12.04 with kernel 3.0.0

The port ttyACM0 worked for me and you can try with the simple command:
`echo 1 > /dev/ttyACM0
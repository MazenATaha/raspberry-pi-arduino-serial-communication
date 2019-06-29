clc
clear 
mypi = raspi('192.168.43.100','pi','raspberry'); % Connect to Raspi pi ('IP','Username','Password')
myserialdevice = serialdev(mypi,'/dev/ttyACM0',9600); % Connecting to your ardunio through simple USB cable Working 
 write(myserialdevice,'11222444A','char'); %This massege is encrepted in this end and decrypted in the other end  see ardunio comment to understand the method 

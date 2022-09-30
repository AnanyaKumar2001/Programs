
%Given signal is x=n+1;
clc;
clear all;
close all;

syms n;
x1=input('Enter x(n) : '); % Example : n+1
y1=ztrans(x1);
disp('The Z-Transform of x1=n+1 is : ')
disp(y1)
y2=iztrans(y1);
disp('The inverse Z-Transform is : ')
disp(y2)
%program to Determine the frequency response of
%2y(n)-3y(n-1)+4y(n-2)=x(n-1)+2x(n-2)
clc;
clear all;
close all;
b=input('Enter the coefficients of x(n),x(n-1),.....');
a=input('Enter the coefficients of y(n),y(n-1),.....');
[h t]=freqz(b,a);
magnitude = 20*log10(abs(h));
phase = angle(h);

subplot(2,1,1)
plot(t/pi,magnitude)
xlabel('Normalized frequency')
ylabel('Gain in db')
title('Magnitude response of signal')
subplot(2,1,2)
plot(t/pi,phase)
xlabel('Normalized frequency')
ylabel('Phase in radians')
title('Phase response of signal')

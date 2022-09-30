%program to Determine the impulse response of
%y(n)-3y(n-1)-4y(n-2)=x(n)+2x(n-1)
clc;
clear all;
close all;
b=input('Enter the coefficients of x(n),x(n-1),.....');
a=input('Enter the coefficients of y(n),y(n-1),.....');
[h n]=impz(b,a);
subplot(2,1,1)
plot(n,h)
xlabel('n')
ylabel('h(n)')
title('Impulse response signal')
subplot(2,1,2)
stem(n,h)
xlabel('n')
ylabel('h(n)')
title('Impulse response of sequence')
disp('The Impulse response values are : ')
disp(h)
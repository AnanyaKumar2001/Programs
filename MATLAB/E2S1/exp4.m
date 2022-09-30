clc;
close all;
clear all;
%	two input sequences
x=input('enter input sequence'); h=input('enter the impulse suquence'); subplot(2,2,1);
stem(x); xlabel('n'); ylabel('x(n)');
title('input sequence'); subplot(2,2,2); 
stem(h);
xlabel('n'); 
ylabel('h(n)'); title('impulse sequence');

%	cross correlation between two sequences
y=xcorr(x,h);
subplot(2,2,3);
stem(y);
xlabel('n');
ylabel('y(n)');
title(' cross correlation between two sequences ');

%	auto correlation of input sequence 
z=xcorr(x,x);
subplot(2,2,4);
stem(z); xlabel('n');
ylabel('z(n)');
title('auto correlation of input sequence');

%	cross correlation between two signals

%	generating two input signals 
t=0:0.2:10;
x1=3*exp(-2*t); h1=exp(t); figure; subplot(2,2,1); plot(t,x1); xlabel('t');
ylabel('x1(t)'); title('input signal'); subplot(2,2,2);
plot(t,h1); 
xlabel('t'); 
ylabel('h1(t)'); title('impulse signal');

%	cross correlation
subplot(2,2,3);
z1=xcorr(x1,h1);
plot(z1);
xlabel('t');
ylabel('z1(t)');
title('cross correlation ');

%	auto correlation subplot(2,2,4); 
z2=xcorr(x1,x1);
plot(z2); xlabel('t'); ylabel('z2(t)'); 
title('auto correlation ');

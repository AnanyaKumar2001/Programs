%Generate a Fourier Transform of a rectangular pulse

a=input('Enter Amplitude : ');
T=input('Enter the T value : ');
f=input('Enter the frequency value : ');
t=0:0.02:T;
y=a;
subplot(2,2,1);
plot(t,y);
xlabel('time(t)');
ylabel('x(t)');
title('Input signal');

y1=(a/T)*(1-exp(-(j*2*pi*f*T)));
subplot(2,2,2);
plot(t,y1);
xlabel('time(t)');
ylabel('y1(t)');
title('Required signal');

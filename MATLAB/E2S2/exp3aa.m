t=-10:0.5:10;
T=4;
fm=1/T;
x=cos(2*pi*fm*t);
subplot(2,2,1);
plot(t,x);
xlabel('time');
ylabel('amplitude');
title('continuous time signal');
grid;
fs1=1.7*fm;
x1=cos(2*pi*fm/fs1*t);
subplot(2,2,2);
stem(t,x1);
xlabel('time');
ylabel('x(n)');
title('Discrete time signal');
hold on;
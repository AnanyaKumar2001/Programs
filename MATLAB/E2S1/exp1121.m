%generation of sinsoidal wave signal
t=0:0.002:0.1;
x=sin(2*pi*40*t);
subplot(2,2,1);
plot(t,x);
axis([0 0.1 -2 2]);
xlabel('t');
ylabel('amplitude');
title(' sine wave signal');
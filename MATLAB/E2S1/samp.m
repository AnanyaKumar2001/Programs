%generation of sin wave sequence
t=0:0.002:0.1;
fm=input('Enter the fm value : ');
y=cos(2*pi*fm*t);
subplot(2,2,1);
plot(t,y);
axis([0 0.1 -2 2]);
xlabel('n');
ylabel('amplitude');
title('cos wave sequence');

fs1=1.7*fm;
x1=cos(2*pi*fm/fs1*t);
subplot(2,2,2);
plot(t,y);
stem(t,y);
axis([0 0.1 -2 2]);
xlabel('n');
ylabel('amplitude');
title('cos wave sequence');
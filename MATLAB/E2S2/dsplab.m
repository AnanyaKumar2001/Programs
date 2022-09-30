%Given x(t)=exp(-abs(t))
t=-0.1:0.0002:0.1;
k=input('Enter the value of k : ');
y=exp(-abs(t));
y1=exp(-abs(k*t));
subplot(2,2,1);
plot(t,y);
xlabel('time(t)');
ylabel('x(t)');
title('Input signal');
subplot(2,2,2);
plot(t,y1);
xlabel('time(kt)');
ylabel('x(kt)');
title('Required signal');

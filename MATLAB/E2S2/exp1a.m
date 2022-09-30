

%generation of unit impulse signal  
t1=-1:0.01:1;
y1=(t1==0);
subplot(8,2,1);
plot(t1,y1); xlabel('time'); ylabel('amplitude');
title('unit impulse signal');
%generation of impulse sequence  
subplot(8,2,2);
stem(t1,y1); xlabel('n'); ylabel('amplitude');
title('unit impulse sequence');


%generation of unit step signal
t2=-10:1:10;
y2=(t2>=0);
subplot(8,2,3);
plot(t2,y2);
xlabel('time');
ylabel('amplitude');
title('unit step signal');
%generation of unit step sequence
subplot(8,2,4);
stem(t2,y2);
xlabel('n');
ylabel('amplitude');
title('unit step sequence');


%generation of square wave signal
t=0:0.002:0.1;
y3=square(2*pi*50*t);
subplot(8,2,5);
plot(t,y3);
axis([0 0.1 -2 2]);
xlabel('time');
ylabel('amplitude');
title('square wave signal');
%generation of square wave sequence
subplot(8,2,6);
stem(t,y3);
axis([0 0.1 -2 2]);
xlabel('n');
ylabel('amplitude');
title('square wave sequence');


%generation of sawtooth signal
y4=sawtooth(2*pi*50*t);
subplot(8,2,7);
plot(t,y4);
axis([0 0.1 -2 2]);
xlabel('time');
ylabel('amplitude');
title('sawtooth wave signal');
%generation of sawtooth sequence
subplot(8,2,8);
stem(t,y4);
axis([0 0.1 -2 2]);
xlabel('n');
ylabel('amplitude');
title('sawtooth wave sequence');


%generation of triangular wave signal 
y5=sawtooth(2*pi*50*t,.5);
subplot(8,2,9);
plot(t,y5);
axis([0 0.1 -2 2]);
xlabel('time');
ylabel('amplitude');
title(' triangular wave signal'); 
%generation of triangular wave sequence 
subplot(8,2,10);
stem(t,y5);
axis([0 0.1 -2 2]);
xlabel('n');
ylabel('amplitude');
title('triangular wave sequence');


%generation of sinsoidal wave signal
y6=sin(2*pi*40*t);
subplot(8,2,11);
plot(t,y6);
axis([0 0.1 -2 2]);
xlabel('time');
ylabel('amplitude');
title(' sinsoidal wave signal');
%generation of sin wave sequence
subplot(8,2,12);
stem(t,y6);
axis([0 0.1 -2 2]);
xlabel('n');
ylabel('amplitude');
title('sin wave sequence');


%generation of ramp signal
y7=t;
subplot(8,2,13);
plot(t,y7);
xlabel('time');
ylabel('amplitude');
title('ramp signal');
%generation of ramp sequence
subplot(8,2,14);
stem(t,y7);
xlabel('n');
ylabel('amplitude');
title('ramp sequence');


%generation of sinc signal
t3=linspace(-5,5);
y8=sinc(t3);
subplot(8,2,15);
plot(t3,y8);
xlabel('time');
ylabel('amplitude');
title(' sinc signal');
%generation of sinc	sequence
subplot(8,2,16);
stem(y8);
xlabel('n');
ylabel('amplitude');
title('sinc sequence');



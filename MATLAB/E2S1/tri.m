%generation of triangular wave signal 
t=0:0.002:0.1;
y5=sawtooth(2*pi*50*t,.5); figure;
subplot(2,2,1);
plot(t,y5);
axis([0 0.1 -2 2]);
xlabel('time');
ylabel('amplitude');
title(' triangular wave signal'); 
%generation of triangular wave sequence 
subplot(2,2,2);
stem(t,y5);
axis([0 0.1 -2 2]);
xlabel('n');
ylabel('amplitude');
title('triangular wave sequence');


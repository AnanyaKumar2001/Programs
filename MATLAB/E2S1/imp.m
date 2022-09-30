%generation of unit impulse signal  
t1=-1:0.01:1;
y1=(t1==0);
subplot(2,2,1);
plot(t1,y1); xlabel('time'); ylabel('amplitude');
title('unit impulse signal');

%generation of impulse sequence  
subplot(2,2,2);
stem(t1,y1); xlabel('n'); ylabel('amplitude');
title('unit impulse sequence');
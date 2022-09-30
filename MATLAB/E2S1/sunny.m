%   program for energy of a sequence
z1=input('enter the input sequence'); e1=sum(abs(z1).^2);
disp('energy of given sequence is');e1
%	program for energy of a signal 
t=0:pi:10*pi; z2=cos(2*pi*50*t).^2; e2=sum(abs(z2).^2);
disp('energy of given signal is');e2
%	program for power of a sequence 
p1= (sum(abs(z1).^2))/length(z1); 
disp('power of given sequence is');p1
%	program for power of a signal 
p2=(sum(abs(z2).^2))/length(z2); 
disp('power of given signal is');p2

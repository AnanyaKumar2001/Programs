%program for IDFT
x=input('Enter input sequence1: ');
N=length(x);
y=ifft(x);
disp('IDFT of input sequence is ');
disp(y);

subplot(3,2,1);
stem(x);
xlabel('n');
ylabel('x(n)');
title('input sequence');

subplot(3,2,2);
stem(y);
xlabel('n');
ylabel('y(n)');
title(' Output sequence');
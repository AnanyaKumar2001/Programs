%program for circular convolution of two sequences 
x1=input('Enter input sequence1: ');
x2=input('Enter input sequence2: ');
x4=length(x1);
x5=length(x2);
x6=max(x4,x5);
y=cconv(x1,x2,x6);
disp('Circular convoluted output is ');
disp(y);

subplot(3,1,1);
stem(x1);
xlabel('n');
ylabel('x1(n)');
title(' First input sequence')

subplot(3,1,2);
stem(x2);
xlabel('n');
ylabel('x2(n)');
title('Second input sequence')

subplot(3,1,3);
stem(y);
xlabel('n');
ylabel('y(n)');
title('Circular convolution')
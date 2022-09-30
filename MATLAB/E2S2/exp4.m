%program for convolution of two sequences 
x1=input('Enter input sequence1: ');
x2=input('Enter input sequence2: ');
n1=input('Enter the number of zeros in input 1 : ');
n2=input('Enter the number of zeros in input 2 : ');
x3=[x1,zeros(1,n1)];
x4=[x2,zeros(1,n2)];
y1=conv(x1,x2);
disp('Linear convoluted output is ');
disp(y1);
y2=conv(x3,x4);
disp('Linear convoluted output of zero padding is ');
disp(y2);
y3=cconv(x1,x2,length(x1));
disp('Circular convoluted output is ');
disp(y3);
subplot(3,2,1);
stem(x1);
xlabel('n');
ylabel('x1(n)');
title(' First input sequence')
subplot(3,2,2);
stem(x2);
xlabel('n');
ylabel('x2(n)');
title('Second input sequence')
subplot(3,2,3);
stem(y1);
xlabel('n');
ylabel('y3(n)');
title('Linear convolution')
subplot(3,2,4);
stem(y2);
xlabel('n');
ylabel('y2(n)');
title('Linear convolution of zero padding')
subplot(3,2,5);
stem(y3);
xlabel('n');
ylabel('y3(n)');
title('Circular convolution')
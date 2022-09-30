%program for DFT
x=input('Enter input sequence1: ');
N=length(x);
y=fft(x);
disp('DFT of input sequence is ');
disp(y);


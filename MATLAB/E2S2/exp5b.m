%DFT
clc;
clear all;
close all;
N1=input('Enter the length of N1 : ');
x1=zeros(1,N1);
x1=input('Enter the sequence : ');
for k=1:N1
    x2(k)=0;
    for n=1:N1
        x2(k)=x2(k) + x1(n) * exp(-j*2*pi*(n-1)*(k-1)/N1);
    end
end
disp('DFT')
disp(x2)
figure(1);
freqz(x2)

%IDFT
N2=input('Enter the length of N2 : ');
x3=zeros(1,N2);
x3=input('Enter the sequence : ');
for n=1:N2
    x4(n)=0;
    for k=1:N2
        x4(n)=x4(n) + x3(k) * exp(j*2*pi*(n-1)*(k-1)/N2);
    end
end
x4=(1/N2).*x4;
disp('IDFT')
disp(x4)
figure(2);
freqz(x4)
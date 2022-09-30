
%Given signal is x=n+1;
x1=[3 3 5 7];
syms n;
syms x1;
n=0:1:3;
y1=ztrans(n,x1);
disp('The Z-Transform of x1 is : ')
disp(y1)
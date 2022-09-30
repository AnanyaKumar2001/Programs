
%Given signal is x=n+1;
x=[1 3 5 7];
syms n;
syms x;
n=1:1:4;
for i=1:n
    y(i)=0;
    y(i)=x(i-1)*power(z,-(i-1));
end
x=sum(y);
disp('The Z-Transform of x is : ')
disp(x)
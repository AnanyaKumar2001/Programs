x=input('Enter input sequence1: ');
N=length(x);
y=0;
z=0;

for k=1:N
    
    
    for n=1:N
        
        y=exp((-1j*2*pi*(k-1)*(n-1))/N);
        y=y.*x(n);
        z=z+y;
    end
    w(k)=z;
end
disp(w);
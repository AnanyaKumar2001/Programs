clc;
clear all;
close all;

%generates a set of 2000 samples of Gaussian distributed random numbers 
x=randn(1,2000);
%plot the joint distribution of both the sets using dot.

subplot(211)
plot(x,'.');

title('scatter plot of gaussian distributed random numbers'); 
ymu=mean(x)
ymsq=sum(x.^2)/length(x)
ysigma=std(x)
yvar=var(x)
yskew=skewness(x)
p=normpdf(x,ymu,ysigma);
subplot(212);
stem(x,p);
title(' gaussian distribution');

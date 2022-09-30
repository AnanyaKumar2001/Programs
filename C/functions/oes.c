#include<stdio.h>
int main()
{
	int x,y;
	FILE *fa,*fe,*fo;
	fa=fopen("int.txt","r");
	fo=fopen("odd.txt","w");
	fe=fopen("even.txt","w");

	while(!feof(fa))
	{
		fscanf(fa,"%d",&x);
		if(x%2==0)
		{
			fprintf(fe,"%d\n",x);
		}
		else
		{
			fprintf(fo,"%d\n",x);
		}

	}
	fclose(fa);
	fclose(fe);
	fclose(fo);
}
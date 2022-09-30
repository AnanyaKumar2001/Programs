#include<stdio.h>
int main()
{
	int val = 0;
	int factor = 1;
	for(int i = 0; i < str_size; ++i)
	{
	  const int cur_digit = str_size - i - 1;
	  if((str[cur_digit] >= '0') && (str[cur_digit] <= '8'))
	  {
	    val += (str[cur_digit] - '0') * factor;
	    factor *= 8;
	  }
	  else
	    break; // not octal
	}
}

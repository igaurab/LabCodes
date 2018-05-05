#include<iostream>

float func(float x)
{
	//Write your function here.
	return x*x-5; 
}

void falsi(float* c, float a, float b, float fa, float fb, int *itr)
{
	*c = a - (fa * ((b-a)/(fb-fa)));
	*itr +=1;
	 std::cout << "Iteration " << *itr << " Value of c: " << *c << std::endl;
}	

int main()
{	
	float a,b,c,fa,fb;
	int itr = 0;
	c= 0;
	std::cout << "Enter the interval a(-ve) and b(+ve) : ";
	std::cin >> a >> b;
	
	float checkC;
	
	do
	{
	checkC = c;
	fa = func(a);
	fb = func(b);
	
	falsi(&c,a,b,fa,fb,&itr);
	if(func(c) > 0)
		{
			b = c;
		}
		else
		{
			a =c;
		}
		
	}while(checkC!=c);
	std::cout << "The root is: " << c <<std::endl;
	return 0;
}
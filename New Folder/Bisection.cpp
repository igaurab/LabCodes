#include<iostream>

float func(float x)
{
	//Write your function here.
	return x*x-5; 
}

void bisect(float a, float b, float *c, int *itr)
{
	*c = (a+b)/2;
	*itr +=1;
	std::cout << "Iteration " << *itr << " Value of c: " << *c << std::endl;
}

int main()
{
	float a,b,c;
	c = 0;
	int itr=0;
	std::cout << "Enter the interval a(-ve) and b(+ve) : ";
	std::cin >> a >> b;
	
	float checkC;
	do
	{	checkC = c;
		bisect(a,b,&c,&itr);
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
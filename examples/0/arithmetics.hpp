#ifndef ARITHMETICS_HPP
#define ARITHMETICS_HPP

int myAdd(int a, int b)
{
	return a + b;
}

int mySub(int a, int b)
{
	return a - b;
}

int myMul(int a, int b)
{
	return a * b;
}

int myDiv(int a, int b)
{
	if(b == 0)
	{
		return 0;
	}
	return a / b;
}

#endif // ARITHMETICS_HPP

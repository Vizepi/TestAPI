RegisterTest("Divide two positive numbers",
	TEST
	{
		int r = myDiv(18, 4);
		if(r == 4)
		{
			TEST_SUCCESS
		}
		TEST_FAILURE
	}
);

RegisterTest("Divide a positive number by zero",
	TEST
	{
		int r = myDiv(18, 0);
		if(r == 0)
		{
			TEST_SUCCESS
		}
		TEST_FAILURE
	}
);

RegisterTest("Divide zero by a positive number",
	TEST
	{
		int r = myDiv(0, 4);
		if(r == 0)
		{
			TEST_SUCCESS
		}
		TEST_FAILURE
	}
);

RegisterTest("Divide a negative number by zero",
	TEST
	{
		int r = myDiv(-18, 0);
		if(r == 0)
		{
			TEST_SUCCESS
		}
		TEST_FAILURE
	}
);

RegisterTest("Divide zero by a negative number",
	TEST
	{
		int r = myDiv(0, -4);
		if(r == -0)
		{
			TEST_SUCCESS
		}
		TEST_FAILURE
	}
);

RegisterTest("Divide a positive number by a negative number",
	TEST
	{
		int r = myDiv(18, -4);
		if(r == -4)
		{
			TEST_SUCCESS
		}
		TEST_FAILURE
	}
);

RegisterTest("Divide a negative number by a positive number",
	TEST
	{
		int r = myDiv(-18, 4);
		if(r == -4)
		{
			TEST_SUCCESS
		}
		TEST_FAILURE
	}
);

RegisterTest("Divide two negative numbers",
	TEST
	{
		int r = myDiv(-18, -4);
		if(r == 4)
		{
			TEST_SUCCESS
		}
		TEST_FAILURE
	}
);

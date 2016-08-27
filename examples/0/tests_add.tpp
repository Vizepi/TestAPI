RegisterTest("Add two positive numbers",
	TEST
	{
		int r = myAdd(5, 6);
		if(r == 11)
		{
			TEST_SUCCESS
		}
		TEST_FAILURE
	}
);

RegisterTest("Add a positive number with zero",
	TEST
	{
		int r = myAdd(5, 0);
		if(r == 5)
		{
			TEST_SUCCESS
		}
		TEST_FAILURE
	}
);

RegisterTest("Add zero with a positive number",
	TEST
	{
		int r = myAdd(0, 6);
		if(r == 6)
		{
			TEST_SUCCESS
		}
		TEST_FAILURE
	}
);

RegisterTest("Add a negative number with zero",
	TEST
	{
		int r = myAdd(-5, 0);
		if(r == -5)
		{
			TEST_SUCCESS
		}
		TEST_FAILURE
	}
);

RegisterTest("Add zero with a negative number",
	TEST
	{
		int r = myAdd(0, -6);
		if(r == -6)
		{
			TEST_SUCCESS
		}
		TEST_FAILURE
	}
);

RegisterTest("Add a positive number with a negative number",
	TEST
	{
		int r = myAdd(5, -6);
		if(r == -1)
		{
			TEST_SUCCESS
		}
		TEST_FAILURE
	}
);

RegisterTest("Add a negative number with a positive number",
	TEST
	{
		int r = myAdd(-5, 6);
		if(r == 1)
		{
			TEST_SUCCESS
		}
		TEST_FAILURE
	}
);

RegisterTest("Add two negative numbers",
	TEST
	{
		int r = myAdd(-5, -6);
		if(r == -11)
		{
			TEST_SUCCESS
		}
		TEST_FAILURE
	}
);

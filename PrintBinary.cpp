void Dec2Bin(int n)                                                        
{
	//Used Bitwise operators bcoz they are faster than arithmetic operators
	//it can also be done by using arrays but it consumes extra space
	
	//ASSUMMING size of integer is 32 bit
	for(int i=31;i>=0;i--)
	{
		//traversing n bitwise
		int k=n>>i;
		if(k&1)
		{
			cout<<"1";
		}
		else
		{
			cout<<"0";
		}
		
	}
}

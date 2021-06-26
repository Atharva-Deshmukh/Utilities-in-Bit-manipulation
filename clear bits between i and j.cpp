int ClearBits(int n,int i,int j)
{
	//I am using masking
	int allones=~0;  //if assumed 8 bits its equal to 11111111
	
	//creating masks to preserve bits on both sides of the interval [i,j] excluded
	int leftmask=allones<<(j+1);   // say i=2,j=4 : we get  11100000
	int rightmask=((1<<i)-1);        //we get 00000011
	
	int mask=leftmask|rightmask;   //we get 11100011
	
	//now its time to clear n. we use Bitwise AND here to preserve all the bits other than [i,j]
	int n_cleared=(n & mask);
	
	return n_cleared;
}

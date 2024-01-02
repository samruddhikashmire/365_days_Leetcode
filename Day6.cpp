//Armstrong number
/*You are given an integer 'n'.
Return 'true' if 'n' is an Armstrong number, and 'false' otherwise.*/

bool checkArmstrong(int n){
	//Write your code here
    int count = 0;
	int temp = n;
	while(temp != 0)
	{
		count++;
		temp = temp / 10;
	}
	int sum=0;
	temp = n;
	while(temp!=0)
	{
		int last = temp % 10 ;
		sum += pow(last,count);
		temp = temp / 10;
	}
	return (n==sum);


   
}



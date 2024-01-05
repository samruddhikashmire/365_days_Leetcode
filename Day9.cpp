
/*                            POWER OF TWO  
APPROACH 1 USING RECURSSION
*/
   int powerr(double x , int n)
       {

         if(n<0)
         return postive(x,n);
         else
         return negative(x,n);

       }


double postive(double x,int n)
{
    if(x==0)
      return 1;
    else
    {
        double smallOutput=powerr(x,n/2);
        if(n%2==0)
        return smallOutput*smallOutput;
        else
        return x*smallOutput*smallOutput;
    }
    
}

double negative(double x,int n)
{
    if(x==0)
      return 1;
    else
    {
        double smallOutput=powerr(x,n/2);
        if(n%2==0)
        return smallOutput*smallOutput;
        else
        return (1/x)*smallOutput*smallOutput;
    }
    
}

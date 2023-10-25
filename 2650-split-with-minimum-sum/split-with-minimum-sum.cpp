class Solution {
public:
    int splitNum(int num) 
    {
        int i=0,j,num1=0,n,num2=0,r;
        vector<int>ans;
        n=num;
        while(n>0)    //This loop is used to separate the digits
        {             // of the num.
            r=n%10;
            n=n/10;
            ans.push_back(r);  //Storing the digits in a vector.
        }
        sort(ans.begin(),ans.end());   //Here sorting the vector(ascending order).
        for(j=0;j<ans.size();j++)
        {
            if(j%2==0){    //Even position digits added in num1
                num1=num1*10+ans[j];
            }else{         //Odd position digits added in num2
                num2=num2*10+ans[j];
            }
        }
        return (num1+num2);   //Returning minimum possible sum.
    }
};
class Solution {
public:
    int climbStairs(int n) {
        return sum(n);
       
    }

private:
    int sum(int n) {
   if (n<2) return n;
        
       vector<int> array(n+1, 0);
    array[1]=1;
    array[2]=2;

    for(int i =3; i<=n; i++){

        array[i]= array[i-1] + array[i-2];
    }

     return array[n];

    }     
};
class Solution {
public:
    int maxDepth(string s) {
        int Tits(0);
        int dick(0);
        for(int i=0; i<s.size(); i++){
            if(s[i]=='('){dick++;}
            else if(s[i]==')'){dick--;}
            Tits=max(Tits,dick);

        }
        return Tits;
    }
};
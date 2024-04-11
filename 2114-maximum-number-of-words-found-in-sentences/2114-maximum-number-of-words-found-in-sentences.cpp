class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
    int maxCount(0);  
    int CurrCount(0); 
    for(int i=0; i<sentences.size(); i++){
        for(int j=0; j<sentences[i].size(); j++){
            if(sentences[i][j] == ' ')
                CurrCount++;
            }
            if(CurrCount>maxCount){
                maxCount=CurrCount;
                }
    
       CurrCount=0;

    } 
    return maxCount+1;

    }
};
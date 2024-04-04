class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
    int sydneyTit_1(0);  
    int sydneyTit_2(0); 
    for(int i=0; i<sentences.size(); i++){
        for(int j=0; j<sentences[i].size(); j++){
            if(sentences[i][j] == ' ')
                sydneyTit_2++;
            }
            if(sydneyTit_2>sydneyTit_1){
                sydneyTit_1=sydneyTit_2;
                }
    
        sydneyTit_2=0;

    } 
    return sydneyTit_1+1;

    }
};
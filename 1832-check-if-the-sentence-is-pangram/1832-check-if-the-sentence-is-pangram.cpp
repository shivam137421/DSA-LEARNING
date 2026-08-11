class Solution {
public:
    bool checkIfPangram(string sentence) {
        int n=sentence.size();
        if(n<26){
            return false;
        }
        for(char i='a';i<='z';i++){
            if(sentence.contains(i)){
                continue;
            }
            else{
                return false;
            }
        }
        return true;
    }
};
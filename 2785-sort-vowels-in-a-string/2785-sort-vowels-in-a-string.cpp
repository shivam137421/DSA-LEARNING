class Solution {
public:
    string sortVowels(string s) {
        int n=s.size();
        string lowervowel="aeiou";
        string uppervowel="AEIOU";
        string vowel="";
        for(int i=0;i<n;i++){
            if(lowervowel.contains(s[i]) || uppervowel.contains(s[i])){
                vowel+=s[i];
            }
        }
        sort(vowel.begin(),vowel.end());
        int j=0;
        for(int i=0;i<n;i++){
             if(lowervowel.contains(s[i]) || uppervowel.contains(s[i])){
                s[i]=vowel[j];
                j++;
             }
        }
        return s;
        
    }
};
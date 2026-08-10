class Solution {
public:
    string defangIPaddr(string address) {
        int n=address.size();
        int i=0;
        while(i<n){
            if(address[i]=='.'){
                address.insert(address.begin()+i,'[');
                address.insert(address.begin()+(i+2),']');
                n=address.size();
                i+=3;
            }
            else{
                i++;
            }
        }
        return address;
    }
};
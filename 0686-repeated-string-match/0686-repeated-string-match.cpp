class Solution {
public:
    bool find(string first, string second) {
        int a = first.size();
        int b = second.size();
        vector<int> lps(b, 0);
        int pre = 0;
        int suf = 1;
        while (suf < b) {
            if (second[pre] == second[suf]) {
                lps[suf]=pre+1;
                pre++;
                suf++;
            } else {
                if (pre == 0) {
                    lps[suf] = 0;
                    suf++;
                } else {
                    pre = lps[pre - 1];
                }
            }
        }
        pre = 0;
        suf = 0;
        while (pre < a && suf < b) {
            if (first[pre] == second[suf]) {
                pre++;
                suf++;
            } else {
                if (suf == 0) {
                    pre++;
                } else {
                    suf = lps[suf - 1];
                }
            }
        }
        if (suf == b) {
            return true;
        }
        return false;
    }
    int repeatedStringMatch(string a, string b) {
        int sizea = a.size();
        int sizeb = b.size();
        int repeat = 1;
        string temp=a;
        while (a.size() < b.size()) {
            a += temp;
            repeat++;
        }
        cout<<a<<endl;
        if (find(a, b)) {
            cout<<"here"<<endl;
            return repeat;
        }

        a += a;
        if (find(a, b)) {
            return repeat + 1;
        }
    return -1;
    }
};


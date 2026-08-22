class Solution {
public:
    bool isVowel(char c) {
        return c == 'a' || c == 'A' ||
               c == 'e' || c == 'E' ||
               c == 'i' || c == 'I' ||
               c == 'o' || c == 'O' ||
               c == 'u' || c == 'U';
    }

    string reverseVowels(string s) {
        int i = 0;
        int j = s.size() - 1;

        while(i < j) {

            if(!isVowel(s[i])) {
                i++;
            }
            else if(!isVowel(s[j])) {
                j--;
            }
            else {
                swap(s[i], s[j]);
                i++;
                j--;
            }
        }

        return s;
    }
};
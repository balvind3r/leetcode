//A pangram is a sentence where every letter of the English alphabet appears at least once.
//Given a string sentence containing only lowercase English letters, return true if sentence is a pangram, or false otherwise.

class Solution {
public:
    bool checkIfPangram(string sentence) {
        string eng = "abcdefghijklmnopqrstuvwxyz";
        int count=0;
        for (int i = 0; i < 26; i++)
        {
            for (int j = 0; j < sentence.length(); j++)
            {
                if (eng[i] == sentence[j])
                {
                    count++;
                    break;
                }
            }
        } if(count==26){
            return true;
        } else{
            return false;
        }
    }
};
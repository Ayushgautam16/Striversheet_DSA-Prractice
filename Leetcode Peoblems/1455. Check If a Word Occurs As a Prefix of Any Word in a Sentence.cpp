// 1455. Check If a Word Occurs As a Prefix of Any Word in a Sentence

class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        vector<string> words; // To store the words

        // Create a string stream from the sentence
        istringstream stream(sentence);
        string word;
        int cnt=0;
        // Extract words from the stream
        while (stream >> word) {
            cnt++;
            if(word.compare(0, searchWord.size(), searchWord) == 0){
                return cnt;
            }
     
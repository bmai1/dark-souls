class Solution {
public:
    string majorityFrequencyGroup(string s) {
        int freq[26]; // frequency of character in s
        int ff[101];  // frequency of frequency

        for (char c : s) {
            freq[c - 'a']++;
        }

        int max_freq = 0, max_k = 0;
        for (int f : freq) {
            if (f != 0) {
                int count = ++ff[f];

                if (count > max_freq || (count == max_freq && f > max_k)) {
                    max_freq = count;
                    max_k = f;
                }
            }
        }

        string res;
        for (int i = 0; i < 26; ++i) {
            if (freq[i] == max_k) {
                res += (i + 'a');
            }
        }
        return res;
    }
};

class Solution {
public:
    string convert(string s, int row) {
        if (row == 1)
            return s;
        int count = 2;
        for (int j = 2; j < row; j++) {
            count += 2;
        }

        string s1 = "";
        for (int i = 0; i < row; i++) {
            int j = i;
            
            while (j < s.size()) {
                s1 += s[j];
                if (i != 0 && i != row - 1) {
                    int zigzagIdx = j + count - (2 * i);
                    if (zigzagIdx < s.size()) {
                        s1 += s[zigzagIdx];
                    }
                }
                j += count;
            }
        }
        return s1;
    }
};
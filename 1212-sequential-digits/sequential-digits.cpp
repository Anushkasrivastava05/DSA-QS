class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> ans;
        string digits = "123456789";
        
        // Sequential numbers ki length 2 se lekar 9 tak ho sakti hai
        for (int length = 2; length <= 9; length++) {
            // Iss length ke liye string par slide karenge
            for (int start_idx = 0; start_idx <= 9 - length; start_idx++) {
                // Substring nikaali aur usko number mein convert kiya
                string sub = digits.substr(start_idx, length);
                int num = stoi(sub);
                
                // Agar number range ke andar hai toh add karo
                if (num >= low && num <= high) {
                    ans.push_back(num);
                }
            }
        }
        
        return ans;
    }
};
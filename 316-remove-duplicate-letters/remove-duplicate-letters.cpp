class Solution {
public:
    string removeDuplicateLetters(string s) {
        unordered_map<char, int> lastSeen;
        unordered_set<char> visited;
        stack<char> stackResult;
        string result = "";
        int n = s.size();

        for(int i = 0; i < n; i++) {
            lastSeen[s[i]] = i;
        }

        for(int i = 0; i < n; i++) {
            if(visited.contains(s[i])) {
                continue;
            }

            while(!stackResult.empty() && stackResult.top() > s[i] && i < lastSeen[stackResult.top()]) {
                visited.erase(stackResult.top());
                stackResult.pop();
            }

            visited.insert(s[i]);
            stackResult.push(s[i]);
        }

        while(!stackResult.empty()) {
            result = stackResult.top() + result;
            stackResult.pop();
        }

        return result;
    }
};
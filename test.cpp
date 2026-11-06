        sort(input.begin(), input.end());

        vector<int> result;
        int answer = 0;
        int jump = k - 1;

        for (int i = jump; i < n; i += k) {
            result.push_back(input[i]);

        }

        for (int i = 0; i < (int)result.size(); i++) {
            if (result[i] == answer) {
                answer++;
            } else if (result[i] > answer) {
                break;
            }
        }
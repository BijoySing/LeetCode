class Solution {
public:
    vector<int> findPeaks(vector<int>& mountain) {
        vector<int> peaks;
        int num_of_peaks = mountain.size();
        for (int i = 1; i < num_of_peaks - 1; i++) {
            if (mountain[i] > mountain[i - 1] and mountain[i] > mountain[i + 1])
                peaks.push_back(i);
        }
        return peaks;
    }
};
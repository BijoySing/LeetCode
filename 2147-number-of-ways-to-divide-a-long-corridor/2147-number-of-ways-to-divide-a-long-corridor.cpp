
class Solution {
public:
    int numberOfWays(std::string corridor) {
        int seat = 0, res = 1, plant = 0;

        for (char i : corridor) {
            if (i == 'S')
                seat += 1;
            else
                if (seat == 2)
                    plant += 1;

            if (seat == 3) {
                res = (static_cast<long long>(res) * (plant + 1)) % (1000000007);
                seat = 1;
                plant = 0;
            }
        }

        if (seat != 2)
            return 0;

        return res;
    }
};



class NumberContainers {
public:
    unordered_map<int, int> id;
    map<int, std::set<int>> num;

    NumberContainers() {}

    void change(int index, int number) {
        if (id.count(index)) {
            num[id[index]].erase(index);
            if (num[id[index]].empty()) num.erase(id[index]);
        }
        id[index] = number;
        num[number].insert(index);
    }

    int find(int number) {
        return num.count(number) && !num[number].empty() ? *num[number].begin() : -1;
    }
};

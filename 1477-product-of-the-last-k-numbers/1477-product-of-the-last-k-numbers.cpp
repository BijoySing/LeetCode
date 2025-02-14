class ProductOfNumbers {
public:
    vector<int> prefixProd = {1};
    void add(int num) {
        if (num == 0) {
            prefixProd = {1}; 
        } else {
            prefixProd.push_back(prefixProd.back() * num);
        }
    }
    int getProduct(int k) {
        if (k >= prefixProd.size()) return 0;
        return prefixProd.back() / prefixProd[prefixProd.size() - k - 1];
    }
};

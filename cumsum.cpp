template <typename T>
class Cumsum {
private:
    vector<T> cum;
    int N;
public:
    Cumsum(vector<T> array) {
        N = array.size();
        cum.resize(N + 1, 0);
        for(int i = 0; i < N; i++) {
            cum[i + 1] = cum[i] + array[i];
        }
    }

    T get(int L, int R) {
        return cum[R] - cum[L];
    }
};
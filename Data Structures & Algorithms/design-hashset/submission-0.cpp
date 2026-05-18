class MyHashSet {
private:
    int numBuckets;
    vector<list<int>> buckets;

    int getHash(int key){
        return key % numBuckets;
    }

public:
    MyHashSet() {
        numBuckets = 10007;
        buckets = vector<list<int>>(numBuckets);
    }
    
    void add(int key) {
        int index = getHash(key);
        auto it = find(buckets[index].begin(), buckets[index].end(), key);

        if(it == buckets[index].end()){
            buckets[index].push_back(key);
        }
    }
    
    void remove(int key) {
        int index = getHash(key);
        auto it = find(buckets[index].begin(), buckets[index].end(), key);

        if (it != buckets[index].end()) {
            buckets[index].erase(it);
        }            
    }
    
    bool contains(int key) {
        int index = getHash(key);
        auto it = find(buckets[index].begin(), buckets[index].end(), key);

        return it != buckets[index].end();
    }
};

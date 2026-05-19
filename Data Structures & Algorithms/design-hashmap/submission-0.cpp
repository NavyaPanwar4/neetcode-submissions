class MyHashMap {
private:
    int numBuckets;

    vector<list<pair<int, int>>> buckets;

    int getHash(int key){
        return key % numBuckets;
    }
public:
    MyHashMap() {
        numBuckets = 10007;
        buckets.resize(numBuckets);
    }
    
    void put(int key, int value) {
        int index = getHash(key);

        for(auto& p : buckets[index]){
            if(p.first == key){
               p.second = value;
               return;
            }
        }
        buckets[index].push_back({key, value});
    }
    
    int get(int key) {
        int index = getHash(key);

        for(const auto& p : buckets[index]){
            if(p.first == key){
                return p.second;
            }
        }
        return -1;
    }
    
    void remove(int key) {
       int index = getHash(key);
       auto& bucket = buckets[index];

        for(auto it = bucket.begin(); it != bucket.end(); ++it){
            if(it->first == key){
                bucket.erase(it);
                return;
            }
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */
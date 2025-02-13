//Space Complexity - O(n)

class MyHashMap {
public:
    /** Initialize your data structure here. */
    int arr[1000001];
    MyHashMap() {
        memset(arr,-1,sizeof(arr));
    }
    
    //Time Complexity- O(1)
    /** value will always be non-negative. */
    void put(int key, int value) {
        arr[key]=value;
    }
    
    //Time Complexity- O(1)
    /** Returns the value to which the specified key is mapped, or -1 if this map contains no mapping for the key */
    int get(int key) {
        return arr[key];
    }
    
    //Time Complexity- O(1)
    /** Removes the mapping of the specified value key if this map contains a mapping for the key */
    void remove(int key) {
        arr[key]=-1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */
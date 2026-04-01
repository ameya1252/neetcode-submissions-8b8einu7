class LRUCache {
public:

     struct Node{
            int key;
            int value;
            Node* prev;
            Node* next;
        };

        unordered_map<int, Node*> cache;
        int capacity;

        Node* head;
        Node* tail;


    LRUCache(int capacity) {

        this->capacity = capacity;

        head = new Node();
        tail = new Node();

        head->next = tail;
        tail->prev = head;
        
    }

    void remove(Node* node){
        node->prev->next = node->next;
        node->next->prev = node->prev;
    }
    
    void insert(Node* node){

        node->next = head->next;
        node->prev = head;

        head->next->prev = node;         
        head->next = node;

    }

    int get(int key) {
        if(cache.count(key)){
            
            Node* node = cache[key];

            remove(node);
            insert(node);

            return node->value;
        }
        return -1;
    }
    
    void put(int key, int value) {
        if(cache.count(key)){

            Node* node = cache[key];
            node->value = value;

            remove(node);
            insert(node);
        }
        else{

        if(cache.size() == capacity){

            Node* lru = tail->prev;
            remove(lru);
            cache.erase(lru->key);
        }

        Node* node = new Node();
        node->key = key;
        node->value = value;

        insert(node);
        cache[key] = node;
    }

    
    }
};

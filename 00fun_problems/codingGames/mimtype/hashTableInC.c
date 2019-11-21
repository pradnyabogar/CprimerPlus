
// hash_table.h
typedef struct {
    char* ext;
    char* mt;
} ht_item;

// hash_table.h
typedef struct {
    int N;
    int i;
    ht_item** items;
} ht_hash_table;

static ht_item* ht_new_item(const char* k, const char* v) {
    ht_item* i = malloc(sizeof(ht_item));
    i->ext = strdup(k);
    i->mt = strdup(v);
    return i;
}

// hash_table.c
ht_hash_table* ht_new() {
    ht_hash_table* ht = malloc(sizeof(ht_hash_table));

    //ht->size = N;
    //ht->count = i;
    ht->items = calloc((size_t)ht->size, sizeof(ht_item*));
    return ht;
}

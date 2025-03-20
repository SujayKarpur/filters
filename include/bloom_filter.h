#ifndef BLOOM_FILTER_H
#define BLOOM_FILTER_H 

#include <vector> 
#include <functional>

template <typename T> 
class BloomFilter 
{
    public: 
    BloomFilter(int size, int k); 
    void insert(const T &key);
    bool query(const T &key);
};

#endif 
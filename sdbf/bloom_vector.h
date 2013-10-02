#include <vector>

#include "bloom_filter.h"
#include "blooms.pb.h"


class bloom_vector {

public:
    bloom_vector(blooms::BloomVector *vect);
    void add_filter(blooms::BloomFilter *srcfilter, int folds);
    int compare(bloom_vector *other, double scale);
    std::vector<bloom_filter*> *items;

private:
    string name;
    int filter_count;
    uint64_t filesize;
};

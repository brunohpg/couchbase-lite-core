//
//  Base.hh
//  CBForest
//
//  Created by Jens Alfke on 7/21/16.
//  Copyright © 2016 Couchbase. All rights reserved.
//

#ifndef Base_h
#define Base_h

#include "slice.hh"


namespace cbforest {
    using fleece::slice;
    using fleece::alloc_slice;

    typedef uint64_t sequence;

    typedef sequence sequence_t;    // Sometimes used for disambiguation with a sequence() method
}


#endif /* Base_h */
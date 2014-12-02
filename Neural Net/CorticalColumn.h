//
//  CorticalColumn.h
//  Neural Net
//
//  Created by Jeremy Hartmann on 2014-12-01.
//  Copyright (c) 2014 Jeremy Hartmann. All rights reserved.
//

#ifndef __Neural_Net__CorticalColumn__
#define __Neural_Net__CorticalColumn__

#include <stdio.h>
#include "def.h"
#include <vector>
#include  <memory>
#include "neuron.h"

#endif /* defined(__Neural_Net__CorticalColumn__) */

using namespace std;

class CorticalColumn {

public:
    Cortex::NRETURNCODE populateColumn(int lower = 160, int upper = 240);
    
    
    
private:
    unique_ptr<vector<Neuron>> cColummn;
    
    
    
    
};
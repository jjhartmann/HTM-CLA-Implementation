//
//  neuron.h
//  Neural Net
//
//  Created by Jeremy Hartmann on 2014-11-30.
//  Copyright (c) 2014 Jeremy Hartmann. All rights reserved.
//

#ifndef __Neural_Net__neuron__
#define __Neural_Net__neuron__

#include <stdio.h>
#include <stdlib.h>
#include <map>
#include "def.h"

#endif /* defined(__Neural_Net__neuron__) */
class Neuron {
    
public:
    Neuron();
    Cortex::NRETURNCODE setConnection(const Cortex::UINT index);
    Cortex::NRETURNCODE breakConnection(const Cortex::UINT index);
    
    Cortex::NWEIGHT getConnectionWeight(const Cortex::UINT  index);
    
    Cortex::NSTATE getState(const Cortex::UINT  index);
    void setState(const Cortex::NSTATE state);
    
    
    
    
private:
    std::map<Cortex::UINT, Cortex::NWEIGHT> nConnection;
    std::map<Cortex::UINT, Cortex::NWEIGHT> nActiveConnection;
    std::map<Cortex::UINT, Cortex::NWEIGHT> nDisabledConnection;
    
    // 0 = inactive
    // 1 = active
    // 2 = feed forward
    Cortex::NSTATE nState;
    
    
    
    
};
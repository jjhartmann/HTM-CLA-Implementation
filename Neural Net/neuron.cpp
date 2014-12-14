//
//  neuron.cpp
//  Neural Net
//
//  Created by Jeremy Hartmann on 2014-11-30.
//  Copyright (c) 2014 Jeremy Hartmann. All rights reserved.
//

#include "neuron.h"



// Constructor
Neuron::Neuron()
{
    
}

// Set up connection between nueron of same column
//
Cortex::NRETURNCODE Neuron::setConnection(const Cortex::UINT index)
{
    try
    {
    
        Cortex::NWEIGHT tempWeight =  rand() % 101; // Between 0 and 100
        nConnection.insert(std::pair<Cortex::UINT, Cortex::NWEIGHT>(index, tempWeight));
    
    } catch (...)
    {
        return Cortex::NERROR;
    }
    
    return Cortex::NSUCCESS;
    
}

// Disable and delete connection of neurons
Cortex::NRETURNCODE Neuron::breakConnection(const Cortex::UINT index)
{
    
    return Cortex::NSUCCESS;
}


// Get the connection weight for the neuron
Cortex::NWEIGHT Neuron::getConnectionWeight(const Cortex::UINT  index)
{
    
    return nConnection.find(index)->second;
}


// Get current state of the nueron
// 0 = inactive
// 1 = active
// 2 = feed forward
Cortex::NSTATE Neuron::getState(const Cortex::UINT  index)
{
    return nState;
}

void Neuron::setState(const Cortex::NSTATE state)
{
    nState = state;
}
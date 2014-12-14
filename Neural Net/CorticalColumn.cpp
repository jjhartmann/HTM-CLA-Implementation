//
//  CorticalColumn.cpp
//  Neural Net
//
//  Created by Jeremy Hartmann on 2014-12-01.
//  Copyright (c) 2014 Jeremy Hartmann. All rights reserved.
//

#include "CorticalColumn.h"


/// PUBLIC

CorticalColumn::CorticalColumn()
{
    cColummn = nullptr;
    populateColumn();
}

Cortex::NRETURNCODE CorticalColumn::populateColumn(int lower, int upper)
{
    try {
        int avg = lower + (upper - lower)/2;
    
        if (!(cColummn == nullptr))
        {
            cColummn.reset();
        }
        
        cColummn = unique_ptr<vector<Neuron>>(new vector<Neuron>);
        
        for (int i = 0; i < avg; ++i){
            cColummn->push_back(Neuron());
        }
    
        
    }
    catch (...)
    {
        return Cortex::NERROR;
    }
    
    
    return Cortex::NSUCCESS;
}

Cortex::NRETURNCODE CorticalColumn::createConnection(int index)
{
    try
    {
        Cortex::NWEIGHT tempWeight =  rand() % 101; // Between 0 and 100%
        cConnection.insert(pair<Cortex::UINT, Cortex::NWEIGHT>(index, tempWeight));
    }
    catch (...)
    {
        return Cortex::NERROR;
    }
    
    
    return Cortex::NSUCCESS;
}
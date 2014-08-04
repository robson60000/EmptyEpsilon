#ifndef SHIP_SELECTION_SCREEN_H
#define SHIP_SELECTION_SCREEN_H

#include "gui.h"
#include "playerInfo.h"

class ScenarioInfo
{
public:
    string filename;
    string name;
    string description;
};

class ShipSelectionScreen : public GUI
{
    std::vector<ScenarioInfo> scenarios;    //Server only
    int active_scenario_index;              //Server only
    int ship_template_index;                //Server only
public:
    ShipSelectionScreen();
    
    virtual void onGui();

private:
    void startScenario();   //Server only
};

#endif//SHIP_SELECTION_SCREEN_H

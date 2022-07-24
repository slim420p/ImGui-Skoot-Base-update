#pragma once

#include "..\SDK\singleton.h"

class Settings
{

private:

public:
    /* All our settings variables will be here  *
    * The best would be if they'd get          *
    * initialized in the class itself.         */

    bool  bCheatActive = true;
};

extern Settings g_Settings;
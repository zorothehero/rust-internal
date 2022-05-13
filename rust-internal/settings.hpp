#pragma once

enum class Tab
{
    Visuals,
    Combat
};

namespace settings
{
    Tab currentTab = Tab::Visuals;
    bool showMenu = true;

    namespace player
    {
        bool esp = false;
        bool health = false;
        bool skeleton = false;
        bool distance = false;
    }

    
    
}
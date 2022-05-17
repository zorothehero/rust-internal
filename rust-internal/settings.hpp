#pragma once

enum class Tab
{
    Visuals,
    Combat,
    Misc
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

    namespace misc
    {
        bool flyhackbar = false;
        bool antiflyhack = false;
        bool AdminMode = false;
        bool inf_jump = false;
    }
    
}
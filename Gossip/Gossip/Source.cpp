#include "ScriptPCH.h"

class tutorial_group: public CreatureScript {
public:
    tutorial_group() : CreatureScript("tutorial_group") = default;

    bool onGossipHello(Player *player, Creature *creature) {
        return true;
    }
};

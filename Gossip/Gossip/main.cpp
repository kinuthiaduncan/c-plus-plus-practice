
#include "ScriptPCH.h"

#ifdef WIN32
#pragma warning(disable:4305)
#endif


class SCRIPT_DECL GossipNPC : public GossipScript {
public:

void GossipHello(Object *pObject, Player *Plr, bool AutoSend);

void GossipSelectOption(Object *pObject, Player *Plr, uint32 Id, uint32 IntId, const char *Code);

void GossipEnd(Object *pObject, Player *Plr);

void Destroy() {
    delete this;
}

};

void GossipNPC::GossipHello(Object * pObject, Player* Plr, bool AutoSend) {
    GossipMenu *Menu;
    objmgr.CreateGossipMenuForPlayer(&Menu, pObject->GetGUID(), 1, Plr);
    Menu->AddItem(0, "Teleport me to Tanaris", 1);
    Menu->AddItem(5, "Nevermind", 2);
    if (AutoSend)
        Menu->SendTo(Plr);
}


void GossipNPC::GossipSelectOption(Object * pObject, Player* Plr, uint32 Id, uint32 IntId, const char * Code) {
    Creature *pCreature = (pObject->GetTypeId() == TYPEID_UNIT) ? ((Creature *) pObject) : NULL;
    if (pCreature == NULL)
        return;
    GossipMenu *Menu;
    switch (IntId) {
        case 0:
            GossipHello(pObject, Plr, true);
            break;

        case 1:
            Plr->Gossip_Complete();
            Plr->EventTeleport(1, -6942.47, -4847.1, 0.667853);
            break;

        case 2:
            Plr->Gossip_Complete();
            break;
    }
};


void SetupGossipNPC(ScriptMgr * mgr) {
    GossipScript * gs = (GossipScript * )
    new GossipNPC();
    mgr->register_gossip_script(55555, gs);
}
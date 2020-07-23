#include "Stdafx.h"
#include "Setup.h"
#include<iostream>
#include <string.h>
#ifdef WIN32
#pragma warning(disable:4305)
#endif

#define NPC 55555

class SCRIPT_DECL CodeBox : public GossipScript {

public:

void GossipHello(Object *pObject, Player *Plr, bool AutoSend);

void GossipSelectOption(Object *pObject, Player *Plr, uint32 Id, uint32 IntId, const char *Code);

void GossipEnd(Object *pObject, Player *Plr);

void Destroy() {
    delete this;
}

struct CodeBoxes;
};
struct CodeBox::CodeBoxes {
    const char *OptionText; //String for gossip to display
    string EntryCode;            //Code to enter for reward
    uint32 ItemId;            //Item Id for reward
};


void CodeBox::GossipHello(Object * pObject, Player* Plr, bool AutoSend) {
    GossipMenu *Menu;
    Menu->AddItem(10, "I would like to enter a code for a reward", 2, 1);
    if (AutoSend)
        Menu->SendTo(Plr);
}

void CodeBox::GossipSelectOption(Object * pObject, Player* Plr, uint32 Id, uint32 IntId, const char * Code)
{
	//Define your code box information
	///How many code boxes you want
	//CodeBoxes CodeBox[2];//must be equal to int codes below
	CodeBoxes CodeBox[2];
	int codes = 2;//must be equal to integer inside brackets
	//Define Code Options 1- ect.
	CodeBox[1].OptionText = "Test1";
	CodeBox[1].EntryCode = "1Test";
	CodeBox[1].ItemId = 22253;
	CodeBox[2].OptionText = "Test2";
	CodeBox[2].EntryCode = "2Test";
	CodeBox[2].ItemId = 4325;

	bool AutoSend = true;

	GossipMenu *Menu;

	switch (IntId) {
        case 0:
            GossipHello(pObject, Plr, true);
            break;

        case 1:

            for (int i = 1; i < codes; i++) {
                if (Code == CodeBox[i].EntryCode) {
                    Item *item = objmgr.CreateItem(CodeBox[i].ItemId, Plr);
                    Plr->GetItemInterface()->AddItemToFreeSlot(item);
                }
            }
            break;

        case 2:

            for (int i = 0; i < codes; i++) {
                Menu->AddItem(10, CodeBox[i].OptionText, i, 1);
            }

            break;
    }
}

void CodeBox::GossipEnd(Object * pObject, Player* Plr) {
    GossipScript::GossipEnd(pObject, Plr);
}

void SetupCode(ScriptMgr * mgr) {
    GossipScript * gs = (GossipScript * )
    new CodeBox();
    mgr->register_gossip_script(NPC, gs);
}

#ifndef EVE_BRAIN_H
#define EVE_BRAIN_H

#include "../../../../../../config.h"
#include "../../../../../action/action.h"
#include "../../../../../random/random.h"

#include <memory>

namespace brain {
    enum Nature {LUST, GLUTTONY, GREED, SLOTH, WRATH, ENVY, PRIDE};
    static unsigned long const Color[] {CLUST, CGLUTTONY, CGREED, CSLOTH, CWRATH, CENVY, CPRIDE};
}

class Brain {
protected:
    static Uniform dice;

public:
    const brain::Nature nature = brain::LUST;

    virtual Action think (const std::unique_ptr <std::vector <Object *>> & visibles, double energy) = 0;

};


#endif //EVE_BRAIN_H

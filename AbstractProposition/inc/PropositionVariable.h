//
// Created by tijsh on 27-11-2022.
//

#ifndef LOGIC_PROPOSITIONVARIABLE_H
#define LOGIC_PROPOSITIONVARIABLE_H

#include "Proposition.h"

class PropositionVariable : public Proposition {
public:
    PropositionVariable(char letter);

    std::string getString() const override;

    PropositionType getPropositionType() const override;

private:
    char m_letter;
};


#endif //LOGIC_PROPOSITIONVARIABLE_H

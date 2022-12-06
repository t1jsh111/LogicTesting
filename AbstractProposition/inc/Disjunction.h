//
// Created by tijsh on 27-11-2022.
//

#ifndef LOGIC_DISJUNCTION_H
#define LOGIC_DISJUNCTION_H

#include "Proposition.h"
#include <memory>

class Disjunction : public Proposition {
public:
    Disjunction(std::unique_ptr<Proposition> left, std::unique_ptr<Proposition> right);

    std::string getString() const override;

    PropositionType getPropositionType() const override;

private:
    std::unique_ptr<Proposition> m_left;
    std::unique_ptr<Proposition> m_right;


};


#endif //LOGIC_DISJUNCTION_H

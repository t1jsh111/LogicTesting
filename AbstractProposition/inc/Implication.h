//
// Created by tijsh on 27-11-2022.
//

#ifndef LOGIC_IMPLICATION_H
#define LOGIC_IMPLICATION_H


#include "Proposition.h"
#include <memory>

class Implication : public Proposition{
public:
    Implication(std::unique_ptr<Proposition> left, std::unique_ptr<Proposition> right);

    std::string getString() const override;

    PropositionType getPropositionType() const override;

private:
    std::unique_ptr<Proposition> m_left;
    std::unique_ptr<Proposition> m_right;
};


#endif //LOGIC_IMPLICATION_H

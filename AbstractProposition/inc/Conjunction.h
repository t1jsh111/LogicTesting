//
// Created by tijsh on 27-11-2022.
//

#ifndef LOGIC_CONJUNCTION_H
#define LOGIC_CONJUNCTION_H

#include "Proposition.h"
#include <memory>
#include "BinaryOperator.h"
class Conjunction : public Proposition, public BinaryOperator {
public:
    Conjunction(std::unique_ptr<Proposition> left, std::unique_ptr<Proposition> right);

    std::string getString() const override;

    PropositionType getPropositionType() const override;

//private:
//    std::unique_ptr<Proposition> m_left;
//    std::unique_ptr<Proposition> m_right;
};


#endif //LOGIC_CONJUNCTION_H

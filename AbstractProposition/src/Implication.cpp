//
// Created by tijsh on 27-11-2022.
//

#include "Implication.h"

Implication::Implication(std::unique_ptr<Proposition> left, std::unique_ptr<Proposition> right) :
        m_left(std::move(left)), m_right(std::move(right)) {

}

std::string Implication::getString() const {
    return "(" + m_left->getString() + " => " + m_right->getString() + ")";
}

Proposition::PropositionType Implication::getPropositionType() const {
    return PropositionType::Implication;
}

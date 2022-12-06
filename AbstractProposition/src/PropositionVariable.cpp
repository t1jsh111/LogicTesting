//
// Created by tijsh on 27-11-2022.
//
#include <iostream>
#include "PropositionVariable.h"

PropositionVariable::PropositionVariable(char letter) : m_letter(letter) {

}

std::string PropositionVariable::getString() const {
    return std::string(1, m_letter);
}

Proposition::PropositionType PropositionVariable::getPropositionType() const {
    return PropositionType::PropositionVariable;
}

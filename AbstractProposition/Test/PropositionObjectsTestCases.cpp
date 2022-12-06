//
// Created by tijsh on 5-12-2022.
//
#include <memory>
#include "gtest/gtest.h"
#include "Conjunction.h"
#include "Disjunction.h"
#include "PropositionVariable.h"
#include "Implication.h"

// Test that the getString() method returns the correct string representation of a conjunction
TEST(ConjunctionTest, testGetString) {
    // Create a Conjunction with two PropositionVariable children
    auto left = std::make_unique<PropositionVariable>('A');
    auto right = std::make_unique<PropositionVariable>('B');
    Conjunction conjunction(std::move(left), std::move(right));

    // Verify that the getString() method returns the correct string
    EXPECT_EQ(conjunction.getString(), "(A and B)");
}

// Test that the getString() method returns the correct string representation of a conjunction with multiple conjunctions
TEST(ConjunctionTest, testGetStringMultipleConjunctions) {
    // Create a Conjunction with two PropositionVariable children
    auto left = std::make_unique<PropositionVariable>('A');
    auto right = std::make_unique<PropositionVariable>('B');
    auto conjunction1 = std::make_unique<Conjunction>(std::move(left), std::move(right));

    // Create another Conjunction with the previous Conjunction and a PropositionVariable child
    auto right2 = std::make_unique<PropositionVariable>('C');
    Conjunction conjunction2(std::move(conjunction1), std::move(right2));

    // Verify that the getString() method returns the correct string
    EXPECT_EQ(conjunction2.getString(), "((A and B) and C)");
}

// Test that the getPropositionType() method returns the correct PropositionType
TEST(ConjunctionTest, testGetPropositionType) {
    // Create a Conjunction with two PropositionVariable children
    auto left = std::make_unique<PropositionVariable>('A');
    auto right = std::make_unique<PropositionVariable>('B');
    Conjunction conjunction(std::move(left), std::move(right));

    // Verify that the getPropositionType() method returns the correct PropositionType
    EXPECT_EQ(conjunction.getPropositionType(), Proposition::PropositionType::Conjunction);
}


TEST(DisjunctionTest, testGetString) {
    // Create a Disjunction with two PropositionVariable children
    auto left = std::make_unique<PropositionVariable>('A');
    auto right = std::make_unique<PropositionVariable>('B');
    Disjunction disjunction(std::move(left), std::move(right));

    // Verify that the getString() method returns the correct string
    EXPECT_EQ(disjunction.getString(), "(A or B)");
}

// Test that the getPropositionType() method returns the correct PropositionType
TEST(DisjunctionTest, testGetPropositionType) {
    // Create a Disjunction with two PropositionVariable children
    auto left = std::make_unique<PropositionVariable>('A');
    auto right = std::make_unique<PropositionVariable>('B');
    Disjunction disjunction(std::move(left), std::move(right));

    // Verify that the getPropositionType() method returns the correct PropositionType
    EXPECT_EQ(disjunction.getPropositionType(), Proposition::PropositionType::Disjunction);
}

// Test that the getString() method returns the correct string representation of a disjunction with multiple disjunctions
TEST(DisjunctionTest, testGetStringMultipleDisjunctions) {
    // Create a Disjunction with two PropositionVariable children
    auto left = std::make_unique<PropositionVariable>('A');
    auto right = std::make_unique<PropositionVariable>('B');
    auto disjunction1 = std::make_unique<Disjunction>(std::move(left), std::move(right));

    right = std::make_unique<PropositionVariable>('C');
    Disjunction disjunction2(std::move(disjunction1), std::move(right));

    // Verify that the getString() method returns the correct string
    EXPECT_EQ(disjunction2.getString(), "((A or B) or C)");
}

// Test that the getString() method returns the correct string representation of a PropositionVariable
TEST(PropositionVariableTest, testGetString) {
    // Create a PropositionVariable with the letter 'A'
    PropositionVariable variable('A');

    // Verify that the getString() method returns the correct string
    EXPECT_EQ(variable.getString(), "A");
}

// Test that the getPropositionType() method returns the correct PropositionType
TEST(PropositionVariableTest, testGetPropositionType) {
    // Create a PropositionVariable with the letter 'B'
    PropositionVariable variable('B');

    // Verify that the getPropositionType() method returns the correct PropositionType
    EXPECT_EQ(variable.getPropositionType(), Proposition::PropositionType::PropositionVariable);
}

// Test that the getString() method returns the correct string representation of an implication
TEST(ImplicationTest, testGetString) {
    // Create an Implication with two PropositionVariable children
    auto left = std::make_unique<PropositionVariable>('A');
    auto right = std::make_unique<PropositionVariable>('B');
    Implication implication(std::move(left), std::move(right));

    // Verify that the getString() method returns the correct string
    EXPECT_EQ(implication.getString(), "(A => B)");
}

// Test that the getPropositionType() method returns the correct PropositionType
TEST(ImplicationTest, testGetPropositionType) {
    // Create an Implication with two PropositionVariable children
    auto left = std::make_unique<PropositionVariable>('A');
    auto right = std::make_unique<PropositionVariable>('B');
    Implication implication(std::move(left), std::move(right));

    // Verify that the getPropositionType() method returns the correct PropositionType
    EXPECT_EQ(implication.getPropositionType(), Proposition::PropositionType::Implication);
}

// Test that the getString() method returns the correct string representation of a disjunction with multiple disjunctions
TEST(ImplicationTest, testGetStringMultipleImplications) {
    // Create a Disjunction with two PropositionVariable children
    auto left = std::make_unique<PropositionVariable>('A');
    auto right = std::make_unique<PropositionVariable>('B');
    auto disjunction1 = std::make_unique<Implication>(std::move(left), std::move(right));

    right = std::make_unique<PropositionVariable>('C');
    Implication disjunction2(std::move(disjunction1), std::move(right));

    // Verify that the getString() method returns the correct string
    EXPECT_EQ(disjunction2.getString(), "((A => B) => C)");
}


// Test that the getString() method returns the correct string representation of a conjunction with multiple conjunctions
TEST(ConjunctionTest, testGetStringConjunctionImplication) {
    // Create a Conjunction with two PropositionVariable children
    auto left = std::make_unique<PropositionVariable>('A');
    auto right = std::make_unique<PropositionVariable>('B');
    auto conjunction1 = std::make_unique<Conjunction>(std::move(left), std::move(right));

    // Create another Conjunction with the previous Conjunction and a PropositionVariable child
    auto right2 = std::make_unique<PropositionVariable>('C');
    Implication conjunction2(std::move(conjunction1), std::move(right2));

    // Verify that the getString() method returns the correct string
    EXPECT_EQ(conjunction2.getString(), "((A and B) => C)");
}







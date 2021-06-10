/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 18:53:28 by tayamamo          #+#    #+#             */
/*   Updated: 2021/06/10 19:58:24 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "span.hpp"

Span::Span() : n_(0) {}
Span::Span(unsigned int n) : n_(n) {}
Span::~Span() {}
Span::Span(Span const& src) { this->operator=(src); }

Span&   Span::operator=(Span const& right) {
    if (this != &right) {
        this->n_ = right.n_;
        this->v_ = right.v_;
    }
    return (*this);
}

void    Span::addNumber(int num) {
    if (this->v_.size() == this->n_)
        throw std::runtime_error("Span is full");
    this->v_.push_back(num);
}

int Span::shortestSpan() const {
    if (this->v_.size() == 0)
        throw std::runtime_error("There's no number");
    if (this->v_.size() == 1)
        throw std::runtime_error("There's only one number");

    std::vector<int> copy = this->v_;
    std::sort(copy.begin(), copy.end());
    int mini = std::numeric_limits<int>::max();
    for (int i = 0; i < static_cast<int>(copy.size()) - 1; i++)
        mini = std::min(mini, copy[i+1] - copy[i]);
    return (mini);
}

int Span::longestSpan() const {
    if (this->v_.size() == 0)
        throw std::runtime_error("There's no number");
    if (this->v_.size() == 1)
        throw std::runtime_error("There's only one number");

    std::vector<int> copy = this->v_;
    std::sort(copy.begin(), copy.end());
    return (copy.back() - copy.front());
}

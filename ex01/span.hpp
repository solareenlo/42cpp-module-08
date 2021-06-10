/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 18:10:28 by tayamamo          #+#    #+#             */
/*   Updated: 2021/06/10 19:58:39 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef EX01_SPAN_HPP_
#define EX01_SPAN_HPP_

#include <algorithm>
#include <vector>
#include <stdexcept>
#include <limits>

class   Span {
 public:
    Span();
    explicit Span(unsigned int n);
    Span(Span const& src);
    ~Span();
    Span&   operator=(Span const& right);

    void   addNumber(int num);
    int    shortestSpan() const;
    int    longestSpan() const;

 private:
    unsigned int        n_;
    std::vector<int>    v_;
};

#endif  // EX01_SPAN_HPP_

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 17:13:31 by tayamamo          #+#    #+#             */
/*   Updated: 2021/06/10 17:43:48 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <queue>
#include  "easyfind.hpp"

int main() {
    int n = 3;

    std::vector<int> v(n);
    for (int i = 0; i < n; i++)
        v.push_back(i);
    std::cout << easyfind(v, 1) << std::endl;
    std::cout << easyfind(v, -1) << std::endl;
    std::cout << std::endl;

    std::deque<int> q;
    for (int i = 0; i < n; i++)
        q.push_back(i);
    std::cout << easyfind(q, 1) << std::endl;
    std::cout << easyfind(q, -1) << std::endl;
    return 0;
}

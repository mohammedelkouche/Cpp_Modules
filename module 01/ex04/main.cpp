/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 17:50:30 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/11/19 01:34:34 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int ac, char **argv)
{
    if (ac != 4)
    {
        std::cout << "you must enter three parameters " << std::endl;
        return (1);
    }
    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    std::ifstream infile(filename);
    std::string line;
    if (s1.empty() || s2.empty())
    {
        std::cout << " empty string " << std::endl;
        return (1);
    }
    if (!infile.is_open()) {
        std::cout << "Error opening file: " << filename << std::endl;
        return (1);
    }
    std::ofstream outfile(filename + ".replace");
    if (!outfile.is_open())
    {
        std::cerr << "Error opening file: " << filename << ".replace" << std::endl;
        return (1);
    }
    while (getline(infile, line))
    {
        size_t start = 0;
        while (start == line.find(s1, start))
        {
            line.erase(start, s1.length());
            line.insert(start, s2);
            start = start + s2.length();
        }
        // Write the modified line to the output file
        outfile << line << std::endl;
    }
    return (0);
}
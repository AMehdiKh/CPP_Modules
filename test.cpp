/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 22:10:20 by ael-khel          #+#    #+#             */
/*   Updated: 2024/03/09 03:22:52 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>
#include <string_view>
 
int main()
{
    std::string str1 {"Text with some          spaces"};
 
    auto noSpaceEnd = std::remove(str1.begin(), str1.end(), ' ');
 
    // The spaces are removed from the string only logically.
    // Note, we use view, the original string is still not shrunk:
    std::cout << str1 << " size: " << str1.size() << '\n';
 
    // str1.erase(std::remove(str1.begin(), str1.end(), ' '), str1.end());
 
    // // The spaces are removed from the string physically.
    // std::cout << str1 << " size: " << str1.size() << '\n';
 
    // std::string str2 = "Text\n with\tsome \t  whitespaces\n\n";
    // str2.erase(std::remove_if(str2.begin(), 
    //                           str2.end(),
    //                           [](unsigned char x) { return std::isspace(x); }),
    //            str2.end());
    // std::cout << str2 << '\n';
}


// std::string	trimWs( const std::string &source )
// {
// 	const std::string	whitespaces( " \f\n\r\t\v" );
//     std::string 		s( source );

//     s.erase(0,s.find_first_not_of( whitespaces ));
//     s.erase(s.find_last_not_of( whitespaces ) + 1);

// 	return (s);
// }


// std::string	trimWs(const std::string &str)
// {
// 	const std::string				whitespaces = " \f\n\r\t\v";
//     const std::string::size_type	strBegin = str.find_first_not_of(whitespaces);
//     if (strBegin == std::string::npos)
//         return ""; // no content

//     const auto strEnd = str.find_last_not_of(whitespaces);
//     const auto strRange = strEnd - strBegin + 1;

//     return str.substr(strBegin, strRange);
// }
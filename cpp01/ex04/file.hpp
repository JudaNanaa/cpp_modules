/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 23:24:12 by madamou           #+#    #+#             */
/*   Updated: 2024/10/01 00:36:46 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_HPP
#define  FILE_HPP

#include <ios>
#include <iostream>
#include <fstream>

class File {
	private:
		std::ifstream _infile;
		std::ofstream _outfile;
		std::string file_to_string(void);
	public:
		bool open_files(char **argv);
		void close_files(void);
		void copy_and_replace(char **argv);
		File(void);
		~File(void);
};

#endif
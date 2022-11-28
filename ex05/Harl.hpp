/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnichola <fnichola@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 02:49:52 by fnichola          #+#    #+#             */
/*   Updated: 2022/11/28 05:02:49 by fnichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <string>
# include <iostream>

class Harl
{
public:
	Harl();
	Harl(const Harl& other);
	~Harl();
	Harl& operator=(const Harl& assign);

	void complain(std::string level);

private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);

	typedef struct s_funcTable {
		std::string level;
		void (Harl::*function)(void);
	} t_funcTable;
};


#endif

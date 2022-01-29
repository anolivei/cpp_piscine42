/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nnn.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 01:59:58 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/28 02:00:06 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef nnn_HPP
#define nnn_HPP

class nnn
{
	public:
		nnn(void);
		nnn(const nnn& obj);
		~nnn(void);

		nnn&	operator=(const nnn& obj);

	private:

	protected:
};

std::ostream&	operator<<(std::ostream& o, const nnn& i);

#endif

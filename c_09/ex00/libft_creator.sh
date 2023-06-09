# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: johnavar <johnavar@student.42berlin.de>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/29 16:26:33 by johnavar          #+#    #+#              #
#    Updated: 2023/04/29 16:50:02 by johnavar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

rm -f libft.a && gcc -Wall -Wextra -Werror -c *.c && ar -rcs libft.a *.o && rm -f *.o

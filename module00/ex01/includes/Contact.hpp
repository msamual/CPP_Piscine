
#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>
# include <string.h>
# include <iomanip>

class Contact
{
    public:
        
        Contact();
        ~Contact();

        std::string getFirstName();
        std::string getLastName();
        std::string getNickName();
        std::string getLogin();
        std::string getPostalAddress();
        std::string getEmailAddress();
        std::string getPhoneNumber();
        std::string getBirthDate();
        std::string getFavoriteMeal();
        std::string getUnderwearColor();
        std::string getDarkestSecret();

        void		setFirstName();
        void		setLastName();
        void		setNickName();
        void		setLogin();
        void		setPostalAddress();
        void		setEmailAddress();
		void        setPhoneNumber();
		void        setBirthDate();
		void        setFavoriteMeal();
		void        setUnderwearColor();
		void        setDarkestSecret();

        void        displayInfo();
    
    private:

        std::string firstName;
        std::string lastName;
        std::string nickName;
        std::string login;
        std::string postalAddress;
        std::string emailAddress;
        std::string phoneNumber;
        std::string birthDate;
        std::string favoriteMeal;
        std::string underwearColor;
        std::string darkestSecret;
};

#endif
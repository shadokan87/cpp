#ifndef BRAIN_HPP
# define BRAIN_HPP
typedef std::string str;
class	Brain
{
	private:
		str ideas[10];
	public:
		void	setIdea(str idea);
		str		*getIdea(void);
		Brain();
		Brain(const Brain &src);
		~Brain();
};
#endif

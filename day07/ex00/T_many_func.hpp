#ifndef T_MANY_FUNC_HPP
# define T_MANY_FUNC_HPP
template <typename T>void	swap(T A, T B) {T tmp = A;A = B;B = tmp;}
template <typename T>T		min(T A, T B) {if (A == B)return (B);return (A < B ? A : B);}
template <typename T>T		max(T A, T B) {if (A == B)return (B);return (A < B ? B : A);}
#endif

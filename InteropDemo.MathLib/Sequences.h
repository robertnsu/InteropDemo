#pragma once
namespace InteropDemo
{
	namespace MathLib
	{
		public ref class Sequences
		{
		public:
			Sequences();

			static unsigned int Fibonacci(int n)
			{
				if (n == 0) return 0;
				if (n == 1) return 1;

				return Fibonacci(n - 1) + Fibonacci(n - 2);
			}

			static unsigned int Factorial(unsigned int n)
			{
				if (n <= 1)
				{
					return 1;
				}
				else
				{
					return n * Factorial(n - 1);
				}
			}
		};

		// unsigned int Fibonacci(int n);
		// unsigned int Factorial(unsigned int n);
	}
}
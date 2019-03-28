#pragma once
namespace InteropDemo
{
	namespace MathLib
	{
		public ref class Arithmetic
		{
		public:
			Arithmetic();

			static unsigned int power2(int num, int power)
			{
				// Note: This doesn't work because we are using C++/CLI
				// The compiler won't compile assembler to managed code
				// for safety reasons.

				// TODO: Create a second project type that illustrates
				// calling unmanaged code into a managed assembly.
				// ...and try to explain this intelligently

				//__asm
				//{
				//	mov eax, num
				//	mov ecx, power
				//	shl eax, cl
				//}
				
				int result = 1;
				int i;
				bool proceed = true;

				if (num <= 0) return result;

				for (i = 1; i <= power; i++)
				{
					if (proceed)
					{
						result = result * num;
					}
					else
					{
						result /= num;
					}
				}

				return result;
			}
		};

		// int power2(int num, int power);
	}
}
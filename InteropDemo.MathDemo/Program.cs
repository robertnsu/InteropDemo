using System;
using InteropDemo.MathLib;

namespace InteropDemo.MathDemo
{
    internal class Program
    {
        static void Main(string[] args)
        {
            var x = Sequences.Factorial(5);
            var y = Arithmetic.power2(2, 3);
            Console.WriteLine($"{x}");
            Console.WriteLine($"{y}");
        }
    }
}

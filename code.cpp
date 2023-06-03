# code-c-
using System;

class Program
{
    static void Main()
    {
        DateTime currentDate = DateTime.Now;
        int hours = currentDate.Hour;
        string greeting;

        if (hours < 12)
        {
            greeting = "Доброе утро";
        }
        else if (hours < 18)
        {
            greeting = "Добрый день";
        }
        else
        {
            greeting = "Добрый вечер";
        }

        Console.Write("Пожалуйста, введите ваше имя: ");
        string username = Console.ReadLine();

        string message = $"{greeting}, {username}! Сегодня {currentDate.ToShortDateString()} и время {currentDate.ToShortTimeString()}.";
        Console.WriteLine(message);
    }
}

# Программирование на языке высокого уровня (Python).
# Задание №4.3.4 Вариант 4
#
# Выполнил: Дякин В.Д.
# Группа: Пин-б-о-22-1
# E-mail: fnatik00000@gmail.com

if __name__ == "__main__":
    from my_time import *
    from test import test
    test()

    time_example = Time.from_string('12:12:12')
    print("Время:", time_example)  # Вывод: Время: 12:12:12 GMT+3

    time_example.set_time_zone('UTC-3')
    print("Время:", time_example)  # Вывод: Время: 12:12:12 UTC-3

    time_example.del_time_zone()
    print("Время:", time_example)  # Вывод: Время: 12:12:12

    time_example.save('test2.json')
    print(time_example.load('test2.json'))  # Вывод: Время: 12:12:12 GMT+3

# Программирование на языке высокого уровня (Python).
# Задание №4.3.5 вариант 4
#
# Выполнил: Дякин В.Д.
# Группа: Пин-б-о-22-1
# E-mail: fnatik00000@gmail.com


from my_time import Time
from timeContainer import TimeContainer

if __name__ == "__main__":
    from test import test
    test()

    container = TimeContainer()
    container.add(Time(12, 12, 59))
    container.add(Time(11, 11, 48))
    container.add(Time(10, 10, 37))
    print(container)  # 0. 12:12:59 GMT+3 \n 1. 11:11:48 GMT+3 \n 2. 10:10:37 GMT+3
    container.remove(1)
    print(container)  # 0. 12:12:59 GMT+3 \n 1. 10:10:37 GMT+3
    container.save('testy.json')
    a = container.load('testy.json')
    print()
    print(a)  # 0. 12:12:59 GMT+3 \n 1. 10:10:37 GMT+3
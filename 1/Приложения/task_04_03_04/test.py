from my_time import *


def test():
    print('Начало тестов...')

    print('Начало тестов класса Time')
    t0 = Time(5, 3, 23)
    assert (t0.hours == 5), "Метод __init__ сработал неверно"
    assert (t0.minutes == 3), "Метод __init__ сработал неверно"
    assert (t0.seconds == 23), "Метод __init__ сработал неверно"

    assert (t0.get_time_zone() == "GMT+3"), "Метод __init__ сработал неверно"
    t0.set_time_zone("UTC-2")
    assert (t0.get_time_zone() == "UTC-2"), "Метод set_time_zone сработал неверно"

    t1 = Time.from_string("12:12:12")
    assert (t1.hours == 12), "Метод from_string сработал неверно"
    assert (t1.minutes == 12), "Метод from_string сработал неверно"
    assert (t1.seconds == 12), "Метод from_string сработал неверно"

    t1.save('test-file.json')
    t2 = Time.load('test-file.json')
    assert (t2.hours == 12), "Метод save сработал неверно"
    assert (t2.minutes == 12), "Метод save сработал неверно"
    assert (t2.seconds == 12), "Метод save сработал неверно"

    t2.del_time_zone()
    assert (t2.get_time_zone() == ""), "Метод del_time_zone сработал неверно"
    print('класс Time работает отлично')


    print('Конец тестов.')



from my_time import *
from timeContainer import *


def test():
    print('Начало тестов...')

    print('Начало тестов класса TimeContainer')
    t0 = Time(12, 12, 49)
    t1 = Time(13, 13, 13)
    t2 = Time(14, 14, 14)
    tc = TimeContainer()
    tc.add(t0)
    tc.add(t1)
    tc.add(t2)
    assert (tc._data == [t0, t1, t2]), "Метод add сработал неверно"
    tc.remove(1)
    assert (tc._data == [t0, t2]), "Метод remove сработал неверно"
    assert (tc.get_item(1) == t2), "Метод remove сработал неверно"
    tc.save('testx.json')
    tc2 = TimeContainer.load('testx.json')
    assert (tc2.get_item(0).seconds == t0.seconds), "Метод remove сработал неверно"
    print('класс TimeContainer работает отлично')
    print('Конец тестов.')




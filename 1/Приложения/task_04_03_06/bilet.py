# Программирование на языке высокого уровня (Python).
# Задание №4.3.6 вариант 4
#
# Выполнил: Дякин В.Д.
# Группа: Пин-б-о-22-1
# E-mail: fnatik00000@gmail.com


import random


class Promo:
    def __init__(self):
        self.__num = random.randint(1, 10**9)
        self.__value = random.randint(1, 10)

    def __str__(self):
        return f'промо: {self.__num} поездок:{self.__value}'

    def get_num(self):
        return self.__num

    def get_value(self):
        return self.__value


class ПроезднойБилет:
    def __init__(self, id=-1, value=100):
        self.__id = id
        if self.__id == -1:
            raise ValueError('Проблемы с id билета')
        self.__value = value
        self._name = 'Ваше имя'
        self.nickname = 'Ваш псевдоним'

    def __str__(self):
        return str(self.__dict__)

    def списать_поездку(self):
        if self.__id == -1:
            raise ValueError('Поездок не осталось, купите новый проездной')
        self.__value -= 1
        if self.__value == 0:
            print('Это была последняя поездка... Купите новый билет или активируйте промокод')
            self.__id = -1

    def __add_value(self, value):
        if not isinstance(value, int):
            raise ValueError('Введите целое число поездок')
        print("Начисляем...")
        self.__value += value
        print("Готово")

    def _set_name(self, name):
        if not isinstance(name, str):
            raise ValueError('Введите имя правильно')
        self._name = name

    def set_nickname(self, name):
        self.nickname = name

    def input_promo(self, promo):
        if promo.get_num() % 2 != 0:
            raise ValueError('Неверный промокод')
        self.__add_value(promo.get_value())


class БезлимитныйБилет(ПроезднойБилет):
    def __init__(self, id=-1):
        super().__init__(id)
        self.__value = -1

    def __add_value(self, value):
        raise PermissionError('У вас безлимит на поездки')

    def input_promo(self, promo):
        raise PermissionError('У вас безлимит на поездки')

class БилетСОграничением(ПроезднойБилет):
    def input_promo(self, promo):
        raise PermissionError('Вам запрещено использовать промокоды')

    def set_nickname(self, nickname):
        raise PermissionError('Вы не можете иметь крутой псевдоним')


class БилетСОграничениемПоездок(ПроезднойБилет):
    def __init__(self, id=-1, value=50, max_value=50):
        self.__value = value
        self.__id = id
        self.__max_value = max_value

    def __add_value(self, value):
        if not isinstance(value, int):
            raise ValueError('Введите целое число поездок')
        if self.__value + value >= self.__max_value:
            raise PermissionError(f'Максимум возможно 50 поездок')
        print("Начисляем...")
        self.__value += value
        print("готово")

    def input_promo(self, promo):
        if promo.get_num() % 2 != 0:
            raise ValueError('Неверный промокод')
        self.__add_value(promo.get_value())
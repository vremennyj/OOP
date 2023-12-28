# Программирование на языке высокого уровня (Python).
# Задание №4.3.5 вариант 4
#
# Выполнил: Дякин В.Д.
# Группа: Пин-б-о-22-1
# E-mail: fnatik00000@gmail.com


import json


class Time:
    def __init__(self, hours=0, minutes=0, seconds=0, time_zone='GMT+3'):
        self.hours = hours
        self.minutes = minutes
        self.seconds = seconds
        self.__time_zone = time_zone

    def __str__(self):
        return f"{self.hours}:{self.minutes}:{self.seconds} {self.__time_zone}"

    @classmethod
    def from_string(cls, str_value):
        hours, minutes, seconds = map(int, str_value.split(':'))
        if not 0 <= hours <= 23 or not 0 <= minutes <= 59 or not 0 <= seconds <= 59:
            raise AttributeError('Введите время в формате и промежутке от 00:00:00 до 23:59:59')
        return cls(hours, minutes, seconds)

    def save(self, filename):
        with open(filename, "w") as file:
            json.dump(self.__dict__, file)

    @staticmethod
    def load(filename):
        with open(filename, "r") as file:
            time_dict = json.load(file)
        time_obj = Time()
        for key in time_dict:
            if key not in ["hours", "minutes", "seconds", "time_zone"]:
                continue
            else:
                time_obj.__setattr__(key, time_dict[key])
        return time_obj

    def set_time_zone(self, time_zone):
        if not isinstance(time_zone, str):
            raise AttributeError('Введите часовой пояс в виде строки')
        self.__time_zone = time_zone

    def get_time_zone(self):
        return self.__time_zone

    def del_time_zone(self):
        self.__time_zone = ''

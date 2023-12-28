# Программирование на языке высокого уровня (Python).
# Задание №4.3.5 вариант 4
#
# Выполнил: Дякин В.Д.
# Группа: Пин-б-о-22-1
# E-mail: fnatik00000@gmail.com


from my_time import Time
import json


class TimeContainer:
    def __init__(self):
        self._data = []

    def add(self, time):
        self._data.append(time)

    def remove(self, index):
        if index < 0 or index >= len(self._data):
            raise IndexError("Invalid index")
        self._data.pop(index)

    def get_item(self, index):
        if index < 0 or index >= len(self._data):
            raise IndexError("Invalid index")
        return self._data[index]

    def __str__(self):
        result = ""
        counter = 0
        for time in self._data:
            result += f'{counter}. {time}\n'
            counter += 1
        return result

    def save(self, filename):
        if filename.split('.')[-1] != 'json':
            raise ValueError("Вы можете сохранять только в формате json")
        with open(filename, "w") as file:
            c = -1
            d = {}
            for i in self._data:
                c += 1
                d.setdefault(c, str(i))
            json.dump(d, file)

    @classmethod
    def load(cls, filename):
        if filename.split('.')[-1] != 'json':
            raise ValueError("Вы можете сохранять только в формате json")
        with open(filename) as file:
            times = json.load(file)
            obj = cls()
            for time in times.values():
                time, time_zone = time.split()
                addable = Time.from_string(time)
                addable.set_time_zone(time_zone)
                obj.add(addable)
            return obj




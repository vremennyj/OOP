# Программирование на языке высокого уровня (Python).
# Задание №4.3.6 Вариант 4
#
# Выполнил: Дякин В.Д.
# Группа: Пин-б-о-22-1
# E-mail: fnatik00000@gmail.com


from bilet import *

if __name__ == "__main__":

    ticket1 = ПроезднойБилет(10001, 100)
    ticket2 = ПроезднойБилет(10002, 1)
    ticket3 = БезлимитныйБилет(10003)
    ticket4 = БилетСОграничением(10004, 10)
    ticket5 = БилетСОграничениемПоездок(10005, 11, 11)
    promo1 = Promo()

    print(ticket1)
    print(ticket2)
    print(ticket3)
    print(ticket4)
    print(ticket5)
    print(promo1)

    ticket3._set_name('Артём')
    ticket3.set_nickname('GigaChad')
    print(ticket3)

    try:
        ticket4.set_nickname('TOP')
    except Exception as err:
        print(err)

    try:
        ticket3.input_promo(promo1)
    except Exception as err:
        print(err)

    ticket2.списать_поездку()

    try:
        ticket5.input_promo(promo1)
    except Exception as err:
        print(err)


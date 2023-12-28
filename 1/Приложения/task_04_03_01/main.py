# Программирование на языке высокого уровня (Python).
# Задание №4.3.1 Вариант 4
#
# Выполнил: Дякин В.Д.
# Группа: Пин-б-о-22-1
# E-mail: fnatik00000@gmail.com


from roman import Roman

if __name__ == "__main__":
    from test import test
    test()

    r1 = Roman("X")
    r2 = Roman(5)

    print("       Числа:", r1, r2, r1.arabic, r2.arabic)
    print("       Сумма:", r1 + r2)
    print("    Разность:", r1 - r2)
    print("Произведение:", r1 * r2)
    print("     Частное:", r1 // r2)

    print("\nПреобразование без создания объекта:")
    print(2016, "=", Roman.to_roman(2016))
    print("MMXVI", "=", Roman.to_arabic("MMXVI"))


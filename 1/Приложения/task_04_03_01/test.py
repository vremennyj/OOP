def test():
    from roman import Roman

    r1 = Roman("X")
    r2 = Roman(5)

    assert (r1.__str__() == "X"), "метод __str__ вернул неверное значение"
    assert (r2.__str__() == "V"), "метод __str__ вернул неверное значение"

    assert (r1.arabic == 10), "метод to_arabic вернул неверное значение"
    assert (r2.arabic == 5), "метод to_arabic вернул неверное значение"

    assert ((r1 + r2).__str__() == "XV"), "метод __add__ вернул неверное значение"
    assert ((r1 - r2).__str__() == "V"), "метод __sub__ вернул неверное значение"
    assert ((r1 // r2).__str__() == "II"), "метод __floordiv__ вернул неверное значение"
    assert ((r1 / r2).__str__() == "II"), "метод __truediv__ вернул неверное значение"
    assert ((r1 * r2).__str__() == "L"), "метод __mul__ вернул неверное значение"

    assert (Roman.to_arabic("MMXVI") == 2016), "метод to_arabic вернул неверное значение"
    assert (Roman.to_roman(2016) == "MMXVI"), "метод to_arabic вернул неверное значение"
from deposit import *


def test():
    print('Начало тестов...')

    print('Начало тестов класса TimeDeposit')
    dep0 = TimeDeposit('вклад0', 5, (1, 3), (5_000, 100_000))
    assert (dep0.name == 'вклад0'), "Метод __init__ сработал неверно"
    assert (dep0._interest_rate == 5), "Метод __init__ сработал неверно"
    assert (dep0._period_limit == (1, 3)), "Метод __init__ сработал неверно"
    assert (dep0._sum_limit == (5_000, 100_000)), "Метод __init__ сработал неверно"

    assert (dep0.get_profit(80_000, 2) == 666.67), "Метод get_profit сработал неверно"
    print('класс BonusTimeDeposit работает отлично')

    print('Начало тестов класса BonusTimeDeposit')
    dep1 = BonusTimeDeposit('вклад1', 12.3, (3, 12), (30_000, 1_000_000), {"percent": 10, "sum": 100_000})
    assert (dep1.name == 'вклад1'), "Метод __init__ сработал неверно"
    assert (dep1._interest_rate == 12.3), "Метод __init__ сработал неверно"
    assert (dep1._period_limit == (3, 12)), "Метод __init__ сработал неверно"
    assert (dep1._sum_limit == (30_000, 1_000_000)), "Метод __init__ сработал неверно"
    assert (dep1._bonus["percent"] == 10), "Метод __init__ сработал неверно"
    assert (dep1._bonus["sum"] == 100_000), "Метод __init__ сработал неверно"

    assert (dep1.get_profit(100_000, 10) == 10250.0), "Метод get_profit сработал неверно"
    print('класс BonusTimeDeposit работает отлично')

    print('Начало тестов класса CompoundTimeDeposit')
    dep2 = CompoundTimeDeposit('вклад2', 10, (1, 36), (10_000, 1_000_000))
    assert (dep2.name == 'вклад2'), "Метод __init__ сработал неверно"
    assert (dep2._interest_rate == 10), "Метод __init__ сработал неверно"
    assert (dep2._period_limit == (1, 36)), "Метод __init__ сработал неверно"
    assert (dep2._sum_limit == (10_000, 1_000_000)), "Метод __init__ сработал неверно"

    assert (dep2.get_profit(100_000, 12) == 10471.31), "Метод get_profit сработал неверно"
    print('класс CompoundTimeDeposit работает отлично')
    print('Конец тестов.')




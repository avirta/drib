drib
====

Реалізація класа поліном на С++. В програмі можна реалізувати такі дії з дробом як +, -, *, /, зведення до спільного знаменника.

20130325
Поради: 
1) ввести поле "ціла частина" 
2) реалізувати операцію "зведення до неправильного дробу", яка записувала б цілу частину у чисельник (домножуючи на знаменник і додаючи до минулого значення чисельника), а поле "ціла частина" очищувала
3) реалізувати операцію "зведення до правильного дробу", яка б 1) знаходила найб. спільний дільник, скорочувала неправильний дріб, а потім цілу частину від ділення чисельника на знаменник записувала б в поле "ціла частина", а остачу від відповідного ділення - замість старого значення чисельника. 

20130407 Зауваження:

- у Вас в срр-файлі два класи з однаковим іменем. Це схоже на те, що Ви два варіанти класів (з цілою частиною та без неї) записуєте в один файл. Або створіть два окремих срр-файли, або видаліть старий клас (друге краще)
- нема функції main і випробування цього класу на роботоздатність

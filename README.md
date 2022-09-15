# Задача 1

Реализовать  функции  вычисления  площади  под  графиком  функции  y  =  sin(x)  на  произвольном отрезке [a, b], где 0 <= a < b <= Pi.
- используя метод средних прямоугольников
- по составной формуле Симпсона

Реализовать  функцию,  которая  будет  принимать  на  вход  массив  целых  чисел,  являющихся количеством  прямоугольников  в  каждом  из  экспериментов  и  возвращающую  массив  строк  вида: “кол-во  значение1  значение2”.

При  этом  значения  площадей  округлить  до  пяти  знаков  после запятой.  Вызвать  указанную  функцию  из  main()  с  параметром  [5,  10,  20,  100,  500,  1000]  и  вывести получившиеся значения на консоль. Снимок экрана с результатом работы программы приложить к пулреквесту.

### Памятка по работе с Git и GitHub:
1. Склонировать репозиторий на компьютер
	`$ git clone ...`
1. Создать и перейти в ветку *work*
	либо `$ git checkout -b work`
	либо `$ git branch work` и `$ git checkout work`
1. Добавить свой код в папку *src/*
1. Зафиксировать изменения
	`$ git add ...` и `$ git commit`
1. Отправить изменения в удалённый репозиторий
	`$ git push`
	После этого во вкладке Actions в GitHub можно увидеть статус выполнения открытых тестов
1. Выпонить Pull Request из ветки *work* в ветку *main*
	Если открытые тесты выполнились успешо, репозиторий не помечен как *Draft*, его заголовок не содержит *WIP*,  ваша ветка не конфликтует с *main*, будет выполнено автоматическое слияние Ваших изменений в ветку *main*.
1. После автоматичекого добавления Ваших изменений в *main*, будет выполнен запуск закрытых тестов. Статус выполнения ваших тестов можно посмотреть в [тестирующей системе](https://github.com/spbu-coding-2022/1-grading-system) в соответствующем Вашему репозиторию Pull Request.
	> Важно: этот Pull Request появляется не сразу.
1. После прохождения скрытых тестов в Вашем репозитории в комментариях к Pull Request *Feedback* преподаватель оставит комментарии по Вашему решению, отметит недочёты, которые необходимо исправить.

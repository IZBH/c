# ch5

## 逗号表达式

```c
a = get_value();
count_value(a);
while(a > 0) {
    ...
    a = get_value();
    count_vaule(a);
}
```

优化

```c
while (a = get_value(), count_value(a), a > 0) {
	...
}
```

or

```c
while( count_value(a = get_value()), a > 0) {
	...
}
```

## 算数转换

如果某个操作符的各个操作数属于不同的类型，那么除非其中一个操作数转换为另一个操作数的类型，否则操作就无法进行。下面的层次体系称为寻常算数转换。

- long double
- double
- float
- unsigned long int
- long int
- unsigned int
- int

如果某个操作数的类型在如上列表种排名较低，那么它首先将转换为另外一个操作数的类型然后执行操作。


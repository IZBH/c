# 第一章节代码
## 功能：
从标准输入中读取第一行作为列标号(以负数作为结束标志)，
根据读到的列标号提取后续行的字符串并进行打印

## 代码分析

### 读取列标号

```c
int read_column_numbers(int columns[], int max)
```
将读取到的列号存入到传入的 columns 数组中，数组的长度为max

- 读取列号

    ```c
        while (num < max && scanf("%d", &columns[num]) == 1 && columns[num] >= 0) {
            num += 1;
        }
    ```

    - num < max 确保数组不越界
    - scanf 将读到的数存储到数组当中，并确保读取到的值合法(scanf的返回值为匹配模式到的个数)
    - columns[num] >= 0确保读的的数合法（负数表示结束）

- 确保参数成对出现

    ```c
        if (num % 2 != 0) {
            puts("Last column number is not paired.");
            exit(EXIT_FAILURE);
        }
    ```

- 丢弃该行无用输入

    ```c
        while((ch = getchar()) != EOF && ch != '\n')
            ;
    ```

    - 使用 getchar 按照字符读入，直到无字符可读(EOF)或者换行('\n')时结束



### 字符串处理

```c
void rearrange(char *output, char const *input, 
    int n_columns, int const columns[])
```

根据 columns 数组中的列号，提取字符串 input 中的字符到 output 当中去。(不会修改 input和 columns中的内容，使用 const 进行修饰)。

1. 计算输入字符串的长度
2. 提取标号，按照标号进行copy
3. 写入字符串结束符('\0')

- 根据列标号，计算字符个数

    ```c
    int nchars = columns[col+1] - columns[col] + 1;
    ```

- 溢出处理

    ```c
    if (columns[col] >= len ||
    	output_col == MAX_INPUT - 1) {
    	break;
    }
    ```

    - columns[col] >= len 防止输入读取溢出
    - output_col == MAX_INPUT - 1 防止输出读取溢出 (最后一个字节为 '\0')

- 输出溢出处理

    ```c
    if (output_col + nchars > MAX_INPUT - 1) {
        nchars = MAX_INPUT - output_col -1;
    }
    ```

    - 防止此次要写入的数据导致溢出

- 拷贝

    ```c
            strncpy(output+output_col, input+columns[col], nchars);
            output_col += nchars;
    ```

    - 将字符串 input 从 columns[col] 的位置开始拷贝 nchars 个字节到 output + output_col的位置

## TODO:

- gets 函数不安全
- scnaf 函数不安去


# I/O
stdio & sysio

io操作是一切实现的基础

stdio(标准IO)
sysio(系统调用IO-文件IO)

优先使用标准IO
标准IO移植性好，合并系统调用

## stdio:FILE 类型贯穿始终
fopen();
fclose();
fgetc();
fputc();
fgets();
fputs();
fread();
fwrite();

printf();
scanf();

fseek();
ftell();
rewind();

fflush();

man手册第七章




















# 中文man手册安装
```
git clone https://github.com/man-pages-zh/manpages-zh.git

mkdir build && cd build/
cmake ..
make
make install # 需要超级用户权限

```

```
alias zman='man -M /usr/local/share/man/zh_CN'
source ~/.zshrc  
```
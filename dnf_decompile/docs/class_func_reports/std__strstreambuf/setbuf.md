# setbuf

`_ZNSt12strstreambuf6setbufEPci`

`std::strstreambuf::setbuf(char*, int)`

| 类 | 地址 |
|---|---|
| `std::strstreambuf` | `0x086dd570` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086dd570  _ZNSt12strstreambuf6setbufEPci
#           std::strstreambuf::setbuf(char*, int)
# range [0x086dd570, 0x086dd57f]
086dd570 +0x00:  push   %ebp
086dd571 +0x01:  mov    %esp,%ebp
086dd573 +0x03:  mov    0x8(%ebp),%eax
086dd576 +0x06:  pop    %ebp
086dd577 +0x07:  ret
086dd578 +0x08:  nop
086dd579 +0x09:  nop
086dd57a +0x0a:  nop
086dd57b +0x0b:  nop
086dd57c +0x0c:  nop
086dd57d +0x0d:  nop
086dd57e +0x0e:  nop
086dd57f +0x0f:  nop
```

## 反编译 C

```c
// std::strstreambuf::setbuf @ 0x86dd570

/* std::strstreambuf::setbuf(char*, int) */

char * std::strstreambuf::setbuf(char *param_1,int param_2)

{
  return param_1;
}
```

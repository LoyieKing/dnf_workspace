# id

`_GLOBAL__I__ZNSt7codecvtIcc11__mbstate_tE2idE`

`global constructors keyed to std::codecvt<char, char, __mbstate_t>::id`

| 类 | 地址 |
|---|---|
| `global constructors keyed to std::codecvt<char, char, __mbstate_t>` | `0x08726050` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08726050  _GLOBAL__I__ZNSt7codecvtIcc11__mbstate_tE2idE
#           global constructors keyed to std::codecvt<char, char, __mbstate_t>::id
# range [0x08726050, 0x0872605f]
08726050 +0x00:  push   %ebp
08726051 +0x01:  mov    %esp,%ebp
08726053 +0x03:  pop    %ebp
08726054 +0x04:  ret
08726055 +0x05:  nop
08726056 +0x06:  nop
08726057 +0x07:  nop
08726058 +0x08:  nop
08726059 +0x09:  nop
0872605a +0x0a:  nop
0872605b +0x0b:  nop
0872605c +0x0c:  nop
0872605d +0x0d:  nop
0872605e +0x0e:  nop
0872605f +0x0f:  nop
```

## 反编译 C

```c
// <global>::global @ 0x8726050

/* std::codecvt<char, char, __mbstate_t>::id */

void std::codecvt<char,char,__mbstate_t>::_GLOBAL__I_id(void)

{
  return;
}
```

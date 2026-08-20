# LexerError

`_ZN11SlangFilter10LexerErrorEPKc`

`SlangFilter::LexerError(char const*)`

| 类 | 地址 |
|---|---|
| `SlangFilter` | `0x0809504e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809504e  _ZN11SlangFilter10LexerErrorEPKc
#           SlangFilter::LexerError(char const*)
# range [0x0809504e, 0x08095069]
0809504e +0x00:  push   %ebp
0809504f +0x01:  mov    %esp,%ebp
08095051 +0x03:  sub    $0x18,%esp
08095054 +0x06:  mov    &stderr,%eax
08095059 +0x0b:  mov    0xc(%ebp),%edx
0809505c +0x0e:  mov    %edx,0x4(%esp)
08095060 +0x12:  mov    %eax,(%esp)
08095063 +0x15:  call   0807da90 <_init+0x388>
08095068 +0x1a:  leave
08095069 +0x1b:  ret
```

## 反编译 C

```c
// SlangFilter::LexerError @ 0x809504e

/* SlangFilter::LexerError(char const*) */

void __thiscall SlangFilter::LexerError(SlangFilter *this,char *param_1)

{
  fprintf(stderr,param_1);
  return;
}
```

# cMyTrace

`_ZN8cMyTraceC1EPKcii`

`cMyTrace::cMyTrace(char const*, int, int)`

| 类 | 地址 |
|---|---|
| `cMyTrace` | `0x0854f718` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0854f718  _ZN8cMyTraceC1EPKcii
#           cMyTrace::cMyTrace(char const*, int, int)
# range [0x0854f718, 0x0854f745]
0854f718 +0x00:  push   %ebp
0854f719 +0x01:  mov    %esp,%ebp
0854f71b +0x03:  mov    0x8(%ebp),%eax
0854f71e +0x06:  movb   $0x1,0xc(%eax)
0854f722 +0x0a:  mov    0x8(%ebp),%eax
0854f725 +0x0d:  movb   $0x0,0xd(%eax)
0854f729 +0x11:  mov    0x8(%ebp),%eax
0854f72c +0x14:  mov    0xc(%ebp),%edx
0854f72f +0x17:  mov    %edx,(%eax)
0854f731 +0x19:  mov    0x8(%ebp),%eax
0854f734 +0x1c:  mov    0x10(%ebp),%edx
0854f737 +0x1f:  mov    %edx,0x4(%eax)
0854f73a +0x22:  mov    0x8(%ebp),%eax
0854f73d +0x25:  mov    0x14(%ebp),%edx
0854f740 +0x28:  mov    %edx,0x8(%eax)
0854f743 +0x2b:  pop    %ebp
0854f744 +0x2c:  ret
0854f745 +0x2d:  nop
```

## 反编译 C

```c
// cMyTrace::cMyTrace @ 0x854f718

/* cMyTrace::cMyTrace(char const*, int, int) */

void __thiscall cMyTrace::cMyTrace(cMyTrace *this,char *param_1,int param_2,int param_3)

{
  this[0xc] = (cMyTrace)0x1;
  this[0xd] = (cMyTrace)0x0;
  *(char **)this = param_1;
  *(int *)(this + 4) = param_2;
  *(int *)(this + 8) = param_3;
  return;
}
```

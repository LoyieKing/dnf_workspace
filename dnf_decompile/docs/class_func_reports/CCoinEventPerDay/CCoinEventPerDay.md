# CCoinEventPerDay

`_ZN16CCoinEventPerDayC1Ev`

`CCoinEventPerDay::CCoinEventPerDay()`

| 类 | 地址 |
|---|---|
| `CCoinEventPerDay` | `0x0810ab10` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810ab10  _ZN16CCoinEventPerDayC1Ev
#           CCoinEventPerDay::CCoinEventPerDay()
# range [0x0810ab10, 0x0810ab47]
0810ab10 +0x00:  push   %ebp
0810ab11 +0x01:  mov    %esp,%ebp
0810ab13 +0x03:  sub    $0x18,%esp
0810ab16 +0x06:  mov    0x8(%ebp),%eax
0810ab19 +0x09:  mov    %eax,(%esp)
0810ab1c +0x0c:  call   0810ae2c <_ZN10CEventBaseC1Ev>  ; CEventBase::CEventBase()
0810ab21 +0x11:  mov    0x8(%ebp),%eax
0810ab24 +0x14:  movl   $&_ZTV16CCoinEventPerDay+0x8,(%eax)
0810ab2a +0x1a:  mov    0x8(%ebp),%eax
0810ab2d +0x1d:  movb   $0x1,0x9(%eax)
0810ab31 +0x21:  mov    0x8(%ebp),%eax
0810ab34 +0x24:  movb   $0x1,0xa(%eax)
0810ab38 +0x28:  mov    0x8(%ebp),%eax
0810ab3b +0x2b:  movb   $0x1,0xb(%eax)
0810ab3f +0x2f:  mov    0x8(%ebp),%eax
0810ab42 +0x32:  movb   $0x1,0xc(%eax)
0810ab46 +0x36:  leave
0810ab47 +0x37:  ret
```

## 反编译 C

```c
// CCoinEventPerDay::CCoinEventPerDay @ 0x810ab10

/* CCoinEventPerDay::CCoinEventPerDay() */

void __thiscall CCoinEventPerDay::CCoinEventPerDay(CCoinEventPerDay *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__CCoinEventPerDay_08b4b408;
  this[9] = (CCoinEventPerDay)0x1;
  this[10] = (CCoinEventPerDay)0x1;
  this[0xb] = (CCoinEventPerDay)0x1;
  this[0xc] = (CCoinEventPerDay)0x1;
  return;
}
```

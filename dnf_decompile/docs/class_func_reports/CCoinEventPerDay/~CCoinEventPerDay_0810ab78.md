# ~CCoinEventPerDay

`_ZN16CCoinEventPerDayD0Ev`

`CCoinEventPerDay::~CCoinEventPerDay()`

| 类 | 地址 |
|---|---|
| `CCoinEventPerDay` | `0x0810ab78` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810ab78  _ZN16CCoinEventPerDayD0Ev
#           CCoinEventPerDay::~CCoinEventPerDay()
# range [0x0810ab78, 0x0810ab95]
0810ab78 +0x00:  push   %ebp
0810ab79 +0x01:  mov    %esp,%ebp
0810ab7b +0x03:  sub    $0x18,%esp
0810ab7e +0x06:  mov    0x8(%ebp),%eax
0810ab81 +0x09:  mov    %eax,(%esp)
0810ab84 +0x0c:  call   0810ab48 <_ZN16CCoinEventPerDayD1Ev>  ; CCoinEventPerDay::~CCoinEventPerDay()
0810ab89 +0x11:  mov    0x8(%ebp),%eax
0810ab8c +0x14:  mov    %eax,(%esp)
0810ab8f +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0810ab94 +0x1c:  leave
0810ab95 +0x1d:  ret
```

## 反编译 C

```c
// CCoinEventPerDay::~CCoinEventPerDay @ 0x810ab78

/* CCoinEventPerDay::~CCoinEventPerDay() */

void __thiscall CCoinEventPerDay::~CCoinEventPerDay(CCoinEventPerDay *this)

{
  ~CCoinEventPerDay(this);
  operator_delete(this);
  return;
}
```

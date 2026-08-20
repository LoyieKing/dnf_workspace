# ~CCoinEventPerDay

`_ZN16CCoinEventPerDayD1Ev`

`CCoinEventPerDay::~CCoinEventPerDay()`

| 类 | 地址 |
|---|---|
| `CCoinEventPerDay` | `0x0810ab48` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810ab48  _ZN16CCoinEventPerDayD1Ev
#           CCoinEventPerDay::~CCoinEventPerDay()
# range [0x0810ab48, 0x0810ab77]
0810ab48 +0x00:  push   %ebp
0810ab49 +0x01:  mov    %esp,%ebp
0810ab4b +0x03:  sub    $0x18,%esp
0810ab4e +0x06:  mov    0x8(%ebp),%eax
0810ab51 +0x09:  movl   $&_ZTV16CCoinEventPerDay+0x8,(%eax)
0810ab57 +0x0f:  mov    0x8(%ebp),%eax
0810ab5a +0x12:  mov    %eax,(%esp)
0810ab5d +0x15:  call   0810ae52 <_ZN10CEventBaseD1Ev>  ; CEventBase::~CEventBase()
0810ab62 +0x1a:  mov    $0x0,%eax
0810ab67 +0x1f:  test   %al,%al
0810ab69 +0x21:  je     0810ab76 <+0x2e>
0810ab6b +0x23:  mov    0x8(%ebp),%eax
0810ab6e +0x26:  mov    %eax,(%esp)
0810ab71 +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0810ab76 +0x2e:  leave
0810ab77 +0x2f:  ret
```

## 反编译 C

```c
// CCoinEventPerDay::~CCoinEventPerDay @ 0x810ab48

/* WARNING: Removing unreachable block (ram,0x0810ab6b) */
/* CCoinEventPerDay::~CCoinEventPerDay() */

void __thiscall CCoinEventPerDay::~CCoinEventPerDay(CCoinEventPerDay *this)

{
  *(undefined ***)this = &PTR__CCoinEventPerDay_08b4b408;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}
```

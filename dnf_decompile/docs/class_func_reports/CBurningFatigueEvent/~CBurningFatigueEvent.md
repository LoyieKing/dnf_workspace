# ~CBurningFatigueEvent

`_ZN20CBurningFatigueEventD1Ev`

`CBurningFatigueEvent::~CBurningFatigueEvent()`

| 类 | 地址 |
|---|---|
| `CBurningFatigueEvent` | `0x08109ff4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08109ff4  _ZN20CBurningFatigueEventD1Ev
#           CBurningFatigueEvent::~CBurningFatigueEvent()
# range [0x08109ff4, 0x0810a023]
08109ff4 +0x00:  push   %ebp
08109ff5 +0x01:  mov    %esp,%ebp
08109ff7 +0x03:  sub    $0x18,%esp
08109ffa +0x06:  mov    0x8(%ebp),%eax
08109ffd +0x09:  movl   $&_ZTV20CBurningFatigueEvent+0x8,(%eax)
0810a003 +0x0f:  mov    0x8(%ebp),%eax
0810a006 +0x12:  mov    %eax,(%esp)
0810a009 +0x15:  call   0810ae52 <_ZN10CEventBaseD1Ev>  ; CEventBase::~CEventBase()
0810a00e +0x1a:  mov    $0x0,%eax
0810a013 +0x1f:  test   %al,%al
0810a015 +0x21:  je     0810a022 <+0x2e>
0810a017 +0x23:  mov    0x8(%ebp),%eax
0810a01a +0x26:  mov    %eax,(%esp)
0810a01d +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0810a022 +0x2e:  leave
0810a023 +0x2f:  ret
```

## 反编译 C

```c
// CBurningFatigueEvent::~CBurningFatigueEvent @ 0x8109ff4

/* WARNING: Removing unreachable block (ram,0x0810a017) */
/* CBurningFatigueEvent::~CBurningFatigueEvent() */

void __thiscall CBurningFatigueEvent::~CBurningFatigueEvent(CBurningFatigueEvent *this)

{
  *(undefined ***)this = &PTR__CBurningFatigueEvent_08b47ce8;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}
```

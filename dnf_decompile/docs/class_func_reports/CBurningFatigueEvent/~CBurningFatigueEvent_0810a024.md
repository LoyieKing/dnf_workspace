# ~CBurningFatigueEvent

`_ZN20CBurningFatigueEventD0Ev`

`CBurningFatigueEvent::~CBurningFatigueEvent()`

| 类 | 地址 |
|---|---|
| `CBurningFatigueEvent` | `0x0810a024` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810a024  _ZN20CBurningFatigueEventD0Ev
#           CBurningFatigueEvent::~CBurningFatigueEvent()
# range [0x0810a024, 0x0810a041]
0810a024 +0x00:  push   %ebp
0810a025 +0x01:  mov    %esp,%ebp
0810a027 +0x03:  sub    $0x18,%esp
0810a02a +0x06:  mov    0x8(%ebp),%eax
0810a02d +0x09:  mov    %eax,(%esp)
0810a030 +0x0c:  call   08109ff4 <_ZN20CBurningFatigueEventD1Ev>  ; CBurningFatigueEvent::~CBurningFatigueEvent()
0810a035 +0x11:  mov    0x8(%ebp),%eax
0810a038 +0x14:  mov    %eax,(%esp)
0810a03b +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0810a040 +0x1c:  leave
0810a041 +0x1d:  ret
```

## 反编译 C

```c
// CBurningFatigueEvent::~CBurningFatigueEvent @ 0x810a024

/* CBurningFatigueEvent::~CBurningFatigueEvent() */

void __thiscall CBurningFatigueEvent::~CBurningFatigueEvent(CBurningFatigueEvent *this)

{
  ~CBurningFatigueEvent(this);
  operator_delete(this);
  return;
}
```

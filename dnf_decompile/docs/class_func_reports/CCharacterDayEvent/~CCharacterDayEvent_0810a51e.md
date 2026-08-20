# ~CCharacterDayEvent

`_ZN18CCharacterDayEventD0Ev`

`CCharacterDayEvent::~CCharacterDayEvent()`

| 类 | 地址 |
|---|---|
| `CCharacterDayEvent` | `0x0810a51e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810a51e  _ZN18CCharacterDayEventD0Ev
#           CCharacterDayEvent::~CCharacterDayEvent()
# range [0x0810a51e, 0x0810a53b]
0810a51e +0x00:  push   %ebp
0810a51f +0x01:  mov    %esp,%ebp
0810a521 +0x03:  sub    $0x18,%esp
0810a524 +0x06:  mov    0x8(%ebp),%eax
0810a527 +0x09:  mov    %eax,(%esp)
0810a52a +0x0c:  call   0810a4ee <_ZN18CCharacterDayEventD1Ev>  ; CCharacterDayEvent::~CCharacterDayEvent()
0810a52f +0x11:  mov    0x8(%ebp),%eax
0810a532 +0x14:  mov    %eax,(%esp)
0810a535 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0810a53a +0x1c:  leave
0810a53b +0x1d:  ret
```

## 反编译 C

```c
// CCharacterDayEvent::~CCharacterDayEvent @ 0x810a51e

/* CCharacterDayEvent::~CCharacterDayEvent() */

void __thiscall CCharacterDayEvent::~CCharacterDayEvent(CCharacterDayEvent *this)

{
  ~CCharacterDayEvent(this);
  operator_delete(this);
  return;
}
```

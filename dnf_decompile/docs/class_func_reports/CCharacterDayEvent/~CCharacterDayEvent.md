# ~CCharacterDayEvent

`_ZN18CCharacterDayEventD1Ev`

`CCharacterDayEvent::~CCharacterDayEvent()`

| 类 | 地址 |
|---|---|
| `CCharacterDayEvent` | `0x0810a4ee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810a4ee  _ZN18CCharacterDayEventD1Ev
#           CCharacterDayEvent::~CCharacterDayEvent()
# range [0x0810a4ee, 0x0810a51d]
0810a4ee +0x00:  push   %ebp
0810a4ef +0x01:  mov    %esp,%ebp
0810a4f1 +0x03:  sub    $0x18,%esp
0810a4f4 +0x06:  mov    0x8(%ebp),%eax
0810a4f7 +0x09:  movl   $&_ZTV18CCharacterDayEvent+0x8,(%eax)
0810a4fd +0x0f:  mov    0x8(%ebp),%eax
0810a500 +0x12:  mov    %eax,(%esp)
0810a503 +0x15:  call   0810ae52 <_ZN10CEventBaseD1Ev>  ; CEventBase::~CEventBase()
0810a508 +0x1a:  mov    $0x0,%eax
0810a50d +0x1f:  test   %al,%al
0810a50f +0x21:  je     0810a51c <+0x2e>
0810a511 +0x23:  mov    0x8(%ebp),%eax
0810a514 +0x26:  mov    %eax,(%esp)
0810a517 +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0810a51c +0x2e:  leave
0810a51d +0x2f:  ret
```

## 反编译 C

```c
// CCharacterDayEvent::~CCharacterDayEvent @ 0x810a4ee

/* WARNING: Removing unreachable block (ram,0x0810a511) */
/* CCharacterDayEvent::~CCharacterDayEvent() */

void __thiscall CCharacterDayEvent::~CCharacterDayEvent(CCharacterDayEvent *this)

{
  *(undefined ***)this = &PTR__CCharacterDayEvent_08b48c08;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}
```

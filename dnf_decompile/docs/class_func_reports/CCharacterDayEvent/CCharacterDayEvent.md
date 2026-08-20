# CCharacterDayEvent

`_ZN18CCharacterDayEventC1Ev`

`CCharacterDayEvent::CCharacterDayEvent()`

| 类 | 地址 |
|---|---|
| `CCharacterDayEvent` | `0x0810a4c8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810a4c8  _ZN18CCharacterDayEventC1Ev
#           CCharacterDayEvent::CCharacterDayEvent()
# range [0x0810a4c8, 0x0810a4ed]
0810a4c8 +0x00:  push   %ebp
0810a4c9 +0x01:  mov    %esp,%ebp
0810a4cb +0x03:  sub    $0x18,%esp
0810a4ce +0x06:  mov    0x8(%ebp),%eax
0810a4d1 +0x09:  mov    %eax,(%esp)
0810a4d4 +0x0c:  call   0810ae2c <_ZN10CEventBaseC1Ev>  ; CEventBase::CEventBase()
0810a4d9 +0x11:  mov    0x8(%ebp),%eax
0810a4dc +0x14:  movl   $&_ZTV18CCharacterDayEvent+0x8,(%eax)
0810a4e2 +0x1a:  mov    0x8(%ebp),%eax
0810a4e5 +0x1d:  movw   $0xffff,0xa(%eax)
0810a4eb +0x23:  leave
0810a4ec +0x24:  ret
0810a4ed +0x25:  nop
```

## 反编译 C

```c
// CCharacterDayEvent::CCharacterDayEvent @ 0x810a4c8

/* CCharacterDayEvent::CCharacterDayEvent() */

void __thiscall CCharacterDayEvent::CCharacterDayEvent(CCharacterDayEvent *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__CCharacterDayEvent_08b48c08;
  *(undefined2 *)(this + 10) = 0xffff;
  return;
}
```

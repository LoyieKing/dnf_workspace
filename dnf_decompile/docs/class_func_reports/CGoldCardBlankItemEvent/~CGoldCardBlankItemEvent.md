# ~CGoldCardBlankItemEvent

`_ZN23CGoldCardBlankItemEventD1Ev`

`CGoldCardBlankItemEvent::~CGoldCardBlankItemEvent()`

| 类 | 地址 |
|---|---|
| `CGoldCardBlankItemEvent` | `0x0811ce40` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0811ce40  _ZN23CGoldCardBlankItemEventD1Ev
#           CGoldCardBlankItemEvent::~CGoldCardBlankItemEvent()
# range [0x0811ce40, 0x0811ce6f]
0811ce40 +0x00:  push   %ebp
0811ce41 +0x01:  mov    %esp,%ebp
0811ce43 +0x03:  sub    $0x18,%esp
0811ce46 +0x06:  mov    0x8(%ebp),%eax
0811ce49 +0x09:  movl   $&_ZTV23CGoldCardBlankItemEvent+0x8,(%eax)
0811ce4f +0x0f:  mov    0x8(%ebp),%eax
0811ce52 +0x12:  mov    %eax,(%esp)
0811ce55 +0x15:  call   0810ae52 <_ZN10CEventBaseD1Ev>  ; CEventBase::~CEventBase()
0811ce5a +0x1a:  mov    $0x0,%eax
0811ce5f +0x1f:  test   %al,%al
0811ce61 +0x21:  je     0811ce6e <+0x2e>
0811ce63 +0x23:  mov    0x8(%ebp),%eax
0811ce66 +0x26:  mov    %eax,(%esp)
0811ce69 +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0811ce6e +0x2e:  leave
0811ce6f +0x2f:  ret
```

## 反编译 C

```c
// CGoldCardBlankItemEvent::~CGoldCardBlankItemEvent @ 0x811ce40

/* WARNING: Removing unreachable block (ram,0x0811ce63) */
/* CGoldCardBlankItemEvent::~CGoldCardBlankItemEvent() */

void __thiscall CGoldCardBlankItemEvent::~CGoldCardBlankItemEvent(CGoldCardBlankItemEvent *this)

{
  *(undefined ***)this = &PTR__CGoldCardBlankItemEvent_08b545a8;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}
```

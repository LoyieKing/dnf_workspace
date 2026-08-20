# ~CStabToDeathEvent

`_ZN17CStabToDeathEventD1Ev`

`CStabToDeathEvent::~CStabToDeathEvent()`

| 类 | 地址 |
|---|---|
| `CStabToDeathEvent` | `0x0827f524` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0827f524  _ZN17CStabToDeathEventD1Ev
#           CStabToDeathEvent::~CStabToDeathEvent()
# range [0x0827f524, 0x0827f553]
0827f524 +0x00:  push   %ebp
0827f525 +0x01:  mov    %esp,%ebp
0827f527 +0x03:  sub    $0x18,%esp
0827f52a +0x06:  mov    0x8(%ebp),%eax
0827f52d +0x09:  movl   $&_ZTV17CStabToDeathEvent+0x8,(%eax)
0827f533 +0x0f:  mov    0x8(%ebp),%eax
0827f536 +0x12:  mov    %eax,(%esp)
0827f539 +0x15:  call   0810ae52 <_ZN10CEventBaseD1Ev>  ; CEventBase::~CEventBase()
0827f53e +0x1a:  mov    $0x0,%eax
0827f543 +0x1f:  test   %al,%al
0827f545 +0x21:  je     0827f552 <+0x2e>
0827f547 +0x23:  mov    0x8(%ebp),%eax
0827f54a +0x26:  mov    %eax,(%esp)
0827f54d +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0827f552 +0x2e:  leave
0827f553 +0x2f:  ret
```

## 反编译 C

```c
// CStabToDeathEvent::~CStabToDeathEvent @ 0x827f524

/* WARNING: Removing unreachable block (ram,0x0827f547) */
/* CStabToDeathEvent::~CStabToDeathEvent() */

void __thiscall CStabToDeathEvent::~CStabToDeathEvent(CStabToDeathEvent *this)

{
  *(undefined ***)this = &PTR__CStabToDeathEvent_08c09708;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}
```

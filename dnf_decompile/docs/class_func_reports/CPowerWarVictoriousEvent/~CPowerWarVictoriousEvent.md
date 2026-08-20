# ~CPowerWarVictoriousEvent

`_ZN24CPowerWarVictoriousEventD1Ev`

`CPowerWarVictoriousEvent::~CPowerWarVictoriousEvent()`

| 类 | 地址 |
|---|---|
| `CPowerWarVictoriousEvent` | `0x08268938` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08268938  _ZN24CPowerWarVictoriousEventD1Ev
#           CPowerWarVictoriousEvent::~CPowerWarVictoriousEvent()
# range [0x08268938, 0x08268967]
08268938 +0x00:  push   %ebp
08268939 +0x01:  mov    %esp,%ebp
0826893b +0x03:  sub    $0x18,%esp
0826893e +0x06:  mov    0x8(%ebp),%eax
08268941 +0x09:  movl   $&_ZTV24CPowerWarVictoriousEvent+0x8,(%eax)
08268947 +0x0f:  mov    0x8(%ebp),%eax
0826894a +0x12:  mov    %eax,(%esp)
0826894d +0x15:  call   0810ae52 <_ZN10CEventBaseD1Ev>  ; CEventBase::~CEventBase()
08268952 +0x1a:  mov    $0x0,%eax
08268957 +0x1f:  test   %al,%al
08268959 +0x21:  je     08268966 <+0x2e>
0826895b +0x23:  mov    0x8(%ebp),%eax
0826895e +0x26:  mov    %eax,(%esp)
08268961 +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08268966 +0x2e:  leave
08268967 +0x2f:  ret
```

## 反编译 C

```c
// CPowerWarVictoriousEvent::~CPowerWarVictoriousEvent @ 0x8268938

/* WARNING: Removing unreachable block (ram,0x0826895b) */
/* CPowerWarVictoriousEvent::~CPowerWarVictoriousEvent() */

void __thiscall CPowerWarVictoriousEvent::~CPowerWarVictoriousEvent(CPowerWarVictoriousEvent *this)

{
  *(undefined ***)this = &PTR__CPowerWarVictoriousEvent_08bf2128;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}
```

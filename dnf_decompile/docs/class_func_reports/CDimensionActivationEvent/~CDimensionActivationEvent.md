# ~CDimensionActivationEvent

`_ZN25CDimensionActivationEventD1Ev`

`CDimensionActivationEvent::~CDimensionActivationEvent()`

| 类 | 地址 |
|---|---|
| `CDimensionActivationEvent` | `0x080eeaa0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080eeaa0  _ZN25CDimensionActivationEventD1Ev
#           CDimensionActivationEvent::~CDimensionActivationEvent()
# range [0x080eeaa0, 0x080eeacf]
080eeaa0 +0x00:  push   %ebp
080eeaa1 +0x01:  mov    %esp,%ebp
080eeaa3 +0x03:  sub    $0x18,%esp
080eeaa6 +0x06:  mov    0x8(%ebp),%eax
080eeaa9 +0x09:  movl   $&_ZTV25CDimensionActivationEvent+0x8,(%eax)
080eeaaf +0x0f:  mov    0x8(%ebp),%eax
080eeab2 +0x12:  mov    %eax,(%esp)
080eeab5 +0x15:  call   0810ae52 <_ZN10CEventBaseD1Ev>  ; CEventBase::~CEventBase()
080eeaba +0x1a:  mov    $0x0,%eax
080eeabf +0x1f:  test   %al,%al
080eeac1 +0x21:  je     080eeace <+0x2e>
080eeac3 +0x23:  mov    0x8(%ebp),%eax
080eeac6 +0x26:  mov    %eax,(%esp)
080eeac9 +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
080eeace +0x2e:  leave
080eeacf +0x2f:  ret
```

## 反编译 C

```c
// CDimensionActivationEvent::~CDimensionActivationEvent @ 0x80eeaa0

/* WARNING: Removing unreachable block (ram,0x080eeac3) */
/* CDimensionActivationEvent::~CDimensionActivationEvent() */

void __thiscall
CDimensionActivationEvent::~CDimensionActivationEvent(CDimensionActivationEvent *this)

{
  *(undefined ***)this = &PTR__CDimensionActivationEvent_08b39be8;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}
```

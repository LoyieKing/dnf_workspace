# ~CPvPLiveEvent

`_ZN13CPvPLiveEventD1Ev`

`CPvPLiveEvent::~CPvPLiveEvent()`

| 类 | 地址 |
|---|---|
| `CPvPLiveEvent` | `0x08268ed4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08268ed4  _ZN13CPvPLiveEventD1Ev
#           CPvPLiveEvent::~CPvPLiveEvent()
# range [0x08268ed4, 0x08268f03]
08268ed4 +0x00:  push   %ebp
08268ed5 +0x01:  mov    %esp,%ebp
08268ed7 +0x03:  sub    $0x18,%esp
08268eda +0x06:  mov    0x8(%ebp),%eax
08268edd +0x09:  movl   $&_ZTV13CPvPLiveEvent+0x8,(%eax)
08268ee3 +0x0f:  mov    0x8(%ebp),%eax
08268ee6 +0x12:  mov    %eax,(%esp)
08268ee9 +0x15:  call   0810ae52 <_ZN10CEventBaseD1Ev>  ; CEventBase::~CEventBase()
08268eee +0x1a:  mov    $0x0,%eax
08268ef3 +0x1f:  test   %al,%al
08268ef5 +0x21:  je     08268f02 <+0x2e>
08268ef7 +0x23:  mov    0x8(%ebp),%eax
08268efa +0x26:  mov    %eax,(%esp)
08268efd +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08268f02 +0x2e:  leave
08268f03 +0x2f:  ret
```

## 反编译 C

```c
// CPvPLiveEvent::~CPvPLiveEvent @ 0x8268ed4

/* WARNING: Removing unreachable block (ram,0x08268ef7) */
/* CPvPLiveEvent::~CPvPLiveEvent() */

void __thiscall CPvPLiveEvent::~CPvPLiveEvent(CPvPLiveEvent *this)

{
  *(undefined ***)this = &PTR__CPvPLiveEvent_08bf4688;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}
```

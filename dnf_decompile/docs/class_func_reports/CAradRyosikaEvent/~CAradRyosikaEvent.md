# ~CAradRyosikaEvent

`_ZN17CAradRyosikaEventD1Ev`

`CAradRyosikaEvent::~CAradRyosikaEvent()`

| 类 | 地址 |
|---|---|
| `CAradRyosikaEvent` | `0x081a0ed0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081a0ed0  _ZN17CAradRyosikaEventD1Ev
#           CAradRyosikaEvent::~CAradRyosikaEvent()
# range [0x081a0ed0, 0x081a0eff]
081a0ed0 +0x00:  push   %ebp
081a0ed1 +0x01:  mov    %esp,%ebp
081a0ed3 +0x03:  sub    $0x18,%esp
081a0ed6 +0x06:  mov    0x8(%ebp),%eax
081a0ed9 +0x09:  movl   $&_ZTV17CAradRyosikaEvent+0x8,(%eax)
081a0edf +0x0f:  mov    0x8(%ebp),%eax
081a0ee2 +0x12:  mov    %eax,(%esp)
081a0ee5 +0x15:  call   0810ae52 <_ZN10CEventBaseD1Ev>  ; CEventBase::~CEventBase()
081a0eea +0x1a:  mov    $0x0,%eax
081a0eef +0x1f:  test   %al,%al
081a0ef1 +0x21:  je     081a0efe <+0x2e>
081a0ef3 +0x23:  mov    0x8(%ebp),%eax
081a0ef6 +0x26:  mov    %eax,(%esp)
081a0ef9 +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081a0efe +0x2e:  leave
081a0eff +0x2f:  ret
```

## 反编译 C

```c
// CAradRyosikaEvent::~CAradRyosikaEvent @ 0x81a0ed0

/* WARNING: Removing unreachable block (ram,0x081a0ef3) */
/* CAradRyosikaEvent::~CAradRyosikaEvent() */

void __thiscall CAradRyosikaEvent::~CAradRyosikaEvent(CAradRyosikaEvent *this)

{
  *(undefined ***)this = &PTR__CAradRyosikaEvent_08bab968;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}
```

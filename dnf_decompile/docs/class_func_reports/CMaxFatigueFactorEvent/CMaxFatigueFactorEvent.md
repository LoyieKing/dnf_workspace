# CMaxFatigueFactorEvent

`_ZN22CMaxFatigueFactorEventC1Ev`

`CMaxFatigueFactorEvent::CMaxFatigueFactorEvent()`

| 类 | 地址 |
|---|---|
| `CMaxFatigueFactorEvent` | `0x081b2718` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b2718  _ZN22CMaxFatigueFactorEventC1Ev
#           CMaxFatigueFactorEvent::CMaxFatigueFactorEvent()
# range [0x081b2718, 0x081b273d]
081b2718 +0x00:  push   %ebp
081b2719 +0x01:  mov    %esp,%ebp
081b271b +0x03:  sub    $0x18,%esp
081b271e +0x06:  mov    0x8(%ebp),%eax
081b2721 +0x09:  mov    %eax,(%esp)
081b2724 +0x0c:  call   0810ae2c <_ZN10CEventBaseC1Ev>  ; CEventBase::CEventBase()
081b2729 +0x11:  mov    0x8(%ebp),%eax
081b272c +0x14:  movl   $&_ZTV22CMaxFatigueFactorEvent+0x8,(%eax)
081b2732 +0x1a:  mov    0x8(%ebp),%eax
081b2735 +0x1d:  movl   $0x64,0xc(%eax)
081b273c +0x24:  leave
081b273d +0x25:  ret
```

## 反编译 C

```c
// CMaxFatigueFactorEvent::CMaxFatigueFactorEvent @ 0x81b2718

/* CMaxFatigueFactorEvent::CMaxFatigueFactorEvent() */

void __thiscall CMaxFatigueFactorEvent::CMaxFatigueFactorEvent(CMaxFatigueFactorEvent *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__CMaxFatigueFactorEvent_08bb7408;
  *(undefined4 *)(this + 0xc) = 100;
  return;
}
```

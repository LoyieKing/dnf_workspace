# CUnlimitFatigueEvent

`_ZN20CUnlimitFatigueEventC1Ev`

`CUnlimitFatigueEvent::CUnlimitFatigueEvent()`

| 类 | 地址 |
|---|---|
| `CUnlimitFatigueEvent` | `0x08285c44` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08285c44  _ZN20CUnlimitFatigueEventC1Ev
#           CUnlimitFatigueEvent::CUnlimitFatigueEvent()
# range [0x08285c44, 0x08285c5f]
08285c44 +0x00:  push   %ebp
08285c45 +0x01:  mov    %esp,%ebp
08285c47 +0x03:  sub    $0x18,%esp
08285c4a +0x06:  mov    0x8(%ebp),%eax
08285c4d +0x09:  mov    %eax,(%esp)
08285c50 +0x0c:  call   0810ae2c <_ZN10CEventBaseC1Ev>  ; CEventBase::CEventBase()
08285c55 +0x11:  mov    0x8(%ebp),%eax
08285c58 +0x14:  movl   $&_ZTV20CUnlimitFatigueEvent+0x8,(%eax)
08285c5e +0x1a:  leave
08285c5f +0x1b:  ret
```

## 反编译 C

```c
// CUnlimitFatigueEvent::CUnlimitFatigueEvent @ 0x8285c44

/* CUnlimitFatigueEvent::CUnlimitFatigueEvent() */

void __thiscall CUnlimitFatigueEvent::CUnlimitFatigueEvent(CUnlimitFatigueEvent *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__CUnlimitFatigueEvent_08c0eb68;
  return;
}
```

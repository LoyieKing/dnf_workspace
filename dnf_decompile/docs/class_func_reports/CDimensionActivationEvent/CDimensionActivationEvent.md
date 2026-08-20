# CDimensionActivationEvent

`_ZN25CDimensionActivationEventC1Ev`

`CDimensionActivationEvent::CDimensionActivationEvent()`

| 类 | 地址 |
|---|---|
| `CDimensionActivationEvent` | `0x080eea84` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080eea84  _ZN25CDimensionActivationEventC1Ev
#           CDimensionActivationEvent::CDimensionActivationEvent()
# range [0x080eea84, 0x080eea9f]
080eea84 +0x00:  push   %ebp
080eea85 +0x01:  mov    %esp,%ebp
080eea87 +0x03:  sub    $0x18,%esp
080eea8a +0x06:  mov    0x8(%ebp),%eax
080eea8d +0x09:  mov    %eax,(%esp)
080eea90 +0x0c:  call   0810ae2c <_ZN10CEventBaseC1Ev>  ; CEventBase::CEventBase()
080eea95 +0x11:  mov    0x8(%ebp),%eax
080eea98 +0x14:  movl   $&_ZTV25CDimensionActivationEvent+0x8,(%eax)
080eea9e +0x1a:  leave
080eea9f +0x1b:  ret
```

## 反编译 C

```c
// CDimensionActivationEvent::CDimensionActivationEvent @ 0x80eea84

/* CDimensionActivationEvent::CDimensionActivationEvent() */

void __thiscall
CDimensionActivationEvent::CDimensionActivationEvent(CDimensionActivationEvent *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__CDimensionActivationEvent_08b39be8;
  return;
}
```

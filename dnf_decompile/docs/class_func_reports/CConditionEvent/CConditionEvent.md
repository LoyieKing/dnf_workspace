# CConditionEvent

`_ZN15CConditionEventC1Ev`

`CConditionEvent::CConditionEvent()`

| 类 | 地址 |
|---|---|
| `CConditionEvent` | `0x08184970` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08184970  _ZN15CConditionEventC1Ev
#           CConditionEvent::CConditionEvent()
# range [0x08184970, 0x0818498b]
08184970 +0x00:  push   %ebp
08184971 +0x01:  mov    %esp,%ebp
08184973 +0x03:  sub    $0x18,%esp
08184976 +0x06:  mov    0x8(%ebp),%eax
08184979 +0x09:  mov    %eax,(%esp)
0818497c +0x0c:  call   0810ae2c <_ZN10CEventBaseC1Ev>  ; CEventBase::CEventBase()
08184981 +0x11:  mov    0x8(%ebp),%eax
08184984 +0x14:  movl   $&_ZTV15CConditionEvent+0x8,(%eax)
0818498a +0x1a:  leave
0818498b +0x1b:  ret
```

## 反编译 C

```c
// CConditionEvent::CConditionEvent @ 0x8184970

/* CConditionEvent::CConditionEvent() */

void __thiscall CConditionEvent::CConditionEvent(CConditionEvent *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__CConditionEvent_08b8e5c8;
  return;
}
```

# CPowerWarEvent

`_ZN14CPowerWarEventC1Ev`

`CPowerWarEvent::CPowerWarEvent()`

| 类 | 地址 |
|---|---|
| `CPowerWarEvent` | `0x08267990` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08267990  _ZN14CPowerWarEventC1Ev
#           CPowerWarEvent::CPowerWarEvent()
# range [0x08267990, 0x082679ab]
08267990 +0x00:  push   %ebp
08267991 +0x01:  mov    %esp,%ebp
08267993 +0x03:  sub    $0x18,%esp
08267996 +0x06:  mov    0x8(%ebp),%eax
08267999 +0x09:  mov    %eax,(%esp)
0826799c +0x0c:  call   0810ae2c <_ZN10CEventBaseC1Ev>  ; CEventBase::CEventBase()
082679a1 +0x11:  mov    0x8(%ebp),%eax
082679a4 +0x14:  movl   $&_ZTV14CPowerWarEvent+0x8,(%eax)
082679aa +0x1a:  leave
082679ab +0x1b:  ret
```

## 反编译 C

```c
// CPowerWarEvent::CPowerWarEvent @ 0x8267990

/* CPowerWarEvent::CPowerWarEvent() */

void __thiscall CPowerWarEvent::CPowerWarEvent(CPowerWarEvent *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__CPowerWarEvent_08bf12e8;
  return;
}
```

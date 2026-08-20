# COnlinePreliminaryEvent

`_ZN23COnlinePreliminaryEventC1Ev`

`COnlinePreliminaryEvent::COnlinePreliminaryEvent()`

| 类 | 地址 |
|---|---|
| `COnlinePreliminaryEvent` | `0x081bb490` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081bb490  _ZN23COnlinePreliminaryEventC1Ev
#           COnlinePreliminaryEvent::COnlinePreliminaryEvent()
# range [0x081bb490, 0x081bb4ab]
081bb490 +0x00:  push   %ebp
081bb491 +0x01:  mov    %esp,%ebp
081bb493 +0x03:  sub    $0x18,%esp
081bb496 +0x06:  mov    0x8(%ebp),%eax
081bb499 +0x09:  mov    %eax,(%esp)
081bb49c +0x0c:  call   0810ae2c <_ZN10CEventBaseC1Ev>  ; CEventBase::CEventBase()
081bb4a1 +0x11:  mov    0x8(%ebp),%eax
081bb4a4 +0x14:  movl   $&_ZTV23COnlinePreliminaryEvent+0x8,(%eax)
081bb4aa +0x1a:  leave
081bb4ab +0x1b:  ret
```

## 反编译 C

```c
// COnlinePreliminaryEvent::COnlinePreliminaryEvent @ 0x81bb490

/* COnlinePreliminaryEvent::COnlinePreliminaryEvent() */

void __thiscall COnlinePreliminaryEvent::COnlinePreliminaryEvent(COnlinePreliminaryEvent *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__COnlinePreliminaryEvent_08bbf968;
  return;
}
```

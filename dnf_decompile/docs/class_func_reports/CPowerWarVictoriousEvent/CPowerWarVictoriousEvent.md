# CPowerWarVictoriousEvent

`_ZN24CPowerWarVictoriousEventC1Ev`

`CPowerWarVictoriousEvent::CPowerWarVictoriousEvent()`

| 类 | 地址 |
|---|---|
| `CPowerWarVictoriousEvent` | `0x0826891c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0826891c  _ZN24CPowerWarVictoriousEventC1Ev
#           CPowerWarVictoriousEvent::CPowerWarVictoriousEvent()
# range [0x0826891c, 0x08268937]
0826891c +0x00:  push   %ebp
0826891d +0x01:  mov    %esp,%ebp
0826891f +0x03:  sub    $0x18,%esp
08268922 +0x06:  mov    0x8(%ebp),%eax
08268925 +0x09:  mov    %eax,(%esp)
08268928 +0x0c:  call   0810ae2c <_ZN10CEventBaseC1Ev>  ; CEventBase::CEventBase()
0826892d +0x11:  mov    0x8(%ebp),%eax
08268930 +0x14:  movl   $&_ZTV24CPowerWarVictoriousEvent+0x8,(%eax)
08268936 +0x1a:  leave
08268937 +0x1b:  ret
```

## 反编译 C

```c
// CPowerWarVictoriousEvent::CPowerWarVictoriousEvent @ 0x826891c

/* CPowerWarVictoriousEvent::CPowerWarVictoriousEvent() */

void __thiscall CPowerWarVictoriousEvent::CPowerWarVictoriousEvent(CPowerWarVictoriousEvent *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__CPowerWarVictoriousEvent_08bf2128;
  return;
}
```

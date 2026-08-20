# CStabToDeathEvent

`_ZN17CStabToDeathEventC1Ev`

`CStabToDeathEvent::CStabToDeathEvent()`

| 类 | 地址 |
|---|---|
| `CStabToDeathEvent` | `0x0827f508` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0827f508  _ZN17CStabToDeathEventC1Ev
#           CStabToDeathEvent::CStabToDeathEvent()
# range [0x0827f508, 0x0827f523]
0827f508 +0x00:  push   %ebp
0827f509 +0x01:  mov    %esp,%ebp
0827f50b +0x03:  sub    $0x18,%esp
0827f50e +0x06:  mov    0x8(%ebp),%eax
0827f511 +0x09:  mov    %eax,(%esp)
0827f514 +0x0c:  call   0810ae2c <_ZN10CEventBaseC1Ev>  ; CEventBase::CEventBase()
0827f519 +0x11:  mov    0x8(%ebp),%eax
0827f51c +0x14:  movl   $&_ZTV17CStabToDeathEvent+0x8,(%eax)
0827f522 +0x1a:  leave
0827f523 +0x1b:  ret
```

## 反编译 C

```c
// CStabToDeathEvent::CStabToDeathEvent @ 0x827f508

/* CStabToDeathEvent::CStabToDeathEvent() */

void __thiscall CStabToDeathEvent::CStabToDeathEvent(CStabToDeathEvent *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__CStabToDeathEvent_08c09708;
  return;
}
```

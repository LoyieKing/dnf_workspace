# CPvPLiveEvent

`_ZN13CPvPLiveEventC1Ev`

`CPvPLiveEvent::CPvPLiveEvent()`

| 类 | 地址 |
|---|---|
| `CPvPLiveEvent` | `0x08268eb8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08268eb8  _ZN13CPvPLiveEventC1Ev
#           CPvPLiveEvent::CPvPLiveEvent()
# range [0x08268eb8, 0x08268ed3]
08268eb8 +0x00:  push   %ebp
08268eb9 +0x01:  mov    %esp,%ebp
08268ebb +0x03:  sub    $0x18,%esp
08268ebe +0x06:  mov    0x8(%ebp),%eax
08268ec1 +0x09:  mov    %eax,(%esp)
08268ec4 +0x0c:  call   0810ae2c <_ZN10CEventBaseC1Ev>  ; CEventBase::CEventBase()
08268ec9 +0x11:  mov    0x8(%ebp),%eax
08268ecc +0x14:  movl   $&_ZTV13CPvPLiveEvent+0x8,(%eax)
08268ed2 +0x1a:  leave
08268ed3 +0x1b:  ret
```

## 反编译 C

```c
// CPvPLiveEvent::CPvPLiveEvent @ 0x8268eb8

/* CPvPLiveEvent::CPvPLiveEvent() */

void __thiscall CPvPLiveEvent::CPvPLiveEvent(CPvPLiveEvent *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__CPvPLiveEvent_08bf4688;
  return;
}
```

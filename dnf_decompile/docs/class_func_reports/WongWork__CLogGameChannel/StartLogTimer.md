# StartLogTimer

`_ZN8WongWork15CLogGameChannel13StartLogTimerEv`

`WongWork::CLogGameChannel::StartLogTimer()`

| 类 | 地址 |
|---|---|
| `WongWork::CLogGameChannel` | `0x085503ea` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085503ea  _ZN8WongWork15CLogGameChannel13StartLogTimerEv
#           WongWork::CLogGameChannel::StartLogTimer()
# range [0x085503ea, 0x085503fd]
085503ea +0x00:  push   %ebp
085503eb +0x01:  mov    %esp,%ebp
085503ed +0x03:  sub    $0x18,%esp
085503f0 +0x06:  mov    0x8(%ebp),%eax
085503f3 +0x09:  mov    %eax,(%esp)
085503f6 +0x0c:  call   085503fe <_ZN8WongWork15CLogGameChannel15SetNextLogTimerEv>  ; WongWork::CLogGameChannel::SetNextLogTimer()
085503fb +0x11:  leave
085503fc +0x12:  ret
085503fd +0x13:  nop
```

## 反编译 C

```c
// WongWork::CLogGameChannel::StartLogTimer @ 0x85503ea

/* WongWork::CLogGameChannel::StartLogTimer() */

void __thiscall WongWork::CLogGameChannel::StartLogTimer(CLogGameChannel *this)

{
  SetNextLogTimer(this);
  return;
}
```

# ~BingoEvent

`_ZN10BingoEventD0Ev`

`BingoEvent::~BingoEvent()`

| 类 | 地址 |
|---|---|
| `BingoEvent` | `0x080c9a68` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080c9a68  _ZN10BingoEventD0Ev
#           BingoEvent::~BingoEvent()
# range [0x080c9a68, 0x080c9a85]
080c9a68 +0x00:  push   %ebp
080c9a69 +0x01:  mov    %esp,%ebp
080c9a6b +0x03:  sub    $0x18,%esp
080c9a6e +0x06:  mov    0x8(%ebp),%eax
080c9a71 +0x09:  mov    %eax,(%esp)
080c9a74 +0x0c:  call   080c9a06 <_ZN10BingoEventD1Ev>  ; BingoEvent::~BingoEvent()
080c9a79 +0x11:  mov    0x8(%ebp),%eax
080c9a7c +0x14:  mov    %eax,(%esp)
080c9a7f +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
080c9a84 +0x1c:  leave
080c9a85 +0x1d:  ret
```

## 反编译 C

```c
// BingoEvent::~BingoEvent @ 0x80c9a68

/* BingoEvent::~BingoEvent() */

void __thiscall BingoEvent::~BingoEvent(BingoEvent *this)

{
  ~BingoEvent(this);
  operator_delete(this);
  return;
}
```

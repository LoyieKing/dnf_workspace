# PvpResultRecvFlag

`_ZN17PvpResultRecvFlagC1Ev`

`PvpResultRecvFlag::PvpResultRecvFlag()`

| 类 | 地址 |
|---|---|
| `PvpResultRecvFlag` | `0x085d5f7e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d5f7e  _ZN17PvpResultRecvFlagC1Ev
#           PvpResultRecvFlag::PvpResultRecvFlag()
# range [0x085d5f7e, 0x085d5f91]
085d5f7e +0x00:  push   %ebp
085d5f7f +0x01:  mov    %esp,%ebp
085d5f81 +0x03:  sub    $0x18,%esp
085d5f84 +0x06:  mov    0x8(%ebp),%eax
085d5f87 +0x09:  mov    %eax,(%esp)
085d5f8a +0x0c:  call   085d5fc6 <_ZN17PvpResultRecvFlag5ClearEv>  ; PvpResultRecvFlag::Clear()
085d5f8f +0x11:  leave
085d5f90 +0x12:  ret
085d5f91 +0x13:  nop
```

## 反编译 C

```c
// PvpResultRecvFlag::PvpResultRecvFlag @ 0x85d5f7e

/* PvpResultRecvFlag::PvpResultRecvFlag() */

void __thiscall PvpResultRecvFlag::PvpResultRecvFlag(PvpResultRecvFlag *this)

{
  Clear(this);
  return;
}
```

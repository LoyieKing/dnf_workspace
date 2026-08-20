# ~PvpResultRecvFlag

`_ZN17PvpResultRecvFlagD1Ev`

`PvpResultRecvFlag::~PvpResultRecvFlag()`

| 类 | 地址 |
|---|---|
| `PvpResultRecvFlag` | `0x085d5f92` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d5f92  _ZN17PvpResultRecvFlagD1Ev
#           PvpResultRecvFlag::~PvpResultRecvFlag()
# range [0x085d5f92, 0x085d5f97]
085d5f92 +0x00:  push   %ebp
085d5f93 +0x01:  mov    %esp,%ebp
085d5f95 +0x03:  pop    %ebp
085d5f96 +0x04:  ret
085d5f97 +0x05:  nop
```

## 反编译 C

```c
// PvpResultRecvFlag::~PvpResultRecvFlag @ 0x85d5f92

/* PvpResultRecvFlag::~PvpResultRecvFlag() */

void __thiscall PvpResultRecvFlag::~PvpResultRecvFlag(PvpResultRecvFlag *this)

{
  return;
}
```

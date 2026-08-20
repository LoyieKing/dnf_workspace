# ~CPartyTelePort

`_ZN14CPartyTelePortD1Ev`

`CPartyTelePort::~CPartyTelePort()`

| 类 | 地址 |
|---|---|
| `CPartyTelePort` | `0x085bb848` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085bb848  _ZN14CPartyTelePortD1Ev
#           CPartyTelePort::~CPartyTelePort()
# range [0x085bb848, 0x085bb84d]
085bb848 +0x00:  push   %ebp
085bb849 +0x01:  mov    %esp,%ebp
085bb84b +0x03:  pop    %ebp
085bb84c +0x04:  ret
085bb84d +0x05:  nop
```

## 反编译 C

```c
// CPartyTelePort::~CPartyTelePort @ 0x85bb848

/* CPartyTelePort::~CPartyTelePort() */

void __thiscall CPartyTelePort::~CPartyTelePort(CPartyTelePort *this)

{
  return;
}
```

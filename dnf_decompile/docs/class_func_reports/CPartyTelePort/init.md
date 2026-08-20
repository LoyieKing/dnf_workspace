# init

`_ZN14CPartyTelePort4initEP6CParty`

`CPartyTelePort::init(CParty*)`

| 类 | 地址 |
|---|---|
| `CPartyTelePort` | `0x085bb84e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085bb84e  _ZN14CPartyTelePort4initEP6CParty
#           CPartyTelePort::init(CParty*)
# range [0x085bb84e, 0x085bb85b]
085bb84e +0x00:  push   %ebp
085bb84f +0x01:  mov    %esp,%ebp
085bb851 +0x03:  mov    0x8(%ebp),%eax
085bb854 +0x06:  mov    0xc(%ebp),%edx
085bb857 +0x09:  mov    %edx,(%eax)
085bb859 +0x0b:  pop    %ebp
085bb85a +0x0c:  ret
085bb85b +0x0d:  nop
```

## 反编译 C

```c
// CPartyTelePort::init @ 0x85bb84e

/* CPartyTelePort::init(CParty*) */

void __thiscall CPartyTelePort::init(CPartyTelePort *this,CParty *param_1)

{
  *(CParty **)this = param_1;
  return;
}
```

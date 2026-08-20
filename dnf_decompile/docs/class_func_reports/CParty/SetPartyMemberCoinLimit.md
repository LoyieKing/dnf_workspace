# SetPartyMemberCoinLimit

`_ZN6CParty23SetPartyMemberCoinLimitEi`

`CParty::SetPartyMemberCoinLimit(int)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085be55a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085be55a  _ZN6CParty23SetPartyMemberCoinLimitEi
#           CParty::SetPartyMemberCoinLimit(int)
# range [0x085be55a, 0x085be56b]
085be55a +0x00:  push   %ebp
085be55b +0x01:  mov    %esp,%ebp
085be55d +0x03:  mov    0x8(%ebp),%eax
085be560 +0x06:  mov    0xc(%ebp),%edx
085be563 +0x09:  mov    %edx,0x328(%eax)
085be569 +0x0f:  pop    %ebp
085be56a +0x10:  ret
085be56b +0x11:  nop
```

## 反编译 C

```c
// CParty::SetPartyMemberCoinLimit @ 0x85be55a

/* CParty::SetPartyMemberCoinLimit(int) */

void __thiscall CParty::SetPartyMemberCoinLimit(CParty *this,int param_1)

{
  *(int *)(this + 0x328) = param_1;
  return;
}
```

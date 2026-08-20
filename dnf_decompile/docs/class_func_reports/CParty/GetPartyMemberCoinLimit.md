# GetPartyMemberCoinLimit

`_ZN6CParty23GetPartyMemberCoinLimitEv`

`CParty::GetPartyMemberCoinLimit()`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085be54c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085be54c  _ZN6CParty23GetPartyMemberCoinLimitEv
#           CParty::GetPartyMemberCoinLimit()
# range [0x085be54c, 0x085be559]
085be54c +0x00:  push   %ebp
085be54d +0x01:  mov    %esp,%ebp
085be54f +0x03:  mov    0x8(%ebp),%eax
085be552 +0x06:  mov    0x328(%eax),%eax
085be558 +0x0c:  pop    %ebp
085be559 +0x0d:  ret
```

## 反编译 C

```c
// CParty::GetPartyMemberCoinLimit @ 0x85be54c

/* CParty::GetPartyMemberCoinLimit() */

undefined4 __thiscall CParty::GetPartyMemberCoinLimit(CParty *this)

{
  return *(undefined4 *)(this + 0x328);
}
```

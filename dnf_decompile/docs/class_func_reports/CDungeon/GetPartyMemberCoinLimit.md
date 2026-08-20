# GetPartyMemberCoinLimit

`_ZNK8CDungeon23GetPartyMemberCoinLimitEv`

`CDungeon::GetPartyMemberCoinLimit() const`

| 类 | 地址 |
|---|---|
| `CDungeon` | `0x0836526a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0836526a  _ZNK8CDungeon23GetPartyMemberCoinLimitEv
#           CDungeon::GetPartyMemberCoinLimit() const
# range [0x0836526a, 0x08365277]
0836526a +0x00:  push   %ebp
0836526b +0x01:  mov    %esp,%ebp
0836526d +0x03:  mov    0x8(%ebp),%eax
08365270 +0x06:  mov    0x6cc(%eax),%eax
08365276 +0x0c:  pop    %ebp
08365277 +0x0d:  ret
```

## 反编译 C

```c
// CDungeon::GetPartyMemberCoinLimit @ 0x836526a

/* CDungeon::GetPartyMemberCoinLimit() const */

undefined4 __thiscall CDungeon::GetPartyMemberCoinLimit(CDungeon *this)

{
  return *(undefined4 *)(this + 0x6cc);
}
```

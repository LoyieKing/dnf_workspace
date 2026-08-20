# get_dungeon_idx_list

`_ZN10QuickParty24CQuickPartyRewardManager20get_dungeon_idx_listEv`

`QuickParty::CQuickPartyRewardManager::get_dungeon_idx_list()`

| 类 | 地址 |
|---|---|
| `QuickParty::CQuickPartyRewardManager` | `0x0826d896` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0826d896  _ZN10QuickParty24CQuickPartyRewardManager20get_dungeon_idx_listEv
#           QuickParty::CQuickPartyRewardManager::get_dungeon_idx_list()
# range [0x0826d896, 0x0826d8a1]
0826d896 +0x00:  push   %ebp
0826d897 +0x01:  mov    %esp,%ebp
0826d899 +0x03:  mov    0x8(%ebp),%eax
0826d89c +0x06:  add    $0xc,%eax
0826d89f +0x09:  pop    %ebp
0826d8a0 +0x0a:  ret
0826d8a1 +0x0b:  nop
```

## 反编译 C

```c
// QuickParty::CQuickPartyRewardManager::get_dungeon_idx_list @ 0x826d896

/* QuickParty::CQuickPartyRewardManager::get_dungeon_idx_list() */

CQuickPartyRewardManager * __thiscall
QuickParty::CQuickPartyRewardManager::get_dungeon_idx_list(CQuickPartyRewardManager *this)

{
  return this + 0xc;
}
```

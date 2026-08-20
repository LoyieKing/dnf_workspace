# isGrowCreatureMaxLevel

`_ZNK13user_creature12CCreatureMgr22isGrowCreatureMaxLevelEv`

`user_creature::CCreatureMgr::isGrowCreatureMaxLevel() const`

| 类 | 地址 |
|---|---|
| `user_creature::CCreatureMgr` | `0x0833bbb2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0833bbb2  _ZNK13user_creature12CCreatureMgr22isGrowCreatureMaxLevelEv
#           user_creature::CCreatureMgr::isGrowCreatureMaxLevel() const
# range [0x0833bbb2, 0x0833bbbd]
0833bbb2 +0x00:  push   %ebp
0833bbb3 +0x01:  mov    %esp,%ebp
0833bbb5 +0x03:  mov    0x8(%ebp),%eax
0833bbb8 +0x06:  movzbl 0x48(%eax),%eax
0833bbbc +0x0a:  pop    %ebp
0833bbbd +0x0b:  ret
```

## 反编译 C

```c
// user_creature::CCreatureMgr::isGrowCreatureMaxLevel @ 0x833bbb2

/* user_creature::CCreatureMgr::isGrowCreatureMaxLevel() const */

CCreatureMgr __thiscall user_creature::CCreatureMgr::isGrowCreatureMaxLevel(CCreatureMgr *this)

{
  return this[0x48];
}
```

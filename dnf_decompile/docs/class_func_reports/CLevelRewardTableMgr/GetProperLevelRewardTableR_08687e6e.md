# GetProperLevelRewardTableR

`_ZNK20CLevelRewardTableMgr26GetProperLevelRewardTableREi`

`CLevelRewardTableMgr::GetProperLevelRewardTableR(int) const`

| 类 | 地址 |
|---|---|
| `CLevelRewardTableMgr` | `0x08687e6e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08687e6e  _ZNK20CLevelRewardTableMgr26GetProperLevelRewardTableREi
#           CLevelRewardTableMgr::GetProperLevelRewardTableR(int) const
# range [0x08687e6e, 0x08687e77]
08687e6e +0x00:  push   %ebp
08687e6f +0x01:  mov    %esp,%ebp
08687e71 +0x03:  mov    $0x0,%eax
08687e76 +0x08:  pop    %ebp
08687e77 +0x09:  ret
```

## 反编译 C

```c
// CLevelRewardTableMgr::GetProperLevelRewardTableR @ 0x8687e6e

/* CLevelRewardTableMgr::GetProperLevelRewardTableR(int) const */

undefined4 CLevelRewardTableMgr::GetProperLevelRewardTableR(int param_1)

{
  return 0;
}
```

# GetProperLevelRewardTableR

`_ZNK20CLevelRewardTableMgr26GetProperLevelRewardTableREv`

`CLevelRewardTableMgr::GetProperLevelRewardTableR() const`

| 类 | 地址 |
|---|---|
| `CLevelRewardTableMgr` | `0x08687e62` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08687e62  _ZNK20CLevelRewardTableMgr26GetProperLevelRewardTableREv
#           CLevelRewardTableMgr::GetProperLevelRewardTableR() const
# range [0x08687e62, 0x08687e6d]
08687e62 +0x00:  push   %ebp
08687e63 +0x01:  mov    %esp,%ebp
08687e65 +0x03:  mov    0x8(%ebp),%eax
08687e68 +0x06:  mov    0x4(%eax),%eax
08687e6b +0x09:  pop    %ebp
08687e6c +0x0a:  ret
08687e6d +0x0b:  nop
```

## 反编译 C

```c
// CLevelRewardTableMgr::GetProperLevelRewardTableR @ 0x8687e62

/* CLevelRewardTableMgr::GetProperLevelRewardTableR() const */

undefined4 __thiscall CLevelRewardTableMgr::GetProperLevelRewardTableR(CLevelRewardTableMgr *this)

{
  return *(undefined4 *)(this + 4);
}
```

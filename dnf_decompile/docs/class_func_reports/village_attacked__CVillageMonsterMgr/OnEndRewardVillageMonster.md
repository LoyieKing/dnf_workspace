# OnEndRewardVillageMonster

`_ZN16village_attacked18CVillageMonsterMgr25OnEndRewardVillageMonsterEv`

`village_attacked::CVillageMonsterMgr::OnEndRewardVillageMonster()`

| 类 | 地址 |
|---|---|
| `village_attacked::CVillageMonsterMgr` | `0x086b44ec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086b44ec  _ZN16village_attacked18CVillageMonsterMgr25OnEndRewardVillageMonsterEv
#           village_attacked::CVillageMonsterMgr::OnEndRewardVillageMonster()
# range [0x086b44ec, 0x086b44fb]
086b44ec +0x00:  push   %ebp
086b44ed +0x01:  mov    %esp,%ebp
086b44ef +0x03:  mov    0x8(%ebp),%eax
086b44f2 +0x06:  movl   $0x0,0x20(%eax)
086b44f9 +0x0d:  pop    %ebp
086b44fa +0x0e:  ret
086b44fb +0x0f:  nop
```

## 反编译 C

```c
// village_attacked::CVillageMonsterMgr::OnEndRewardVillageMonster @ 0x86b44ec

/* village_attacked::CVillageMonsterMgr::OnEndRewardVillageMonster() */

void __thiscall
village_attacked::CVillageMonsterMgr::OnEndRewardVillageMonster(CVillageMonsterMgr *this)

{
  *(undefined4 *)(this + 0x20) = 0;
  return;
}
```

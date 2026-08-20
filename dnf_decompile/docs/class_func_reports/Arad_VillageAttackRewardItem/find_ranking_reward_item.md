# find_ranking_reward_item

`_ZN28Arad_VillageAttackRewardItem24find_ranking_reward_itemEsRNS_8RankDataE`

`Arad_VillageAttackRewardItem::find_ranking_reward_item(short, Arad_VillageAttackRewardItem::RankData&)`

| 类 | 地址 |
|---|---|
| `Arad_VillageAttackRewardItem` | `0x081a3ef0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081a3ef0  _ZN28Arad_VillageAttackRewardItem24find_ranking_reward_itemEsRNS_8RankDataE
#           Arad_VillageAttackRewardItem::find_ranking_reward_item(short, Arad_VillageAttackRewardItem::RankData&)
# range [0x081a3ef0, 0x081a3f64]
081a3ef0 +0x00:  push   %ebp
081a3ef1 +0x01:  mov    %esp,%ebp
081a3ef3 +0x03:  sub    $0x28,%esp
081a3ef6 +0x06:  mov    0xc(%ebp),%eax
081a3ef9 +0x09:  mov    %ax,-0xc(%ebp)
081a3efd +0x0d:  cmpw   $0x0,-0xc(%ebp)
081a3f02 +0x12:  js     081a3f1f <+0x2f>
081a3f04 +0x14:  mov    0x8(%ebp),%eax
081a3f07 +0x17:  add    $0x10,%eax
081a3f0a +0x1a:  mov    %eax,(%esp)
081a3f0d +0x1d:  call   081a4cc4 <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0xd1f>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0xd1f
081a3f12 +0x22:  cmp    -0xc(%ebp),%ax
081a3f16 +0x26:  jle    081a3f1f <+0x2f>
081a3f18 +0x28:  mov    $0x1,%eax
081a3f1d +0x2d:  jmp    081a3f24 <+0x34>
081a3f1f +0x2f:  mov    $0x0,%eax
081a3f24 +0x34:  test   %al,%al
081a3f26 +0x36:  je     081a3f5e <+0x6e>
081a3f28 +0x38:  movswl -0xc(%ebp),%eax
081a3f2c +0x3c:  mov    0x8(%ebp),%edx
081a3f2f +0x3f:  add    $0x10,%edx
081a3f32 +0x42:  mov    %eax,0x4(%esp)
081a3f36 +0x46:  mov    %edx,(%esp)
081a3f39 +0x49:  call   081a4ce0 <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0xd3b>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0xd3b
081a3f3e +0x4e:  mov    0x10(%ebp),%edx
081a3f41 +0x51:  mov    (%eax),%ecx
081a3f43 +0x53:  mov    %ecx,(%edx)
081a3f45 +0x55:  mov    0x4(%eax),%ecx
081a3f48 +0x58:  mov    %ecx,0x4(%edx)
081a3f4b +0x5b:  mov    0x8(%eax),%ecx
081a3f4e +0x5e:  mov    %ecx,0x8(%edx)
081a3f51 +0x61:  mov    0xc(%eax),%eax
081a3f54 +0x64:  mov    %eax,0xc(%edx)
081a3f57 +0x67:  mov    $0x1,%eax
081a3f5c +0x6c:  jmp    081a3f63 <+0x73>
081a3f5e +0x6e:  mov    $0x0,%eax
081a3f63 +0x73:  leave
081a3f64 +0x74:  ret
```

## 反编译 C

```c
// Arad_VillageAttackRewardItem::find_ranking_reward_item @ 0x81a3ef0

/* Arad_VillageAttackRewardItem::find_ranking_reward_item(short,
   Arad_VillageAttackRewardItem::RankData&) */

bool __thiscall
Arad_VillageAttackRewardItem::find_ranking_reward_item
          (Arad_VillageAttackRewardItem *this,short param_1,RankData *param_2)

{
  bool bVar1;
  short sVar2;
  undefined4 *puVar3;
  
  if ((param_1 < 0) ||
     (sVar2 = std::
              vector<Arad_VillageAttackRewardItem::RankData,std::allocator<Arad_VillageAttackRewardItem::RankData>>
              ::size((vector<Arad_VillageAttackRewardItem::RankData,std::allocator<Arad_VillageAttackRewardItem::RankData>>
                      *)(this + 0x10)), sVar2 <= param_1)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    puVar3 = (undefined4 *)
             std::
             vector<Arad_VillageAttackRewardItem::RankData,std::allocator<Arad_VillageAttackRewardItem::RankData>>
             ::operator[]((vector<Arad_VillageAttackRewardItem::RankData,std::allocator<Arad_VillageAttackRewardItem::RankData>>
                           *)(this + 0x10),(int)param_1);
    *(undefined4 *)param_2 = *puVar3;
    *(undefined4 *)(param_2 + 4) = puVar3[1];
    *(undefined4 *)(param_2 + 8) = puVar3[2];
    *(undefined4 *)(param_2 + 0xc) = puVar3[3];
  }
  return bVar1;
}
```

# get_random_buff_prob

`_ZN10QuickParty24CQuickPartyRewardManager20get_random_buff_probENS_14RandomBuffTypeENS_17RandomBuffDungeonE`

`QuickParty::CQuickPartyRewardManager::get_random_buff_prob(QuickParty::RandomBuffType, QuickParty::RandomBuffDungeon)`

| 类 | 地址 |
|---|---|
| `QuickParty::CQuickPartyRewardManager` | `0x0826d860` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0826d860  _ZN10QuickParty24CQuickPartyRewardManager20get_random_buff_probENS_14RandomBuffTypeENS_17RandomBuffDungeonE
#           QuickParty::CQuickPartyRewardManager::get_random_buff_prob(QuickParty::RandomBuffType, QuickParty::RandomBuffDungeon)
# range [0x0826d860, 0x0826d895]
0826d860 +0x00:  push   %ebp
0826d861 +0x01:  mov    %esp,%ebp
0826d863 +0x03:  push   %ebx
0826d864 +0x04:  mov    0xc(%ebp),%eax
0826d867 +0x07:  cmp    $0xb,%eax
0826d86a +0x0a:  jg     0826d874 <+0x14>
0826d86c +0x0c:  mov    0x10(%ebp),%eax
0826d86f +0x0f:  cmp    $0x6,%eax
0826d872 +0x12:  jle    0826d87b <+0x1b>
0826d874 +0x14:  mov    $0x0,%eax
0826d879 +0x19:  jmp    0826d893 <+0x33>
0826d87b +0x1b:  mov    0xc(%ebp),%edx
0826d87e +0x1e:  mov    0x10(%ebp),%ebx
0826d881 +0x21:  mov    0x8(%ebp),%ecx
0826d884 +0x24:  mov    %edx,%eax
0826d886 +0x26:  shl    $0x3,%eax
0826d889 +0x29:  sub    %edx,%eax
0826d88b +0x2b:  add    %ebx,%eax
0826d88d +0x2d:  add    $0x14,%eax
0826d890 +0x30:  mov    (%ecx,%eax,4),%eax
0826d893 +0x33:  pop    %ebx
0826d894 +0x34:  pop    %ebp
0826d895 +0x35:  ret
```

## 反编译 C

```c
// QuickParty::CQuickPartyRewardManager::get_random_buff_prob @ 0x826d860

/* QuickParty::CQuickPartyRewardManager::get_random_buff_prob(QuickParty::RandomBuffType,
   QuickParty::RandomBuffDungeon) */

undefined4 __thiscall
QuickParty::CQuickPartyRewardManager::get_random_buff_prob
          (CQuickPartyRewardManager *this,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((param_2 < 0xc) && (param_3 < 7)) {
    uVar1 = *(undefined4 *)(this + (param_2 * 7 + param_3 + 0x14) * 4);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```

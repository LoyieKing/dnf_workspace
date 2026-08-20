# getDungeonDropResult

`_ZN11game_master16CMonsterDropTest20getDungeonDropResultERSt4listI8map_itemSaIS2_EERSt3mapIiiSt4lessIiESaISt4pairIKiiEEERS6_IiSD_S8_SaIS9_ISA_SD_EEE`

`game_master::CMonsterDropTest::getDungeonDropResult(std::list<map_item, std::allocator<map_item> >&, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >&, std::map<int, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >, std::less<int>, std::allocator<std::pair<int const, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > > > > >&)`

| 类 | 地址 |
|---|---|
| `game_master::CMonsterDropTest` | `0x084ae0e2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084ae0e2  _ZN11game_master16CMonsterDropTest20getDungeonDropResultERSt4listI8map_itemSaIS2_EERSt3mapIiiSt4lessIiESaISt4pairIKiiEEERS6_IiSD_S8_SaIS9_ISA_SD_EEE
#           game_master::CMonsterDropTest::getDungeonDropResult(std::list<map_item, std::allocator<map_item> >&, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >&, std::map<int, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >, std::less<int>, std::allocator<std::pair<int const, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > > > > >&)
# range [0x084ae0e2, 0x084ae14b]
084ae0e2 +0x00:  push   %ebp
084ae0e3 +0x01:  mov    %esp,%ebp
084ae0e5 +0x03:  sub    $0x18,%esp
084ae0e8 +0x06:  mov    0x8(%ebp),%eax
084ae0eb +0x09:  mov    0x8(%eax),%eax
084ae0ee +0x0c:  cmp    $0x2,%eax
084ae0f1 +0x0f:  je     084ae0fc <+0x1a>
084ae0f3 +0x11:  cmp    $0x3,%eax
084ae0f6 +0x14:  je     084ae130 <+0x4e>
084ae0f8 +0x16:  test   %eax,%eax
084ae0fa +0x18:  jne    084ae149 <+0x67>
084ae0fc +0x1a:  mov    0x10(%ebp),%eax
084ae0ff +0x1d:  mov    %eax,0x8(%esp)
084ae103 +0x21:  mov    0xc(%ebp),%eax
084ae106 +0x24:  mov    %eax,0x4(%esp)
084ae10a +0x28:  mov    0x8(%ebp),%eax
084ae10d +0x2b:  mov    %eax,(%esp)
084ae110 +0x2e:  call   084ae734 <_ZN11game_master16CMonsterDropTest23makeGeneralItemDropListERSt4listI8map_itemSaIS2_EERSt3mapIiiSt4lessIiESaISt4pairIKiiEEE>  ; game_master::CMonsterDropTest::makeGeneralItemDropList(std::list<map_item, std::allocator<map_item> >&, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >&)
084ae115 +0x33:  mov    0x14(%ebp),%eax
084ae118 +0x36:  mov    %eax,0x8(%esp)
084ae11c +0x3a:  mov    0xc(%ebp),%eax
084ae11f +0x3d:  mov    %eax,0x4(%esp)
084ae123 +0x41:  mov    0x8(%ebp),%eax
084ae126 +0x44:  mov    %eax,(%esp)
084ae129 +0x47:  call   084ae14c <_ZN11game_master16CMonsterDropTest19makeUpgradeDropListERSt4listI8map_itemSaIS2_EERSt3mapIiS6_IiiSt4lessIiESaISt4pairIKiiEEES8_SaIS9_ISA_SD_EEE>  ; game_master::CMonsterDropTest::makeUpgradeDropList(std::list<map_item, std::allocator<map_item> >&, std::map<int, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >, std::less<int>, std::allocator<std::pair<int const, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > > > > >&)
084ae12e +0x4c:  jmp    084ae149 <+0x67>
084ae130 +0x4e:  mov    0x10(%ebp),%eax
084ae133 +0x51:  mov    %eax,0x8(%esp)
084ae137 +0x55:  mov    0xc(%ebp),%eax
084ae13a +0x58:  mov    %eax,0x4(%esp)
084ae13e +0x5c:  mov    0x8(%ebp),%eax
084ae141 +0x5f:  mov    %eax,(%esp)
084ae144 +0x62:  call   084ae944 <_ZN11game_master16CMonsterDropTest20makeGoldItemDropListERSt4listI8map_itemSaIS2_EERSt3mapIiiSt4lessIiESaISt4pairIKiiEEE>  ; game_master::CMonsterDropTest::makeGoldItemDropList(std::list<map_item, std::allocator<map_item> >&, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >&)
084ae149 +0x67:  leave
084ae14a +0x68:  ret
084ae14b +0x69:  nop
```

## 反编译 C

```c
// game_master::CMonsterDropTest::getDungeonDropResult @ 0x84ae0e2

/* game_master::CMonsterDropTest::getDungeonDropResult(std::list<map_item, std::allocator<map_item>
   >&, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >&,
   std::map<int, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >,
   std::less<int>, std::allocator<std::pair<int const, std::map<int, int, std::less<int>,
   std::allocator<std::pair<int const, int> > > > > >&) */

void game_master::CMonsterDropTest::getDungeonDropResult(list *param_1,map *param_2,map *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 != 2) {
    if (iVar1 == 3) {
      makeGoldItemDropList(param_1,param_2);
      return;
    }
    if (iVar1 != 0) {
      return;
    }
  }
  makeGeneralItemDropList(param_1,param_2);
  makeUpgradeDropList(param_1,param_2);
  return;
}
```

# KillHellPartyGroupMonsterCnt

`_ZN13CBattle_Field28KillHellPartyGroupMonsterCntER7MapInfoR11map_monsterRb`

`CBattle_Field::KillHellPartyGroupMonsterCnt(MapInfo&, map_monster&, bool&)`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x0830d704` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0830d704  _ZN13CBattle_Field28KillHellPartyGroupMonsterCntER7MapInfoR11map_monsterRb
#           CBattle_Field::KillHellPartyGroupMonsterCnt(MapInfo&, map_monster&, bool&)
# range [0x0830d704, 0x0830d847]
0830d704 +0x000:  push   %ebp
0830d705 +0x001:  mov    %esp,%ebp
0830d707 +0x003:  sub    $0x38,%esp
0830d70a +0x006:  mov    0x8(%ebp),%eax
0830d70d +0x009:  movzbl 0x1ca(%eax),%eax
0830d714 +0x010:  test   %al,%al
0830d716 +0x012:  jne    0830d845 <+0x141>
0830d71c +0x018:  mov    0x10(%ebp),%eax
0830d71f +0x01b:  movzwl 0x336(%eax),%eax
0830d726 +0x022:  movzwl %ax,%eax
0830d729 +0x025:  mov    %eax,-0x10(%ebp)
0830d72c +0x028:  mov    0xc(%ebp),%eax
0830d72f +0x02b:  lea    0x8c(%eax),%ecx
0830d735 +0x031:  lea    -0x14(%ebp),%eax
0830d738 +0x034:  lea    -0x10(%ebp),%edx
0830d73b +0x037:  mov    %edx,0x8(%esp)
0830d73f +0x03b:  mov    %ecx,0x4(%esp)
0830d743 +0x03f:  mov    %eax,(%esp)
0830d746 +0x042:  call   080cd2ee <_GLOBAL__I__ZN10BingoEventC2Ev+0x213b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x213b
0830d74b +0x047:  sub    $0x4,%esp
0830d74e +0x04a:  mov    0xc(%ebp),%eax
0830d751 +0x04d:  lea    0x8c(%eax),%edx
0830d757 +0x053:  lea    -0xc(%ebp),%eax
0830d75a +0x056:  mov    %edx,0x4(%esp)
0830d75e +0x05a:  mov    %eax,(%esp)
0830d761 +0x05d:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
0830d766 +0x062:  sub    $0x4,%esp
0830d769 +0x065:  lea    -0xc(%ebp),%eax
0830d76c +0x068:  mov    %eax,0x4(%esp)
0830d770 +0x06c:  lea    -0x14(%ebp),%eax
0830d773 +0x06f:  mov    %eax,(%esp)
0830d776 +0x072:  call   080c78f0 <_GLOBAL__I_g_ServerString_+0xe5b>  ; global constructors keyed to g_ServerString_+0xe5b
0830d77b +0x077:  test   %al,%al
0830d77d +0x079:  je     0830d7c8 <+0xc4>
0830d77f +0x07b:  mov    0xc(%ebp),%eax
0830d782 +0x07e:  mov    0x4(%eax),%edx
0830d785 +0x081:  mov    0x10(%ebp),%eax
0830d788 +0x084:  movzwl 0x336(%eax),%eax
0830d78f +0x08b:  movzwl %ax,%eax
0830d792 +0x08e:  mov    %edx,0x18(%esp)
0830d796 +0x092:  mov    %eax,0x14(%esp)
0830d79a +0x096:  movl   $"HELLPARTY_LOG : HELLPARTY GROUP INDEX (%d), MAP INDEX (%d) : KILL HELL GROUP ERROR!!\n",0x10(%esp)
0830d7a2 +0x09e:  movl   $0x1dd9,0xc(%esp)
0830d7aa +0x0a6:  movl   $&_ZZN13CBattle_Field28KillHellPartyGroupMonsterCntER7MapInfoR11map_monsterRbE19__PRETTY_FUNCTION__,0x8(%esp)
0830d7b2 +0x0ae:  movl   $"battle_field.cpp",0x4(%esp)
0830d7ba +0x0b6:  movl   $0x1,(%esp)
0830d7c1 +0x0bd:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0830d7c6 +0x0c2:  jmp    0830d846 <+0x142>
0830d7c8 +0x0c4:  mov    0x10(%ebp),%eax
0830d7cb +0x0c7:  movb   $0x0,0x8(%eax)
0830d7cf +0x0cb:  lea    -0x14(%ebp),%eax
0830d7d2 +0x0ce:  mov    %eax,(%esp)
0830d7d5 +0x0d1:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
0830d7da +0x0d6:  mov    0x4(%eax),%eax
0830d7dd +0x0d9:  test   %eax,%eax
0830d7df +0x0db:  sete   %al
0830d7e2 +0x0de:  test   %al,%al
0830d7e4 +0x0e0:  je     0830d829 <+0x125>
0830d7e6 +0x0e2:  mov    0x14(%ebp),%eax
0830d7e9 +0x0e5:  movb   $0x1,(%eax)
0830d7ec +0x0e8:  mov    0xc(%ebp),%eax
0830d7ef +0x0eb:  lea    0x8c(%eax),%edx
0830d7f5 +0x0f1:  mov    -0x14(%ebp),%eax
0830d7f8 +0x0f4:  mov    %eax,0x4(%esp)
0830d7fc +0x0f8:  mov    %edx,(%esp)
0830d7ff +0x0fb:  call   08311fda <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x3bbf>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x3bbf
0830d804 +0x100:  mov    0xc(%ebp),%eax
0830d807 +0x103:  add    $0x8c,%eax
0830d80c +0x108:  mov    %eax,(%esp)
0830d80f +0x10b:  call   08235840 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xaeea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xaeea
0830d814 +0x110:  test   %eax,%eax
0830d816 +0x112:  sete   %al
0830d819 +0x115:  test   %al,%al
0830d81b +0x117:  je     0830d846 <+0x142>
0830d81d +0x119:  mov    0x8(%ebp),%eax
0830d820 +0x11c:  movb   $0x1,0x1ca(%eax)
0830d827 +0x123:  jmp    0830d846 <+0x142>
0830d829 +0x125:  lea    -0x14(%ebp),%eax
0830d82c +0x128:  mov    %eax,(%esp)
0830d82f +0x12b:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
0830d834 +0x130:  mov    0x4(%eax),%edx
0830d837 +0x133:  sub    $0x1,%edx
0830d83a +0x136:  mov    %edx,0x4(%eax)
0830d83d +0x139:  mov    0x14(%ebp),%eax
0830d840 +0x13c:  movb   $0x0,(%eax)
0830d843 +0x13f:  jmp    0830d846 <+0x142>
0830d845 +0x141:  nop
0830d846 +0x142:  leave
0830d847 +0x143:  ret
```

## 反编译 C

```c
// CBattle_Field::KillHellPartyGroupMonsterCnt @ 0x830d704

/* CBattle_Field::KillHellPartyGroupMonsterCnt(MapInfo&, map_monster&, bool&) */

void __thiscall
CBattle_Field::KillHellPartyGroupMonsterCnt
          (CBattle_Field *this,MapInfo *param_1,map_monster *param_2,bool *param_3)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  int local_18;
  uint local_14;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_10 [12];
  
  if (this[0x1ca] == (CBattle_Field)0x0) {
    local_14 = (uint)*(ushort *)(param_2 + 0x336);
    puVar3 = &local_14;
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find(&local_18);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_10);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator==
                      ((_Rb_tree_iterator<std::pair<int_const,int>> *)&local_18,
                       (_Rb_tree_iterator *)local_10);
    if (cVar1 == '\0') {
      param_2[8] = (map_monster)0x0;
      iVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,int>> *)&local_18);
      if (*(int *)(iVar2 + 4) == 0) {
        *param_3 = true;
        std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::erase
                  ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
                   (param_1 + 0x8c),local_18,puVar3);
        iVar2 = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::size
                          ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
                           (param_1 + 0x8c));
        if (iVar2 == 0) {
          this[0x1ca] = (CBattle_Field)0x1;
        }
      }
      else {
        iVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                          ((_Rb_tree_iterator<std::pair<int_const,int>> *)&local_18);
        *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + -1;
        *param_3 = false;
      }
    }
    else {
      LogManager::logFormat
                (1,"battle_field.cpp",
                 "void CBattle_Field::KillHellPartyGroupMonsterCnt(MapInfo&, map_monster&, bool&)",
                 0x1dd9,
                 "HELLPARTY_LOG : HELLPARTY GROUP INDEX (%d), MAP INDEX (%d) : KILL HELL GROUP ERROR!!\n"
                 ,(uint)*(ushort *)(param_2 + 0x336),*(undefined4 *)(param_1 + 4));
    }
  }
  return;
}
```

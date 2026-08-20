# check_quick_party_min_count

`_ZN10QuickParty24CQuickPartySystemManager27check_quick_party_min_countERKNS_23STQuickPartyPoolMap_KeyEi`

`QuickParty::CQuickPartySystemManager::check_quick_party_min_count(QuickParty::STQuickPartyPoolMap_Key const&, int)`

| 类 | 地址 |
|---|---|
| `QuickParty::CQuickPartySystemManager` | `0x0826ab9e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0826ab9e  _ZN10QuickParty24CQuickPartySystemManager27check_quick_party_min_countERKNS_23STQuickPartyPoolMap_KeyEi
#           QuickParty::CQuickPartySystemManager::check_quick_party_min_count(QuickParty::STQuickPartyPoolMap_Key const&, int)
# range [0x0826ab9e, 0x0826ace9]
0826ab9e +0x000:  push   %ebp
0826ab9f +0x001:  mov    %esp,%ebp
0826aba1 +0x003:  sub    $0x38,%esp
0826aba4 +0x006:  mov    0xc(%ebp),%eax
0826aba7 +0x009:  movzwl (%eax),%eax
0826abaa +0x00c:  cwtl
0826abab +0x00d:  mov    %eax,-0x1c(%ebp)
0826abae +0x010:  mov    0xc(%ebp),%eax
0826abb1 +0x013:  movzbl 0x2(%eax),%eax
0826abb5 +0x017:  movsbl %al,%eax
0826abb8 +0x01a:  mov    %eax,-0x18(%ebp)
0826abbb +0x01d:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0826abc0 +0x022:  mov    -0x1c(%ebp),%edx
0826abc3 +0x025:  mov    %edx,0x4(%esp)
0826abc7 +0x029:  mov    %eax,(%esp)
0826abca +0x02c:  call   0835f9f8 <_ZNK12CDataManager12find_dungeonEi>  ; CDataManager::find_dungeon(int) const
0826abcf +0x031:  mov    %eax,-0x14(%ebp)
0826abd2 +0x034:  cmpl   $0x0,-0x14(%ebp)
0826abd6 +0x038:  jne    0826abe2 <+0x44>
0826abd8 +0x03a:  mov    $0x0,%eax
0826abdd +0x03f:  jmp    0826ace8 <+0x14a>
0826abe2 +0x044:  mov    -0x14(%ebp),%eax
0826abe5 +0x047:  mov    %eax,(%esp)
0826abe8 +0x04a:  call   0826b928 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x1f6>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x1f6
0826abed +0x04f:  cmp    $0x2,%al
0826abef +0x051:  sete   %al
0826abf2 +0x054:  test   %al,%al
0826abf4 +0x056:  je     0826ac1c <+0x7e>
0826abf6 +0x058:  mov    -0x14(%ebp),%eax
0826abf9 +0x05b:  mov    %eax,(%esp)
0826abfc +0x05e:  call   0822b4b4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb5e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb5e
0826ac01 +0x063:  movsbl %al,%eax
0826ac04 +0x066:  cmp    0x10(%ebp),%eax
0826ac07 +0x069:  setne  %al
0826ac0a +0x06c:  test   %al,%al
0826ac0c +0x06e:  je     0826ace3 <+0x145>
0826ac12 +0x074:  mov    $0x0,%eax
0826ac17 +0x079:  jmp    0826ace8 <+0x14a>
0826ac1c +0x07e:  mov    -0x14(%ebp),%eax
0826ac1f +0x081:  mov    %eax,(%esp)
0826ac22 +0x084:  call   0826b938 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x206>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x206
0826ac27 +0x089:  test   %al,%al
0826ac29 +0x08b:  setg   %al
0826ac2c +0x08e:  test   %al,%al
0826ac2e +0x090:  je     0826ac59 <+0xbb>
0826ac30 +0x092:  mov    -0x14(%ebp),%eax
0826ac33 +0x095:  mov    %eax,(%esp)
0826ac36 +0x098:  call   0826b944 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x212>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x212
0826ac3b +0x09d:  movsbl %al,%eax
0826ac3e +0x0a0:  add    $0x1,%eax
0826ac41 +0x0a3:  cmp    0x10(%ebp),%eax
0826ac44 +0x0a6:  setg   %al
0826ac47 +0x0a9:  test   %al,%al
0826ac49 +0x0ab:  je     0826ace3 <+0x145>
0826ac4f +0x0b1:  mov    $0x0,%eax
0826ac54 +0x0b6:  jmp    0826ace8 <+0x14a>
0826ac59 +0x0bb:  movl   $0xffffffff,-0x10(%ebp)
0826ac60 +0x0c2:  movl   $0xffffffff,-0xc(%ebp)
0826ac67 +0x0c9:  mov    -0x14(%ebp),%eax
0826ac6a +0x0cc:  movzbl 0x89c(%eax),%eax
0826ac71 +0x0d3:  test   %al,%al
0826ac73 +0x0d5:  je     0826ac7e <+0xe0>
0826ac75 +0x0d7:  movl   $0x1,-0xc(%ebp)
0826ac7c +0x0de:  jmp    0826ac85 <+0xe7>
0826ac7e +0x0e0:  movl   $0x0,-0xc(%ebp)
0826ac85 +0x0e7:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
0826ac8a +0x0ec:  mov    %eax,(%esp)
0826ac8d +0x0ef:  call   08298e24 <_ZN12CGameManager26GetQuickPartyRewardManagerEv>  ; CGameManager::GetQuickPartyRewardManager()
0826ac92 +0x0f4:  test   %eax,%eax
0826ac94 +0x0f6:  setne  %al
0826ac97 +0x0f9:  test   %al,%al
0826ac99 +0x0fb:  je     0826acc1 <+0x123>
0826ac9b +0x0fd:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
0826aca0 +0x102:  mov    %eax,(%esp)
0826aca3 +0x105:  call   08298e24 <_ZN12CGameManager26GetQuickPartyRewardManagerEv>  ; CGameManager::GetQuickPartyRewardManager()
0826aca8 +0x10a:  mov    -0x18(%ebp),%edx
0826acab +0x10d:  mov    %edx,0x8(%esp)
0826acaf +0x111:  mov    -0xc(%ebp),%edx
0826acb2 +0x114:  mov    %edx,0x4(%esp)
0826acb6 +0x118:  mov    %eax,(%esp)
0826acb9 +0x11b:  call   0826d8a2 <_ZN10QuickParty24CQuickPartyRewardManager28getRequireQuickPartyMinCountEii>  ; QuickParty::CQuickPartyRewardManager::getRequireQuickPartyMinCount(int, int)
0826acbe +0x120:  mov    %eax,-0x10(%ebp)
0826acc1 +0x123:  cmpl   $0xffffffff,-0x10(%ebp)
0826acc5 +0x127:  je     0826acd6 <+0x138>
0826acc7 +0x129:  mov    -0x10(%ebp),%eax
0826acca +0x12c:  cmp    0x10(%ebp),%eax
0826accd +0x12f:  jle    0826acd6 <+0x138>
0826accf +0x131:  mov    $0x0,%eax
0826acd4 +0x136:  jmp    0826ace8 <+0x14a>
0826acd6 +0x138:  cmpl   $0x1,0x10(%ebp)
0826acda +0x13c:  jg     0826ace3 <+0x145>
0826acdc +0x13e:  mov    $0x0,%eax
0826ace1 +0x143:  jmp    0826ace8 <+0x14a>
0826ace3 +0x145:  mov    $0x1,%eax
0826ace8 +0x14a:  leave
0826ace9 +0x14b:  ret
```

## 反编译 C

```c
// QuickParty::CQuickPartySystemManager::check_quick_party_min_count @ 0x826ab9e

/* QuickParty::CQuickPartySystemManager::check_quick_party_min_count(QuickParty::STQuickPartyPoolMap_Key
   const&, int) */

undefined4 __thiscall
QuickParty::CQuickPartySystemManager::check_quick_party_min_count
          (CQuickPartySystemManager *this,STQuickPartyPoolMap_Key *param_1,int param_2)

{
  STQuickPartyPoolMap_Key SVar1;
  char cVar2;
  int iVar3;
  CDungeon *this_00;
  CGameManager *pCVar4;
  CQuickPartyRewardManager *this_01;
  int local_14;
  uint local_10;
  
  SVar1 = param_1[2];
  iVar3 = G_CDataManager();
  this_00 = (CDungeon *)CDataManager::find_dungeon(iVar3);
  if (this_00 == (CDungeon *)0x0) {
    return 0;
  }
  cVar2 = CDungeon::get_blood_dungeon_type(this_00);
  if (cVar2 == '\x02') {
    cVar2 = CDungeon::get_limit_party_count(this_00);
    if (cVar2 != param_2) {
      return 0;
    }
  }
  else {
    cVar2 = CDungeon::get_dimension_possible(this_00);
    if (cVar2 < '\x01') {
      local_14 = -1;
      local_10 = (uint)(this_00[0x89c] != (CDungeon)0x0);
      pCVar4 = (CGameManager *)G_CGameManager();
      iVar3 = CGameManager::GetQuickPartyRewardManager(pCVar4);
      if (iVar3 != 0) {
        pCVar4 = (CGameManager *)G_CGameManager();
        this_01 = (CQuickPartyRewardManager *)CGameManager::GetQuickPartyRewardManager(pCVar4);
        local_14 = CQuickPartyRewardManager::getRequireQuickPartyMinCount
                             (this_01,local_10,(int)(char)SVar1);
      }
      if ((local_14 != -1) && (param_2 < local_14)) {
        return 0;
      }
      if (param_2 < 2) {
        return 0;
      }
    }
    else {
      cVar2 = CDungeon::get_dimension_min_partymem(this_00);
      if (param_2 < cVar2 + 1) {
        return 0;
      }
    }
  }
  return 1;
}
```

# init_quick_party_pool

`_ZN10QuickParty24CQuickPartySystemManager21init_quick_party_poolEPK8CDungeon`

`QuickParty::CQuickPartySystemManager::init_quick_party_pool(CDungeon const*)`

| 类 | 地址 |
|---|---|
| `QuickParty::CQuickPartySystemManager` | `0x08269c0c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08269c0c  _ZN10QuickParty24CQuickPartySystemManager21init_quick_party_poolEPK8CDungeon
#           QuickParty::CQuickPartySystemManager::init_quick_party_pool(CDungeon const*)
# range [0x08269c0c, 0x08269e33]
08269c0c +0x000:  push   %ebp
08269c0d +0x001:  mov    %esp,%ebp
08269c0f +0x003:  push   %esi
08269c10 +0x004:  push   %ebx
08269c11 +0x005:  sub    $0x90,%esp
08269c17 +0x00b:  cmpl   $0x0,0xc(%ebp)
08269c1b +0x00f:  je     08269e23 <+0x217>
08269c21 +0x015:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
08269c26 +0x01a:  mov    %eax,(%esp)
08269c29 +0x01d:  call   08298e24 <_ZN12CGameManager26GetQuickPartyRewardManagerEv>  ; CGameManager::GetQuickPartyRewardManager()
08269c2e +0x022:  mov    %eax,(%esp)
08269c31 +0x025:  call   0826d896 <_ZN10QuickParty24CQuickPartyRewardManager20get_dungeon_idx_listEv>  ; QuickParty::CQuickPartyRewardManager::get_dungeon_idx_list()
08269c36 +0x02a:  lea    -0x60(%ebp),%edx
08269c39 +0x02d:  mov    %eax,0x4(%esp)
08269c3d +0x031:  mov    %edx,(%esp)
08269c40 +0x034:  call   080cd34e <_GLOBAL__I__ZN10BingoEventC2Ev+0x219b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x219b
08269c45 +0x039:  sub    $0x4,%esp
08269c48 +0x03c:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
08269c4d +0x041:  mov    %eax,(%esp)
08269c50 +0x044:  call   08298e24 <_ZN12CGameManager26GetQuickPartyRewardManagerEv>  ; CGameManager::GetQuickPartyRewardManager()
08269c55 +0x049:  mov    %eax,(%esp)
08269c58 +0x04c:  call   0826d896 <_ZN10QuickParty24CQuickPartyRewardManager20get_dungeon_idx_listEv>  ; QuickParty::CQuickPartyRewardManager::get_dungeon_idx_list()
08269c5d +0x051:  lea    -0x64(%ebp),%edx
08269c60 +0x054:  mov    %eax,0x4(%esp)
08269c64 +0x058:  mov    %edx,(%esp)
08269c67 +0x05b:  call   080cd37a <_GLOBAL__I__ZN10BingoEventC2Ev+0x21c7>  ; global constructors keyed to BingoEvent::BingoEvent()+0x21c7
08269c6c +0x060:  sub    $0x4,%esp
08269c6f +0x063:  jmp    08269ca3 <+0x97>
08269c71 +0x065:  mov    0xc(%ebp),%eax
08269c74 +0x068:  mov    %eax,(%esp)
08269c77 +0x06b:  call   080fdcf0 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1c
08269c7c +0x070:  mov    %eax,%ebx
08269c7e +0x072:  lea    -0x60(%ebp),%eax
08269c81 +0x075:  mov    %eax,(%esp)
08269c84 +0x078:  call   080f9a1c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x228>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x228
08269c89 +0x07d:  mov    (%eax),%eax
08269c8b +0x07f:  cmp    %eax,%ebx
08269c8d +0x081:  sete   %al
08269c90 +0x084:  test   %al,%al
08269c92 +0x086:  jne    08269e26 <+0x21a>
08269c98 +0x08c:  lea    -0x60(%ebp),%eax
08269c9b +0x08f:  mov    %eax,(%esp)
08269c9e +0x092:  call   080f9a06 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x212>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x212
08269ca3 +0x097:  lea    -0x64(%ebp),%eax
08269ca6 +0x09a:  mov    %eax,0x4(%esp)
08269caa +0x09e:  lea    -0x60(%ebp),%eax
08269cad +0x0a1:  mov    %eax,(%esp)
08269cb0 +0x0a4:  call   080f9a26 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x232>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x232
08269cb5 +0x0a9:  test   %al,%al
08269cb7 +0x0ab:  jne    08269c71 <+0x65>
08269cb9 +0x0ad:  mov    0xc(%ebp),%eax
08269cbc +0x0b0:  mov    %eax,(%esp)
08269cbf +0x0b3:  call   0822b4fa <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xba4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xba4
08269cc4 +0x0b8:  test   %al,%al
08269cc6 +0x0ba:  jne    08269e29 <+0x21d>
08269ccc +0x0c0:  lea    -0x68(%ebp),%eax
08269ccf +0x0c3:  mov    %eax,(%esp)
08269cd2 +0x0c6:  call   082344ca <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9b74>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9b74
08269cd7 +0x0cb:  lea    -0x88(%ebp),%eax
08269cdd +0x0d1:  mov    %eax,(%esp)
08269ce0 +0x0d4:  call   0826b854 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x122>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x122
08269ce5 +0x0d9:  mov    0xc(%ebp),%eax
08269ce8 +0x0dc:  mov    %eax,(%esp)
08269ceb +0x0df:  call   080fdcf0 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1c
08269cf0 +0x0e4:  mov    %ax,-0x68(%ebp)
08269cf4 +0x0e8:  movl   $0x0,-0xc(%ebp)
08269cfb +0x0ef:  jmp    08269de4 <+0x1d8>
08269d00 +0x0f4:  mov    0xc(%ebp),%eax
08269d03 +0x0f7:  mov    %eax,(%esp)
08269d06 +0x0fa:  call   0822b4c0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb6a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb6a
08269d0b +0x0ff:  cmp    $0x1,%eax
08269d0e +0x102:  je     08269d2e <+0x122>
08269d10 +0x104:  mov    0xc(%ebp),%eax
08269d13 +0x107:  mov    %eax,(%esp)
08269d16 +0x10a:  call   0826b928 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x1f6>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x1f6
08269d1b +0x10f:  test   %al,%al
08269d1d +0x111:  jg     08269d2e <+0x122>
08269d1f +0x113:  mov    0xc(%ebp),%eax
08269d22 +0x116:  mov    %eax,(%esp)
08269d25 +0x119:  call   0826b950 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x21e>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x21e
08269d2a +0x11e:  test   %al,%al
08269d2c +0x120:  je     08269d35 <+0x129>
08269d2e +0x122:  mov    $0x1,%eax
08269d33 +0x127:  jmp    08269d3a <+0x12e>
08269d35 +0x129:  mov    $0x0,%eax
08269d3a +0x12e:  test   %al,%al
08269d3c +0x130:  je     08269d48 <+0x13c>
08269d3e +0x132:  cmpl   $0x0,-0xc(%ebp)
08269d42 +0x136:  jne    08269ddf <+0x1d3>
08269d48 +0x13c:  mov    -0xc(%ebp),%eax
08269d4b +0x13f:  mov    %al,-0x66(%ebp)
08269d4e +0x142:  lea    -0x30(%ebp),%eax
08269d51 +0x145:  lea    -0x88(%ebp),%edx
08269d57 +0x14b:  mov    %edx,0x8(%esp)
08269d5b +0x14f:  lea    -0x68(%ebp),%edx
08269d5e +0x152:  mov    %edx,0x4(%esp)
08269d62 +0x156:  mov    %eax,(%esp)
08269d65 +0x159:  call   0826bb01 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x3cf>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x3cf
08269d6a +0x15e:  sub    $0x4,%esp
08269d6d +0x161:  lea    -0x30(%ebp),%eax
08269d70 +0x164:  mov    %eax,0x4(%esp)
08269d74 +0x168:  lea    -0x54(%ebp),%eax
08269d77 +0x16b:  mov    %eax,(%esp)
08269d7a +0x16e:  call   0826bbc0 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x48e>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x48e
08269d7f +0x173:  mov    0x8(%ebp),%edx
08269d82 +0x176:  lea    -0x5c(%ebp),%eax
08269d85 +0x179:  lea    -0x54(%ebp),%ecx
08269d88 +0x17c:  mov    %ecx,0x8(%esp)
08269d8c +0x180:  mov    %edx,0x4(%esp)
08269d90 +0x184:  mov    %eax,(%esp)
08269d93 +0x187:  call   0826bc00 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x4ce>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x4ce
08269d98 +0x18c:  sub    $0x4,%esp
08269d9b +0x18f:  lea    -0x54(%ebp),%eax
08269d9e +0x192:  mov    %eax,(%esp)
08269da1 +0x195:  call   0826ba16 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x2e4>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x2e4
08269da6 +0x19a:  jmp    08269dd2 <+0x1c6>
08269da8 +0x19c:  mov    %edx,%ebx
08269daa +0x19e:  mov    %eax,%esi
08269dac +0x1a0:  lea    -0x54(%ebp),%eax
08269daf +0x1a3:  mov    %eax,(%esp)
08269db2 +0x1a6:  call   0826ba16 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x2e4>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x2e4
08269db7 +0x1ab:  mov    %esi,%eax
08269db9 +0x1ad:  mov    %ebx,%edx
08269dbb +0x1af:  jmp    08269dbd <+0x1b1>
08269dbd +0x1b1:  mov    %edx,%ebx
08269dbf +0x1b3:  mov    %eax,%esi
08269dc1 +0x1b5:  lea    -0x30(%ebp),%eax
08269dc4 +0x1b8:  mov    %eax,(%esp)
08269dc7 +0x1bb:  call   0826ba00 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x2ce>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x2ce
08269dcc +0x1c0:  mov    %esi,%eax
08269dce +0x1c2:  mov    %ebx,%edx
08269dd0 +0x1c4:  jmp    08269df5 <+0x1e9>
08269dd2 +0x1c6:  lea    -0x30(%ebp),%eax
08269dd5 +0x1c9:  mov    %eax,(%esp)
08269dd8 +0x1cc:  call   0826ba00 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x2ce>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x2ce
08269ddd +0x1d1:  jmp    08269de0 <+0x1d4>
08269ddf +0x1d3:  nop
08269de0 +0x1d4:  addl   $0x1,-0xc(%ebp)
08269de4 +0x1d8:  cmpl   $0x3,-0xc(%ebp)
08269de8 +0x1dc:  setle  %al
08269deb +0x1df:  test   %al,%al
08269ded +0x1e1:  jne    08269d00 <+0xf4>
08269df3 +0x1e7:  jmp    08269e13 <+0x207>
08269df5 +0x1e9:  mov    %edx,%ebx
08269df7 +0x1eb:  mov    %eax,%esi
08269df9 +0x1ed:  lea    -0x88(%ebp),%eax
08269dff +0x1f3:  mov    %eax,(%esp)
08269e02 +0x1f6:  call   0826b9d2 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x2a0>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x2a0
08269e07 +0x1fb:  mov    %esi,%eax
08269e09 +0x1fd:  mov    %ebx,%edx
08269e0b +0x1ff:  mov    %eax,(%esp)
08269e0e +0x202:  call   08ae3750 <_Unwind_Resume>
08269e13 +0x207:  lea    -0x88(%ebp),%eax
08269e19 +0x20d:  mov    %eax,(%esp)
08269e1c +0x210:  call   0826b9d2 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x2a0>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x2a0
08269e21 +0x215:  jmp    08269e2a <+0x21e>
08269e23 +0x217:  nop
08269e24 +0x218:  jmp    08269e2a <+0x21e>
08269e26 +0x21a:  nop
08269e27 +0x21b:  jmp    08269e2a <+0x21e>
08269e29 +0x21d:  nop
08269e2a +0x21e:  lea    -0x8(%ebp),%esp
08269e2d +0x221:  add    $0x0,%esp
08269e30 +0x224:  pop    %ebx
08269e31 +0x225:  pop    %esi
08269e32 +0x226:  pop    %ebp
08269e33 +0x227:  ret
```

## 反编译 C

```c
// QuickParty::CQuickPartySystemManager::init_quick_party_pool @ 0x8269c0c

/* QuickParty::CQuickPartySystemManager::init_quick_party_pool(CDungeon const*) */

void __thiscall
QuickParty::CQuickPartySystemManager::init_quick_party_pool
          (CQuickPartySystemManager *this,CDungeon *param_1)

{
  bool bVar1;
  char cVar2;
  CGameManager *pCVar3;
  CQuickPartyRewardManager *pCVar4;
  int *piVar5;
  int iVar6;
  STQuickPartyPoolMap_Data local_8c [32];
  undefined2 local_6c;
  undefined1 local_6a;
  __normal_iterator local_68 [4];
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_64 [4];
  pair local_60 [8];
  pair<QuickParty::STQuickPartyPoolMap_Key_const,QuickParty::STQuickPartyPoolMap_Data> local_58 [36]
  ;
  STQuickPartyPoolMap_Key local_34 [36];
  int local_10;
  
  if (param_1 != (CDungeon *)0x0) {
    pCVar3 = (CGameManager *)G_CGameManager();
    pCVar4 = (CQuickPartyRewardManager *)CGameManager::GetQuickPartyRewardManager(pCVar3);
    CQuickPartyRewardManager::get_dungeon_idx_list(pCVar4);
    std::vector<int,std::allocator<int>>::begin();
    pCVar3 = (CGameManager *)G_CGameManager();
    pCVar4 = (CQuickPartyRewardManager *)CGameManager::GetQuickPartyRewardManager(pCVar3);
    CQuickPartyRewardManager::get_dungeon_idx_list(pCVar4);
    std::vector<int,std::allocator<int>>::end();
    while (bVar1 = __gnu_cxx::operator!=(local_64,local_68), bVar1) {
      iVar6 = CDungeon::get_index(param_1);
      piVar5 = (int *)__gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>
                      ::operator*(local_64);
      if (iVar6 == *piVar5) {
        return;
      }
      __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::operator++
                (local_64);
    }
    cVar2 = CDungeon::isTowerOfDespairDungeon(param_1);
    if (cVar2 == '\0') {
      STQuickPartyPoolMap_Key::STQuickPartyPoolMap_Key((STQuickPartyPoolMap_Key *)&local_6c);
      STQuickPartyPoolMap_Data::STQuickPartyPoolMap_Data(local_8c);
      local_6c = CDungeon::get_index(param_1);
      for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
        iVar6 = CDungeon::getDungeonKind(param_1);
        if (((iVar6 == 1) || (cVar2 = CDungeon::get_blood_dungeon_type(param_1), '\0' < cVar2)) ||
           (cVar2 = CDungeon::getQuestNpcDungeon(param_1), cVar2 != '\0')) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if ((!bVar1) || (local_10 == 0)) {
          local_6a = (undefined1)local_10;
                    /* try { // try from 08269d65 to 08269d69 has its CatchHandler @ 08269df5 */
          std::make_pair<QuickParty::STQuickPartyPoolMap_Key&,QuickParty::STQuickPartyPoolMap_Data&>
                    (local_34,(STQuickPartyPoolMap_Data *)&local_6c);
                    /* try { // try from 08269d7a to 08269d7e has its CatchHandler @ 08269dbd */
          std::pair<QuickParty::STQuickPartyPoolMap_Key_const,QuickParty::STQuickPartyPoolMap_Data>
          ::pair<QuickParty::STQuickPartyPoolMap_Key,QuickParty::STQuickPartyPoolMap_Data>
                    (local_58,local_34);
                    /* try { // try from 08269d93 to 08269d97 has its CatchHandler @ 08269da8 */
          std::
          map<QuickParty::STQuickPartyPoolMap_Key,QuickParty::STQuickPartyPoolMap_Data,std::less<QuickParty::STQuickPartyPoolMap_Key>,std::allocator<std::pair<QuickParty::STQuickPartyPoolMap_Key_const,QuickParty::STQuickPartyPoolMap_Data>>>
          ::insert(local_60);
                    /* try { // try from 08269da1 to 08269da5 has its CatchHandler @ 08269dbd */
          std::pair<QuickParty::STQuickPartyPoolMap_Key_const,QuickParty::STQuickPartyPoolMap_Data>
          ::~pair(local_58);
                    /* try { // try from 08269dd8 to 08269ddc has its CatchHandler @ 08269df5 */
          std::pair<QuickParty::STQuickPartyPoolMap_Key,QuickParty::STQuickPartyPoolMap_Data>::~pair
                    ((pair<QuickParty::STQuickPartyPoolMap_Key,QuickParty::STQuickPartyPoolMap_Data>
                      *)local_34);
        }
      }
      STQuickPartyPoolMap_Data::~STQuickPartyPoolMap_Data(local_8c);
    }
  }
  return;
}
```

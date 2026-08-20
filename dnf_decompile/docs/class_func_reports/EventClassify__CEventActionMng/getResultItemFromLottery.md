# getResultItemFromLottery

`_ZN13EventClassify15CEventActionMng24getResultItemFromLotteryEjRSt6vectorISt4pairIiiESaIS3_EE`

`EventClassify::CEventActionMng::getResultItemFromLottery(unsigned int, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&)`

| 类 | 地址 |
|---|---|
| `EventClassify::CEventActionMng` | `0x0810dc5a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810dc5a  _ZN13EventClassify15CEventActionMng24getResultItemFromLotteryEjRSt6vectorISt4pairIiiESaIS3_EE
#           EventClassify::CEventActionMng::getResultItemFromLottery(unsigned int, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&)
# range [0x0810dc5a, 0x0810debd]
0810dc5a +0x000:  push   %ebp
0810dc5b +0x001:  mov    %esp,%ebp
0810dc5d +0x003:  push   %esi
0810dc5e +0x004:  push   %ebx
0810dc5f +0x005:  sub    $0x90,%esp
0810dc65 +0x00b:  mov    0xc(%ebp),%esi
0810dc68 +0x00e:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0810dc6d +0x013:  mov    %esi,0x4(%esp)
0810dc71 +0x017:  mov    %eax,(%esp)
0810dc74 +0x01a:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0810dc79 +0x01f:  mov    %eax,-0x10(%ebp)
0810dc7c +0x022:  cmpl   $0x0,-0x10(%ebp)
0810dc80 +0x026:  jne    0810dc8c <+0x32>
0810dc82 +0x028:  mov    $0x11,%ebx
0810dc87 +0x02d:  jmp    0810deb2 <+0x258>
0810dc8c +0x032:  mov    -0x10(%ebp),%eax
0810dc8f +0x035:  mov    (%eax),%eax
0810dc91 +0x037:  add    $0xc,%eax
0810dc94 +0x03a:  mov    (%eax),%edx
0810dc96 +0x03c:  mov    -0x10(%ebp),%eax
0810dc99 +0x03f:  mov    %eax,(%esp)
0810dc9c +0x042:  call   *%edx
0810dc9e +0x044:  cmp    $0x6,%eax
0810dca1 +0x047:  je     0810dcb1 <+0x57>
0810dca3 +0x049:  cmp    $0x10,%eax
0810dca6 +0x04c:  je     0810dd5a <+0x100>
0810dcac +0x052:  jmp    0810dea6 <+0x24c>
0810dcb1 +0x057:  lea    -0x85(%ebp),%eax
0810dcb7 +0x05d:  mov    %eax,(%esp)
0810dcba +0x060:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
0810dcbf +0x065:  lea    -0x85(%ebp),%esi
0810dcc5 +0x06b:  mov    -0x10(%ebp),%eax
0810dcc8 +0x06e:  mov    %eax,(%esp)
0810dccb +0x071:  call   08110c48 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x15a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x15a
0810dcd0 +0x076:  mov    %eax,%ebx
0810dcd2 +0x078:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0810dcd7 +0x07d:  mov    0xc(%eax),%eax
0810dcda +0x080:  mov    %esi,0x8(%esp)
0810dcde +0x084:  mov    %ebx,0x4(%esp)
0810dce2 +0x088:  mov    %eax,(%esp)
0810dce5 +0x08b:  call   08512230 <_ZN9CItemList14get_lotto_itemEiPc>  ; CItemList::get_lotto_item(int, char*)
0810dcea +0x090:  mov    -0x83(%ebp),%eax
0810dcf0 +0x096:  test   %eax,%eax
0810dcf2 +0x098:  je     0810dcff <+0xa5>
0810dcf4 +0x09a:  mov    -0x83(%ebp),%eax
0810dcfa +0x0a0:  cmp    $0xffffffff,%eax
0810dcfd +0x0a3:  jne    0810dd09 <+0xaf>
0810dcff +0x0a5:  mov    $0x11,%ebx
0810dd04 +0x0aa:  jmp    0810deb2 <+0x258>
0810dd09 +0x0af:  lea    -0x30(%ebp),%eax
0810dd0c +0x0b2:  lea    -0x85(%ebp),%edx
0810dd12 +0x0b8:  add    $0x7,%edx
0810dd15 +0x0bb:  mov    %edx,0x8(%esp)
0810dd19 +0x0bf:  lea    -0x85(%ebp),%edx
0810dd1f +0x0c5:  add    $0x2,%edx
0810dd22 +0x0c8:  mov    %edx,0x4(%esp)
0810dd26 +0x0cc:  mov    %eax,(%esp)
0810dd29 +0x0cf:  call   08111a37 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xf49>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xf49
0810dd2e +0x0d4:  sub    $0x4,%esp
0810dd31 +0x0d7:  lea    -0x30(%ebp),%eax
0810dd34 +0x0da:  mov    %eax,0x4(%esp)
0810dd38 +0x0de:  lea    -0x38(%ebp),%eax
0810dd3b +0x0e1:  mov    %eax,(%esp)
0810dd3e +0x0e4:  call   08111a76 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xf88>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xf88
0810dd43 +0x0e9:  lea    -0x38(%ebp),%eax
0810dd46 +0x0ec:  mov    %eax,0x4(%esp)
0810dd4a +0x0f0:  mov    0x10(%ebp),%eax
0810dd4d +0x0f3:  mov    %eax,(%esp)
0810dd50 +0x0f6:  call   080dd606 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x14f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x14f
0810dd55 +0x0fb:  jmp    0810dead <+0x253>
0810dd5a +0x100:  mov    -0x10(%ebp),%eax
0810dd5d +0x103:  mov    %eax,-0xc(%ebp)
0810dd60 +0x106:  lea    -0x44(%ebp),%eax
0810dd63 +0x109:  mov    %eax,(%esp)
0810dd66 +0x10c:  call   08111aa8 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xfba>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xfba
0810dd6b +0x111:  lea    -0x44(%ebp),%eax
0810dd6e +0x114:  mov    %eax,0x4(%esp)
0810dd72 +0x118:  mov    -0xc(%ebp),%eax
0810dd75 +0x11b:  mov    %eax,(%esp)
0810dd78 +0x11e:  call   0850f75e <_ZNK14CStackableItem14getBoosterItemERSt6vectorI28stStackableBoosterItemInfo_tSaIS1_EE>  ; CStackableItem::getBoosterItem(std::vector<stStackableBoosterItemInfo_t, std::allocator<stStackableBoosterItemInfo_t> >&) const
0810dd7d +0x123:  lea    -0x28(%ebp),%eax
0810dd80 +0x126:  lea    -0x44(%ebp),%edx
0810dd83 +0x129:  mov    %edx,0x4(%esp)
0810dd87 +0x12d:  mov    %eax,(%esp)
0810dd8a +0x130:  call   08111b1a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x102c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x102c
0810dd8f +0x135:  sub    $0x4,%esp
0810dd92 +0x138:  lea    -0x28(%ebp),%eax
0810dd95 +0x13b:  mov    %eax,0x4(%esp)
0810dd99 +0x13f:  lea    -0x48(%ebp),%eax
0810dd9c +0x142:  mov    %eax,(%esp)
0810dd9f +0x145:  call   08111b3e <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1050>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1050
0810dda4 +0x14a:  jmp    0810de44 <+0x1ea>
0810dda9 +0x14f:  lea    -0x48(%ebp),%eax
0810ddac +0x152:  mov    %eax,(%esp)
0810ddaf +0x155:  call   08111bc0 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x10d2>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x10d2
0810ddb4 +0x15a:  mov    (%eax),%eax
0810ddb6 +0x15c:  test   %eax,%eax
0810ddb8 +0x15e:  je     0810ddcc <+0x172>
0810ddba +0x160:  lea    -0x48(%ebp),%eax
0810ddbd +0x163:  mov    %eax,(%esp)
0810ddc0 +0x166:  call   08111bc0 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x10d2>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x10d2
0810ddc5 +0x16b:  mov    $0x0,%eax
0810ddca +0x170:  jmp    0810ddd1 <+0x177>
0810ddcc +0x172:  mov    $0x1,%eax
0810ddd1 +0x177:  test   %al,%al
0810ddd3 +0x179:  je     0810dde4 <+0x18a>
0810ddd5 +0x17b:  mov    $0x11,%ebx
0810ddda +0x180:  mov    $0x0,%esi
0810dddf +0x185:  jmp    0810de95 <+0x23b>
0810dde4 +0x18a:  lea    -0x48(%ebp),%eax
0810dde7 +0x18d:  mov    %eax,(%esp)
0810ddea +0x190:  call   08111bc0 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x10d2>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x10d2
0810ddef +0x195:  lea    0x8(%eax),%esi
0810ddf2 +0x198:  lea    -0x48(%ebp),%eax
0810ddf5 +0x19b:  mov    %eax,(%esp)
0810ddf8 +0x19e:  call   08111bc0 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x10d2>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x10d2
0810ddfd +0x1a3:  mov    %eax,%edx
0810ddff +0x1a5:  lea    -0x18(%ebp),%eax
0810de02 +0x1a8:  mov    %esi,0x8(%esp)
0810de06 +0x1ac:  mov    %edx,0x4(%esp)
0810de0a +0x1b0:  mov    %eax,(%esp)
0810de0d +0x1b3:  call   08111bca <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x10dc>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x10dc
0810de12 +0x1b8:  sub    $0x4,%esp
0810de15 +0x1bb:  lea    -0x18(%ebp),%eax
0810de18 +0x1be:  mov    %eax,0x4(%esp)
0810de1c +0x1c2:  lea    -0x20(%ebp),%eax
0810de1f +0x1c5:  mov    %eax,(%esp)
0810de22 +0x1c8:  call   08111c08 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x111a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x111a
0810de27 +0x1cd:  lea    -0x20(%ebp),%eax
0810de2a +0x1d0:  mov    %eax,0x4(%esp)
0810de2e +0x1d4:  mov    0x10(%ebp),%eax
0810de31 +0x1d7:  mov    %eax,(%esp)
0810de34 +0x1da:  call   080dd606 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x14f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x14f
0810de39 +0x1df:  lea    -0x48(%ebp),%eax
0810de3c +0x1e2:  mov    %eax,(%esp)
0810de3f +0x1e5:  call   08111baa <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x10bc>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x10bc
0810de44 +0x1ea:  lea    -0x24(%ebp),%eax
0810de47 +0x1ed:  lea    -0x44(%ebp),%edx
0810de4a +0x1f0:  mov    %edx,0x4(%esp)
0810de4e +0x1f4:  mov    %eax,(%esp)
0810de51 +0x1f7:  call   08111b58 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x106a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x106a
0810de56 +0x1fc:  sub    $0x4,%esp
0810de59 +0x1ff:  lea    -0x24(%ebp),%eax
0810de5c +0x202:  mov    %eax,0x4(%esp)
0810de60 +0x206:  lea    -0x48(%ebp),%eax
0810de63 +0x209:  mov    %eax,(%esp)
0810de66 +0x20c:  call   08111b7e <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1090>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1090
0810de6b +0x211:  test   %al,%al
0810de6d +0x213:  jne    0810dda9 <+0x14f>
0810de73 +0x219:  mov    $0x1,%esi
0810de78 +0x21e:  jmp    0810de95 <+0x23b>
0810de7a +0x220:  mov    %edx,%ebx
0810de7c +0x222:  mov    %eax,%esi
0810de7e +0x224:  lea    -0x44(%ebp),%eax
0810de81 +0x227:  mov    %eax,(%esp)
0810de84 +0x22a:  call   08111abc <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xfce>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xfce
0810de89 +0x22f:  mov    %esi,%eax
0810de8b +0x231:  mov    %ebx,%edx
0810de8d +0x233:  mov    %eax,(%esp)
0810de90 +0x236:  call   08ae3750 <_Unwind_Resume>
0810de95 +0x23b:  lea    -0x44(%ebp),%eax
0810de98 +0x23e:  mov    %eax,(%esp)
0810de9b +0x241:  call   08111abc <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xfce>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xfce
0810dea0 +0x246:  test   %esi,%esi
0810dea2 +0x248:  je     0810deb2 <+0x258>
0810dea4 +0x24a:  jmp    0810dead <+0x253>
0810dea6 +0x24c:  mov    $0x17,%ebx
0810deab +0x251:  jmp    0810deb2 <+0x258>
0810dead +0x253:  mov    $0x0,%ebx
0810deb2 +0x258:  mov    %ebx,%eax
0810deb4 +0x25a:  lea    -0x8(%ebp),%esp
0810deb7 +0x25d:  add    $0x0,%esp
0810deba +0x260:  pop    %ebx
0810debb +0x261:  pop    %esi
0810debc +0x262:  pop    %ebp
0810debd +0x263:  ret
```

## 反编译 C

```c
// EventClassify::CEventActionMng::getResultItemFromLottery @ 0x810dc5a

/* EventClassify::CEventActionMng::getResultItemFromLottery(unsigned int, std::vector<std::pair<int,
   int>, std::allocator<std::pair<int, int> > >&) */

undefined4 __thiscall
EventClassify::CEventActionMng::getResultItemFromLottery
          (CEventActionMng *this,uint param_1,vector *param_2)

{
  bool bVar1;
  CDataManager *this_00;
  int iVar2;
  int iVar3;
  int *piVar4;
  ushort *puVar5;
  undefined4 unaff_EBX;
  Inven_Item local_89 [2];
  int local_87 [14];
  __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
  local_4c [4];
  vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>> local_48 [12];
  pair<int,int> local_3c [8];
  ulong local_34 [2];
  __normal_iterator local_2c [4];
  __normal_iterator local_28 [4];
  pair<int,int> local_24 [8];
  uint local_1c [2];
  CItem *local_14;
  CItem *local_10;
  
  this_00 = (CDataManager *)G_CDataManager();
  local_14 = (CItem *)CDataManager::find_item(this_00,param_1);
  if (local_14 == (CItem *)0x0) {
    return 0x11;
  }
  iVar2 = (**(code **)(*(int *)local_14 + 0xc))(local_14);
  if (iVar2 == 6) {
    Inven_Item::Inven_Item(local_89);
    iVar2 = CItem::get_index(local_14);
    iVar3 = G_CDataManager();
    CItemList::get_lotto_item(*(CItemList **)(iVar3 + 0xc),iVar2,(char *)local_89);
    if ((local_87[0] == 0) || (local_87[0] == -1)) {
      return 0x11;
    }
    std::make_pair<unsigned_long&,int&>(local_34,local_87);
    std::pair<int,int>::pair<unsigned_long,int>(local_3c,(pair *)local_34);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_2,local_3c);
  }
  else {
    if (iVar2 != 0x10) {
      return 0x17;
    }
    local_10 = local_14;
    std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>::vector
              (local_48);
                    /* try { // try from 0810dd78 to 0810de6a has its CatchHandler @ 0810de7a */
    CStackableItem::getBoosterItem((CStackableItem *)local_10,(vector *)local_48);
    std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>::begin();
    __gnu_cxx::
    __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
    ::__normal_iterator<stStackableBoosterItemInfo_t*>(local_4c,local_2c);
    while( true ) {
      std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>::end();
      bVar1 = __gnu_cxx::operator!=(local_4c,local_28);
      if (!bVar1) break;
      piVar4 = (int *)__gnu_cxx::
                      __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
                      ::operator->(local_4c);
      if (*piVar4 == 0) {
        unaff_EBX = 0x11;
        bVar1 = false;
        goto LAB_0810de95;
      }
      __gnu_cxx::
      __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
      ::operator->(local_4c);
      __gnu_cxx::
      __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
      ::operator->(local_4c);
      puVar5 = (ushort *)
               __gnu_cxx::
               __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
               ::operator->(local_4c);
      std::make_pair<unsigned_int_const&,unsigned_short_const&>(local_1c,puVar5);
      std::pair<int,int>::pair<unsigned_int,unsigned_short>(local_24,(pair *)local_1c);
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_2,local_24);
      __gnu_cxx::
      __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
      ::operator++(local_4c);
    }
    bVar1 = true;
LAB_0810de95:
    std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>::~vector
              (local_48);
    if (!bVar1) {
      return unaff_EBX;
    }
  }
  return 0;
}
```

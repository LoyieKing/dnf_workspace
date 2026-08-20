# get

`_ZNK12advancealtar16AdvanceAltarData3getERNS_19_AdvanceAltarDbDataE`

`advancealtar::AdvanceAltarData::get(advancealtar::_AdvanceAltarDbData&) const`

| 类 | 地址 |
|---|---|
| `advancealtar::AdvanceAltarData` | `0x088996d8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088996d8  _ZNK12advancealtar16AdvanceAltarData3getERNS_19_AdvanceAltarDbDataE
#           advancealtar::AdvanceAltarData::get(advancealtar::_AdvanceAltarDbData&) const
# range [0x088996d8, 0x088999d7]
088996d8 +0x000:  push   %ebp
088996d9 +0x001:  mov    %esp,%ebp
088996db +0x003:  sub    $0x48,%esp
088996de +0x006:  mov    0x8(%ebp),%eax
088996e1 +0x009:  movzbl 0xcc(%eax),%edx
088996e8 +0x010:  mov    0xc(%ebp),%eax
088996eb +0x013:  mov    %dl,0x517(%eax)
088996f1 +0x019:  mov    0x8(%ebp),%edx
088996f4 +0x01c:  mov    0xc(%ebp),%eax
088996f7 +0x01f:  movl   $0x21,0x8(%esp)
088996ff +0x027:  mov    %edx,0x4(%esp)
08899703 +0x02b:  mov    %eax,(%esp)
08899706 +0x02e:  call   0807d8a0 <_init+0x198>
0889970b +0x033:  movl   $0x0,-0xc(%ebp)
08899712 +0x03a:  mov    0x8(%ebp),%eax
08899715 +0x03d:  lea    0x24(%eax),%edx
08899718 +0x040:  lea    -0x28(%ebp),%eax
0889971b +0x043:  mov    %edx,0x4(%esp)
0889971f +0x047:  mov    %eax,(%esp)
08899722 +0x04a:  call   08135ed8 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1adf>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1adf
08899727 +0x04f:  sub    $0x4,%esp
0889972a +0x052:  jmp    088997b7 <+0xdf>
0889972f +0x057:  lea    -0x28(%ebp),%eax
08899732 +0x05a:  mov    %eax,(%esp)
08899735 +0x05d:  call   08135f76 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1b7d>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1b7d
0889973a +0x062:  mov    0x4(%eax),%eax
0889973d +0x065:  test   %eax,%eax
0889973f +0x067:  setle  %al
08899742 +0x06a:  test   %al,%al
08899744 +0x06c:  je     08899765 <+0x8d>
08899746 +0x06e:  lea    -0x20(%ebp),%eax
08899749 +0x071:  movl   $0x0,0x8(%esp)
08899751 +0x079:  lea    -0x28(%ebp),%edx
08899754 +0x07c:  mov    %edx,0x4(%esp)
08899758 +0x080:  mov    %eax,(%esp)
0889975b +0x083:  call   08135f38 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1b3f>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1b3f
08899760 +0x088:  sub    $0x4,%esp
08899763 +0x08b:  jmp    088997b7 <+0xdf>
08899765 +0x08d:  lea    -0x28(%ebp),%eax
08899768 +0x090:  mov    %eax,(%esp)
0889976b +0x093:  call   08135f76 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1b7d>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1b7d
08899770 +0x098:  lea    0x4(%eax),%edx
08899773 +0x09b:  mov    -0xc(%ebp),%eax
08899776 +0x09e:  add    $0x4,%eax
08899779 +0x0a1:  shl    $0x3,%eax
0889977c +0x0a4:  add    0xc(%ebp),%eax
0889977f +0x0a7:  add    $0x1,%eax
08899782 +0x0aa:  movl   $0x8,0x8(%esp)
0889978a +0x0b2:  mov    %edx,0x4(%esp)
0889978e +0x0b6:  mov    %eax,(%esp)
08899791 +0x0b9:  call   0807d8a0 <_init+0x198>
08899796 +0x0be:  lea    -0x1c(%ebp),%eax
08899799 +0x0c1:  movl   $0x0,0x8(%esp)
088997a1 +0x0c9:  lea    -0x28(%ebp),%edx
088997a4 +0x0cc:  mov    %edx,0x4(%esp)
088997a8 +0x0d0:  mov    %eax,(%esp)
088997ab +0x0d3:  call   08135f38 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1b3f>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1b3f
088997b0 +0x0d8:  sub    $0x4,%esp
088997b3 +0x0db:  addl   $0x1,-0xc(%ebp)
088997b7 +0x0df:  mov    0x8(%ebp),%eax
088997ba +0x0e2:  lea    0x24(%eax),%edx
088997bd +0x0e5:  lea    -0x24(%ebp),%eax
088997c0 +0x0e8:  mov    %edx,0x4(%esp)
088997c4 +0x0ec:  mov    %eax,(%esp)
088997c7 +0x0ef:  call   08135efe <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1b05>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1b05
088997cc +0x0f4:  sub    $0x4,%esp
088997cf +0x0f7:  lea    -0x24(%ebp),%eax
088997d2 +0x0fa:  mov    %eax,0x4(%esp)
088997d6 +0x0fe:  lea    -0x28(%ebp),%eax
088997d9 +0x101:  mov    %eax,(%esp)
088997dc +0x104:  call   08135f24 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1b2b>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1b2b
088997e1 +0x109:  test   %al,%al
088997e3 +0x10b:  je     088997f2 <+0x11a>
088997e5 +0x10d:  cmpl   $0x31,-0xc(%ebp)
088997e9 +0x111:  jg     088997f2 <+0x11a>
088997eb +0x113:  mov    $0x1,%eax
088997f0 +0x118:  jmp    088997f7 <+0x11f>
088997f2 +0x11a:  mov    $0x0,%eax
088997f7 +0x11f:  test   %al,%al
088997f9 +0x121:  jne    0889972f <+0x57>
088997ff +0x127:  mov    0xc(%ebp),%eax
08899802 +0x12a:  lea    0x1b1(%eax),%edx
08899808 +0x130:  mov    0x8(%ebp),%eax
0889980b +0x133:  add    $0x84,%eax
08899810 +0x138:  movl   $0xc,0xc(%esp)
08899818 +0x140:  mov    %edx,0x8(%esp)
0889981c +0x144:  mov    %eax,0x4(%esp)
08899820 +0x148:  mov    0x8(%ebp),%eax
08899823 +0x14b:  mov    %eax,(%esp)
08899826 +0x14e:  call   08899b4e <_ZNK12advancealtar16AdvanceAltarData7getSlotERKSt3mapIhNS_5_SlotESt4lessIhESaISt4pairIKhS2_EEEPS2_i>  ; advancealtar::AdvanceAltarData::getSlot(std::map<unsigned char, advancealtar::_Slot, std::less<unsigned char>, std::allocator<std::pair<unsigned char const, advancealtar::_Slot> > > const&, advancealtar::_Slot*, int) const
0889982b +0x153:  mov    0xc(%ebp),%eax
0889982e +0x156:  lea    0x1b1(%eax),%edx
08899834 +0x15c:  mov    0x8(%ebp),%eax
08899837 +0x15f:  add    $0x9c,%eax
0889983c +0x164:  movl   $0xc,0xc(%esp)
08899844 +0x16c:  mov    %edx,0x8(%esp)
08899848 +0x170:  mov    %eax,0x4(%esp)
0889984c +0x174:  mov    0x8(%ebp),%eax
0889984f +0x177:  mov    %eax,(%esp)
08899852 +0x17a:  call   08899b4e <_ZNK12advancealtar16AdvanceAltarData7getSlotERKSt3mapIhNS_5_SlotESt4lessIhESaISt4pairIKhS2_EEEPS2_i>  ; advancealtar::AdvanceAltarData::getSlot(std::map<unsigned char, advancealtar::_Slot, std::less<unsigned char>, std::allocator<std::pair<unsigned char const, advancealtar::_Slot> > > const&, advancealtar::_Slot*, int) const
08899857 +0x17f:  mov    0xc(%ebp),%eax
0889985a +0x182:  lea    0x229(%eax),%edx
08899860 +0x188:  mov    0x8(%ebp),%eax
08899863 +0x18b:  add    $0x3c,%eax
08899866 +0x18e:  movl   $0x32,0xc(%esp)
0889986e +0x196:  mov    %edx,0x8(%esp)
08899872 +0x19a:  mov    %eax,0x4(%esp)
08899876 +0x19e:  mov    0x8(%ebp),%eax
08899879 +0x1a1:  mov    %eax,(%esp)
0889987c +0x1a4:  call   08899a3a <_ZNK12advancealtar16AdvanceAltarData10getBuyItemERKSt3mapIiNS_8_BuyItemESt4lessIiESaISt4pairIKiS2_EEEPS2_i>  ; advancealtar::AdvanceAltarData::getBuyItem(std::map<int, advancealtar::_BuyItem, std::less<int>, std::allocator<std::pair<int const, advancealtar::_BuyItem> > > const&, advancealtar::_BuyItem*, int) const
08899881 +0x1a9:  mov    0xc(%ebp),%eax
08899884 +0x1ac:  lea    0x229(%eax),%edx
0889988a +0x1b2:  mov    0x8(%ebp),%eax
0889988d +0x1b5:  add    $0x54,%eax
08899890 +0x1b8:  movl   $0x32,0xc(%esp)
08899898 +0x1c0:  mov    %edx,0x8(%esp)
0889989c +0x1c4:  mov    %eax,0x4(%esp)
088998a0 +0x1c8:  mov    0x8(%ebp),%eax
088998a3 +0x1cb:  mov    %eax,(%esp)
088998a6 +0x1ce:  call   08899a3a <_ZNK12advancealtar16AdvanceAltarData10getBuyItemERKSt3mapIiNS_8_BuyItemESt4lessIiESaISt4pairIKiS2_EEEPS2_i>  ; advancealtar::AdvanceAltarData::getBuyItem(std::map<int, advancealtar::_BuyItem, std::less<int>, std::allocator<std::pair<int const, advancealtar::_BuyItem> > > const&, advancealtar::_BuyItem*, int) const
088998ab +0x1d3:  mov    0xc(%ebp),%eax
088998ae +0x1d6:  lea    0x229(%eax),%edx
088998b4 +0x1dc:  mov    0x8(%ebp),%eax
088998b7 +0x1df:  add    $0x6c,%eax
088998ba +0x1e2:  movl   $0x32,0xc(%esp)
088998c2 +0x1ea:  mov    %edx,0x8(%esp)
088998c6 +0x1ee:  mov    %eax,0x4(%esp)
088998ca +0x1f2:  mov    0x8(%ebp),%eax
088998cd +0x1f5:  mov    %eax,(%esp)
088998d0 +0x1f8:  call   08899a3a <_ZNK12advancealtar16AdvanceAltarData10getBuyItemERKSt3mapIiNS_8_BuyItemESt4lessIiESaISt4pairIKiS2_EEEPS2_i>  ; advancealtar::AdvanceAltarData::getBuyItem(std::map<int, advancealtar::_BuyItem, std::less<int>, std::allocator<std::pair<int const, advancealtar::_BuyItem> > > const&, advancealtar::_BuyItem*, int) const
088998d5 +0x1fd:  movl   $0x0,-0xc(%ebp)
088998dc +0x204:  mov    0x8(%ebp),%eax
088998df +0x207:  lea    0xb4(%eax),%edx
088998e5 +0x20d:  lea    -0x2c(%ebp),%eax
088998e8 +0x210:  mov    %edx,0x4(%esp)
088998ec +0x214:  mov    %eax,(%esp)
088998ef +0x217:  call   0813590e <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1515>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1515
088998f4 +0x21c:  sub    $0x4,%esp
088998f7 +0x21f:  jmp    0889998a <+0x2b2>
088998fc +0x224:  lea    -0x2c(%ebp),%eax
088998ff +0x227:  mov    %eax,(%esp)
08899902 +0x22a:  call   081359ac <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x15b3>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x15b3
08899907 +0x22f:  mov    0x4(%eax),%eax
0889990a +0x232:  test   %eax,%eax
0889990c +0x234:  setle  %al
0889990f +0x237:  test   %al,%al
08899911 +0x239:  je     08899932 <+0x25a>
08899913 +0x23b:  lea    -0x14(%ebp),%eax
08899916 +0x23e:  movl   $0x0,0x8(%esp)
0889991e +0x246:  lea    -0x2c(%ebp),%edx
08899921 +0x249:  mov    %edx,0x4(%esp)
08899925 +0x24d:  mov    %eax,(%esp)
08899928 +0x250:  call   0813596e <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1575>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1575
0889992d +0x255:  sub    $0x4,%esp
08899930 +0x258:  jmp    0889998a <+0x2b2>
08899932 +0x25a:  lea    -0x2c(%ebp),%eax
08899935 +0x25d:  mov    %eax,(%esp)
08899938 +0x260:  call   081359ac <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x15b3>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x15b3
0889993d +0x265:  lea    0x4(%eax),%ecx
08899940 +0x268:  mov    -0xc(%ebp),%edx
08899943 +0x26b:  mov    %edx,%eax
08899945 +0x26d:  shl    $0x2,%eax
08899948 +0x270:  add    %edx,%eax
0889994a +0x272:  add    $0x480,%eax
0889994f +0x277:  add    0xc(%ebp),%eax
08899952 +0x27a:  add    $0x1,%eax
08899955 +0x27d:  movl   $0x5,0x8(%esp)
0889995d +0x285:  mov    %ecx,0x4(%esp)
08899961 +0x289:  mov    %eax,(%esp)
08899964 +0x28c:  call   0807d8a0 <_init+0x198>
08899969 +0x291:  lea    -0x10(%ebp),%eax
0889996c +0x294:  movl   $0x0,0x8(%esp)
08899974 +0x29c:  lea    -0x2c(%ebp),%edx
08899977 +0x29f:  mov    %edx,0x4(%esp)
0889997b +0x2a3:  mov    %eax,(%esp)
0889997e +0x2a6:  call   0813596e <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1575>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1575
08899983 +0x2ab:  sub    $0x4,%esp
08899986 +0x2ae:  addl   $0x1,-0xc(%ebp)
0889998a +0x2b2:  mov    0x8(%ebp),%eax
0889998d +0x2b5:  lea    0xb4(%eax),%edx
08899993 +0x2bb:  lea    -0x18(%ebp),%eax
08899996 +0x2be:  mov    %edx,0x4(%esp)
0889999a +0x2c2:  mov    %eax,(%esp)
0889999d +0x2c5:  call   08135934 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x153b>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x153b
088999a2 +0x2ca:  sub    $0x4,%esp
088999a5 +0x2cd:  lea    -0x18(%ebp),%eax
088999a8 +0x2d0:  mov    %eax,0x4(%esp)
088999ac +0x2d4:  lea    -0x2c(%ebp),%eax
088999af +0x2d7:  mov    %eax,(%esp)
088999b2 +0x2da:  call   0813595a <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1561>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1561
088999b7 +0x2df:  test   %al,%al
088999b9 +0x2e1:  je     088999c8 <+0x2f0>
088999bb +0x2e3:  cmpl   $0x1d,-0xc(%ebp)
088999bf +0x2e7:  jg     088999c8 <+0x2f0>
088999c1 +0x2e9:  mov    $0x1,%eax
088999c6 +0x2ee:  jmp    088999cd <+0x2f5>
088999c8 +0x2f0:  mov    $0x0,%eax
088999cd +0x2f5:  test   %al,%al
088999cf +0x2f7:  jne    088998fc <+0x224>
088999d5 +0x2fd:  leave
088999d6 +0x2fe:  ret
088999d7 +0x2ff:  nop
```

## 反编译 C

```c
// advancealtar::AdvanceAltarData::get @ 0x88996d8

/* advancealtar::AdvanceAltarData::get(advancealtar::_AdvanceAltarDbData&) const */

void __thiscall
advancealtar::AdvanceAltarData::get(AdvanceAltarData *this,_AdvanceAltarDbData *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  map<int,advancealtar::_Reward,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Reward>>>
  local_30 [4];
  map<int,advancealtar::_Stage,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Stage>>>
  local_2c [4];
  map<int,advancealtar::_Stage,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Stage>>>
  local_28 [4];
  _Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Stage>> local_24 [4];
  _Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Stage>> local_20 [4];
  map<int,advancealtar::_Reward,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Reward>>>
  local_1c [4];
  _Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Reward>> local_18 [4];
  _Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Reward>> local_14 [4];
  int local_10;
  
  *(AdvanceAltarData *)(param_1 + 0x517) = this[0xcc];
  memcpy(param_1,this,0x21);
  local_10 = 0;
  std::
  map<int,advancealtar::_Stage,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Stage>>>
  ::begin(local_2c);
  while( true ) {
    std::
    map<int,advancealtar::_Stage,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Stage>>>
    ::end(local_28);
    cVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Stage>>::operator!=
                      ((_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Stage>> *)
                       local_2c,(_Rb_tree_const_iterator *)local_28);
    if ((cVar2 == '\0') || (0x31 < local_10)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) break;
    iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Stage>>::operator->
                      ((_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Stage>> *)
                       local_2c);
    if (*(int *)(iVar3 + 4) < 1) {
      std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Stage>>::operator++
                (local_24,(int)local_2c);
    }
    else {
      iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Stage>>::operator->
                        ((_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Stage>> *)
                         local_2c);
      memcpy(param_1 + (local_10 + 4) * 8 + 1,(void *)(iVar3 + 4),8);
      std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Stage>>::operator++
                (local_20,(int)local_2c);
      local_10 = local_10 + 1;
    }
  }
  getSlot(this,(map *)(this + 0x84),(_Slot *)(param_1 + 0x1b1),0xc);
  getSlot(this,(map *)(this + 0x9c),(_Slot *)(param_1 + 0x1b1),0xc);
  getBuyItem(this,(map *)(this + 0x3c),(_BuyItem *)(param_1 + 0x229),0x32);
  getBuyItem(this,(map *)(this + 0x54),(_BuyItem *)(param_1 + 0x229),0x32);
  getBuyItem(this,(map *)(this + 0x6c),(_BuyItem *)(param_1 + 0x229),0x32);
  local_10 = 0;
  std::
  map<int,advancealtar::_Reward,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Reward>>>
  ::begin(local_30);
  while( true ) {
    std::
    map<int,advancealtar::_Reward,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Reward>>>
    ::end(local_1c);
    cVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Reward>>::operator!=
                      ((_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Reward>> *)
                       local_30,(_Rb_tree_const_iterator *)local_1c);
    if ((cVar2 == '\0') || (0x1d < local_10)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) break;
    iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Reward>>::operator->
                      ((_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Reward>> *)
                       local_30);
    if (*(int *)(iVar3 + 4) < 1) {
      std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Reward>>::operator++
                (local_18,(int)local_30);
    }
    else {
      iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Reward>>::operator->
                        ((_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Reward>> *)
                         local_30);
      memcpy(param_1 + local_10 * 5 + 0x481,(void *)(iVar3 + 4),5);
      std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Reward>>::operator++
                (local_14,(int)local_30);
      local_10 = local_10 + 1;
    }
  }
  return;
}
```

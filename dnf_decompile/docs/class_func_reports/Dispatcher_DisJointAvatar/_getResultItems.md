# _getResultItems

`_ZNK25Dispatcher_DisJointAvatar15_getResultItemsEP5CUserPK5CItemiRSt6vectorISt4pairIiiESaIS7_EE`

`Dispatcher_DisJointAvatar::_getResultItems(CUser*, CItem const*, int, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&) const`

| 类 | 地址 |
|---|---|
| `Dispatcher_DisJointAvatar` | `0x0821873c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0821873c  _ZNK25Dispatcher_DisJointAvatar15_getResultItemsEP5CUserPK5CItemiRSt6vectorISt4pairIiiESaIS7_EE
#           Dispatcher_DisJointAvatar::_getResultItems(CUser*, CItem const*, int, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&) const
# range [0x0821873c, 0x08218995]
0821873c +0x000:  push   %ebp
0821873d +0x001:  mov    %esp,%ebp
0821873f +0x003:  push   %esi
08218740 +0x004:  push   %ebx
08218741 +0x005:  sub    $0x50,%esp
08218744 +0x008:  movl   $0x0,-0x18(%ebp)
0821874b +0x00f:  cmpl   $0xffffffff,0x14(%ebp)
0821874f +0x013:  je     082187dc <+0xa0>
08218755 +0x019:  movb   $0xb,-0xd(%ebp)
08218759 +0x01d:  movl   $0x0,-0xc(%ebp)
08218760 +0x024:  jmp    08218785 <+0x49>
08218762 +0x026:  mov    -0xc(%ebp),%eax
08218765 +0x029:  movsbl %al,%eax
08218768 +0x02c:  mov    %eax,0x4(%esp)
0821876c +0x030:  mov    0x10(%ebp),%eax
0821876f +0x033:  mov    %eax,(%esp)
08218772 +0x036:  call   0850d728 <_ZNK5CItem14check_job_typeEc>  ; CItem::check_job_type(char) const
08218777 +0x03b:  test   %al,%al
08218779 +0x03d:  je     08218781 <+0x45>
0821877b +0x03f:  mov    -0xc(%ebp),%eax
0821877e +0x042:  mov    %al,-0xd(%ebp)
08218781 +0x045:  addl   $0x1,-0xc(%ebp)
08218785 +0x049:  cmpl   $0xa,-0xc(%ebp)
08218789 +0x04d:  setle  %al
0821878c +0x050:  test   %al,%al
0821878e +0x052:  jne    08218762 <+0x26>
08218790 +0x054:  cmpb   $0xb,-0xd(%ebp)
08218794 +0x058:  jne    082187a0 <+0x64>
08218796 +0x05a:  mov    $0x16,%ebx
0821879b +0x05f:  jmp    0821898a <+0x24e>
082187a0 +0x064:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
082187a5 +0x069:  mov    0x1c(%eax),%esi
082187a8 +0x06c:  movsbl -0xd(%ebp),%ebx
082187ac +0x070:  mov    0x10(%ebp),%eax
082187af +0x073:  mov    %eax,(%esp)
082187b2 +0x076:  call   08110c54 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x166>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x166
082187b7 +0x07b:  mov    0x14(%ebp),%ecx
082187ba +0x07e:  mov    %eax,%edx
082187bc +0x080:  shl    $0x2,%edx
082187bf +0x083:  add    %eax,%edx
082187c1 +0x085:  mov    %ebx,%eax
082187c3 +0x087:  shl    $0x2,%eax
082187c6 +0x08a:  add    %ebx,%eax
082187c8 +0x08c:  shl    $0x2,%eax
082187cb +0x08f:  lea    (%edx,%eax,1),%eax
082187ce +0x092:  add    %ecx,%eax
082187d0 +0x094:  add    $0x34,%eax
082187d3 +0x097:  mov    0x4(%esi,%eax,4),%eax
082187d7 +0x09b:  mov    %eax,-0x18(%ebp)
082187da +0x09e:  jmp    0821881c <+0xe0>
082187dc +0x0a0:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
082187e1 +0x0a5:  mov    0x1c(%eax),%esi
082187e4 +0x0a8:  mov    0x10(%ebp),%eax
082187e7 +0x0ab:  mov    %eax,(%esp)
082187ea +0x0ae:  call   08110c54 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x166>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x166
082187ef +0x0b3:  mov    %eax,%ebx
082187f1 +0x0b5:  mov    0x10(%ebp),%eax
082187f4 +0x0b8:  mov    (%eax),%eax
082187f6 +0x0ba:  add    $0xc,%eax
082187f9 +0x0bd:  mov    (%eax),%edx
082187fb +0x0bf:  mov    0x10(%ebp),%eax
082187fe +0x0c2:  mov    %eax,(%esp)
08218801 +0x0c5:  call   *%edx
08218803 +0x0c7:  mov    %eax,%edx
08218805 +0x0c9:  mov    %ebx,%eax
08218807 +0x0cb:  shl    $0x2,%eax
0821880a +0x0ce:  add    %ebx,%eax
0821880c +0x0d0:  add    %eax,%eax
0821880e +0x0d2:  add    %edx,%eax
08218810 +0x0d4:  add    $0x110,%eax
08218815 +0x0d9:  mov    0x4(%esi,%eax,4),%eax
08218819 +0x0dd:  mov    %eax,-0x18(%ebp)
0821881c +0x0e0:  cmpl   $0x0,-0x18(%ebp)
08218820 +0x0e4:  jne    0821882c <+0xf0>
08218822 +0x0e6:  mov    $0x16,%ebx
08218827 +0x0eb:  jmp    0821898a <+0x24e>
0821882c +0x0f0:  mov    -0x18(%ebp),%ebx
0821882f +0x0f3:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08218834 +0x0f8:  mov    %ebx,0x4(%esp)
08218838 +0x0fc:  mov    %eax,(%esp)
0821883b +0x0ff:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08218840 +0x104:  mov    %eax,-0x14(%ebp)
08218843 +0x107:  cmpl   $0x0,-0x14(%ebp)
08218847 +0x10b:  je     08218860 <+0x124>
08218849 +0x10d:  mov    -0x14(%ebp),%eax
0821884c +0x110:  mov    (%eax),%eax
0821884e +0x112:  add    $0xc,%eax
08218851 +0x115:  mov    (%eax),%edx
08218853 +0x117:  mov    -0x14(%ebp),%eax
08218856 +0x11a:  mov    %eax,(%esp)
08218859 +0x11d:  call   *%edx
0821885b +0x11f:  cmp    $0x10,%eax
0821885e +0x122:  je     08218867 <+0x12b>
08218860 +0x124:  mov    $0x1,%eax
08218865 +0x129:  jmp    0821886c <+0x130>
08218867 +0x12b:  mov    $0x0,%eax
0821886c +0x130:  test   %al,%al
0821886e +0x132:  je     0821887a <+0x13e>
08218870 +0x134:  mov    $0x16,%ebx
08218875 +0x139:  jmp    0821898a <+0x24e>
0821887a +0x13e:  lea    -0x3c(%ebp),%eax
0821887d +0x141:  mov    %eax,(%esp)
08218880 +0x144:  call   08111aa8 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xfba>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xfba
08218885 +0x149:  mov    -0x14(%ebp),%eax
08218888 +0x14c:  lea    -0x3c(%ebp),%edx
0821888b +0x14f:  mov    %edx,0x4(%esp)
0821888f +0x153:  mov    %eax,(%esp)
08218892 +0x156:  call   0850f75e <_ZNK14CStackableItem14getBoosterItemERSt6vectorI28stStackableBoosterItemInfo_tSaIS1_EE>  ; CStackableItem::getBoosterItem(std::vector<stStackableBoosterItemInfo_t, std::allocator<stStackableBoosterItemInfo_t> >&) const
08218897 +0x15b:  lea    -0x30(%ebp),%eax
0821889a +0x15e:  lea    -0x3c(%ebp),%edx
0821889d +0x161:  mov    %edx,0x4(%esp)
082188a1 +0x165:  mov    %eax,(%esp)
082188a4 +0x168:  call   08111b1a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x102c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x102c
082188a9 +0x16d:  sub    $0x4,%esp
082188ac +0x170:  lea    -0x30(%ebp),%eax
082188af +0x173:  mov    %eax,0x4(%esp)
082188b3 +0x177:  lea    -0x40(%ebp),%eax
082188b6 +0x17a:  mov    %eax,(%esp)
082188b9 +0x17d:  call   08111b3e <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1050>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1050
082188be +0x182:  lea    -0x2c(%ebp),%eax
082188c1 +0x185:  lea    -0x3c(%ebp),%edx
082188c4 +0x188:  mov    %edx,0x4(%esp)
082188c8 +0x18c:  mov    %eax,(%esp)
082188cb +0x18f:  call   08111b58 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x106a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x106a
082188d0 +0x194:  sub    $0x4,%esp
082188d3 +0x197:  lea    -0x2c(%ebp),%eax
082188d6 +0x19a:  mov    %eax,0x4(%esp)
082188da +0x19e:  lea    -0x44(%ebp),%eax
082188dd +0x1a1:  mov    %eax,(%esp)
082188e0 +0x1a4:  call   08111b3e <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1050>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1050
082188e5 +0x1a9:  jmp    08218947 <+0x20b>
082188e7 +0x1ab:  lea    -0x40(%ebp),%eax
082188ea +0x1ae:  mov    %eax,(%esp)
082188ed +0x1b1:  call   08111bc0 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x10d2>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x10d2
082188f2 +0x1b6:  lea    0x8(%eax),%ebx
082188f5 +0x1b9:  lea    -0x40(%ebp),%eax
082188f8 +0x1bc:  mov    %eax,(%esp)
082188fb +0x1bf:  call   08111bc0 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x10d2>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x10d2
08218900 +0x1c4:  mov    %eax,%edx
08218902 +0x1c6:  lea    -0x20(%ebp),%eax
08218905 +0x1c9:  mov    %ebx,0x8(%esp)
08218909 +0x1cd:  mov    %edx,0x4(%esp)
0821890d +0x1d1:  mov    %eax,(%esp)
08218910 +0x1d4:  call   08111bca <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x10dc>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x10dc
08218915 +0x1d9:  sub    $0x4,%esp
08218918 +0x1dc:  lea    -0x20(%ebp),%eax
0821891b +0x1df:  mov    %eax,0x4(%esp)
0821891f +0x1e3:  lea    -0x28(%ebp),%eax
08218922 +0x1e6:  mov    %eax,(%esp)
08218925 +0x1e9:  call   08111c08 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x111a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x111a
0821892a +0x1ee:  lea    -0x28(%ebp),%eax
0821892d +0x1f1:  mov    %eax,0x4(%esp)
08218931 +0x1f5:  mov    0x18(%ebp),%eax
08218934 +0x1f8:  mov    %eax,(%esp)
08218937 +0x1fb:  call   080dd606 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x14f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x14f
0821893c +0x200:  lea    -0x40(%ebp),%eax
0821893f +0x203:  mov    %eax,(%esp)
08218942 +0x206:  call   08111baa <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x10bc>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x10bc
08218947 +0x20b:  lea    -0x44(%ebp),%eax
0821894a +0x20e:  mov    %eax,0x4(%esp)
0821894e +0x212:  lea    -0x40(%ebp),%eax
08218951 +0x215:  mov    %eax,(%esp)
08218954 +0x218:  call   08237c2d <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd2d7>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd2d7
08218959 +0x21d:  test   %al,%al
0821895b +0x21f:  jne    082188e7 <+0x1ab>
0821895d +0x221:  mov    $0x0,%ebx
08218962 +0x226:  lea    -0x3c(%ebp),%eax
08218965 +0x229:  mov    %eax,(%esp)
08218968 +0x22c:  call   08111abc <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xfce>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xfce
0821896d +0x231:  jmp    0821898a <+0x24e>
0821896f +0x233:  mov    %edx,%ebx
08218971 +0x235:  mov    %eax,%esi
08218973 +0x237:  lea    -0x3c(%ebp),%eax
08218976 +0x23a:  mov    %eax,(%esp)
08218979 +0x23d:  call   08111abc <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xfce>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xfce
0821897e +0x242:  mov    %esi,%eax
08218980 +0x244:  mov    %ebx,%edx
08218982 +0x246:  mov    %eax,(%esp)
08218985 +0x249:  call   08ae3750 <_Unwind_Resume>
0821898a +0x24e:  mov    %ebx,%eax
0821898c +0x250:  lea    -0x8(%ebp),%esp
0821898f +0x253:  add    $0x0,%esp
08218992 +0x256:  pop    %ebx
08218993 +0x257:  pop    %esi
08218994 +0x258:  pop    %ebp
08218995 +0x259:  ret
```

## 反编译 C

```c
// Dispatcher_DisJointAvatar::_getResultItems @ 0x821873c

/* Dispatcher_DisJointAvatar::_getResultItems(CUser*, CItem const*, int, std::vector<std::pair<int,
   int>, std::allocator<std::pair<int, int> > >&) const */

undefined4 __thiscall
Dispatcher_DisJointAvatar::_getResultItems
          (Dispatcher_DisJointAvatar *this,CUser *param_1,CItem *param_2,int param_3,vector *param_4
          )

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  CDataManager *this_00;
  ushort *puVar5;
  int iVar6;
  undefined4 uVar7;
  __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
  local_48 [4];
  __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
  local_44 [4];
  vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>> local_40 [12];
  __normal_iterator local_34 [4];
  __normal_iterator local_30 [4];
  pair<int,int> local_2c [8];
  uint local_24 [2];
  int local_1c;
  CStackableItem *local_18;
  char local_11;
  int local_10;
  
  local_1c = 0;
  if (param_3 == -1) {
    iVar3 = G_CDataManager();
    iVar3 = *(int *)(iVar3 + 0x1c);
    iVar4 = CItem::get_grade(param_2);
    iVar6 = (**(code **)(*(int *)param_2 + 0xc))(param_2);
    local_1c = *(int *)(iVar3 + 4 + (iVar4 * 10 + iVar6 + 0x110) * 4);
  }
  else {
    local_11 = '\v';
    for (local_10 = 0; local_10 < 0xb; local_10 = local_10 + 1) {
      cVar1 = CItem::check_job_type(param_2,(char)local_10);
      if (cVar1 != '\0') {
        local_11 = (char)local_10;
      }
    }
    if (local_11 == '\v') {
      return 0x16;
    }
    iVar3 = G_CDataManager();
    iVar3 = *(int *)(iVar3 + 0x1c);
    iVar6 = (int)local_11;
    iVar4 = CItem::get_grade(param_2);
    local_1c = *(int *)(iVar3 + 4 + (iVar4 * 5 + iVar6 * 0x14 + param_3 + 0x34) * 4);
  }
  iVar3 = local_1c;
  if (local_1c != 0) {
    this_00 = (CDataManager *)G_CDataManager();
    local_18 = (CStackableItem *)CDataManager::find_item(this_00,iVar3);
    if ((local_18 == (CStackableItem *)0x0) ||
       (iVar3 = (**(code **)(*(int *)local_18 + 0xc))(local_18), iVar3 != 0x10)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      uVar7 = 0x16;
    }
    else {
      std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>::vector
                (local_40);
                    /* try { // try from 08218892 to 08218958 has its CatchHandler @ 0821896f */
      CStackableItem::getBoosterItem(local_18,(vector *)local_40);
      std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>::begin
                ();
      __gnu_cxx::
      __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
      ::__normal_iterator<stStackableBoosterItemInfo_t*>(local_44,local_34);
      std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>::end();
      __gnu_cxx::
      __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
      ::__normal_iterator<stStackableBoosterItemInfo_t*>(local_48,local_30);
      while (bVar2 = __gnu_cxx::operator!=(local_44,local_48), bVar2) {
        __gnu_cxx::
        __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
        ::operator->(local_44);
        puVar5 = (ushort *)
                 __gnu_cxx::
                 __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
                 ::operator->(local_44);
        std::make_pair<unsigned_int_const&,unsigned_short_const&>(local_24,puVar5);
        std::pair<int,int>::pair<unsigned_int,unsigned_short>(local_2c,(pair *)local_24);
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                  ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_4,local_2c
                  );
        __gnu_cxx::
        __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
        ::operator++(local_44);
      }
      uVar7 = 0;
      std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>::
      ~vector(local_40);
    }
    return uVar7;
  }
  return 0x16;
}
```

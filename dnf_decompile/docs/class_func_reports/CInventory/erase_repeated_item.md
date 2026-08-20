# erase_repeated_item

`_ZN10CInventory19erase_repeated_itemERKSt6vectorISt4pairIiiESaIS2_EERS4_`

`CInventory::erase_repeated_item(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&)`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x085056ca` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085056ca  _ZN10CInventory19erase_repeated_itemERKSt6vectorISt4pairIiiESaIS2_EERS4_
#           CInventory::erase_repeated_item(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&)
# range [0x085056ca, 0x085058d9]
085056ca +0x000:  push   %ebp
085056cb +0x001:  mov    %esp,%ebp
085056cd +0x003:  sub    $0x48,%esp
085056d0 +0x006:  lea    -0x30(%ebp),%eax
085056d3 +0x009:  mov    0xc(%ebp),%edx
085056d6 +0x00c:  mov    %edx,0x4(%esp)
085056da +0x010:  mov    %eax,(%esp)
085056dd +0x013:  call   08111220 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x732>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x732
085056e2 +0x018:  sub    $0x4,%esp
085056e5 +0x01b:  lea    -0x38(%ebp),%eax
085056e8 +0x01e:  mov    %eax,(%esp)
085056eb +0x021:  call   081b5c8e <_GLOBAL__I__ZN23NeedMaterialDataManagerC2Ev+0x31>  ; global constructors keyed to NeedMaterialDataManager::NeedMaterialDataManager()+0x31
085056f0 +0x026:  jmp    0850589d <+0x1d3>
085056f5 +0x02b:  lea    -0x30(%ebp),%eax
085056f8 +0x02e:  mov    %eax,(%esp)
085056fb +0x031:  call   08193912 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x57a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x57a
08505700 +0x036:  mov    (%eax),%eax
08505702 +0x038:  mov    %eax,-0x18(%ebp)
08505705 +0x03b:  mov    -0x18(%ebp),%eax
08505708 +0x03e:  mov    %eax,0x4(%esp)
0850570c +0x042:  mov    0x8(%ebp),%eax
0850570f +0x045:  mov    %eax,(%esp)
08505712 +0x048:  call   085018d2 <_ZNK10CInventory11GetItemTypeEi>  ; CInventory::GetItemType(int) const
08505717 +0x04d:  mov    %eax,-0x10(%ebp)
0850571a +0x050:  cmpl   $0x0,-0x10(%ebp)
0850571e +0x054:  jne    08505742 <+0x78>
08505720 +0x056:  lea    -0x20(%ebp),%eax
08505723 +0x059:  movl   $0x0,0x8(%esp)
0850572b +0x061:  lea    -0x30(%ebp),%edx
0850572e +0x064:  mov    %edx,0x4(%esp)
08505732 +0x068:  mov    %eax,(%esp)
08505735 +0x06b:  call   08193472 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0xda>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0xda
0850573a +0x070:  sub    $0x4,%esp
0850573d +0x073:  jmp    0850589d <+0x1d3>
08505742 +0x078:  lea    -0x2c(%ebp),%eax
08505745 +0x07b:  mov    %eax,0xc(%esp)
08505749 +0x07f:  lea    -0x28(%ebp),%eax
0850574c +0x082:  mov    %eax,0x8(%esp)
08505750 +0x086:  mov    -0x10(%ebp),%eax
08505753 +0x089:  mov    %eax,0x4(%esp)
08505757 +0x08d:  mov    0x8(%ebp),%eax
0850575a +0x090:  mov    %eax,(%esp)
0850575d +0x093:  call   08501886 <_ZNK10CInventory11StartEndPosEN10Inven_Item9ITEM_TYPEERiS2_>  ; CInventory::StartEndPos(Inven_Item::ITEM_TYPE, int&, int&) const
08505762 +0x098:  lea    -0x30(%ebp),%eax
08505765 +0x09b:  mov    %eax,(%esp)
08505768 +0x09e:  call   08193912 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x57a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x57a
0850576d +0x0a3:  mov    0x4(%eax),%eax
08505770 +0x0a6:  mov    %eax,-0xc(%ebp)
08505773 +0x0a9:  mov    -0x28(%ebp),%eax
08505776 +0x0ac:  mov    %eax,-0x14(%ebp)
08505779 +0x0af:  jmp    0850583a <+0x170>
0850577e +0x0b4:  mov    -0x10(%ebp),%eax
08505781 +0x0b7:  mov    %eax,(%esp)
08505784 +0x0ba:  call   0850d159 <_GLOBAL__I_g_emptySlot+0x8e>  ; global constructors keyed to g_emptySlot+0x8e
08505789 +0x0bf:  test   %al,%al
0850578b +0x0c1:  je     085057dc <+0x112>
0850578d +0x0c3:  mov    0x8(%ebp),%eax
08505790 +0x0c6:  mov    0x6e4(%eax),%edx
08505796 +0x0cc:  mov    -0x14(%ebp),%eax
08505799 +0x0cf:  imul   $0x3d,%eax,%eax
0850579c +0x0d2:  lea    (%edx,%eax,1),%eax
0850579f +0x0d5:  mov    0x2(%eax),%edx
085057a2 +0x0d8:  mov    -0x18(%ebp),%eax
085057a5 +0x0db:  cmp    %eax,%edx
085057a7 +0x0dd:  jne    08505832 <+0x168>
085057ad +0x0e3:  mov    -0x10(%ebp),%eax
085057b0 +0x0e6:  mov    %eax,(%esp)
085057b3 +0x0e9:  call   0850d17c <_GLOBAL__I_g_emptySlot+0xb1>  ; global constructors keyed to g_emptySlot+0xb1
085057b8 +0x0ee:  test   %al,%al
085057ba +0x0f0:  je     085057c2 <+0xf8>
085057bc +0x0f2:  subl   $0x1,-0xc(%ebp)
085057c0 +0x0f6:  jmp    08505836 <+0x16c>
085057c2 +0x0f8:  mov    0x8(%ebp),%eax
085057c5 +0x0fb:  mov    0x6e4(%eax),%edx
085057cb +0x101:  mov    -0x14(%ebp),%eax
085057ce +0x104:  imul   $0x3d,%eax,%eax
085057d1 +0x107:  lea    (%edx,%eax,1),%eax
085057d4 +0x10a:  mov    0x7(%eax),%eax
085057d7 +0x10d:  sub    %eax,-0xc(%ebp)
085057da +0x110:  jmp    08505836 <+0x16c>
085057dc +0x112:  mov    0x8(%ebp),%eax
085057df +0x115:  mov    0x650(%eax),%edx
085057e5 +0x11b:  mov    -0x14(%ebp),%eax
085057e8 +0x11e:  imul   $0x3d,%eax,%eax
085057eb +0x121:  lea    (%edx,%eax,1),%eax
085057ee +0x124:  mov    0x2(%eax),%edx
085057f1 +0x127:  mov    -0x18(%ebp),%eax
085057f4 +0x12a:  cmp    %eax,%edx
085057f6 +0x12c:  jne    08505835 <+0x16b>
085057f8 +0x12e:  mov    0x8(%ebp),%eax
085057fb +0x131:  mov    0x650(%eax),%edx
08505801 +0x137:  mov    -0x14(%ebp),%eax
08505804 +0x13a:  imul   $0x3d,%eax,%eax
08505807 +0x13d:  lea    (%edx,%eax,1),%eax
0850580a +0x140:  movzbl 0x1(%eax),%eax
0850580e +0x144:  cmp    $0x1,%al
08505810 +0x146:  jne    08505818 <+0x14e>
08505812 +0x148:  subl   $0x1,-0xc(%ebp)
08505816 +0x14c:  jmp    08505836 <+0x16c>
08505818 +0x14e:  mov    0x8(%ebp),%eax
0850581b +0x151:  mov    0x650(%eax),%edx
08505821 +0x157:  mov    -0x14(%ebp),%eax
08505824 +0x15a:  imul   $0x3d,%eax,%eax
08505827 +0x15d:  lea    (%edx,%eax,1),%eax
0850582a +0x160:  mov    0x7(%eax),%eax
0850582d +0x163:  sub    %eax,-0xc(%ebp)
08505830 +0x166:  jmp    08505836 <+0x16c>
08505832 +0x168:  nop
08505833 +0x169:  jmp    08505836 <+0x16c>
08505835 +0x16b:  nop
08505836 +0x16c:  addl   $0x1,-0x14(%ebp)
0850583a +0x170:  mov    -0x2c(%ebp),%eax
0850583d +0x173:  cmp    %eax,-0x14(%ebp)
08505840 +0x176:  setle  %al
08505843 +0x179:  test   %al,%al
08505845 +0x17b:  jne    0850577e <+0xb4>
0850584b +0x181:  lea    -0x30(%ebp),%eax
0850584e +0x184:  mov    %eax,(%esp)
08505851 +0x187:  call   08193912 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x57a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x57a
08505856 +0x18c:  mov    0x4(%eax),%eax
08505859 +0x18f:  test   %eax,%eax
0850585b +0x191:  setg   %al
0850585e +0x194:  test   %al,%al
08505860 +0x196:  je     08505880 <+0x1b6>
08505862 +0x198:  mov    -0x18(%ebp),%eax
08505865 +0x19b:  mov    %eax,-0x38(%ebp)
08505868 +0x19e:  mov    -0xc(%ebp),%eax
0850586b +0x1a1:  mov    %eax,-0x34(%ebp)
0850586e +0x1a4:  lea    -0x38(%ebp),%eax
08505871 +0x1a7:  mov    %eax,0x4(%esp)
08505875 +0x1ab:  mov    0x10(%ebp),%eax
08505878 +0x1ae:  mov    %eax,(%esp)
0850587b +0x1b1:  call   0830fa70 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1655>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1655
08505880 +0x1b6:  lea    -0x1c(%ebp),%eax
08505883 +0x1b9:  movl   $0x0,0x8(%esp)
0850588b +0x1c1:  lea    -0x30(%ebp),%edx
0850588e +0x1c4:  mov    %edx,0x4(%esp)
08505892 +0x1c8:  mov    %eax,(%esp)
08505895 +0x1cb:  call   08193472 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0xda>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0xda
0850589a +0x1d0:  sub    $0x4,%esp
0850589d +0x1d3:  lea    -0x24(%ebp),%eax
085058a0 +0x1d6:  mov    0xc(%ebp),%edx
085058a3 +0x1d9:  mov    %edx,0x4(%esp)
085058a7 +0x1dd:  mov    %eax,(%esp)
085058aa +0x1e0:  call   0811124c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x75e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x75e
085058af +0x1e5:  sub    $0x4,%esp
085058b2 +0x1e8:  lea    -0x24(%ebp),%eax
085058b5 +0x1eb:  mov    %eax,0x4(%esp)
085058b9 +0x1ef:  lea    -0x30(%ebp),%eax
085058bc +0x1f2:  mov    %eax,(%esp)
085058bf +0x1f5:  call   081938e5 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x54d>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x54d
085058c4 +0x1fa:  test   %al,%al
085058c6 +0x1fc:  jne    085056f5 <+0x2b>
085058cc +0x202:  mov    0x10(%ebp),%eax
085058cf +0x205:  mov    %eax,(%esp)
085058d2 +0x208:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
085058d7 +0x20d:  leave
085058d8 +0x20e:  ret
085058d9 +0x20f:  nop
```

## 反编译 C

```c
// CInventory::erase_repeated_item @ 0x85056ca

/* CInventory::erase_repeated_item(std::vector<std::pair<int, int>, std::allocator<std::pair<int,
   int> > > const&, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&) */

void __thiscall CInventory::erase_repeated_item(CInventory *this,vector *param_1,vector *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int local_3c;
  int local_38;
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_34 [4];
  int local_30;
  int local_2c;
  __normal_iterator local_28 [4];
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_24 [4];
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_20 [4];
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
  std::pair<int,int>::pair((pair<int,int> *)&local_3c);
  while( true ) {
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
    bVar2 = __gnu_cxx::operator!=(local_34,local_28);
    if (!bVar2) break;
    piVar3 = (int *)__gnu_cxx::
                    __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                    ::operator->(local_34);
    local_1c = *piVar3;
    local_14 = GetItemType(this,local_1c);
    if (local_14 == 0) {
      __gnu_cxx::
      __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
      ::operator++(local_24,(int)local_34);
    }
    else {
      StartEndPos(this,local_14,&local_2c,&local_30);
      iVar4 = __gnu_cxx::
              __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
              ::operator->(local_34);
      local_10 = *(int *)(iVar4 + 4);
      for (local_18 = local_2c; local_18 <= local_30; local_18 = local_18 + 1) {
        cVar1 = IsCreatureItemType(local_14);
        if (cVar1 == '\0') {
          if (*(int *)(*(int *)(this + 0x650) + local_18 * 0x3d + 2) == local_1c) {
            if (*(char *)(*(int *)(this + 0x650) + local_18 * 0x3d + 1) == '\x01') {
              local_10 = local_10 + -1;
            }
            else {
              local_10 = local_10 - *(int *)(*(int *)(this + 0x650) + local_18 * 0x3d + 7);
            }
          }
        }
        else if (*(int *)(*(int *)(this + 0x6e4) + local_18 * 0x3d + 2) == local_1c) {
          cVar1 = isEquipableItemType(local_14);
          if (cVar1 == '\0') {
            local_10 = local_10 - *(int *)(*(int *)(this + 0x6e4) + local_18 * 0x3d + 7);
          }
          else {
            local_10 = local_10 + -1;
          }
        }
      }
      iVar4 = __gnu_cxx::
              __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
              ::operator->(local_34);
      if (0 < *(int *)(iVar4 + 4)) {
        local_3c = local_1c;
        local_38 = local_10;
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                  ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_2,
                   (pair *)&local_3c);
      }
      __gnu_cxx::
      __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
      ::operator++(local_20,(int)local_34);
    }
  }
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_2);
  return;
}
```

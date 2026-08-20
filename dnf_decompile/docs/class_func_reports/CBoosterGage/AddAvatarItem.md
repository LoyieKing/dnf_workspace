# AddAvatarItem

`_ZN12CBoosterGage13AddAvatarItemERSt6vectorISt4pairIiiESaIS2_EEbP5CUserRK10Inven_ItemibccPKc20eAvatarItemAddReasonRi`

`CBoosterGage::AddAvatarItem(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, bool, CUser*, Inven_Item const&, int, bool, char, char, char const*, eAvatarItemAddReason, int&)`

| 类 | 地址 |
|---|---|
| `CBoosterGage` | `0x080dcbd6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080dcbd6  _ZN12CBoosterGage13AddAvatarItemERSt6vectorISt4pairIiiESaIS2_EEbP5CUserRK10Inven_ItemibccPKc20eAvatarItemAddReasonRi
#           CBoosterGage::AddAvatarItem(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, bool, CUser*, Inven_Item const&, int, bool, char, char, char const*, eAvatarItemAddReason, int&)
# range [0x080dcbd6, 0x080dcd8b]
080dcbd6 +0x000:  push   %ebp
080dcbd7 +0x001:  mov    %esp,%ebp
080dcbd9 +0x003:  push   %esi
080dcbda +0x004:  push   %ebx
080dcbdb +0x005:  sub    $0xa0,%esp
080dcbe1 +0x00b:  mov    0x10(%ebp),%ebx
080dcbe4 +0x00e:  mov    0x20(%ebp),%ecx
080dcbe7 +0x011:  mov    0x24(%ebp),%edx
080dcbea +0x014:  mov    0x28(%ebp),%eax
080dcbed +0x017:  mov    %bl,-0x6c(%ebp)
080dcbf0 +0x01a:  mov    %cl,-0x70(%ebp)
080dcbf3 +0x01d:  mov    %dl,-0x74(%ebp)
080dcbf6 +0x020:  mov    %al,-0x78(%ebp)
080dcbf9 +0x023:  movl   $0x0,-0x64(%ebp)
080dcc00 +0x02a:  movl   $0x1,-0x14(%ebp)
080dcc07 +0x031:  cmpb   $0x0,-0x6c(%ebp)
080dcc0b +0x035:  je     080dcc26 <+0x50>
080dcc0d +0x037:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
080dcc12 +0x03c:  movzbl 0x877e(%eax),%eax
080dcc19 +0x043:  movzbl %al,%eax
080dcc1c +0x046:  mov    %eax,-0x14(%ebp)
080dcc1f +0x049:  movl   $0x16,0x30(%ebp)
080dcc26 +0x050:  movl   $0x0,-0x10(%ebp)
080dcc2d +0x057:  jmp    080dcd6e <+0x198>
080dcc32 +0x05c:  movzbl -0x70(%ebp),%esi
080dcc36 +0x060:  mov    0x18(%ebp),%eax
080dcc39 +0x063:  mov    0x2(%eax),%eax
080dcc3c +0x066:  mov    %eax,%ebx
080dcc3e +0x068:  mov    0x14(%ebp),%eax
080dcc41 +0x06b:  mov    %eax,(%esp)
080dcc44 +0x06e:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
080dcc49 +0x073:  movl   $0x0,0x24(%esp)
080dcc51 +0x07b:  movl   $0x0,0x20(%esp)
080dcc59 +0x083:  mov    0x30(%ebp),%edx
080dcc5c +0x086:  mov    %edx,0x1c(%esp)
080dcc60 +0x08a:  mov    0x2c(%ebp),%edx
080dcc63 +0x08d:  mov    %edx,0x18(%esp)
080dcc67 +0x091:  movl   $0xffffffff,0x14(%esp)
080dcc6f +0x099:  movl   $0x0,0x10(%esp)
080dcc77 +0x0a1:  mov    %esi,0xc(%esp)
080dcc7b +0x0a5:  mov    0x1c(%ebp),%edx
080dcc7e +0x0a8:  mov    %edx,0x8(%esp)
080dcc82 +0x0ac:  mov    %ebx,0x4(%esp)
080dcc86 +0x0b0:  mov    %eax,(%esp)
080dcc89 +0x0b3:  call   08509b9e <_ZN10CInventory13AddAvatarItemEiibccPKc20eAvatarItemAddReasonbt>  ; CInventory::AddAvatarItem(int, int, bool, char, char, char const*, eAvatarItemAddReason, bool, unsigned short)
080dcc8e +0x0b8:  mov    %eax,-0x64(%ebp)
080dcc91 +0x0bb:  mov    -0x64(%ebp),%eax
080dcc94 +0x0be:  cmp    $0xffffffff,%eax
080dcc97 +0x0c1:  jne    080dccc5 <+0xef>
080dcc99 +0x0c3:  mov    0x1c(%ebp),%eax
080dcc9c +0x0c6:  mov    %eax,0x10(%esp)
080dcca0 +0x0ca:  mov    0x2c(%ebp),%eax
080dcca3 +0x0cd:  mov    %eax,0xc(%esp)
080dcca7 +0x0d1:  mov    0x18(%ebp),%eax
080dccaa +0x0d4:  mov    %eax,0x8(%esp)
080dccae +0x0d8:  mov    0x14(%ebp),%eax
080dccb1 +0x0db:  mov    %eax,0x4(%esp)
080dccb5 +0x0df:  mov    0x8(%ebp),%eax
080dccb8 +0x0e2:  mov    %eax,(%esp)
080dccbb +0x0e5:  call   080dc6d6 <_ZN12CBoosterGage11make_postarEP5CUserRK10Inven_ItemPKci>  ; CBoosterGage::make_postar(CUser*, Inven_Item const&, char const*, int)
080dccc0 +0x0ea:  jmp    080dcd6a <+0x194>
080dccc5 +0x0ef:  movl   $0x0,(%esp)
080dcccc +0x0f6:  call   0807d750 <_init+0x48>
080dccd1 +0x0fb:  mov    %eax,-0xc(%ebp)
080dccd4 +0x0fe:  mov    -0x64(%ebp),%ebx
080dccd7 +0x101:  mov    0x14(%ebp),%eax
080dccda +0x104:  mov    %eax,(%esp)
080dccdd +0x107:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
080dcce2 +0x10c:  lea    -0x5d(%ebp),%edx
080dcce5 +0x10f:  mov    %ebx,0xc(%esp)
080dcce9 +0x113:  movl   $0x2,0x8(%esp)
080dccf1 +0x11b:  mov    %eax,0x4(%esp)
080dccf5 +0x11f:  mov    %edx,(%esp)
080dccf8 +0x122:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
080dccfd +0x127:  sub    $0x4,%esp
080dcd00 +0x12a:  mov    -0x56(%ebp),%ebx
080dcd03 +0x12d:  mov    0x14(%ebp),%eax
080dcd06 +0x130:  mov    %eax,(%esp)
080dcd09 +0x133:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
080dcd0e +0x138:  mov    %eax,(%esp)
080dcd11 +0x13b:  call   080dd576 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xbf>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xbf
080dcd16 +0x140:  mov    -0xc(%ebp),%edx
080dcd19 +0x143:  mov    %edx,0x8(%esp)
080dcd1d +0x147:  mov    %ebx,0x4(%esp)
080dcd21 +0x14b:  mov    %eax,(%esp)
080dcd24 +0x14e:  call   082f9850 <_ZNK8WongWork14CAvatarItemMgr13GetRemainDateEii>  ; WongWork::CAvatarItemMgr::GetRemainDate(int, int) const
080dcd29 +0x153:  mov    0x34(%ebp),%edx
080dcd2c +0x156:  mov    %eax,(%edx)
080dcd2e +0x158:  mov    0x18(%ebp),%eax
080dcd31 +0x15b:  mov    %eax,(%esp)
080dcd34 +0x15e:  call   083481e2 <_ZNK10Inven_Item12GetItemSpaceEv>  ; Inven_Item::GetItemSpace() const
080dcd39 +0x163:  mov    %eax,-0x18(%ebp)
080dcd3c +0x166:  lea    -0x20(%ebp),%eax
080dcd3f +0x169:  lea    -0x18(%ebp),%edx
080dcd42 +0x16c:  mov    %edx,0x8(%esp)
080dcd46 +0x170:  lea    -0x64(%ebp),%edx
080dcd49 +0x173:  mov    %edx,0x4(%esp)
080dcd4d +0x177:  mov    %eax,(%esp)
080dcd50 +0x17a:  call   080dd799 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x2e2>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x2e2
080dcd55 +0x17f:  sub    $0x4,%esp
080dcd58 +0x182:  lea    -0x20(%ebp),%eax
080dcd5b +0x185:  mov    %eax,0x4(%esp)
080dcd5f +0x189:  mov    0xc(%ebp),%eax
080dcd62 +0x18c:  mov    %eax,(%esp)
080dcd65 +0x18f:  call   080dd606 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x14f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x14f
080dcd6a +0x194:  addl   $0x1,-0x10(%ebp)
080dcd6e +0x198:  mov    -0x10(%ebp),%eax
080dcd71 +0x19b:  cmp    -0x14(%ebp),%eax
080dcd74 +0x19e:  setl   %al
080dcd77 +0x1a1:  test   %al,%al
080dcd79 +0x1a3:  jne    080dcc32 <+0x5c>
080dcd7f +0x1a9:  mov    -0x64(%ebp),%eax
080dcd82 +0x1ac:  lea    -0x8(%ebp),%esp
080dcd85 +0x1af:  add    $0x0,%esp
080dcd88 +0x1b2:  pop    %ebx
080dcd89 +0x1b3:  pop    %esi
080dcd8a +0x1b4:  pop    %ebp
080dcd8b +0x1b5:  ret
```

## 反编译 C

```c
// CBoosterGage::AddAvatarItem @ 0x80dcbd6

/* CBoosterGage::AddAvatarItem(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> >
   >&, bool, CUser*, Inven_Item const&, int, bool, char, char, char const*, eAvatarItemAddReason,
   int&) */

int __thiscall
CBoosterGage::AddAvatarItem
          (CBoosterGage *this,vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *param_1
          ,char param_2,CUserCharacInfo *param_3,Inven_Item *param_4,int param_5,undefined1 param_6,
          undefined4 param_7,undefined4 param_8,char *param_9,undefined4 param_11,
          undefined4 *param_12)

{
  int iVar1;
  CInventory *pCVar2;
  CAvatarItemMgr *this_00;
  undefined4 uVar3;
  int local_68;
  undefined1 local_61 [7];
  int local_5a;
  int local_24 [2];
  undefined4 local_1c;
  uint local_18;
  int local_14;
  time_t local_10;
  
  local_68 = 0;
  local_18 = 1;
  if (param_2 != '\0') {
    iVar1 = G_CDataManager();
    local_18 = (uint)*(byte *)(iVar1 + 0x877e);
    param_11 = 0x16;
  }
  for (local_14 = 0; local_14 < (int)local_18; local_14 = local_14 + 1) {
    uVar3 = *(undefined4 *)(param_4 + 2);
    pCVar2 = (CInventory *)CUserCharacInfo::getCurCharacInvenW(param_3);
    local_68 = CInventory::AddAvatarItem
                         (pCVar2,uVar3,param_5,param_6,0,0xffffffff,param_9,param_11,0,0);
    if (local_68 == -1) {
      make_postar(this,(CUser *)param_3,param_4,param_9,param_5);
    }
    else {
      local_10 = time((time_t *)0x0);
      iVar1 = CUserCharacInfo::getCurCharacInvenR(param_3);
      CInventory::GetInvenSlot((int)local_61,iVar1);
      iVar1 = local_5a;
      pCVar2 = (CInventory *)CUserCharacInfo::getCurCharacInvenR(param_3);
      this_00 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(pCVar2);
      uVar3 = WongWork::CAvatarItemMgr::GetRemainDate(this_00,iVar1,local_10);
      *param_12 = uVar3;
      local_1c = Inven_Item::GetItemSpace(param_4);
      std::make_pair<int&,int>(local_24,&local_68);
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                (param_1,(pair *)local_24);
    }
  }
  return local_68;
}
```

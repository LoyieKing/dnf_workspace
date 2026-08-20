# InsertCreatureItem

`_ZN12CBoosterGage18InsertCreatureItemERSt6vectorISt4pairIiiESaIS2_EEbP5CUserRK10Inven_Item14eItemAddReasonbbiiPKc`

`CBoosterGage::InsertCreatureItem(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, bool, CUser*, Inven_Item const&, eItemAddReason, bool, bool, int, int, char const*)`

| 类 | 地址 |
|---|---|
| `CBoosterGage` | `0x080dcd8c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080dcd8c  _ZN12CBoosterGage18InsertCreatureItemERSt6vectorISt4pairIiiESaIS2_EEbP5CUserRK10Inven_Item14eItemAddReasonbbiiPKc
#           CBoosterGage::InsertCreatureItem(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, bool, CUser*, Inven_Item const&, eItemAddReason, bool, bool, int, int, char const*)
# range [0x080dcd8c, 0x080dcf55]
080dcd8c +0x000:  push   %ebp
080dcd8d +0x001:  mov    %esp,%ebp
080dcd8f +0x003:  push   %esi
080dcd90 +0x004:  push   %ebx
080dcd91 +0x005:  add    $0xffffff80,%esp
080dcd94 +0x008:  mov    0x10(%ebp),%ecx
080dcd97 +0x00b:  mov    0x20(%ebp),%edx
080dcd9a +0x00e:  mov    0x24(%ebp),%eax
080dcd9d +0x011:  mov    %cl,-0x2c(%ebp)
080dcda0 +0x014:  mov    %dl,-0x30(%ebp)
080dcda3 +0x017:  mov    %al,-0x34(%ebp)
080dcda6 +0x01a:  movl   $0x0,-0x20(%ebp)
080dcdad +0x021:  movl   $0x1,-0x10(%ebp)
080dcdb4 +0x028:  cmpb   $0x0,-0x2c(%ebp)
080dcdb8 +0x02c:  je     080dcdd3 <+0x47>
080dcdba +0x02e:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
080dcdbf +0x033:  movzbl 0x877e(%eax),%eax
080dcdc6 +0x03a:  movzbl %al,%eax
080dcdc9 +0x03d:  mov    %eax,-0x10(%ebp)
080dcdcc +0x040:  movl   $0x3a,0x1c(%ebp)
080dcdd3 +0x047:  movl   $0x0,-0xc(%ebp)
080dcdda +0x04e:  jmp    080dcf37 <+0x1ab>
080dcddf +0x053:  movzbl -0x34(%ebp),%esi
080dcde3 +0x057:  movzbl -0x30(%ebp),%ebx
080dcde7 +0x05b:  mov    0x14(%ebp),%eax
080dcdea +0x05e:  mov    %eax,(%esp)
080dcded +0x061:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
080dcdf2 +0x066:  mov    %eax,%edx
080dcdf4 +0x068:  mov    %esi,0x4c(%esp)
080dcdf8 +0x06c:  mov    %ebx,0x48(%esp)
080dcdfc +0x070:  mov    0x1c(%ebp),%eax
080dcdff +0x073:  mov    %eax,0x44(%esp)
080dce03 +0x077:  mov    0x18(%ebp),%eax
080dce06 +0x07a:  mov    (%eax),%ecx
080dce08 +0x07c:  mov    %ecx,0x4(%esp)
080dce0c +0x080:  mov    0x4(%eax),%ecx
080dce0f +0x083:  mov    %ecx,0x8(%esp)
080dce13 +0x087:  mov    0x8(%eax),%ecx
080dce16 +0x08a:  mov    %ecx,0xc(%esp)
080dce1a +0x08e:  mov    0xc(%eax),%ecx
080dce1d +0x091:  mov    %ecx,0x10(%esp)
080dce21 +0x095:  mov    0x10(%eax),%ecx
080dce24 +0x098:  mov    %ecx,0x14(%esp)
080dce28 +0x09c:  mov    0x14(%eax),%ecx
080dce2b +0x09f:  mov    %ecx,0x18(%esp)
080dce2f +0x0a3:  mov    0x18(%eax),%ecx
080dce32 +0x0a6:  mov    %ecx,0x1c(%esp)
080dce36 +0x0aa:  mov    0x1c(%eax),%ecx
080dce39 +0x0ad:  mov    %ecx,0x20(%esp)
080dce3d +0x0b1:  mov    0x20(%eax),%ecx
080dce40 +0x0b4:  mov    %ecx,0x24(%esp)
080dce44 +0x0b8:  mov    0x24(%eax),%ecx
080dce47 +0x0bb:  mov    %ecx,0x28(%esp)
080dce4b +0x0bf:  mov    0x28(%eax),%ecx
080dce4e +0x0c2:  mov    %ecx,0x2c(%esp)
080dce52 +0x0c6:  mov    0x2c(%eax),%ecx
080dce55 +0x0c9:  mov    %ecx,0x30(%esp)
080dce59 +0x0cd:  mov    0x30(%eax),%ecx
080dce5c +0x0d0:  mov    %ecx,0x34(%esp)
080dce60 +0x0d4:  mov    0x34(%eax),%ecx
080dce63 +0x0d7:  mov    %ecx,0x38(%esp)
080dce67 +0x0db:  mov    0x38(%eax),%ecx
080dce6a +0x0de:  mov    %ecx,0x3c(%esp)
080dce6e +0x0e2:  movzbl 0x3c(%eax),%eax
080dce72 +0x0e6:  mov    %al,0x40(%esp)
080dce76 +0x0ea:  mov    %edx,(%esp)
080dce79 +0x0ed:  call   08502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoInventory(Inven_Item, eItemAddReason, bool, bool)
080dce7e +0x0f2:  mov    %eax,-0x20(%ebp)
080dce81 +0x0f5:  mov    -0x20(%ebp),%eax
080dce84 +0x0f8:  test   %eax,%eax
080dce86 +0x0fa:  jns    080dceb9 <+0x12d>
080dce88 +0x0fc:  movl   $0xffffffff,-0x20(%ebp)
080dce8f +0x103:  movl   $0x0,0x10(%esp)
080dce97 +0x10b:  mov    0x30(%ebp),%eax
080dce9a +0x10e:  mov    %eax,0xc(%esp)
080dce9e +0x112:  mov    0x18(%ebp),%eax
080dcea1 +0x115:  mov    %eax,0x8(%esp)
080dcea5 +0x119:  mov    0x14(%ebp),%eax
080dcea8 +0x11c:  mov    %eax,0x4(%esp)
080dceac +0x120:  mov    0x8(%ebp),%eax
080dceaf +0x123:  mov    %eax,(%esp)
080dceb2 +0x126:  call   080dc6d6 <_ZN12CBoosterGage11make_postarEP5CUserRK10Inven_ItemPKci>  ; CBoosterGage::make_postar(CUser*, Inven_Item const&, char const*, int)
080dceb7 +0x12b:  jmp    080dcf33 <+0x1a7>
080dceb9 +0x12d:  mov    0x1c(%ebp),%esi
080dcebc +0x130:  mov    -0x20(%ebp),%ebx
080dcebf +0x133:  mov    0x14(%ebp),%eax
080dcec2 +0x136:  mov    %eax,(%esp)
080dcec5 +0x139:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
080dceca +0x13e:  mov    %eax,(%esp)
080dcecd +0x141:  call   080dd568 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xb1>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xb1
080dced2 +0x146:  mov    0x2c(%ebp),%edx
080dced5 +0x149:  mov    %edx,0x14(%esp)
080dced9 +0x14d:  mov    0x28(%ebp),%edx
080dcedc +0x150:  mov    %edx,0x10(%esp)
080dcee0 +0x154:  mov    %esi,0xc(%esp)
080dcee4 +0x158:  mov    %ebx,0x8(%esp)
080dcee8 +0x15c:  mov    0x18(%ebp),%edx
080dceeb +0x15f:  mov    %edx,0x4(%esp)
080dceef +0x163:  mov    %eax,(%esp)
080dcef2 +0x166:  call   0833b204 <_ZN13user_creature12CCreatureMgr18InsertCreatureItemEP10Inven_Itemiiii>  ; user_creature::CCreatureMgr::InsertCreatureItem(Inven_Item*, int, int, int, int)
080dcef7 +0x16b:  mov    0x18(%ebp),%eax
080dcefa +0x16e:  mov    %eax,(%esp)
080dcefd +0x171:  call   083481e2 <_ZNK10Inven_Item12GetItemSpaceEv>  ; Inven_Item::GetItemSpace() const
080dcf02 +0x176:  mov    %eax,-0x14(%ebp)
080dcf05 +0x179:  lea    -0x1c(%ebp),%eax
080dcf08 +0x17c:  lea    -0x14(%ebp),%edx
080dcf0b +0x17f:  mov    %edx,0x8(%esp)
080dcf0f +0x183:  lea    -0x20(%ebp),%edx
080dcf12 +0x186:  mov    %edx,0x4(%esp)
080dcf16 +0x18a:  mov    %eax,(%esp)
080dcf19 +0x18d:  call   080dd799 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x2e2>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x2e2
080dcf1e +0x192:  sub    $0x4,%esp
080dcf21 +0x195:  lea    -0x1c(%ebp),%eax
080dcf24 +0x198:  mov    %eax,0x4(%esp)
080dcf28 +0x19c:  mov    0xc(%ebp),%eax
080dcf2b +0x19f:  mov    %eax,(%esp)
080dcf2e +0x1a2:  call   080dd606 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x14f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x14f
080dcf33 +0x1a7:  addl   $0x1,-0xc(%ebp)
080dcf37 +0x1ab:  mov    -0xc(%ebp),%eax
080dcf3a +0x1ae:  cmp    -0x10(%ebp),%eax
080dcf3d +0x1b1:  setl   %al
080dcf40 +0x1b4:  test   %al,%al
080dcf42 +0x1b6:  jne    080dcddf <+0x53>
080dcf48 +0x1bc:  mov    -0x20(%ebp),%eax
080dcf4b +0x1bf:  lea    -0x8(%ebp),%esp
080dcf4e +0x1c2:  add    $0x0,%esp
080dcf51 +0x1c5:  pop    %ebx
080dcf52 +0x1c6:  pop    %esi
080dcf53 +0x1c7:  pop    %ebp
080dcf54 +0x1c8:  ret
080dcf55 +0x1c9:  nop
```

## 反编译 C

```c
// CBoosterGage::InsertCreatureItem @ 0x80dcd8c

/* CBoosterGage::InsertCreatureItem(std::vector<std::pair<int, int>, std::allocator<std::pair<int,
   int> > >&, bool, CUser*, Inven_Item const&, eItemAddReason, bool, bool, int, int, char const*) */

int __thiscall
CBoosterGage::InsertCreatureItem
          (CBoosterGage *this,vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *param_1
          ,char param_2,CUserCharacInfo *param_3,Inven_Item *param_4,int param_6,undefined1 param_7,
          undefined1 param_8,int param_9,int param_10,char *param_11)

{
  int iVar1;
  undefined4 uVar2;
  CInventory *this_00;
  CCreatureMgr *this_01;
  int local_24;
  int local_20 [2];
  undefined4 local_18;
  uint local_14;
  int local_10;
  
  local_24 = 0;
  local_14 = 1;
  if (param_2 != '\0') {
    iVar1 = G_CDataManager();
    local_14 = (uint)*(byte *)(iVar1 + 0x877e);
    param_6 = 0x3a;
  }
  for (local_10 = 0; local_10 < (int)local_14; local_10 = local_10 + 1) {
    uVar2 = CUserCharacInfo::getCurCharacInvenW(param_3);
    iVar1 = CInventory::insertItemIntoInventory
                      (uVar2,*(undefined4 *)param_4,*(undefined4 *)(param_4 + 4),
                       *(undefined4 *)(param_4 + 8),*(undefined4 *)(param_4 + 0xc),
                       *(undefined4 *)(param_4 + 0x10),*(undefined4 *)(param_4 + 0x14),
                       *(undefined4 *)(param_4 + 0x18),*(undefined4 *)(param_4 + 0x1c),
                       *(undefined4 *)(param_4 + 0x20),*(undefined4 *)(param_4 + 0x24),
                       *(undefined4 *)(param_4 + 0x28),*(undefined4 *)(param_4 + 0x2c),
                       *(undefined4 *)(param_4 + 0x30),*(undefined4 *)(param_4 + 0x34),
                       *(undefined4 *)(param_4 + 0x38),param_4[0x3c],param_6,param_7,param_8);
    if (iVar1 < 0) {
      local_24 = -1;
      make_postar(this,(CUser *)param_3,param_4,param_11,0);
    }
    else {
      local_24 = iVar1;
      this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenW(param_3);
      this_01 = (CCreatureMgr *)CInventory::GetCreatureMgrW(this_00);
      user_creature::CCreatureMgr::InsertCreatureItem
                (this_01,param_4,iVar1,param_6,param_9,param_10);
      local_18 = Inven_Item::GetItemSpace(param_4);
      std::make_pair<int&,int>(local_20,&local_24);
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                (param_1,(pair *)local_20);
    }
  }
  return local_24;
}
```

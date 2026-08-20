# insertItemIntoInventory

`_ZN12CBoosterGage23insertItemIntoInventoryERSt6vectorISt4pairIiiESaIS2_EEbP5CUserRK10Inven_Item14eItemAddReasonb`

`CBoosterGage::insertItemIntoInventory(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, bool, CUser*, Inven_Item const&, eItemAddReason, bool)`

| 类 | 地址 |
|---|---|
| `CBoosterGage` | `0x080dcf56` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080dcf56  _ZN12CBoosterGage23insertItemIntoInventoryERSt6vectorISt4pairIiiESaIS2_EEbP5CUserRK10Inven_Item14eItemAddReasonb
#           CBoosterGage::insertItemIntoInventory(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, bool, CUser*, Inven_Item const&, eItemAddReason, bool)
# range [0x080dcf56, 0x080dd0d9]
080dcf56 +0x000:  push   %ebp
080dcf57 +0x001:  mov    %esp,%ebp
080dcf59 +0x003:  push   %ebx
080dcf5a +0x004:  sub    $0x84,%esp
080dcf60 +0x00a:  mov    0x10(%ebp),%edx
080dcf63 +0x00d:  mov    0x20(%ebp),%eax
080dcf66 +0x010:  mov    %dl,-0x2c(%ebp)
080dcf69 +0x013:  mov    %al,-0x30(%ebp)
080dcf6c +0x016:  movl   $0x0,-0x20(%ebp)
080dcf73 +0x01d:  movl   $0x1,-0x10(%ebp)
080dcf7a +0x024:  cmpb   $0x0,-0x2c(%ebp)
080dcf7e +0x028:  je     080dcf99 <+0x43>
080dcf80 +0x02a:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
080dcf85 +0x02f:  movzbl 0x877e(%eax),%eax
080dcf8c +0x036:  movzbl %al,%eax
080dcf8f +0x039:  mov    %eax,-0x10(%ebp)
080dcf92 +0x03c:  movl   $0x3a,0x1c(%ebp)
080dcf99 +0x043:  movl   $0x0,-0xc(%ebp)
080dcfa0 +0x04a:  jmp    080dd0c0 <+0x16a>
080dcfa5 +0x04f:  movzbl -0x30(%ebp),%ebx
080dcfa9 +0x053:  mov    0x14(%ebp),%eax
080dcfac +0x056:  mov    %eax,(%esp)
080dcfaf +0x059:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
080dcfb4 +0x05e:  mov    %eax,%edx
080dcfb6 +0x060:  movl   $0x1,0x4c(%esp)
080dcfbe +0x068:  mov    %ebx,0x48(%esp)
080dcfc2 +0x06c:  mov    0x1c(%ebp),%eax
080dcfc5 +0x06f:  mov    %eax,0x44(%esp)
080dcfc9 +0x073:  mov    0x18(%ebp),%eax
080dcfcc +0x076:  mov    (%eax),%ecx
080dcfce +0x078:  mov    %ecx,0x4(%esp)
080dcfd2 +0x07c:  mov    0x4(%eax),%ecx
080dcfd5 +0x07f:  mov    %ecx,0x8(%esp)
080dcfd9 +0x083:  mov    0x8(%eax),%ecx
080dcfdc +0x086:  mov    %ecx,0xc(%esp)
080dcfe0 +0x08a:  mov    0xc(%eax),%ecx
080dcfe3 +0x08d:  mov    %ecx,0x10(%esp)
080dcfe7 +0x091:  mov    0x10(%eax),%ecx
080dcfea +0x094:  mov    %ecx,0x14(%esp)
080dcfee +0x098:  mov    0x14(%eax),%ecx
080dcff1 +0x09b:  mov    %ecx,0x18(%esp)
080dcff5 +0x09f:  mov    0x18(%eax),%ecx
080dcff8 +0x0a2:  mov    %ecx,0x1c(%esp)
080dcffc +0x0a6:  mov    0x1c(%eax),%ecx
080dcfff +0x0a9:  mov    %ecx,0x20(%esp)
080dd003 +0x0ad:  mov    0x20(%eax),%ecx
080dd006 +0x0b0:  mov    %ecx,0x24(%esp)
080dd00a +0x0b4:  mov    0x24(%eax),%ecx
080dd00d +0x0b7:  mov    %ecx,0x28(%esp)
080dd011 +0x0bb:  mov    0x28(%eax),%ecx
080dd014 +0x0be:  mov    %ecx,0x2c(%esp)
080dd018 +0x0c2:  mov    0x2c(%eax),%ecx
080dd01b +0x0c5:  mov    %ecx,0x30(%esp)
080dd01f +0x0c9:  mov    0x30(%eax),%ecx
080dd022 +0x0cc:  mov    %ecx,0x34(%esp)
080dd026 +0x0d0:  mov    0x34(%eax),%ecx
080dd029 +0x0d3:  mov    %ecx,0x38(%esp)
080dd02d +0x0d7:  mov    0x38(%eax),%ecx
080dd030 +0x0da:  mov    %ecx,0x3c(%esp)
080dd034 +0x0de:  movzbl 0x3c(%eax),%eax
080dd038 +0x0e2:  mov    %al,0x40(%esp)
080dd03c +0x0e6:  mov    %edx,(%esp)
080dd03f +0x0e9:  call   08502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoInventory(Inven_Item, eItemAddReason, bool, bool)
080dd044 +0x0ee:  mov    %eax,-0x20(%ebp)
080dd047 +0x0f1:  mov    -0x20(%ebp),%eax
080dd04a +0x0f4:  test   %eax,%eax
080dd04c +0x0f6:  jns    080dd080 <+0x12a>
080dd04e +0x0f8:  movl   $0xffffffff,-0x20(%ebp)
080dd055 +0x0ff:  movl   $0x0,0x10(%esp)
080dd05d +0x107:  movl   $0x0,0xc(%esp)
080dd065 +0x10f:  mov    0x18(%ebp),%eax
080dd068 +0x112:  mov    %eax,0x8(%esp)
080dd06c +0x116:  mov    0x14(%ebp),%eax
080dd06f +0x119:  mov    %eax,0x4(%esp)
080dd073 +0x11d:  mov    0x8(%ebp),%eax
080dd076 +0x120:  mov    %eax,(%esp)
080dd079 +0x123:  call   080dc6d6 <_ZN12CBoosterGage11make_postarEP5CUserRK10Inven_ItemPKci>  ; CBoosterGage::make_postar(CUser*, Inven_Item const&, char const*, int)
080dd07e +0x128:  jmp    080dd0bc <+0x166>
080dd080 +0x12a:  mov    0x18(%ebp),%eax
080dd083 +0x12d:  mov    %eax,(%esp)
080dd086 +0x130:  call   083481e2 <_ZNK10Inven_Item12GetItemSpaceEv>  ; Inven_Item::GetItemSpace() const
080dd08b +0x135:  mov    %eax,-0x14(%ebp)
080dd08e +0x138:  lea    -0x1c(%ebp),%eax
080dd091 +0x13b:  lea    -0x14(%ebp),%edx
080dd094 +0x13e:  mov    %edx,0x8(%esp)
080dd098 +0x142:  lea    -0x20(%ebp),%edx
080dd09b +0x145:  mov    %edx,0x4(%esp)
080dd09f +0x149:  mov    %eax,(%esp)
080dd0a2 +0x14c:  call   080dd799 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x2e2>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x2e2
080dd0a7 +0x151:  sub    $0x4,%esp
080dd0aa +0x154:  lea    -0x1c(%ebp),%eax
080dd0ad +0x157:  mov    %eax,0x4(%esp)
080dd0b1 +0x15b:  mov    0xc(%ebp),%eax
080dd0b4 +0x15e:  mov    %eax,(%esp)
080dd0b7 +0x161:  call   080dd606 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x14f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x14f
080dd0bc +0x166:  addl   $0x1,-0xc(%ebp)
080dd0c0 +0x16a:  mov    -0xc(%ebp),%eax
080dd0c3 +0x16d:  cmp    -0x10(%ebp),%eax
080dd0c6 +0x170:  setl   %al
080dd0c9 +0x173:  test   %al,%al
080dd0cb +0x175:  jne    080dcfa5 <+0x4f>
080dd0d1 +0x17b:  mov    -0x20(%ebp),%eax
080dd0d4 +0x17e:  mov    -0x4(%ebp),%ebx
080dd0d7 +0x181:  leave
080dd0d8 +0x182:  ret
080dd0d9 +0x183:  nop
```

## 反编译 C

```c
// CBoosterGage::insertItemIntoInventory @ 0x80dcf56

/* CBoosterGage::insertItemIntoInventory(std::vector<std::pair<int, int>,
   std::allocator<std::pair<int, int> > >&, bool, CUser*, Inven_Item const&, eItemAddReason, bool)
    */

int __thiscall
CBoosterGage::insertItemIntoInventory
          (CBoosterGage *this,vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *param_1
          ,char param_2,CUserCharacInfo *param_3,Inven_Item *param_4,undefined4 param_6,
          undefined1 param_7)

{
  int iVar1;
  undefined4 uVar2;
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
    local_24 = CInventory::insertItemIntoInventory
                         (uVar2,*(undefined4 *)param_4,*(undefined4 *)(param_4 + 4),
                          *(undefined4 *)(param_4 + 8),*(undefined4 *)(param_4 + 0xc),
                          *(undefined4 *)(param_4 + 0x10),*(undefined4 *)(param_4 + 0x14),
                          *(undefined4 *)(param_4 + 0x18),*(undefined4 *)(param_4 + 0x1c),
                          *(undefined4 *)(param_4 + 0x20),*(undefined4 *)(param_4 + 0x24),
                          *(undefined4 *)(param_4 + 0x28),*(undefined4 *)(param_4 + 0x2c),
                          *(undefined4 *)(param_4 + 0x30),*(undefined4 *)(param_4 + 0x34),
                          *(undefined4 *)(param_4 + 0x38),param_4[0x3c],param_6,param_7,1);
    if (local_24 < 0) {
      local_24 = -1;
      make_postar(this,(CUser *)param_3,param_4,(char *)0x0,0);
    }
    else {
      local_18 = Inven_Item::GetItemSpace(param_4);
      std::make_pair<int&,int>(local_20,&local_24);
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                (param_1,(pair *)local_20);
    }
  }
  return local_24;
}
```

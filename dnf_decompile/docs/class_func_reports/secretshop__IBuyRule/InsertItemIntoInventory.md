# InsertItemIntoInventory

`_ZN10secretshop8IBuyRule23InsertItemIntoInventoryEP5CUseriiR10Inven_Item`

`secretshop::IBuyRule::InsertItemIntoInventory(CUser*, int, int, Inven_Item&)`

| 类 | 地址 |
|---|---|
| `secretshop::IBuyRule` | `0x085fb6c8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085fb6c8  _ZN10secretshop8IBuyRule23InsertItemIntoInventoryEP5CUseriiR10Inven_Item
#           secretshop::IBuyRule::InsertItemIntoInventory(CUser*, int, int, Inven_Item&)
# range [0x085fb6c8, 0x085fb7e3]
085fb6c8 +0x000:  push   %ebp
085fb6c9 +0x001:  mov    %esp,%ebp
085fb6cb +0x003:  sub    $0x68,%esp
085fb6ce +0x006:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085fb6d3 +0x00b:  mov    0x10(%ebp),%edx
085fb6d6 +0x00e:  mov    %edx,0x4(%esp)
085fb6da +0x012:  mov    %eax,(%esp)
085fb6dd +0x015:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
085fb6e2 +0x01a:  mov    %eax,-0x10(%ebp)
085fb6e5 +0x01d:  cmpl   $0x0,-0x10(%ebp)
085fb6e9 +0x021:  jne    085fb6f5 <+0x2d>
085fb6eb +0x023:  mov    $0xffffffff,%eax
085fb6f0 +0x028:  jmp    085fb7e2 <+0x11a>
085fb6f5 +0x02d:  mov    -0x10(%ebp),%eax
085fb6f8 +0x030:  mov    (%eax),%eax
085fb6fa +0x032:  add    $0x8,%eax
085fb6fd +0x035:  mov    (%eax),%edx
085fb6ff +0x037:  mov    0x18(%ebp),%eax
085fb702 +0x03a:  mov    %eax,0x4(%esp)
085fb706 +0x03e:  mov    -0x10(%ebp),%eax
085fb709 +0x041:  mov    %eax,(%esp)
085fb70c +0x044:  call   *%edx
085fb70e +0x046:  mov    0x10(%ebp),%edx
085fb711 +0x049:  mov    0x18(%ebp),%eax
085fb714 +0x04c:  mov    %edx,0x2(%eax)
085fb717 +0x04f:  mov    -0x10(%ebp),%eax
085fb71a +0x052:  mov    %eax,(%esp)
085fb71d +0x055:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
085fb722 +0x05a:  test   %al,%al
085fb724 +0x05c:  je     085fb72f <+0x67>
085fb726 +0x05e:  mov    0x18(%ebp),%eax
085fb729 +0x061:  mov    0x14(%ebp),%edx
085fb72c +0x064:  mov    %edx,0x7(%eax)
085fb72f +0x067:  mov    0xc(%ebp),%eax
085fb732 +0x06a:  mov    %eax,(%esp)
085fb735 +0x06d:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
085fb73a +0x072:  mov    %eax,%edx
085fb73c +0x074:  movl   $0x0,0x4c(%esp)
085fb744 +0x07c:  movl   $0x1,0x48(%esp)
085fb74c +0x084:  movl   $0x2c,0x44(%esp)
085fb754 +0x08c:  mov    0x18(%ebp),%eax
085fb757 +0x08f:  mov    (%eax),%ecx
085fb759 +0x091:  mov    %ecx,0x4(%esp)
085fb75d +0x095:  mov    0x4(%eax),%ecx
085fb760 +0x098:  mov    %ecx,0x8(%esp)
085fb764 +0x09c:  mov    0x8(%eax),%ecx
085fb767 +0x09f:  mov    %ecx,0xc(%esp)
085fb76b +0x0a3:  mov    0xc(%eax),%ecx
085fb76e +0x0a6:  mov    %ecx,0x10(%esp)
085fb772 +0x0aa:  mov    0x10(%eax),%ecx
085fb775 +0x0ad:  mov    %ecx,0x14(%esp)
085fb779 +0x0b1:  mov    0x14(%eax),%ecx
085fb77c +0x0b4:  mov    %ecx,0x18(%esp)
085fb780 +0x0b8:  mov    0x18(%eax),%ecx
085fb783 +0x0bb:  mov    %ecx,0x1c(%esp)
085fb787 +0x0bf:  mov    0x1c(%eax),%ecx
085fb78a +0x0c2:  mov    %ecx,0x20(%esp)
085fb78e +0x0c6:  mov    0x20(%eax),%ecx
085fb791 +0x0c9:  mov    %ecx,0x24(%esp)
085fb795 +0x0cd:  mov    0x24(%eax),%ecx
085fb798 +0x0d0:  mov    %ecx,0x28(%esp)
085fb79c +0x0d4:  mov    0x28(%eax),%ecx
085fb79f +0x0d7:  mov    %ecx,0x2c(%esp)
085fb7a3 +0x0db:  mov    0x2c(%eax),%ecx
085fb7a6 +0x0de:  mov    %ecx,0x30(%esp)
085fb7aa +0x0e2:  mov    0x30(%eax),%ecx
085fb7ad +0x0e5:  mov    %ecx,0x34(%esp)
085fb7b1 +0x0e9:  mov    0x34(%eax),%ecx
085fb7b4 +0x0ec:  mov    %ecx,0x38(%esp)
085fb7b8 +0x0f0:  mov    0x38(%eax),%ecx
085fb7bb +0x0f3:  mov    %ecx,0x3c(%esp)
085fb7bf +0x0f7:  movzbl 0x3c(%eax),%eax
085fb7c3 +0x0fb:  mov    %al,0x40(%esp)
085fb7c7 +0x0ff:  mov    %edx,(%esp)
085fb7ca +0x102:  call   08502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoInventory(Inven_Item, eItemAddReason, bool, bool)
085fb7cf +0x107:  mov    %eax,-0xc(%ebp)
085fb7d2 +0x10a:  cmpl   $0x0,-0xc(%ebp)
085fb7d6 +0x10e:  jns    085fb7df <+0x117>
085fb7d8 +0x110:  mov    $0xffffffff,%eax
085fb7dd +0x115:  jmp    085fb7e2 <+0x11a>
085fb7df +0x117:  mov    -0xc(%ebp),%eax
085fb7e2 +0x11a:  leave
085fb7e3 +0x11b:  ret
```

## 反编译 C

```c
// secretshop::IBuyRule::InsertItemIntoInventory @ 0x85fb6c8

/* secretshop::IBuyRule::InsertItemIntoInventory(CUser*, int, int, Inven_Item&) */

int __thiscall
secretshop::IBuyRule::InsertItemIntoInventory
          (IBuyRule *this,CUser *param_1,int param_2,int param_3,Inven_Item *param_4)

{
  char cVar1;
  CDataManager *this_00;
  CItem *this_01;
  int iVar2;
  undefined4 uVar3;
  
  this_00 = (CDataManager *)G_CDataManager();
  this_01 = (CItem *)CDataManager::find_item(this_00,param_2);
  if (this_01 == (CItem *)0x0) {
    iVar2 = -1;
  }
  else {
    (**(code **)(*(int *)this_01 + 8))(this_01,param_4);
    *(int *)(param_4 + 2) = param_2;
    cVar1 = CItem::is_stackable(this_01);
    if (cVar1 != '\0') {
      *(int *)(param_4 + 7) = param_3;
    }
    uVar3 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    iVar2 = CInventory::insertItemIntoInventory
                      (uVar3,*(undefined4 *)param_4,*(undefined4 *)(param_4 + 4),
                       *(undefined4 *)(param_4 + 8),*(undefined4 *)(param_4 + 0xc),
                       *(undefined4 *)(param_4 + 0x10),*(undefined4 *)(param_4 + 0x14),
                       *(undefined4 *)(param_4 + 0x18),*(undefined4 *)(param_4 + 0x1c),
                       *(undefined4 *)(param_4 + 0x20),*(undefined4 *)(param_4 + 0x24),
                       *(undefined4 *)(param_4 + 0x28),*(undefined4 *)(param_4 + 0x2c),
                       *(undefined4 *)(param_4 + 0x30),*(undefined4 *)(param_4 + 0x34),
                       *(undefined4 *)(param_4 + 0x38),param_4[0x3c],0x2c,1,0);
    if (iVar2 < 0) {
      iVar2 = -1;
    }
  }
  return iVar2;
}
```

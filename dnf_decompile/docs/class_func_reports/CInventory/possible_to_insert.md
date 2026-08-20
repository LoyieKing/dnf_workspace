# possible_to_insert

`_ZNK10CInventory18possible_to_insertEi`

`CInventory::possible_to_insert(int) const`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x0850562a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0850562a  _ZNK10CInventory18possible_to_insertEi
#           CInventory::possible_to_insert(int) const
# range [0x0850562a, 0x085056c9]
0850562a +0x00:  push   %ebp
0850562b +0x01:  mov    %esp,%ebp
0850562d +0x03:  sub    $0x28,%esp
08505630 +0x06:  mov    0xc(%ebp),%eax
08505633 +0x09:  mov    %eax,0x4(%esp)
08505637 +0x0d:  mov    0x8(%ebp),%eax
0850563a +0x10:  mov    %eax,(%esp)
0850563d +0x13:  call   085018d2 <_ZNK10CInventory11GetItemTypeEi>  ; CInventory::GetItemType(int) const
08505642 +0x18:  mov    %eax,-0x10(%ebp)
08505645 +0x1b:  cmpl   $0x0,-0x10(%ebp)
08505649 +0x1f:  jne    08505652 <+0x28>
0850564b +0x21:  mov    $0x0,%eax
08505650 +0x26:  jmp    085056c8 <+0x9e>
08505652 +0x28:  movl   $0x1,0x8(%esp)
0850565a +0x30:  mov    -0x10(%ebp),%eax
0850565d +0x33:  mov    %eax,0x4(%esp)
08505661 +0x37:  mov    0x8(%ebp),%eax
08505664 +0x3a:  mov    %eax,(%esp)
08505667 +0x3d:  call   08504f64 <_ZNK10CInventory17check_empty_countEN10Inven_Item9ITEM_TYPEEi>  ; CInventory::check_empty_count(Inven_Item::ITEM_TYPE, int) const
0850566c +0x42:  test   %al,%al
0850566e +0x44:  je     08505677 <+0x4d>
08505670 +0x46:  mov    $0x1,%eax
08505675 +0x4b:  jmp    085056c8 <+0x9e>
08505677 +0x4d:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0850567c +0x52:  mov    0xc(%ebp),%edx
0850567f +0x55:  mov    %edx,0x4(%esp)
08505683 +0x59:  mov    %eax,(%esp)
08505686 +0x5c:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0850568b +0x61:  mov    %eax,-0xc(%ebp)
0850568e +0x64:  cmpl   $0x0,-0xc(%ebp)
08505692 +0x68:  jne    0850569b <+0x71>
08505694 +0x6a:  mov    $0x0,%eax
08505699 +0x6f:  jmp    085056c8 <+0x9e>
0850569b +0x71:  mov    -0xc(%ebp),%eax
0850569e +0x74:  mov    %eax,(%esp)
085056a1 +0x77:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
085056a6 +0x7c:  test   %al,%al
085056a8 +0x7e:  je     085056c3 <+0x99>
085056aa +0x80:  mov    0xc(%ebp),%eax
085056ad +0x83:  mov    %eax,0x4(%esp)
085056b1 +0x87:  mov    0x8(%ebp),%eax
085056b4 +0x8a:  mov    %eax,(%esp)
085056b7 +0x8d:  call   08505172 <_ZNK10CInventory16check_item_existEi>  ; CInventory::check_item_exist(int) const
085056bc +0x92:  not    %eax
085056be +0x94:  shr    $0x1f,%eax
085056c1 +0x97:  jmp    085056c8 <+0x9e>
085056c3 +0x99:  mov    $0x0,%eax
085056c8 +0x9e:  leave
085056c9 +0x9f:  ret
```

## 反编译 C

```c
// CInventory::possible_to_insert @ 0x850562a

/* CInventory::possible_to_insert(int) const */

uint __thiscall CInventory::possible_to_insert(CInventory *this,int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  CDataManager *this_00;
  CItem *this_01;
  
  iVar2 = GetItemType(this,param_1);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    cVar1 = check_empty_count(this,iVar2,1);
    if (cVar1 == '\0') {
      this_00 = (CDataManager *)G_CDataManager();
      this_01 = (CItem *)CDataManager::find_item(this_00,param_1);
      if (this_01 == (CItem *)0x0) {
        uVar3 = 0;
      }
      else {
        cVar1 = CItem::is_stackable(this_01);
        if (cVar1 == '\0') {
          uVar3 = 0;
        }
        else {
          uVar3 = check_item_exist(this,param_1);
          uVar3 = ~uVar3 >> 0x1f;
        }
      }
    }
    else {
      uVar3 = 1;
    }
  }
  return uVar3;
}
```

# GetRemainCapacity

`_ZNK10CInventory17GetRemainCapacityE10INVEN_TYPEN10Inven_Item9ITEM_TYPEE`

`CInventory::GetRemainCapacity(INVEN_TYPE, Inven_Item::ITEM_TYPE) const`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x084fb67a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084fb67a  _ZNK10CInventory17GetRemainCapacityE10INVEN_TYPEN10Inven_Item9ITEM_TYPEE
#           CInventory::GetRemainCapacity(INVEN_TYPE, Inven_Item::ITEM_TYPE) const
# range [0x084fb67a, 0x084fb823]
084fb67a +0x000:  push   %ebp
084fb67b +0x001:  mov    %esp,%ebp
084fb67d +0x003:  sub    $0x48,%esp
084fb680 +0x006:  movl   $0x0,-0x18(%ebp)
084fb687 +0x00d:  mov    0xc(%ebp),%eax
084fb68a +0x010:  cmp    $0x6,%eax
084fb68d +0x013:  ja     084fb81f <+0x1a5>
084fb693 +0x019:  mov    &data#21f17d39(.rodata)(,%eax,4),%eax
084fb69a +0x020:  jmp    *%eax
084fb69c +0x022:  movl   $0x0,-0x1c(%ebp)
084fb6a3 +0x029:  movl   $0x0,-0x20(%ebp)
084fb6aa +0x030:  lea    -0x20(%ebp),%eax
084fb6ad +0x033:  mov    %eax,0xc(%esp)
084fb6b1 +0x037:  lea    -0x1c(%ebp),%eax
084fb6b4 +0x03a:  mov    %eax,0x8(%esp)
084fb6b8 +0x03e:  mov    0x10(%ebp),%eax
084fb6bb +0x041:  mov    %eax,0x4(%esp)
084fb6bf +0x045:  mov    0x8(%ebp),%eax
084fb6c2 +0x048:  mov    %eax,(%esp)
084fb6c5 +0x04b:  call   08501886 <_ZNK10CInventory11StartEndPosEN10Inven_Item9ITEM_TYPEERiS2_>  ; CInventory::StartEndPos(Inven_Item::ITEM_TYPE, int&, int&) const
084fb6ca +0x050:  mov    0x10(%ebp),%eax
084fb6cd +0x053:  cmp    $0xa,%eax
084fb6d0 +0x056:  ja     084fb71d <+0xa3>
084fb6d2 +0x058:  mov    &data#2177f246(.rodata)(,%eax,4),%eax
084fb6d9 +0x05f:  jmp    *%eax
084fb6db +0x061:  jmp    084fb74e <+0xd4>
084fb6dd +0x063:  jmp    084fb74e <+0xd4>
084fb6df +0x065:  mov    -0x1c(%ebp),%eax
084fb6e2 +0x068:  mov    %eax,-0x14(%ebp)
084fb6e5 +0x06b:  jmp    084fb708 <+0x8e>
084fb6e7 +0x06d:  mov    0x8(%ebp),%eax
084fb6ea +0x070:  mov    0x650(%eax),%edx
084fb6f0 +0x076:  mov    -0x14(%ebp),%eax
084fb6f3 +0x079:  imul   $0x3d,%eax,%eax
084fb6f6 +0x07c:  lea    (%edx,%eax,1),%eax
084fb6f9 +0x07f:  mov    0x2(%eax),%eax
084fb6fc +0x082:  test   %eax,%eax
084fb6fe +0x084:  jne    084fb704 <+0x8a>
084fb700 +0x086:  addl   $0x1,-0x18(%ebp)
084fb704 +0x08a:  addl   $0x1,-0x14(%ebp)
084fb708 +0x08e:  mov    -0x20(%ebp),%eax
084fb70b +0x091:  cmp    %eax,-0x14(%ebp)
084fb70e +0x094:  setle  %al
084fb711 +0x097:  test   %al,%al
084fb713 +0x099:  jne    084fb6e7 <+0x6d>
084fb715 +0x09b:  jmp    084fb74e <+0xd4>
084fb717 +0x09d:  jmp    084fb74e <+0xd4>
084fb719 +0x09f:  jmp    084fb74e <+0xd4>
084fb71b +0x0a1:  jmp    084fb74e <+0xd4>
084fb71d +0x0a3:  movl   $"Invalid Item Type",0x10(%esp)
084fb725 +0x0ab:  movl   $0x493,0xc(%esp)
084fb72d +0x0b3:  movl   $&_ZZNK10CInventory17GetRemainCapacityE10INVEN_TYPEN10Inven_Item9ITEM_TYPEEE19__PRETTY_FUNCTION__,0x8(%esp)
084fb735 +0x0bb:  movl   $"inventory.cpp",0x4(%esp)
084fb73d +0x0c3:  movl   $0x1,(%esp)
084fb744 +0x0ca:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084fb749 +0x0cf:  jmp    084fb81f <+0x1a5>
084fb74e +0x0d4:  jmp    084fb81f <+0x1a5>
084fb753 +0x0d9:  movl   $0x0,-0x10(%ebp)
084fb75a +0x0e0:  jmp    084fb77d <+0x103>
084fb75c +0x0e2:  mov    0x8(%ebp),%eax
084fb75f +0x0e5:  mov    0x654(%eax),%edx
084fb765 +0x0eb:  mov    -0x10(%ebp),%eax
084fb768 +0x0ee:  imul   $0x3d,%eax,%eax
084fb76b +0x0f1:  lea    (%edx,%eax,1),%eax
084fb76e +0x0f4:  mov    0x2(%eax),%eax
084fb771 +0x0f7:  test   %eax,%eax
084fb773 +0x0f9:  jne    084fb779 <+0xff>
084fb775 +0x0fb:  addl   $0x1,-0x18(%ebp)
084fb779 +0x0ff:  addl   $0x1,-0x10(%ebp)
084fb77d +0x103:  cmpl   $0x68,-0x10(%ebp)
084fb781 +0x107:  setle  %al
084fb784 +0x10a:  test   %al,%al
084fb786 +0x10c:  jne    084fb75c <+0xe2>
084fb788 +0x10e:  jmp    084fb81f <+0x1a5>
084fb78d +0x113:  movl   $0x0,-0x24(%ebp)
084fb794 +0x11a:  movl   $0x0,-0x28(%ebp)
084fb79b +0x121:  lea    -0x28(%ebp),%eax
084fb79e +0x124:  mov    %eax,0xc(%esp)
084fb7a2 +0x128:  lea    -0x24(%ebp),%eax
084fb7a5 +0x12b:  mov    %eax,0x8(%esp)
084fb7a9 +0x12f:  mov    0x10(%ebp),%eax
084fb7ac +0x132:  mov    %eax,0x4(%esp)
084fb7b0 +0x136:  mov    0x8(%ebp),%eax
084fb7b3 +0x139:  mov    %eax,(%esp)
084fb7b6 +0x13c:  call   08501886 <_ZNK10CInventory11StartEndPosEN10Inven_Item9ITEM_TYPEERiS2_>  ; CInventory::StartEndPos(Inven_Item::ITEM_TYPE, int&, int&) const
084fb7bb +0x141:  mov    -0x24(%ebp),%eax
084fb7be +0x144:  mov    %eax,-0xc(%ebp)
084fb7c1 +0x147:  jmp    084fb7e4 <+0x16a>
084fb7c3 +0x149:  mov    0x8(%ebp),%eax
084fb7c6 +0x14c:  mov    0x6e4(%eax),%edx
084fb7cc +0x152:  mov    -0xc(%ebp),%eax
084fb7cf +0x155:  imul   $0x3d,%eax,%eax
084fb7d2 +0x158:  lea    (%edx,%eax,1),%eax
084fb7d5 +0x15b:  mov    0x2(%eax),%eax
084fb7d8 +0x15e:  test   %eax,%eax
084fb7da +0x160:  jne    084fb7e0 <+0x166>
084fb7dc +0x162:  addl   $0x1,-0x18(%ebp)
084fb7e0 +0x166:  addl   $0x1,-0xc(%ebp)
084fb7e4 +0x16a:  mov    -0x28(%ebp),%eax
084fb7e7 +0x16d:  cmp    %eax,-0xc(%ebp)
084fb7ea +0x170:  setle  %al
084fb7ed +0x173:  test   %al,%al
084fb7ef +0x175:  jne    084fb7c3 <+0x149>
084fb7f1 +0x177:  jmp    084fb81f <+0x1a5>
084fb7f3 +0x179:  movl   $"Invalid inventory type",0x10(%esp)
084fb7fb +0x181:  movl   $0x4c3,0xc(%esp)
084fb803 +0x189:  movl   $&_ZZNK10CInventory17GetRemainCapacityE10INVEN_TYPEN10Inven_Item9ITEM_TYPEEE19__PRETTY_FUNCTION__,0x8(%esp)
084fb80b +0x191:  movl   $"inventory.cpp",0x4(%esp)
084fb813 +0x199:  movl   $0x1,(%esp)
084fb81a +0x1a0:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084fb81f +0x1a5:  mov    -0x18(%ebp),%eax
084fb822 +0x1a8:  leave
084fb823 +0x1a9:  ret
```

## 反编译 C

```c
// CInventory::GetRemainCapacity @ 0x84fb67a

/* CInventory::GetRemainCapacity(INVEN_TYPE, Inven_Item::ITEM_TYPE) const */

int __thiscall CInventory::GetRemainCapacity(CInventory *this,undefined4 param_2,undefined4 param_3)

{
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_1c = 0;
  switch(param_2) {
  case 0:
  case 6:
    LogManager::logFormat
              (1,"inventory.cpp",
               "int CInventory::GetRemainCapacity(INVEN_TYPE, Inven_Item::ITEM_TYPE) const",0x4c3,
               "Invalid inventory type");
    break;
  case 1:
    local_20 = 0;
    local_24 = 0;
    StartEndPos(this,param_3,&local_20,&local_24);
    switch(param_3) {
    case 0:
      break;
    case 1:
      break;
    case 2:
      for (local_18 = local_20; local_18 <= local_24; local_18 = local_18 + 1) {
        if (*(int *)(*(int *)(this + 0x650) + local_18 * 0x3d + 2) == 0) {
          local_1c = local_1c + 1;
        }
      }
      break;
    case 3:
      break;
    case 4:
      break;
    default:
      LogManager::logFormat
                (1,"inventory.cpp",
                 "int CInventory::GetRemainCapacity(INVEN_TYPE, Inven_Item::ITEM_TYPE) const",0x493,
                 "Invalid Item Type");
      break;
    case 10:
    }
    break;
  case 2:
    for (local_14 = 0; local_14 < 0x69; local_14 = local_14 + 1) {
      if (*(int *)(*(int *)(this + 0x654) + local_14 * 0x3d + 2) == 0) {
        local_1c = local_1c + 1;
      }
    }
    break;
  case 3:
    local_28 = 0;
    local_2c = 0;
    StartEndPos(this,param_3,&local_28,&local_2c);
    for (local_10 = local_28; local_10 <= local_2c; local_10 = local_10 + 1) {
      if (*(int *)(*(int *)(this + 0x6e4) + local_10 * 0x3d + 2) == 0) {
        local_1c = local_1c + 1;
      }
    }
  }
  return local_1c;
}
```

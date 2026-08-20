# GetItemType

`_ZNK10CInventory11GetItemTypeEi`

`CInventory::GetItemType(int) const`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x085018d2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085018d2  _ZNK10CInventory11GetItemTypeEi
#           CInventory::GetItemType(int) const
# range [0x085018d2, 0x08501a78]
085018d2 +0x000:  push   %ebp
085018d3 +0x001:  mov    %esp,%ebp
085018d5 +0x003:  sub    $0x38,%esp
085018d8 +0x006:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085018dd +0x00b:  mov    0xc(%ebp),%edx
085018e0 +0x00e:  mov    %edx,0x4(%esp)
085018e4 +0x012:  mov    %eax,(%esp)
085018e7 +0x015:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
085018ec +0x01a:  mov    %eax,-0xc(%ebp)
085018ef +0x01d:  cmpl   $0x0,-0xc(%ebp)
085018f3 +0x021:  jne    08501938 <+0x66>
085018f5 +0x023:  cmpl   $0x0,0xc(%ebp)
085018f9 +0x027:  je     0850192e <+0x5c>
085018fb +0x029:  mov    0xc(%ebp),%eax
085018fe +0x02c:  mov    %eax,0x14(%esp)
08501902 +0x030:  movl   $"No Item %d",0x10(%esp)
0850190a +0x038:  movl   $0x13c2,0xc(%esp)
08501912 +0x040:  movl   $&_ZZNK10CInventory11GetItemTypeEiE19__PRETTY_FUNCTION__,0x8(%esp)
0850191a +0x048:  movl   $"inventory.cpp",0x4(%esp)
08501922 +0x050:  movl   $0x1,(%esp)
08501929 +0x057:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0850192e +0x05c:  mov    $0x0,%eax
08501933 +0x061:  jmp    08501a77 <+0x1a5>
08501938 +0x066:  mov    -0xc(%ebp),%eax
0850193b +0x069:  mov    (%eax),%eax
0850193d +0x06b:  add    $0x10,%eax
08501940 +0x06e:  mov    (%eax),%edx
08501942 +0x070:  mov    -0xc(%ebp),%eax
08501945 +0x073:  mov    %eax,(%esp)
08501948 +0x076:  call   *%edx
0850194a +0x078:  test   %al,%al
0850194c +0x07a:  je     08501958 <+0x86>
0850194e +0x07c:  mov    $0x8,%eax
08501953 +0x081:  jmp    08501a77 <+0x1a5>
08501958 +0x086:  mov    -0xc(%ebp),%eax
0850195b +0x089:  mov    %eax,(%esp)
0850195e +0x08c:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
08501963 +0x091:  xor    $0x1,%eax
08501966 +0x094:  test   %al,%al
08501968 +0x096:  je     085019c0 <+0xee>
0850196a +0x098:  mov    -0xc(%ebp),%eax
0850196d +0x09b:  mov    (%eax),%eax
0850196f +0x09d:  add    $0xc,%eax
08501972 +0x0a0:  mov    (%eax),%edx
08501974 +0x0a2:  mov    -0xc(%ebp),%eax
08501977 +0x0a5:  mov    %eax,(%esp)
0850197a +0x0a8:  call   *%edx
0850197c +0x0aa:  cmp    $0x16,%eax
0850197f +0x0ad:  sete   %al
08501982 +0x0b0:  test   %al,%al
08501984 +0x0b2:  je     08501990 <+0xbe>
08501986 +0x0b4:  mov    $0x5,%eax
0850198b +0x0b9:  jmp    08501a77 <+0x1a5>
08501990 +0x0be:  mov    -0xc(%ebp),%eax
08501993 +0x0c1:  mov    (%eax),%eax
08501995 +0x0c3:  add    $0xc,%eax
08501998 +0x0c6:  mov    (%eax),%edx
0850199a +0x0c8:  mov    -0xc(%ebp),%eax
0850199d +0x0cb:  mov    %eax,(%esp)
085019a0 +0x0ce:  call   *%edx
085019a2 +0x0d0:  cmp    $0x17,%eax
085019a5 +0x0d3:  sete   %al
085019a8 +0x0d6:  test   %al,%al
085019aa +0x0d8:  je     085019b6 <+0xe4>
085019ac +0x0da:  mov    $0x6,%eax
085019b1 +0x0df:  jmp    08501a77 <+0x1a5>
085019b6 +0x0e4:  mov    $0x1,%eax
085019bb +0x0e9:  jmp    08501a77 <+0x1a5>
085019c0 +0x0ee:  mov    -0xc(%ebp),%eax
085019c3 +0x0f1:  mov    (%eax),%eax
085019c5 +0x0f3:  add    $0xc,%eax
085019c8 +0x0f6:  mov    (%eax),%edx
085019ca +0x0f8:  mov    -0xc(%ebp),%eax
085019cd +0x0fb:  mov    %eax,(%esp)
085019d0 +0x0fe:  call   *%edx
085019d2 +0x100:  cmp    $0x9,%eax
085019d5 +0x103:  sete   %al
085019d8 +0x106:  test   %al,%al
085019da +0x108:  je     085019e6 <+0x114>
085019dc +0x10a:  mov    $0x7,%eax
085019e1 +0x10f:  jmp    08501a77 <+0x1a5>
085019e6 +0x114:  mov    -0xc(%ebp),%eax
085019e9 +0x117:  mov    (%eax),%eax
085019eb +0x119:  add    $0xc,%eax
085019ee +0x11c:  mov    (%eax),%edx
085019f0 +0x11e:  mov    -0xc(%ebp),%eax
085019f3 +0x121:  mov    %eax,(%esp)
085019f6 +0x124:  call   *%edx
085019f8 +0x126:  cmp    $0x1,%eax
085019fb +0x129:  sete   %al
085019fe +0x12c:  test   %al,%al
08501a00 +0x12e:  je     08501a09 <+0x137>
08501a02 +0x130:  mov    $0x3,%eax
08501a07 +0x135:  jmp    08501a77 <+0x1a5>
08501a09 +0x137:  mov    -0xc(%ebp),%eax
08501a0c +0x13a:  mov    (%eax),%eax
08501a0e +0x13c:  add    $0xc,%eax
08501a11 +0x13f:  mov    (%eax),%edx
08501a13 +0x141:  mov    -0xc(%ebp),%eax
08501a16 +0x144:  mov    %eax,(%esp)
08501a19 +0x147:  call   *%edx
08501a1b +0x149:  cmp    $0x2,%eax
08501a1e +0x14c:  sete   %al
08501a21 +0x14f:  test   %al,%al
08501a23 +0x151:  je     08501a2c <+0x15a>
08501a25 +0x153:  mov    $0xa,%eax
08501a2a +0x158:  jmp    08501a77 <+0x1a5>
08501a2c +0x15a:  mov    -0xc(%ebp),%eax
08501a2f +0x15d:  mov    (%eax),%eax
08501a31 +0x15f:  add    $0xc,%eax
08501a34 +0x162:  mov    (%eax),%edx
08501a36 +0x164:  mov    -0xc(%ebp),%eax
08501a39 +0x167:  mov    %eax,(%esp)
08501a3c +0x16a:  call   *%edx
08501a3e +0x16c:  cmp    $0x8,%eax
08501a41 +0x16f:  sete   %al
08501a44 +0x172:  test   %al,%al
08501a46 +0x174:  je     08501a4f <+0x17d>
08501a48 +0x176:  mov    $0x4,%eax
08501a4d +0x17b:  jmp    08501a77 <+0x1a5>
08501a4f +0x17d:  mov    -0xc(%ebp),%eax
08501a52 +0x180:  mov    (%eax),%eax
08501a54 +0x182:  add    $0xc,%eax
08501a57 +0x185:  mov    (%eax),%edx
08501a59 +0x187:  mov    -0xc(%ebp),%eax
08501a5c +0x18a:  mov    %eax,(%esp)
08501a5f +0x18d:  call   *%edx
08501a61 +0x18f:  cmp    $0x14,%eax
08501a64 +0x192:  sete   %al
08501a67 +0x195:  test   %al,%al
08501a69 +0x197:  je     08501a72 <+0x1a0>
08501a6b +0x199:  mov    $0x9,%eax
08501a70 +0x19e:  jmp    08501a77 <+0x1a5>
08501a72 +0x1a0:  mov    $0x2,%eax
08501a77 +0x1a5:  leave
08501a78 +0x1a6:  ret
```

## 反编译 C

```c
// CInventory::GetItemType @ 0x85018d2

/* CInventory::GetItemType(int) const */

undefined4 __thiscall CInventory::GetItemType(CInventory *this,int param_1)

{
  char cVar1;
  CDataManager *this_00;
  CItem *this_01;
  undefined4 uVar2;
  int iVar3;
  
  this_00 = (CDataManager *)G_CDataManager();
  this_01 = (CItem *)CDataManager::find_item(this_00,param_1);
  if (this_01 == (CItem *)0x0) {
    if (param_1 != 0) {
      LogManager::logFormat
                (1,"inventory.cpp","Inven_Item::ITEM_TYPE CInventory::GetItemType(int) const",0x13c2
                 ,"No Item %d",param_1);
    }
    uVar2 = 0;
  }
  else {
    cVar1 = (**(code **)(*(int *)this_01 + 0x10))(this_01);
    if (cVar1 == '\0') {
      cVar1 = CItem::is_stackable(this_01);
      if (cVar1 == '\x01') {
        iVar3 = (**(code **)(*(int *)this_01 + 0xc))(this_01);
        if (iVar3 == 9) {
          uVar2 = 7;
        }
        else {
          iVar3 = (**(code **)(*(int *)this_01 + 0xc))(this_01);
          if (iVar3 == 1) {
            uVar2 = 3;
          }
          else {
            iVar3 = (**(code **)(*(int *)this_01 + 0xc))(this_01);
            if (iVar3 == 2) {
              uVar2 = 10;
            }
            else {
              iVar3 = (**(code **)(*(int *)this_01 + 0xc))(this_01);
              if (iVar3 == 8) {
                uVar2 = 4;
              }
              else {
                iVar3 = (**(code **)(*(int *)this_01 + 0xc))(this_01);
                if (iVar3 == 0x14) {
                  uVar2 = 9;
                }
                else {
                  uVar2 = 2;
                }
              }
            }
          }
        }
      }
      else {
        iVar3 = (**(code **)(*(int *)this_01 + 0xc))(this_01);
        if (iVar3 == 0x16) {
          uVar2 = 5;
        }
        else {
          iVar3 = (**(code **)(*(int *)this_01 + 0xc))(this_01);
          if (iVar3 == 0x17) {
            uVar2 = 6;
          }
          else {
            uVar2 = 1;
          }
        }
      }
    }
    else {
      uVar2 = 8;
    }
  }
  return uVar2;
}
```

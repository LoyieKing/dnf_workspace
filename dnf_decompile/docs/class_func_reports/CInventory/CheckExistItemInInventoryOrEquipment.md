# CheckExistItemInInventoryOrEquipment

`_ZNK10CInventory36CheckExistItemInInventoryOrEquipmentEiRiRb`

`CInventory::CheckExistItemInInventoryOrEquipment(int, int&, bool&) const`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x085052be` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085052be  _ZNK10CInventory36CheckExistItemInInventoryOrEquipmentEiRiRb
#           CInventory::CheckExistItemInInventoryOrEquipment(int, int&, bool&) const
# range [0x085052be, 0x08505429]
085052be +0x000:  push   %ebp
085052bf +0x001:  mov    %esp,%ebp
085052c1 +0x003:  sub    $0x48,%esp
085052c4 +0x006:  mov    0x14(%ebp),%eax
085052c7 +0x009:  movb   $0x0,(%eax)
085052ca +0x00c:  movl   $0x3,-0x14(%ebp)
085052d1 +0x013:  jmp    08505305 <+0x47>
085052d3 +0x015:  mov    0x8(%ebp),%eax
085052d6 +0x018:  mov    0x650(%eax),%edx
085052dc +0x01e:  mov    -0x14(%ebp),%eax
085052df +0x021:  imul   $0x3d,%eax,%eax
085052e2 +0x024:  lea    (%edx,%eax,1),%eax
085052e5 +0x027:  mov    0x2(%eax),%edx
085052e8 +0x02a:  mov    0xc(%ebp),%eax
085052eb +0x02d:  cmp    %eax,%edx
085052ed +0x02f:  jne    08505301 <+0x43>
085052ef +0x031:  mov    0x10(%ebp),%eax
085052f2 +0x034:  mov    -0x14(%ebp),%edx
085052f5 +0x037:  mov    %edx,(%eax)
085052f7 +0x039:  mov    $0x1,%eax
085052fc +0x03e:  jmp    08505428 <+0x16a>
08505301 +0x043:  addl   $0x1,-0x14(%ebp)
08505305 +0x047:  cmpl   $0x8,-0x14(%ebp)
08505309 +0x04b:  setle  %al
0850530c +0x04e:  test   %al,%al
0850530e +0x050:  jne    085052d3 <+0x15>
08505310 +0x052:  mov    0xc(%ebp),%eax
08505313 +0x055:  mov    %eax,0x4(%esp)
08505317 +0x059:  mov    0x8(%ebp),%eax
0850531a +0x05c:  mov    %eax,(%esp)
0850531d +0x05f:  call   085018d2 <_ZNK10CInventory11GetItemTypeEi>  ; CInventory::GetItemType(int) const
08505322 +0x064:  mov    %eax,-0x18(%ebp)
08505325 +0x067:  cmpl   $0x0,-0x18(%ebp)
08505329 +0x06b:  jne    08505368 <+0xaa>
0850532b +0x06d:  mov    -0x18(%ebp),%eax
0850532e +0x070:  mov    %eax,0x14(%esp)
08505332 +0x074:  movl   $"Unknown Type %d",0x10(%esp)
0850533a +0x07c:  movl   $0x1ace,0xc(%esp)
08505342 +0x084:  movl   $&_ZZNK10CInventory36CheckExistItemInInventoryOrEquipmentEiRiRbE19__PRETTY_FUNCTION__,0x8(%esp)
0850534a +0x08c:  movl   $"inventory.cpp",0x4(%esp)
08505352 +0x094:  movl   $0x1,(%esp)
08505359 +0x09b:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0850535e +0x0a0:  mov    $0x0,%eax
08505363 +0x0a5:  jmp    08505428 <+0x16a>
08505368 +0x0aa:  movl   $0x0,-0x10(%ebp)
0850536f +0x0b1:  jmp    085053a6 <+0xe8>
08505371 +0x0b3:  mov    -0x10(%ebp),%eax
08505374 +0x0b6:  mov    0x8(%ebp),%edx
08505377 +0x0b9:  imul   $0x3d,%eax,%eax
0850537a +0x0bc:  lea    (%edx,%eax,1),%eax
0850537d +0x0bf:  add    $0x10,%eax
08505380 +0x0c2:  mov    0xe(%eax),%edx
08505383 +0x0c5:  mov    0xc(%ebp),%eax
08505386 +0x0c8:  cmp    %eax,%edx
08505388 +0x0ca:  jne    085053a2 <+0xe4>
0850538a +0x0cc:  mov    0x14(%ebp),%eax
0850538d +0x0cf:  movb   $0x1,(%eax)
08505390 +0x0d2:  mov    0x10(%ebp),%eax
08505393 +0x0d5:  mov    -0x10(%ebp),%edx
08505396 +0x0d8:  mov    %edx,(%eax)
08505398 +0x0da:  mov    $0x1,%eax
0850539d +0x0df:  jmp    08505428 <+0x16a>
085053a2 +0x0e4:  addl   $0x1,-0x10(%ebp)
085053a6 +0x0e8:  cmpl   $0x19,-0x10(%ebp)
085053aa +0x0ec:  setle  %al
085053ad +0x0ef:  test   %al,%al
085053af +0x0f1:  jne    08505371 <+0xb3>
085053b1 +0x0f3:  movl   $0x0,-0x1c(%ebp)
085053b8 +0x0fa:  movl   $0x0,-0x20(%ebp)
085053bf +0x101:  lea    -0x20(%ebp),%eax
085053c2 +0x104:  mov    %eax,0xc(%esp)
085053c6 +0x108:  lea    -0x1c(%ebp),%eax
085053c9 +0x10b:  mov    %eax,0x8(%esp)
085053cd +0x10f:  mov    -0x18(%ebp),%eax
085053d0 +0x112:  mov    %eax,0x4(%esp)
085053d4 +0x116:  mov    0x8(%ebp),%eax
085053d7 +0x119:  mov    %eax,(%esp)
085053da +0x11c:  call   08501886 <_ZNK10CInventory11StartEndPosEN10Inven_Item9ITEM_TYPEERiS2_>  ; CInventory::StartEndPos(Inven_Item::ITEM_TYPE, int&, int&) const
085053df +0x121:  mov    -0x1c(%ebp),%eax
085053e2 +0x124:  mov    %eax,-0xc(%ebp)
085053e5 +0x127:  jmp    08505416 <+0x158>
085053e7 +0x129:  mov    0x8(%ebp),%eax
085053ea +0x12c:  mov    0x650(%eax),%edx
085053f0 +0x132:  mov    -0xc(%ebp),%eax
085053f3 +0x135:  imul   $0x3d,%eax,%eax
085053f6 +0x138:  lea    (%edx,%eax,1),%eax
085053f9 +0x13b:  mov    0x2(%eax),%edx
085053fc +0x13e:  mov    0xc(%ebp),%eax
085053ff +0x141:  cmp    %eax,%edx
08505401 +0x143:  jne    08505412 <+0x154>
08505403 +0x145:  mov    0x10(%ebp),%eax
08505406 +0x148:  mov    -0xc(%ebp),%edx
08505409 +0x14b:  mov    %edx,(%eax)
0850540b +0x14d:  mov    $0x1,%eax
08505410 +0x152:  jmp    08505428 <+0x16a>
08505412 +0x154:  addl   $0x1,-0xc(%ebp)
08505416 +0x158:  mov    -0x20(%ebp),%eax
08505419 +0x15b:  cmp    %eax,-0xc(%ebp)
0850541c +0x15e:  setle  %al
0850541f +0x161:  test   %al,%al
08505421 +0x163:  jne    085053e7 <+0x129>
08505423 +0x165:  mov    $0x0,%eax
08505428 +0x16a:  leave
08505429 +0x16b:  ret
```

## 反编译 C

```c
// CInventory::CheckExistItemInInventoryOrEquipment @ 0x85052be

/* CInventory::CheckExistItemInInventoryOrEquipment(int, int&, bool&) const */

undefined4 __thiscall
CInventory::CheckExistItemInInventoryOrEquipment
          (CInventory *this,int param_1,int *param_2,bool *param_3)

{
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  *param_3 = false;
  for (local_18 = 3; local_18 < 9; local_18 = local_18 + 1) {
    if (*(int *)(*(int *)(this + 0x650) + local_18 * 0x3d + 2) == param_1) {
      *param_2 = local_18;
      return 1;
    }
  }
  local_1c = GetItemType(this,param_1);
  if (local_1c == 0) {
    LogManager::logFormat
              (1,"inventory.cpp",
               "bool CInventory::CheckExistItemInInventoryOrEquipment(int, int&, bool&) const",
               0x1ace,"Unknown Type %d",0);
  }
  else {
    for (local_14 = 0; local_14 < 0x1a; local_14 = local_14 + 1) {
      if (*(int *)(this + local_14 * 0x3d + 0x1e) == param_1) {
        *param_3 = true;
        *param_2 = local_14;
        return 1;
      }
    }
    local_20 = 0;
    local_24 = 0;
    StartEndPos(this,local_1c,&local_20,&local_24);
    for (local_10 = local_20; local_10 <= local_24; local_10 = local_10 + 1) {
      if (*(int *)(*(int *)(this + 0x650) + local_10 * 0x3d + 2) == param_1) {
        *param_2 = local_10;
        return 1;
      }
    }
  }
  return 0;
}
```

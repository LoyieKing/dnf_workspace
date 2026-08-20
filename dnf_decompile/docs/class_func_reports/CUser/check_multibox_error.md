# check_multibox_error

`_ZN5CUser20check_multibox_errorEi`

`CUser::check_multibox_error(int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08675edc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08675edc  _ZN5CUser20check_multibox_errorEi
#           CUser::check_multibox_error(int)
# range [0x08675edc, 0x08675fd1]
08675edc +0x00:  push   %ebp
08675edd +0x01:  mov    %esp,%ebp
08675edf +0x03:  sub    $0x18,%esp
08675ee2 +0x06:  mov    0x8(%ebp),%eax
08675ee5 +0x09:  mov    %eax,(%esp)
08675ee8 +0x0c:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08675eed +0x11:  mov    0xc(%ebp),%edx
08675ef0 +0x14:  mov    %edx,0x8(%esp)
08675ef4 +0x18:  movl   $0x1,0x4(%esp)
08675efc +0x20:  mov    %eax,(%esp)
08675eff +0x23:  call   08504f64 <_ZNK10CInventory17check_empty_countEN10Inven_Item9ITEM_TYPEEi>  ; CInventory::check_empty_count(Inven_Item::ITEM_TYPE, int) const
08675f04 +0x28:  xor    $0x1,%eax
08675f07 +0x2b:  test   %al,%al
08675f09 +0x2d:  jne    08675fb3 <+0xd7>
08675f0f +0x33:  mov    0x8(%ebp),%eax
08675f12 +0x36:  mov    %eax,(%esp)
08675f15 +0x39:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08675f1a +0x3e:  mov    0xc(%ebp),%edx
08675f1d +0x41:  mov    %edx,0x8(%esp)
08675f21 +0x45:  movl   $0x2,0x4(%esp)
08675f29 +0x4d:  mov    %eax,(%esp)
08675f2c +0x50:  call   08504f64 <_ZNK10CInventory17check_empty_countEN10Inven_Item9ITEM_TYPEEi>  ; CInventory::check_empty_count(Inven_Item::ITEM_TYPE, int) const
08675f31 +0x55:  xor    $0x1,%eax
08675f34 +0x58:  test   %al,%al
08675f36 +0x5a:  jne    08675fb3 <+0xd7>
08675f38 +0x5c:  mov    0x8(%ebp),%eax
08675f3b +0x5f:  mov    %eax,(%esp)
08675f3e +0x62:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08675f43 +0x67:  mov    0xc(%ebp),%edx
08675f46 +0x6a:  mov    %edx,0x8(%esp)
08675f4a +0x6e:  movl   $0x3,0x4(%esp)
08675f52 +0x76:  mov    %eax,(%esp)
08675f55 +0x79:  call   08504f64 <_ZNK10CInventory17check_empty_countEN10Inven_Item9ITEM_TYPEEi>  ; CInventory::check_empty_count(Inven_Item::ITEM_TYPE, int) const
08675f5a +0x7e:  xor    $0x1,%eax
08675f5d +0x81:  test   %al,%al
08675f5f +0x83:  jne    08675fb3 <+0xd7>
08675f61 +0x85:  mov    0x8(%ebp),%eax
08675f64 +0x88:  mov    %eax,(%esp)
08675f67 +0x8b:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08675f6c +0x90:  mov    0xc(%ebp),%edx
08675f6f +0x93:  mov    %edx,0x8(%esp)
08675f73 +0x97:  movl   $0xa,0x4(%esp)
08675f7b +0x9f:  mov    %eax,(%esp)
08675f7e +0xa2:  call   08504f64 <_ZNK10CInventory17check_empty_countEN10Inven_Item9ITEM_TYPEEi>  ; CInventory::check_empty_count(Inven_Item::ITEM_TYPE, int) const
08675f83 +0xa7:  xor    $0x1,%eax
08675f86 +0xaa:  test   %al,%al
08675f88 +0xac:  jne    08675fb3 <+0xd7>
08675f8a +0xae:  mov    0x8(%ebp),%eax
08675f8d +0xb1:  mov    %eax,(%esp)
08675f90 +0xb4:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08675f95 +0xb9:  mov    0xc(%ebp),%edx
08675f98 +0xbc:  mov    %edx,0x8(%esp)
08675f9c +0xc0:  movl   $0x5,0x4(%esp)
08675fa4 +0xc8:  mov    %eax,(%esp)
08675fa7 +0xcb:  call   08504f64 <_ZNK10CInventory17check_empty_countEN10Inven_Item9ITEM_TYPEEi>  ; CInventory::check_empty_count(Inven_Item::ITEM_TYPE, int) const
08675fac +0xd0:  xor    $0x1,%eax
08675faf +0xd3:  test   %al,%al
08675fb1 +0xd5:  je     08675fba <+0xde>
08675fb3 +0xd7:  mov    $0x1,%eax
08675fb8 +0xdc:  jmp    08675fbf <+0xe3>
08675fba +0xde:  mov    $0x0,%eax
08675fbf +0xe3:  test   %al,%al
08675fc1 +0xe5:  je     08675fca <+0xee>
08675fc3 +0xe7:  mov    $0x13,%eax
08675fc8 +0xec:  jmp    08675fcf <+0xf3>
08675fca +0xee:  mov    $0x0,%eax
08675fcf +0xf3:  leave
08675fd0 +0xf4:  ret
08675fd1 +0xf5:  nop
```

## 反编译 C

```c
// CUser::check_multibox_error @ 0x8675edc

/* CUser::check_multibox_error(int) */

undefined4 __thiscall CUser::check_multibox_error(CUser *this,int param_1)

{
  bool bVar1;
  char cVar2;
  CInventory *pCVar3;
  undefined4 uVar4;
  
  pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
  cVar2 = CInventory::check_empty_count(pCVar3,1,param_1);
  if (cVar2 == '\x01') {
    pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
    cVar2 = CInventory::check_empty_count(pCVar3,2,param_1);
    if (cVar2 == '\x01') {
      pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
      cVar2 = CInventory::check_empty_count(pCVar3,3,param_1);
      if (cVar2 == '\x01') {
        pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
        cVar2 = CInventory::check_empty_count(pCVar3,10,param_1);
        if (cVar2 == '\x01') {
          pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
          cVar2 = CInventory::check_empty_count(pCVar3,5,param_1);
          if (cVar2 == '\x01') {
            bVar1 = false;
            goto LAB_08675fbf;
          }
        }
      }
    }
  }
  bVar1 = true;
LAB_08675fbf:
  if (bVar1) {
    uVar4 = 0x13;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}
```

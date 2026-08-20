# arad_make_item

`_ZN4ARAD9ARAD_ITEM14arad_make_itemEmiR10Inven_Item`

`ARAD::ARAD_ITEM::arad_make_item(unsigned long, int, Inven_Item&)`

| 类 | 地址 |
|---|---|
| `ARAD::ARAD_ITEM` | `0x08197375` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08197375  _ZN4ARAD9ARAD_ITEM14arad_make_itemEmiR10Inven_Item
#           ARAD::ARAD_ITEM::arad_make_item(unsigned long, int, Inven_Item&)
# range [0x08197375, 0x081973f9]
08197375 +0x00:  push   %ebp
08197376 +0x01:  mov    %esp,%ebp
08197378 +0x03:  push   %ebx
08197379 +0x04:  sub    $0x24,%esp
0819737c +0x07:  cmpl   $0x0,0x8(%ebp)
08197380 +0x0b:  je     0819738e <+0x19>
08197382 +0x0d:  cmpl   $0xffffffff,0x8(%ebp)
08197386 +0x11:  je     0819738e <+0x19>
08197388 +0x13:  cmpl   $0x0,0xc(%ebp)
0819738c +0x17:  jne    08197395 <+0x20>
0819738e +0x19:  mov    $0x0,%eax
08197393 +0x1e:  jmp    081973f4 <+0x7f>
08197395 +0x20:  mov    0x8(%ebp),%ebx
08197398 +0x23:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0819739d +0x28:  mov    %ebx,0x4(%esp)
081973a1 +0x2c:  mov    %eax,(%esp)
081973a4 +0x2f:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
081973a9 +0x34:  mov    %eax,-0xc(%ebp)
081973ac +0x37:  cmpl   $0x0,-0xc(%ebp)
081973b0 +0x3b:  jne    081973b9 <+0x44>
081973b2 +0x3d:  mov    $0x0,%eax
081973b7 +0x42:  jmp    081973f4 <+0x7f>
081973b9 +0x44:  mov    0x10(%ebp),%eax
081973bc +0x47:  mov    %eax,(%esp)
081973bf +0x4a:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
081973c4 +0x4f:  mov    -0xc(%ebp),%eax
081973c7 +0x52:  mov    (%eax),%eax
081973c9 +0x54:  add    $0x8,%eax
081973cc +0x57:  mov    (%eax),%edx
081973ce +0x59:  mov    0x10(%ebp),%eax
081973d1 +0x5c:  mov    %eax,0x4(%esp)
081973d5 +0x60:  mov    -0xc(%ebp),%eax
081973d8 +0x63:  mov    %eax,(%esp)
081973db +0x66:  call   *%edx
081973dd +0x68:  mov    0x10(%ebp),%eax
081973e0 +0x6b:  mov    0x8(%ebp),%edx
081973e3 +0x6e:  mov    %edx,0x2(%eax)
081973e6 +0x71:  mov    0x10(%ebp),%eax
081973e9 +0x74:  mov    0xc(%ebp),%edx
081973ec +0x77:  mov    %edx,0x7(%eax)
081973ef +0x7a:  mov    $0x1,%eax
081973f4 +0x7f:  add    $0x24,%esp
081973f7 +0x82:  pop    %ebx
081973f8 +0x83:  pop    %ebp
081973f9 +0x84:  ret
```

## 反编译 C

```c
// ARAD::ARAD_ITEM::arad_make_item @ 0x8197375

/* ARAD::ARAD_ITEM::arad_make_item(unsigned long, int, Inven_Item&) */

undefined4 ARAD::ARAD_ITEM::arad_make_item(ulong param_1,int param_2,Inven_Item *param_3)

{
  undefined4 uVar1;
  CDataManager *this;
  int *piVar2;
  
  if (((param_1 == 0) || (param_1 == 0xffffffff)) || (param_2 == 0)) {
    uVar1 = 0;
  }
  else {
    this = (CDataManager *)G_CDataManager();
    piVar2 = (int *)CDataManager::find_item(this,param_1);
    if (piVar2 == (int *)0x0) {
      uVar1 = 0;
    }
    else {
      Inven_Item::reset(param_3);
      (**(code **)(*piVar2 + 8))(piVar2,param_3);
      *(ulong *)(param_3 + 2) = param_1;
      *(int *)(param_3 + 7) = param_2;
      uVar1 = 1;
    }
  }
  return uVar1;
}
```

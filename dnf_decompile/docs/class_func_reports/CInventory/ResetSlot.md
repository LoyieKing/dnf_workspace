# ResetSlot

`_ZN10CInventory9ResetSlotEii`

`CInventory::ResetSlot(int, int)`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x084fb32a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084fb32a  _ZN10CInventory9ResetSlotEii
#           CInventory::ResetSlot(int, int)
# range [0x084fb32a, 0x084fb3e3]
084fb32a +0x00:  push   %ebp
084fb32b +0x01:  mov    %esp,%ebp
084fb32d +0x03:  sub    $0x18,%esp
084fb330 +0x06:  mov    0x10(%ebp),%eax
084fb333 +0x09:  mov    %eax,0x8(%esp)
084fb337 +0x0d:  mov    0xc(%ebp),%eax
084fb33a +0x10:  mov    %eax,0x4(%esp)
084fb33e +0x14:  mov    0x8(%ebp),%eax
084fb341 +0x17:  mov    %eax,(%esp)
084fb344 +0x1a:  call   084fb01e <_ZNK10CInventory14CheckValidSlotEii>  ; CInventory::CheckValidSlot(int, int) const
084fb349 +0x1f:  xor    $0x1,%eax
084fb34c +0x22:  test   %al,%al
084fb34e +0x24:  jne    084fb3e0 <+0xb6>
084fb354 +0x2a:  mov    0xc(%ebp),%eax
084fb357 +0x2d:  cmp    $0x1,%eax
084fb35a +0x30:  je     084fb38c <+0x62>
084fb35c +0x32:  cmp    $0x1,%eax
084fb35f +0x35:  jg     084fb367 <+0x3d>
084fb361 +0x37:  test   %eax,%eax
084fb363 +0x39:  je     084fb373 <+0x49>
084fb365 +0x3b:  jmp    084fb3e1 <+0xb7>
084fb367 +0x3d:  cmp    $0x2,%eax
084fb36a +0x40:  je     084fb3a8 <+0x7e>
084fb36c +0x42:  cmp    $0x3,%eax
084fb36f +0x45:  je     084fb3c4 <+0x9a>
084fb371 +0x47:  jmp    084fb3e1 <+0xb7>
084fb373 +0x49:  mov    0x10(%ebp),%eax
084fb376 +0x4c:  imul   $0x3d,%eax,%eax
084fb379 +0x4f:  add    $0x10,%eax
084fb37c +0x52:  add    0x8(%ebp),%eax
084fb37f +0x55:  add    $0xc,%eax
084fb382 +0x58:  mov    %eax,(%esp)
084fb385 +0x5b:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
084fb38a +0x60:  jmp    084fb3e1 <+0xb7>
084fb38c +0x62:  mov    0x8(%ebp),%eax
084fb38f +0x65:  mov    0x650(%eax),%edx
084fb395 +0x6b:  mov    0x10(%ebp),%eax
084fb398 +0x6e:  imul   $0x3d,%eax,%eax
084fb39b +0x71:  lea    (%edx,%eax,1),%eax
084fb39e +0x74:  mov    %eax,(%esp)
084fb3a1 +0x77:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
084fb3a6 +0x7c:  jmp    084fb3e1 <+0xb7>
084fb3a8 +0x7e:  mov    0x8(%ebp),%eax
084fb3ab +0x81:  mov    0x654(%eax),%edx
084fb3b1 +0x87:  mov    0x10(%ebp),%eax
084fb3b4 +0x8a:  imul   $0x3d,%eax,%eax
084fb3b7 +0x8d:  lea    (%edx,%eax,1),%eax
084fb3ba +0x90:  mov    %eax,(%esp)
084fb3bd +0x93:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
084fb3c2 +0x98:  jmp    084fb3e1 <+0xb7>
084fb3c4 +0x9a:  mov    0x8(%ebp),%eax
084fb3c7 +0x9d:  mov    0x6e4(%eax),%edx
084fb3cd +0xa3:  mov    0x10(%ebp),%eax
084fb3d0 +0xa6:  imul   $0x3d,%eax,%eax
084fb3d3 +0xa9:  lea    (%edx,%eax,1),%eax
084fb3d6 +0xac:  mov    %eax,(%esp)
084fb3d9 +0xaf:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
084fb3de +0xb4:  jmp    084fb3e1 <+0xb7>
084fb3e0 +0xb6:  nop
084fb3e1 +0xb7:  leave
084fb3e2 +0xb8:  ret
084fb3e3 +0xb9:  nop
```

## 反编译 C

```c
// CInventory::ResetSlot @ 0x84fb32a

/* CInventory::ResetSlot(int, int) */

void __thiscall CInventory::ResetSlot(CInventory *this,int param_1,int param_2)

{
  char cVar1;
  
  cVar1 = CheckValidSlot(this,param_1,param_2);
  if (cVar1 == '\x01') {
    if (param_1 == 1) {
      Inven_Item::reset((Inven_Item *)(*(int *)(this + 0x650) + param_2 * 0x3d));
    }
    else if (param_1 < 2) {
      if (param_1 == 0) {
        Inven_Item::reset((Inven_Item *)(this + param_2 * 0x3d + 0x1c));
      }
    }
    else if (param_1 == 2) {
      Inven_Item::reset((Inven_Item *)(*(int *)(this + 0x654) + param_2 * 0x3d));
    }
    else if (param_1 == 3) {
      Inven_Item::reset((Inven_Item *)(*(int *)(this + 0x6e4) + param_2 * 0x3d));
    }
  }
  return;
}
```

# MoveItemToEmptySlotOfInventory

`_ZN10CInventory30MoveItemToEmptySlotOfInventoryEiii`

`CInventory::MoveItemToEmptySlotOfInventory(int, int, int)`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x085049c8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085049c8  _ZN10CInventory30MoveItemToEmptySlotOfInventoryEiii
#           CInventory::MoveItemToEmptySlotOfInventory(int, int, int)
# range [0x085049c8, 0x08504a89]
085049c8 +0x00:  push   %ebp
085049c9 +0x01:  mov    %esp,%ebp
085049cb +0x03:  sub    $0x68,%esp
085049ce +0x06:  movl   $0xffffffff,-0x10(%ebp)
085049d5 +0x0d:  mov    0x10(%ebp),%eax
085049d8 +0x10:  mov    %eax,-0xc(%ebp)
085049db +0x13:  jmp    08504a02 <+0x3a>
085049dd +0x15:  mov    0x8(%ebp),%eax
085049e0 +0x18:  mov    0x650(%eax),%edx
085049e6 +0x1e:  mov    -0xc(%ebp),%eax
085049e9 +0x21:  imul   $0x3d,%eax,%eax
085049ec +0x24:  lea    (%edx,%eax,1),%eax
085049ef +0x27:  mov    0x2(%eax),%eax
085049f2 +0x2a:  test   %eax,%eax
085049f4 +0x2c:  jne    085049fe <+0x36>
085049f6 +0x2e:  mov    -0xc(%ebp),%eax
085049f9 +0x31:  mov    %eax,-0x10(%ebp)
085049fc +0x34:  jmp    08504a0f <+0x47>
085049fe +0x36:  addl   $0x1,-0xc(%ebp)
08504a02 +0x3a:  mov    -0xc(%ebp),%eax
08504a05 +0x3d:  cmp    0x14(%ebp),%eax
08504a08 +0x40:  setle  %al
08504a0b +0x43:  test   %al,%al
08504a0d +0x45:  jne    085049dd <+0x15>
08504a0f +0x47:  cmpl   $0xffffffff,-0x10(%ebp)
08504a13 +0x4b:  jne    08504a1c <+0x54>
08504a15 +0x4d:  mov    $0x16,%eax
08504a1a +0x52:  jmp    08504a87 <+0xbf>
08504a1c +0x54:  lea    -0x4d(%ebp),%eax
08504a1f +0x57:  mov    %eax,(%esp)
08504a22 +0x5a:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08504a27 +0x5f:  mov    0x8(%ebp),%eax
08504a2a +0x62:  mov    0x650(%eax),%edx
08504a30 +0x68:  mov    0xc(%ebp),%eax
08504a33 +0x6b:  imul   $0x3d,%eax,%eax
08504a36 +0x6e:  lea    (%edx,%eax,1),%eax
08504a39 +0x71:  mov    %eax,0x4(%esp)
08504a3d +0x75:  lea    -0x4d(%ebp),%eax
08504a40 +0x78:  mov    %eax,(%esp)
08504a43 +0x7b:  call   0814a62e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x3cd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x3cd
08504a48 +0x80:  mov    0x8(%ebp),%eax
08504a4b +0x83:  mov    0x650(%eax),%edx
08504a51 +0x89:  mov    0xc(%ebp),%eax
08504a54 +0x8c:  imul   $0x3d,%eax,%eax
08504a57 +0x8f:  lea    (%edx,%eax,1),%eax
08504a5a +0x92:  mov    %eax,(%esp)
08504a5d +0x95:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
08504a62 +0x9a:  mov    0x8(%ebp),%eax
08504a65 +0x9d:  mov    0x650(%eax),%edx
08504a6b +0xa3:  mov    -0x10(%ebp),%eax
08504a6e +0xa6:  imul   $0x3d,%eax,%eax
08504a71 +0xa9:  add    %eax,%edx
08504a73 +0xab:  lea    -0x4d(%ebp),%eax
08504a76 +0xae:  mov    %eax,0x4(%esp)
08504a7a +0xb2:  mov    %edx,(%esp)
08504a7d +0xb5:  call   0814a62e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x3cd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x3cd
08504a82 +0xba:  mov    $0x0,%eax
08504a87 +0xbf:  leave
08504a88 +0xc0:  ret
08504a89 +0xc1:  nop
```

## 反编译 C

```c
// CInventory::MoveItemToEmptySlotOfInventory @ 0x85049c8

/* CInventory::MoveItemToEmptySlotOfInventory(int, int, int) */

undefined4 __thiscall
CInventory::MoveItemToEmptySlotOfInventory(CInventory *this,int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  Inven_Item local_51 [61];
  int local_14;
  int local_10;
  
  local_14 = -1;
  local_10 = param_2;
  do {
    if (param_3 < local_10) {
LAB_08504a0f:
      if (local_14 == -1) {
        uVar1 = 0x16;
      }
      else {
        Inven_Item::Inven_Item(local_51);
        Inven_Item::setCopy(local_51,(Inven_Item *)(*(int *)(this + 0x650) + param_1 * 0x3d));
        Inven_Item::reset((Inven_Item *)(*(int *)(this + 0x650) + param_1 * 0x3d));
        Inven_Item::setCopy((Inven_Item *)(*(int *)(this + 0x650) + local_14 * 0x3d),local_51);
        uVar1 = 0;
      }
      return uVar1;
    }
    if (*(int *)(*(int *)(this + 0x650) + local_10 * 0x3d + 2) == 0) {
      local_14 = local_10;
      goto LAB_08504a0f;
    }
    local_10 = local_10 + 1;
  } while( true );
}
```

# _CheckTrade4SameAvatar

`_ZN11CTradeSpace22_CheckTrade4SameAvatarEPK9TradeSlotRK10Inven_Item`

`CTradeSpace::_CheckTrade4SameAvatar(TradeSlot const*, Inven_Item const&)`

| 类 | 地址 |
|---|---|
| `CTradeSpace` | `0x08529d48` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08529d48  _ZN11CTradeSpace22_CheckTrade4SameAvatarEPK9TradeSlotRK10Inven_Item
#           CTradeSpace::_CheckTrade4SameAvatar(TradeSlot const*, Inven_Item const&)
# range [0x08529d48, 0x08529dcd]
08529d48 +0x00:  push   %ebp
08529d49 +0x01:  mov    %esp,%ebp
08529d4b +0x03:  sub    $0x10,%esp
08529d4e +0x06:  movl   $0x3,-0x4(%ebp)
08529d55 +0x0d:  jmp    08529dbc <+0x74>
08529d57 +0x0f:  mov    -0x4(%ebp),%edx
08529d5a +0x12:  mov    %edx,%eax
08529d5c +0x14:  shl    $0x3,%eax
08529d5f +0x17:  add    %edx,%eax
08529d61 +0x19:  shl    $0x3,%eax
08529d64 +0x1c:  add    0xc(%ebp),%eax
08529d67 +0x1f:  mov    0xb(%eax),%edx
08529d6a +0x22:  mov    0x10(%ebp),%eax
08529d6d +0x25:  mov    0x2(%eax),%eax
08529d70 +0x28:  cmp    %eax,%edx
08529d72 +0x2a:  jne    08529db8 <+0x70>
08529d74 +0x2c:  mov    -0x4(%ebp),%edx
08529d77 +0x2f:  mov    %edx,%eax
08529d79 +0x31:  shl    $0x3,%eax
08529d7c +0x34:  add    %edx,%eax
08529d7e +0x36:  shl    $0x3,%eax
08529d81 +0x39:  add    0xc(%ebp),%eax
08529d84 +0x3c:  mov    0x10(%eax),%edx
08529d87 +0x3f:  mov    0x10(%ebp),%eax
08529d8a +0x42:  mov    0x7(%eax),%eax
08529d8d +0x45:  cmp    %eax,%edx
08529d8f +0x47:  jne    08529db8 <+0x70>
08529d91 +0x49:  mov    -0x4(%ebp),%edx
08529d94 +0x4c:  mov    %edx,%eax
08529d96 +0x4e:  shl    $0x3,%eax
08529d99 +0x51:  add    %edx,%eax
08529d9b +0x53:  shl    $0x3,%eax
08529d9e +0x56:  add    0xc(%ebp),%eax
08529da1 +0x59:  movzwl 0x14(%eax),%edx
08529da5 +0x5d:  mov    0x10(%ebp),%eax
08529da8 +0x60:  movzwl 0xb(%eax),%eax
08529dac +0x64:  cmp    %ax,%dx
08529daf +0x67:  jne    08529db8 <+0x70>
08529db1 +0x69:  mov    $0x1,%eax
08529db6 +0x6e:  jmp    08529dcc <+0x84>
08529db8 +0x70:  addl   $0x1,-0x4(%ebp)
08529dbc +0x74:  cmpl   $0x1a,-0x4(%ebp)
08529dc0 +0x78:  setle  %al
08529dc3 +0x7b:  test   %al,%al
08529dc5 +0x7d:  jne    08529d57 <+0xf>
08529dc7 +0x7f:  mov    $0x0,%eax
08529dcc +0x84:  leave
08529dcd +0x85:  ret
```

## 反编译 C

```c
// CTradeSpace::_CheckTrade4SameAvatar @ 0x8529d48

/* CTradeSpace::_CheckTrade4SameAvatar(TradeSlot const*, Inven_Item const&) */

undefined4 __thiscall
CTradeSpace::_CheckTrade4SameAvatar(CTradeSpace *this,TradeSlot *param_1,Inven_Item *param_2)

{
  int local_8;
  
  local_8 = 3;
  while( true ) {
    if (0x1a < local_8) {
      return 0;
    }
    if (((*(int *)(param_1 + local_8 * 0x48 + 0xb) == *(int *)(param_2 + 2)) &&
        (*(int *)(param_1 + local_8 * 0x48 + 0x10) == *(int *)(param_2 + 7))) &&
       (*(short *)(param_1 + local_8 * 0x48 + 0x14) == *(short *)(param_2 + 0xb))) break;
    local_8 = local_8 + 1;
  }
  return 1;
}
```

# _remove_victim

`_ZN31Dispatcher_Compound_ExtreamItem14_remove_victimEv`

`Dispatcher_Compound_ExtreamItem::_remove_victim()`

| 类 | 地址 |
|---|---|
| `Dispatcher_Compound_ExtreamItem` | `0x08225a88` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08225a88  _ZN31Dispatcher_Compound_ExtreamItem14_remove_victimEv
#           Dispatcher_Compound_ExtreamItem::_remove_victim()
# range [0x08225a88, 0x08225b53]
08225a88 +0x00:  push   %ebp
08225a89 +0x01:  mov    %esp,%ebp
08225a8b +0x03:  sub    $0x38,%esp
08225a8e +0x06:  mov    0x8(%ebp),%eax
08225a91 +0x09:  mov    0xd0(%eax),%eax
08225a97 +0x0f:  mov    %eax,(%esp)
08225a9a +0x12:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08225a9f +0x17:  mov    %eax,-0x10(%ebp)
08225aa2 +0x1a:  movl   $0x0,-0xc(%ebp)
08225aa9 +0x21:  jmp    08225afa <+0x72>
08225aab +0x23:  mov    -0xc(%ebp),%edx
08225aae +0x26:  mov    0x8(%ebp),%eax
08225ab1 +0x29:  movzwl 0x8(%eax,%edx,2),%eax
08225ab6 +0x2e:  movzwl %ax,%eax
08225ab9 +0x31:  movl   $0x1,0x14(%esp)
08225ac1 +0x39:  movl   $0x2a,0x10(%esp)
08225ac9 +0x41:  movl   $0x1,0xc(%esp)
08225ad1 +0x49:  mov    %eax,0x8(%esp)
08225ad5 +0x4d:  movl   $0x1,0x4(%esp)
08225add +0x55:  mov    -0x10(%ebp),%eax
08225ae0 +0x58:  mov    %eax,(%esp)
08225ae3 +0x5b:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
08225ae8 +0x60:  xor    $0x1,%eax
08225aeb +0x63:  test   %al,%al
08225aed +0x65:  je     08225af6 <+0x6e>
08225aef +0x67:  mov    $0x0,%eax
08225af4 +0x6c:  jmp    08225b51 <+0xc9>
08225af6 +0x6e:  addl   $0x1,-0xc(%ebp)
08225afa +0x72:  cmpl   $0x1,-0xc(%ebp)
08225afe +0x76:  setbe  %al
08225b01 +0x79:  test   %al,%al
08225b03 +0x7b:  jne    08225aab <+0x23>
08225b05 +0x7d:  mov    0x8(%ebp),%eax
08225b08 +0x80:  movzwl 0x4(%eax),%eax
08225b0c +0x84:  movzwl %ax,%eax
08225b0f +0x87:  movl   $0x1,0x14(%esp)
08225b17 +0x8f:  movl   $0x2a,0x10(%esp)
08225b1f +0x97:  movl   $0x1,0xc(%esp)
08225b27 +0x9f:  mov    %eax,0x8(%esp)
08225b2b +0xa3:  movl   $0x1,0x4(%esp)
08225b33 +0xab:  mov    -0x10(%ebp),%eax
08225b36 +0xae:  mov    %eax,(%esp)
08225b39 +0xb1:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
08225b3e +0xb6:  xor    $0x1,%eax
08225b41 +0xb9:  test   %al,%al
08225b43 +0xbb:  je     08225b4c <+0xc4>
08225b45 +0xbd:  mov    $0x0,%eax
08225b4a +0xc2:  jmp    08225b51 <+0xc9>
08225b4c +0xc4:  mov    $0x1,%eax
08225b51 +0xc9:  leave
08225b52 +0xca:  ret
08225b53 +0xcb:  nop
```

## 反编译 C

```c
// Dispatcher_Compound_ExtreamItem::_remove_victim @ 0x8225a88

/* Dispatcher_Compound_ExtreamItem::_remove_victim() */

bool __thiscall
Dispatcher_Compound_ExtreamItem::_remove_victim(Dispatcher_Compound_ExtreamItem *this)

{
  char cVar1;
  CInventory *pCVar2;
  uint local_10;
  
  pCVar2 = (CInventory *)CUserCharacInfo::getCurCharacInvenW(*(CUserCharacInfo **)(this + 0xd0));
  local_10 = 0;
  while( true ) {
    if (1 < local_10) {
      cVar1 = CInventory::delete_item(pCVar2,1,*(undefined2 *)(this + 4),1,0x2a,1);
      return cVar1 == '\x01';
    }
    cVar1 = CInventory::delete_item(pCVar2,1,*(undefined2 *)(this + local_10 * 2 + 8),1,0x2a,1);
    if (cVar1 != '\x01') break;
    local_10 = local_10 + 1;
  }
  return false;
}
```

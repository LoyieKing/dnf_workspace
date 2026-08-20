# MakeSecuRewarditemPacket

`_ZNK10CInventory24MakeSecuRewarditemPacketE10INVEN_TYPEiR11PacketGuard`

`CInventory::MakeSecuRewarditemPacket(INVEN_TYPE, int, PacketGuard&) const`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x084fd6d2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084fd6d2  _ZNK10CInventory24MakeSecuRewarditemPacketE10INVEN_TYPEiR11PacketGuard
#           CInventory::MakeSecuRewarditemPacket(INVEN_TYPE, int, PacketGuard&) const
# range [0x084fd6d2, 0x084fd7b5]
084fd6d2 +0x00:  push   %ebp
084fd6d3 +0x01:  mov    %esp,%ebp
084fd6d5 +0x03:  sub    $0x18,%esp
084fd6d8 +0x06:  cmpl   $0x1,0xc(%ebp)
084fd6dc +0x0a:  jne    084fd7ae <+0xdc>
084fd6e2 +0x10:  mov    0x8(%ebp),%eax
084fd6e5 +0x13:  mov    0x650(%eax),%edx
084fd6eb +0x19:  mov    0x10(%ebp),%eax
084fd6ee +0x1c:  imul   $0x3d,%eax,%eax
084fd6f1 +0x1f:  lea    (%edx,%eax,1),%eax
084fd6f4 +0x22:  mov    0x2(%eax),%eax
084fd6f7 +0x25:  test   %eax,%eax
084fd6f9 +0x27:  je     084fd7a7 <+0xd5>
084fd6ff +0x2d:  mov    0x14(%ebp),%eax
084fd702 +0x30:  mov    0x10(%ebp),%edx
084fd705 +0x33:  mov    %edx,0x4(%esp)
084fd709 +0x37:  mov    %eax,(%esp)
084fd70c +0x3a:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084fd711 +0x3f:  mov    0x8(%ebp),%eax
084fd714 +0x42:  mov    0x650(%eax),%edx
084fd71a +0x48:  mov    0x10(%ebp),%eax
084fd71d +0x4b:  imul   $0x3d,%eax,%eax
084fd720 +0x4e:  lea    (%edx,%eax,1),%eax
084fd723 +0x51:  mov    0x2(%eax),%eax
084fd726 +0x54:  test   %eax,%eax
084fd728 +0x56:  je     084fd743 <+0x71>
084fd72a +0x58:  mov    0x8(%ebp),%eax
084fd72d +0x5b:  mov    0x650(%eax),%edx
084fd733 +0x61:  mov    0x10(%ebp),%eax
084fd736 +0x64:  imul   $0x3d,%eax,%eax
084fd739 +0x67:  lea    (%edx,%eax,1),%eax
084fd73c +0x6a:  mov    0x7(%eax),%eax
084fd73f +0x6d:  test   %eax,%eax
084fd741 +0x6f:  jne    084fd758 <+0x86>
084fd743 +0x71:  mov    0x14(%ebp),%eax
084fd746 +0x74:  movl   $0xffffffff,0x4(%esp)
084fd74e +0x7c:  mov    %eax,(%esp)
084fd751 +0x7f:  call   0822b794 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xe3e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xe3e
084fd756 +0x84:  jmp    084fd77c <+0xaa>
084fd758 +0x86:  mov    0x8(%ebp),%eax
084fd75b +0x89:  mov    0x650(%eax),%edx
084fd761 +0x8f:  mov    0x10(%ebp),%eax
084fd764 +0x92:  imul   $0x3d,%eax,%eax
084fd767 +0x95:  lea    (%edx,%eax,1),%eax
084fd76a +0x98:  mov    0x2(%eax),%edx
084fd76d +0x9b:  mov    0x14(%ebp),%eax
084fd770 +0x9e:  mov    %edx,0x4(%esp)
084fd774 +0xa2:  mov    %eax,(%esp)
084fd777 +0xa5:  call   0822b794 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xe3e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xe3e
084fd77c +0xaa:  mov    0x8(%ebp),%eax
084fd77f +0xad:  mov    0x650(%eax),%edx
084fd785 +0xb3:  mov    0x10(%ebp),%eax
084fd788 +0xb6:  imul   $0x3d,%eax,%eax
084fd78b +0xb9:  lea    (%edx,%eax,1),%eax
084fd78e +0xbc:  mov    0x7(%eax),%edx
084fd791 +0xbf:  mov    0x14(%ebp),%eax
084fd794 +0xc2:  mov    %edx,0x4(%esp)
084fd798 +0xc6:  mov    %eax,(%esp)
084fd79b +0xc9:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084fd7a0 +0xce:  mov    $0x1,%eax
084fd7a5 +0xd3:  jmp    084fd7b3 <+0xe1>
084fd7a7 +0xd5:  mov    $0x0,%eax
084fd7ac +0xda:  jmp    084fd7b3 <+0xe1>
084fd7ae +0xdc:  mov    $0x0,%eax
084fd7b3 +0xe1:  leave
084fd7b4 +0xe2:  ret
084fd7b5 +0xe3:  nop
```

## 反编译 C

```c
// CInventory::MakeSecuRewarditemPacket @ 0x84fd6d2

/* CInventory::MakeSecuRewarditemPacket(INVEN_TYPE, int, PacketGuard&) const */

undefined4 __thiscall
CInventory::MakeSecuRewarditemPacket
          (CInventory *this,int param_2,int param_3,InterfacePacketBuf *param_4)

{
  undefined4 uVar1;
  
  if (param_2 == 1) {
    if (*(int *)(*(int *)(this + 0x650) + param_3 * 0x3d + 2) == 0) {
      uVar1 = 0;
    }
    else {
      InterfacePacketBuf::put_short(param_4,param_3);
      if ((*(int *)(*(int *)(this + 0x650) + param_3 * 0x3d + 2) == 0) ||
         (*(int *)(*(int *)(this + 0x650) + param_3 * 0x3d + 7) == 0)) {
        InterfacePacketBuf::put_item_idx(param_4,0xffffffff);
      }
      else {
        InterfacePacketBuf::put_item_idx
                  (param_4,*(ulong *)(*(int *)(this + 0x650) + param_3 * 0x3d + 2));
      }
      InterfacePacketBuf::put_int(param_4,*(int *)(*(int *)(this + 0x650) + param_3 * 0x3d + 7));
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```

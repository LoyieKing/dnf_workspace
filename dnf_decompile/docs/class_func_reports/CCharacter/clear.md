# clear

`_ZN10CCharacter5clearEv`

`CCharacter::clear()`

| 类 | 地址 |
|---|---|
| `CCharacter` | `0x0834852e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0834852e  _ZN10CCharacter5clearEv
#           CCharacter::clear()
# range [0x0834852e, 0x083485c3]
0834852e +0x00:  push   %ebp
0834852f +0x01:  mov    %esp,%ebp
08348531 +0x03:  sub    $0x28,%esp
08348534 +0x06:  mov    0x8(%ebp),%eax
08348537 +0x09:  mov    %eax,(%esp)
0834853a +0x0c:  call   08348268 <_ZN15_Additioal_info5clearEv>  ; _Additioal_info::clear()
0834853f +0x11:  movl   $0x0,-0x10(%ebp)
08348546 +0x18:  jmp    08348563 <+0x35>
08348548 +0x1a:  mov    -0x10(%ebp),%eax
0834854b +0x1d:  imul   $0x52,%eax,%eax
0834854e +0x20:  add    $0x50,%eax
08348551 +0x23:  add    0x8(%ebp),%eax
08348554 +0x26:  add    $0x2,%eax
08348557 +0x29:  mov    %eax,(%esp)
0834855a +0x2c:  call   08348268 <_ZN15_Additioal_info5clearEv>  ; _Additioal_info::clear()
0834855f +0x31:  addl   $0x1,-0x10(%ebp)
08348563 +0x35:  cmpl   $0x5,-0x10(%ebp)
08348567 +0x39:  setle  %al
0834856a +0x3c:  test   %al,%al
0834856c +0x3e:  jne    08348548 <+0x1a>
0834856e +0x40:  movl   $0x0,-0xc(%ebp)
08348575 +0x47:  jmp    083485b6 <+0x88>
08348577 +0x49:  mov    -0xc(%ebp),%edx
0834857a +0x4c:  mov    %edx,%eax
0834857c +0x4e:  add    %eax,%eax
0834857e +0x50:  add    %edx,%eax
08348580 +0x52:  shl    $0x2,%eax
08348583 +0x55:  add    $0x240,%eax
08348588 +0x5a:  add    0x8(%ebp),%eax
0834858b +0x5d:  mov    %eax,(%esp)
0834858e +0x60:  call   0817a342 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x3c0>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x3c0
08348593 +0x65:  mov    -0xc(%ebp),%edx
08348596 +0x68:  mov    %edx,%eax
08348598 +0x6a:  add    %eax,%eax
0834859a +0x6c:  add    %edx,%eax
0834859c +0x6e:  shl    $0x6,%eax
0834859f +0x71:  add    $0x290,%eax
083485a4 +0x76:  add    0x8(%ebp),%eax
083485a7 +0x79:  add    $0x4,%eax
083485aa +0x7c:  mov    %eax,(%esp)
083485ad +0x7f:  call   08373a1e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xd9ea>  ; global constructors keyed to CServerEvent::m_nExpRate+0xd9ea
083485b2 +0x84:  addl   $0x1,-0xc(%ebp)
083485b6 +0x88:  cmpl   $0x6,-0xc(%ebp)
083485ba +0x8c:  setle  %al
083485bd +0x8f:  test   %al,%al
083485bf +0x91:  jne    08348577 <+0x49>
083485c1 +0x93:  leave
083485c2 +0x94:  ret
083485c3 +0x95:  nop
```

## 反编译 C

```c
// CCharacter::clear @ 0x834852e

/* CCharacter::clear() */

void __thiscall CCharacter::clear(CCharacter *this)

{
  int local_14;
  int local_10;
  
  _Additioal_info::clear((_Additioal_info *)this);
  for (local_14 = 0; local_14 < 6; local_14 = local_14 + 1) {
    _Additioal_info::clear((_Additioal_info *)(this + local_14 * 0x52 + 0x52));
  }
  for (local_10 = 0; local_10 < 7; local_10 = local_10 + 1) {
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::clear
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
               (this + local_10 * 0xc + 0x240));
    STSecondGrowTypeInfo::clear((STSecondGrowTypeInfo *)(this + local_10 * 0xc0 + 0x294));
  }
  return;
}
```

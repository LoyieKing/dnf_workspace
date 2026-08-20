# GetTicket

`_ZNK5CUser9GetTicketEP15SIG_LOAD_TICKET`

`CUser::GetTicket(SIG_LOAD_TICKET*) const`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0867846e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0867846e  _ZNK5CUser9GetTicketEP15SIG_LOAD_TICKET
#           CUser::GetTicket(SIG_LOAD_TICKET*) const
# range [0x0867846e, 0x08678525]
0867846e +0x00:  push   %ebp
0867846f +0x01:  mov    %esp,%ebp
08678471 +0x03:  push   %ebx
08678472 +0x04:  sub    $0x24,%esp
08678475 +0x07:  mov    0xc(%ebp),%eax
08678478 +0x0a:  movl   $0x0,0x4(%eax)
0867847f +0x11:  mov    0x8(%ebp),%eax
08678482 +0x14:  lea    0x8cf80(%eax),%edx
08678488 +0x1a:  lea    -0x10(%ebp),%eax
0867848b +0x1d:  mov    %edx,0x4(%esp)
0867848f +0x21:  mov    %eax,(%esp)
08678492 +0x24:  call   08238974 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xe01e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xe01e
08678497 +0x29:  sub    $0x4,%esp
0867849a +0x2c:  mov    0x8(%ebp),%eax
0867849d +0x2f:  lea    0x8cf80(%eax),%edx
086784a3 +0x35:  lea    -0x14(%ebp),%eax
086784a6 +0x38:  mov    %edx,0x4(%esp)
086784aa +0x3c:  mov    %eax,(%esp)
086784ad +0x3f:  call   0823899a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xe044>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xe044
086784b2 +0x44:  sub    $0x4,%esp
086784b5 +0x47:  movl   $0x0,-0xc(%ebp)
086784bc +0x4e:  movl   $0x0,-0xc(%ebp)
086784c3 +0x55:  jmp    086784eb <+0x7d>
086784c5 +0x57:  mov    -0xc(%ebp),%ebx
086784c8 +0x5a:  lea    -0x10(%ebp),%eax
086784cb +0x5d:  mov    %eax,(%esp)
086784ce +0x60:  call   0826cba0 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x146e>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x146e
086784d3 +0x65:  mov    (%eax),%edx
086784d5 +0x67:  mov    0xc(%ebp),%eax
086784d8 +0x6a:  mov    %edx,0xc(%eax,%ebx,4)
086784dc +0x6e:  lea    -0x10(%ebp),%eax
086784df +0x71:  mov    %eax,(%esp)
086784e2 +0x74:  call   0823dfa2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x9120>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x9120
086784e7 +0x79:  addl   $0x1,-0xc(%ebp)
086784eb +0x7d:  lea    -0x14(%ebp),%eax
086784ee +0x80:  mov    %eax,0x4(%esp)
086784f2 +0x84:  lea    -0x10(%ebp),%eax
086784f5 +0x87:  mov    %eax,(%esp)
086784f8 +0x8a:  call   0823df8e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x910c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x910c
086784fd +0x8f:  test   %al,%al
086784ff +0x91:  je     0867850e <+0xa0>
08678501 +0x93:  cmpl   $0x63,-0xc(%ebp)
08678505 +0x97:  jg     0867850e <+0xa0>
08678507 +0x99:  mov    $0x1,%eax
0867850c +0x9e:  jmp    08678513 <+0xa5>
0867850e +0xa0:  mov    $0x0,%eax
08678513 +0xa5:  test   %al,%al
08678515 +0xa7:  jne    086784c5 <+0x57>
08678517 +0xa9:  mov    0xc(%ebp),%eax
0867851a +0xac:  mov    -0xc(%ebp),%edx
0867851d +0xaf:  mov    %edx,0x8(%eax)
08678520 +0xb2:  mov    -0x4(%ebp),%ebx
08678523 +0xb5:  leave
08678524 +0xb6:  ret
08678525 +0xb7:  nop
```

## 反编译 C

```c
// CUser::GetTicket @ 0x867846e

/* CUser::GetTicket(SIG_LOAD_TICKET*) const */

void __thiscall CUser::GetTicket(CUser *this,SIG_LOAD_TICKET *param_1)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  undefined4 *puVar4;
  _List_const_iterator local_18 [4];
  _List_const_iterator<int> local_14 [4];
  int local_10;
  
  *(undefined4 *)(param_1 + 4) = 0;
  std::list<int,std::allocator<int>>::begin();
  std::list<int,std::allocator<int>>::end();
  local_10 = 0;
  while( true ) {
    cVar3 = std::_List_const_iterator<int>::operator!=(local_14,local_18);
    iVar2 = local_10;
    if ((cVar3 == '\0') || (99 < local_10)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) break;
    puVar4 = (undefined4 *)std::_List_const_iterator<int>::operator*(local_14);
    *(undefined4 *)(param_1 + iVar2 * 4 + 0xc) = *puVar4;
    std::_List_const_iterator<int>::operator++(local_14);
    local_10 = local_10 + 1;
  }
  *(int *)(param_1 + 8) = local_10;
  return;
}
```

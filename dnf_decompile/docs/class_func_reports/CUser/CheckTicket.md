# CheckTicket

`_ZN5CUser11CheckTicketEi`

`CUser::CheckTicket(int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x086785f4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086785f4  _ZN5CUser11CheckTicketEi
#           CUser::CheckTicket(int)
# range [0x086785f4, 0x086786bd]
086785f4 +0x00:  push   %ebp
086785f5 +0x01:  mov    %esp,%ebp
086785f7 +0x03:  sub    $0x28,%esp
086785fa +0x06:  mov    0x8(%ebp),%eax
086785fd +0x09:  movzbl 0x711d8(%eax),%eax
08678604 +0x10:  test   %al,%al
08678606 +0x12:  je     08678612 <+0x1e>
08678608 +0x14:  mov    $0x1,%eax
0867860d +0x19:  jmp    086786bb <+0xc7>
08678612 +0x1e:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08678617 +0x23:  mov    %eax,(%esp)
0867861a +0x26:  call   081424e8 <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0x83c>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0x83c
0867861f +0x2b:  test   %al,%al
08678621 +0x2d:  je     0867862d <+0x39>
08678623 +0x2f:  mov    $0x1,%eax
08678628 +0x34:  jmp    086786bb <+0xc7>
0867862d +0x39:  mov    0x8(%ebp),%eax
08678630 +0x3c:  lea    0x8cf80(%eax),%edx
08678636 +0x42:  lea    -0x14(%ebp),%eax
08678639 +0x45:  mov    %edx,0x4(%esp)
0867863d +0x49:  mov    %eax,(%esp)
08678640 +0x4c:  call   082373c8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xca72>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xca72
08678645 +0x51:  sub    $0x4,%esp
08678648 +0x54:  jmp    08678685 <+0x91>
0867864a +0x56:  lea    -0x14(%ebp),%eax
0867864d +0x59:  mov    %eax,(%esp)
08678650 +0x5c:  call   0823742a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcad4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcad4
08678655 +0x61:  mov    (%eax),%eax
08678657 +0x63:  cmp    0xc(%ebp),%eax
0867865a +0x66:  sete   %al
0867865d +0x69:  test   %al,%al
0867865f +0x6b:  je     08678668 <+0x74>
08678661 +0x6d:  mov    $0x1,%eax
08678666 +0x72:  jmp    086786bb <+0xc7>
08678668 +0x74:  lea    -0xc(%ebp),%eax
0867866b +0x77:  movl   $0x0,0x8(%esp)
08678673 +0x7f:  lea    -0x14(%ebp),%edx
08678676 +0x82:  mov    %edx,0x4(%esp)
0867867a +0x86:  mov    %eax,(%esp)
0867867d +0x89:  call   08391bd2 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x21672>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x21672
08678682 +0x8e:  sub    $0x4,%esp
08678685 +0x91:  mov    0x8(%ebp),%eax
08678688 +0x94:  lea    0x8cf80(%eax),%edx
0867868e +0x9a:  lea    -0x10(%ebp),%eax
08678691 +0x9d:  mov    %edx,0x4(%esp)
08678695 +0xa1:  mov    %eax,(%esp)
08678698 +0xa4:  call   0826c43e <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0xd0c>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0xd0c
0867869d +0xa9:  sub    $0x4,%esp
086786a0 +0xac:  lea    -0x10(%ebp),%eax
086786a3 +0xaf:  mov    %eax,0x4(%esp)
086786a7 +0xb3:  lea    -0x14(%ebp),%eax
086786aa +0xb6:  mov    %eax,(%esp)
086786ad +0xb9:  call   0826c462 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0xd30>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0xd30
086786b2 +0xbe:  test   %al,%al
086786b4 +0xc0:  jne    0867864a <+0x56>
086786b6 +0xc2:  mov    $0x0,%eax
086786bb +0xc7:  leave
086786bc +0xc8:  ret
086786bd +0xc9:  nop
```

## 反编译 C

```c
// CUser::CheckTicket @ 0x86785f4

/* CUser::CheckTicket(int) */

undefined4 __thiscall CUser::CheckTicket(CUser *this,int param_1)

{
  char cVar1;
  undefined4 uVar2;
  GameWorld *this_00;
  int *piVar3;
  _List_iterator<int> local_18 [4];
  _List_iterator local_14 [4];
  _List_iterator<int> local_10 [12];
  
  if (this[0x711d8] == (CUser)0x0) {
    this_00 = (GameWorld *)G_GameWorld();
    cVar1 = GameWorld::IsPVPChannel(this_00);
    if (cVar1 == '\0') {
      std::list<int,std::allocator<int>>::begin();
      while( true ) {
        std::list<int,std::allocator<int>>::end();
        cVar1 = std::_List_iterator<int>::operator!=(local_18,local_14);
        if (cVar1 == '\0') break;
        piVar3 = (int *)std::_List_iterator<int>::operator*(local_18);
        if (*piVar3 == param_1) {
          return 1;
        }
        std::_List_iterator<int>::operator++(local_10,(int)local_18);
      }
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}
```

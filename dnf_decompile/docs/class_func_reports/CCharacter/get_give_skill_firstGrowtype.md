# get_give_skill_firstGrowtype

`_ZNK10CCharacter28get_give_skill_firstGrowtypeEiRSt6vectorISt4pairIiiESaIS2_EE`

`CCharacter::get_give_skill_firstGrowtype(int, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&) const`

| 类 | 地址 |
|---|---|
| `CCharacter` | `0x083485d8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083485d8  _ZNK10CCharacter28get_give_skill_firstGrowtypeEiRSt6vectorISt4pairIiiESaIS2_EE
#           CCharacter::get_give_skill_firstGrowtype(int, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&) const
# range [0x083485d8, 0x08348693]
083485d8 +0x00:  push   %ebp
083485d9 +0x01:  mov    %esp,%ebp
083485db +0x03:  sub    $0x28,%esp
083485de +0x06:  cmpl   $0x0,0xc(%ebp)
083485e2 +0x0a:  js     083485ea <+0x12>
083485e4 +0x0c:  cmpl   $0x5,0xc(%ebp)
083485e8 +0x10:  jle    083485f4 <+0x1c>
083485ea +0x12:  mov    $0x0,%eax
083485ef +0x17:  jmp    08348692 <+0xba>
083485f4 +0x1c:  mov    0xc(%ebp),%eax
083485f7 +0x1f:  lea    0x1(%eax),%edx
083485fa +0x22:  mov    %edx,%eax
083485fc +0x24:  add    %eax,%eax
083485fe +0x26:  add    %edx,%eax
08348600 +0x28:  shl    $0x2,%eax
08348603 +0x2b:  add    $0x240,%eax
08348608 +0x30:  mov    %eax,%edx
0834860a +0x32:  add    0x8(%ebp),%edx
0834860d +0x35:  lea    -0x10(%ebp),%eax
08348610 +0x38:  mov    %edx,0x4(%esp)
08348614 +0x3c:  mov    %eax,(%esp)
08348617 +0x3f:  call   08111220 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x732>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x732
0834861c +0x44:  sub    $0x4,%esp
0834861f +0x47:  mov    0xc(%ebp),%eax
08348622 +0x4a:  lea    0x1(%eax),%edx
08348625 +0x4d:  mov    %edx,%eax
08348627 +0x4f:  add    %eax,%eax
08348629 +0x51:  add    %edx,%eax
0834862b +0x53:  shl    $0x2,%eax
0834862e +0x56:  add    $0x240,%eax
08348633 +0x5b:  mov    %eax,%edx
08348635 +0x5d:  add    0x8(%ebp),%edx
08348638 +0x60:  lea    -0x14(%ebp),%eax
0834863b +0x63:  mov    %edx,0x4(%esp)
0834863f +0x67:  mov    %eax,(%esp)
08348642 +0x6a:  call   0811124c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x75e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x75e
08348647 +0x6f:  sub    $0x4,%esp
0834864a +0x72:  jmp    08348677 <+0x9f>
0834864c +0x74:  lea    -0x10(%ebp),%eax
0834864f +0x77:  mov    %eax,(%esp)
08348652 +0x7a:  call   08235bba <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb264>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb264
08348657 +0x7f:  mov    %eax,-0xc(%ebp)
0834865a +0x82:  mov    -0xc(%ebp),%eax
0834865d +0x85:  mov    %eax,0x4(%esp)
08348661 +0x89:  mov    0x10(%ebp),%eax
08348664 +0x8c:  mov    %eax,(%esp)
08348667 +0x8f:  call   0830fa70 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1655>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1655
0834866c +0x94:  lea    -0x10(%ebp),%eax
0834866f +0x97:  mov    %eax,(%esp)
08348672 +0x9a:  call   0823dcd0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x8e4e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x8e4e
08348677 +0x9f:  lea    -0x14(%ebp),%eax
0834867a +0xa2:  mov    %eax,0x4(%esp)
0834867e +0xa6:  lea    -0x10(%ebp),%eax
08348681 +0xa9:  mov    %eax,(%esp)
08348684 +0xac:  call   081938e5 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x54d>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x54d
08348689 +0xb1:  test   %al,%al
0834868b +0xb3:  jne    0834864c <+0x74>
0834868d +0xb5:  mov    $0x1,%eax
08348692 +0xba:  leave
08348693 +0xbb:  ret
```

## 反编译 C

```c
// CCharacter::get_give_skill_firstGrowtype @ 0x83485d8

/* CCharacter::get_give_skill_firstGrowtype(int, std::vector<std::pair<int, int>,
   std::allocator<std::pair<int, int> > >&) const */

undefined4 __thiscall
CCharacter::get_give_skill_firstGrowtype(CCharacter *this,int param_1,vector *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  __normal_iterator local_18 [4];
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_14 [4];
  pair *local_10;
  
  if ((param_1 < 0) || (5 < param_1)) {
    uVar2 = 0;
  }
  else {
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
    while( true ) {
      bVar1 = __gnu_cxx::operator!=(local_14,local_18);
      if (!bVar1) break;
      local_10 = (pair *)__gnu_cxx::
                         __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                         ::operator*(local_14);
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_2,local_10);
      __gnu_cxx::
      __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
      ::operator++(local_14);
    }
    uVar2 = 1;
  }
  return uVar2;
}
```

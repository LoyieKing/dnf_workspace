# get_give_skill_secondGrowtype

`_ZNK10CCharacter29get_give_skill_secondGrowtypeEiiRSt6vectorISt4pairIiiESaIS2_EE`

`CCharacter::get_give_skill_secondGrowtype(int, int, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&) const`

| 类 | 地址 |
|---|---|
| `CCharacter` | `0x08348694` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08348694  _ZNK10CCharacter29get_give_skill_secondGrowtypeEiiRSt6vectorISt4pairIiiESaIS2_EE
#           CCharacter::get_give_skill_secondGrowtype(int, int, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&) const
# range [0x08348694, 0x08348797]
08348694 +0x000:  push   %ebp
08348695 +0x001:  mov    %esp,%ebp
08348697 +0x003:  sub    $0x28,%esp
0834869a +0x006:  cmpl   $0x0,0xc(%ebp)
0834869e +0x00a:  js     083486a6 <+0x12>
083486a0 +0x00c:  cmpl   $0x5,0xc(%ebp)
083486a4 +0x010:  jle    083486b0 <+0x1c>
083486a6 +0x012:  mov    $0x0,%eax
083486ab +0x017:  jmp    08348796 <+0x102>
083486b0 +0x01c:  cmpl   $0x0,0x10(%ebp)
083486b4 +0x020:  jle    083486bc <+0x28>
083486b6 +0x022:  cmpl   $0x2,0x10(%ebp)
083486ba +0x026:  jle    083486c6 <+0x32>
083486bc +0x028:  mov    $0x1,%eax
083486c1 +0x02d:  jmp    08348796 <+0x102>
083486c6 +0x032:  mov    0xc(%ebp),%eax
083486c9 +0x035:  lea    0x1(%eax),%ecx
083486cc +0x038:  mov    0x10(%ebp),%eax
083486cf +0x03b:  sub    $0x1,%eax
083486d2 +0x03e:  mov    %eax,%edx
083486d4 +0x040:  add    %edx,%edx
083486d6 +0x042:  add    %eax,%edx
083486d8 +0x044:  lea    0x0(,%edx,4),%eax
083486df +0x04b:  mov    %eax,%edx
083486e1 +0x04d:  mov    %ecx,%eax
083486e3 +0x04f:  add    %eax,%eax
083486e5 +0x051:  add    %ecx,%eax
083486e7 +0x053:  shl    $0x6,%eax
083486ea +0x056:  lea    (%edx,%eax,1),%eax
083486ed +0x059:  add    $0x330,%eax
083486f2 +0x05e:  add    0x8(%ebp),%eax
083486f5 +0x061:  lea    0x8(%eax),%edx
083486f8 +0x064:  lea    -0x10(%ebp),%eax
083486fb +0x067:  mov    %edx,0x4(%esp)
083486ff +0x06b:  mov    %eax,(%esp)
08348702 +0x06e:  call   08111220 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x732>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x732
08348707 +0x073:  sub    $0x4,%esp
0834870a +0x076:  mov    0xc(%ebp),%eax
0834870d +0x079:  lea    0x1(%eax),%ecx
08348710 +0x07c:  mov    0x10(%ebp),%eax
08348713 +0x07f:  sub    $0x1,%eax
08348716 +0x082:  mov    %eax,%edx
08348718 +0x084:  add    %edx,%edx
0834871a +0x086:  add    %eax,%edx
0834871c +0x088:  lea    0x0(,%edx,4),%eax
08348723 +0x08f:  mov    %eax,%edx
08348725 +0x091:  mov    %ecx,%eax
08348727 +0x093:  add    %eax,%eax
08348729 +0x095:  add    %ecx,%eax
0834872b +0x097:  shl    $0x6,%eax
0834872e +0x09a:  lea    (%edx,%eax,1),%eax
08348731 +0x09d:  add    $0x330,%eax
08348736 +0x0a2:  add    0x8(%ebp),%eax
08348739 +0x0a5:  lea    0x8(%eax),%edx
0834873c +0x0a8:  lea    -0x14(%ebp),%eax
0834873f +0x0ab:  mov    %edx,0x4(%esp)
08348743 +0x0af:  mov    %eax,(%esp)
08348746 +0x0b2:  call   0811124c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x75e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x75e
0834874b +0x0b7:  sub    $0x4,%esp
0834874e +0x0ba:  jmp    0834877b <+0xe7>
08348750 +0x0bc:  lea    -0x10(%ebp),%eax
08348753 +0x0bf:  mov    %eax,(%esp)
08348756 +0x0c2:  call   08235bba <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb264>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb264
0834875b +0x0c7:  mov    %eax,-0xc(%ebp)
0834875e +0x0ca:  mov    -0xc(%ebp),%eax
08348761 +0x0cd:  mov    %eax,0x4(%esp)
08348765 +0x0d1:  mov    0x14(%ebp),%eax
08348768 +0x0d4:  mov    %eax,(%esp)
0834876b +0x0d7:  call   0830fa70 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1655>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1655
08348770 +0x0dc:  lea    -0x10(%ebp),%eax
08348773 +0x0df:  mov    %eax,(%esp)
08348776 +0x0e2:  call   0823dcd0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x8e4e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x8e4e
0834877b +0x0e7:  lea    -0x14(%ebp),%eax
0834877e +0x0ea:  mov    %eax,0x4(%esp)
08348782 +0x0ee:  lea    -0x10(%ebp),%eax
08348785 +0x0f1:  mov    %eax,(%esp)
08348788 +0x0f4:  call   081938e5 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x54d>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x54d
0834878d +0x0f9:  test   %al,%al
0834878f +0x0fb:  jne    08348750 <+0xbc>
08348791 +0x0fd:  mov    $0x1,%eax
08348796 +0x102:  leave
08348797 +0x103:  ret
```

## 反编译 C

```c
// CCharacter::get_give_skill_secondGrowtype @ 0x8348694

/* CCharacter::get_give_skill_secondGrowtype(int, int, std::vector<std::pair<int, int>,
   std::allocator<std::pair<int, int> > >&) const */

undefined4 __thiscall
CCharacter::get_give_skill_secondGrowtype(CCharacter *this,int param_1,int param_2,vector *param_3)

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
  else if ((param_2 < 1) || (2 < param_2)) {
    uVar2 = 1;
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
                ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_3,local_10);
      __gnu_cxx::
      __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
      ::operator++(local_14);
    }
    uVar2 = 1;
  }
  return uVar2;
}
```

# SendRestrictedGoods

`_ZN5CUser19SendRestrictedGoodsEbi`

`CUser::SendRestrictedGoods(bool, int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0864d9a4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0864d9a4  _ZN5CUser19SendRestrictedGoodsEbi
#           CUser::SendRestrictedGoods(bool, int)
# range [0x0864d9a4, 0x0864db1f]
0864d9a4 +0x000:  push   %ebp
0864d9a5 +0x001:  mov    %esp,%ebp
0864d9a7 +0x003:  push   %esi
0864d9a8 +0x004:  push   %ebx
0864d9a9 +0x005:  sub    $0x40,%esp
0864d9ac +0x008:  mov    0xc(%ebp),%eax
0864d9af +0x00b:  mov    %al,-0x2c(%ebp)
0864d9b2 +0x00e:  lea    -0x14(%ebp),%eax
0864d9b5 +0x011:  mov    %eax,(%esp)
0864d9b8 +0x014:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0864d9bd +0x019:  movl   $0x44,0x8(%esp)
0864d9c5 +0x021:  movl   $0x0,0x4(%esp)
0864d9cd +0x029:  lea    -0x14(%ebp),%eax
0864d9d0 +0x02c:  mov    %eax,(%esp)
0864d9d3 +0x02f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0864d9d8 +0x034:  movzbl -0x2c(%ebp),%eax
0864d9dc +0x038:  xor    $0x1,%eax
0864d9df +0x03b:  test   %al,%al
0864d9e1 +0x03d:  je     0864da90 <+0xec>
0864d9e7 +0x043:  movl   $0x1,0x4(%esp)
0864d9ef +0x04b:  lea    -0x14(%ebp),%eax
0864d9f2 +0x04e:  mov    %eax,(%esp)
0864d9f5 +0x051:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0864d9fa +0x056:  mov    0x8(%ebp),%eax
0864d9fd +0x059:  add    $0x711ec,%eax
0864da02 +0x05e:  mov    %eax,(%esp)
0864da05 +0x061:  call   08235b76 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb220>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb220
0864da0a +0x066:  mov    %eax,0x4(%esp)
0864da0e +0x06a:  lea    -0x14(%ebp),%eax
0864da11 +0x06d:  mov    %eax,(%esp)
0864da14 +0x070:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0864da19 +0x075:  mov    0x8(%ebp),%eax
0864da1c +0x078:  lea    0x711ec(%eax),%edx
0864da22 +0x07e:  lea    -0x18(%ebp),%eax
0864da25 +0x081:  mov    %edx,0x4(%esp)
0864da29 +0x085:  mov    %eax,(%esp)
0864da2c +0x088:  call   082373c8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xca72>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xca72
0864da31 +0x08d:  sub    $0x4,%esp
0864da34 +0x090:  mov    0x8(%ebp),%eax
0864da37 +0x093:  lea    0x711ec(%eax),%edx
0864da3d +0x099:  lea    -0x1c(%ebp),%eax
0864da40 +0x09c:  mov    %edx,0x4(%esp)
0864da44 +0x0a0:  mov    %eax,(%esp)
0864da47 +0x0a3:  call   0826c43e <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0xd0c>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0xd0c
0864da4c +0x0a8:  sub    $0x4,%esp
0864da4f +0x0ab:  jmp    0864da78 <+0xd4>
0864da51 +0x0ad:  lea    -0x18(%ebp),%eax
0864da54 +0x0b0:  mov    %eax,(%esp)
0864da57 +0x0b3:  call   0823742a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcad4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcad4
0864da5c +0x0b8:  mov    (%eax),%eax
0864da5e +0x0ba:  mov    %eax,0x4(%esp)
0864da62 +0x0be:  lea    -0x14(%ebp),%eax
0864da65 +0x0c1:  mov    %eax,(%esp)
0864da68 +0x0c4:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0864da6d +0x0c9:  lea    -0x18(%ebp),%eax
0864da70 +0x0cc:  mov    %eax,(%esp)
0864da73 +0x0cf:  call   0823d3de <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x855c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x855c
0864da78 +0x0d4:  lea    -0x1c(%ebp),%eax
0864da7b +0x0d7:  mov    %eax,0x4(%esp)
0864da7f +0x0db:  lea    -0x18(%ebp),%eax
0864da82 +0x0de:  mov    %eax,(%esp)
0864da85 +0x0e1:  call   0826c462 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0xd30>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0xd30
0864da8a +0x0e6:  test   %al,%al
0864da8c +0x0e8:  jne    0864da51 <+0xad>
0864da8e +0x0ea:  jmp    0864dac8 <+0x124>
0864da90 +0x0ec:  movl   $0x0,0x4(%esp)
0864da98 +0x0f4:  lea    -0x14(%ebp),%eax
0864da9b +0x0f7:  mov    %eax,(%esp)
0864da9e +0x0fa:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0864daa3 +0x0ff:  movl   $0x1,0x4(%esp)
0864daab +0x107:  lea    -0x14(%ebp),%eax
0864daae +0x10a:  mov    %eax,(%esp)
0864dab1 +0x10d:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0864dab6 +0x112:  mov    0x10(%ebp),%eax
0864dab9 +0x115:  mov    %eax,0x4(%esp)
0864dabd +0x119:  lea    -0x14(%ebp),%eax
0864dac0 +0x11c:  mov    %eax,(%esp)
0864dac3 +0x11f:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0864dac8 +0x124:  movl   $0x1,0x4(%esp)
0864dad0 +0x12c:  lea    -0x14(%ebp),%eax
0864dad3 +0x12f:  mov    %eax,(%esp)
0864dad6 +0x132:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0864dadb +0x137:  lea    -0x14(%ebp),%eax
0864dade +0x13a:  mov    %eax,0x4(%esp)
0864dae2 +0x13e:  mov    0x8(%ebp),%eax
0864dae5 +0x141:  mov    %eax,(%esp)
0864dae8 +0x144:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0864daed +0x149:  jmp    0864db0a <+0x166>
0864daef +0x14b:  mov    %edx,%ebx
0864daf1 +0x14d:  mov    %eax,%esi
0864daf3 +0x14f:  lea    -0x14(%ebp),%eax
0864daf6 +0x152:  mov    %eax,(%esp)
0864daf9 +0x155:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0864dafe +0x15a:  mov    %esi,%eax
0864db00 +0x15c:  mov    %ebx,%edx
0864db02 +0x15e:  mov    %eax,(%esp)
0864db05 +0x161:  call   08ae3750 <_Unwind_Resume>
0864db0a +0x166:  lea    -0x14(%ebp),%eax
0864db0d +0x169:  mov    %eax,(%esp)
0864db10 +0x16c:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0864db15 +0x171:  lea    -0x8(%ebp),%esp
0864db18 +0x174:  add    $0x0,%esp
0864db1b +0x177:  pop    %ebx
0864db1c +0x178:  pop    %esi
0864db1d +0x179:  pop    %ebp
0864db1e +0x17a:  ret
0864db1f +0x17b:  nop
```

## 反编译 C

```c
// CUser::SendRestrictedGoods @ 0x864d9a4

/* CUser::SendRestrictedGoods(bool, int) */

void __thiscall CUser::SendRestrictedGoods(CUser *this,bool param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  _List_iterator local_20 [4];
  _List_iterator<int> local_1c [4];
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 0864d9d3 to 0864daec has its CatchHandler @ 0864daef */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x44);
  if (param_1) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,0);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,1);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,param_2);
  }
  else {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,1);
    iVar2 = std::list<int,std::allocator<int>>::size();
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,iVar2);
    std::list<int,std::allocator<int>>::begin();
    std::list<int,std::allocator<int>>::end();
    while (cVar1 = std::_List_iterator<int>::operator!=(local_1c,local_20), cVar1 != '\0') {
      piVar3 = (int *)std::_List_iterator<int>::operator*(local_1c);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,*piVar3);
      std::_List_iterator<int>::operator++(local_1c);
    }
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  Send(this,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}
```

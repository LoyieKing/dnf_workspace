# MakeMailBoxListPacket

`_ZN8WongWork14CMailBoxHelper21MakeMailBoxListPacketEP5CUserP11PacketGuard`

`WongWork::CMailBoxHelper::MakeMailBoxListPacket(CUser*, PacketGuard*)`

| 类 | 地址 |
|---|---|
| `WongWork::CMailBoxHelper` | `0x08555118` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08555118  _ZN8WongWork14CMailBoxHelper21MakeMailBoxListPacketEP5CUserP11PacketGuard
#           WongWork::CMailBoxHelper::MakeMailBoxListPacket(CUser*, PacketGuard*)
# range [0x08555118, 0x085552ab]
08555118 +0x000:  push   %ebp
08555119 +0x001:  mov    %esp,%ebp
0855511b +0x003:  sub    $0x38,%esp
0855511e +0x006:  mov    0x8(%ebp),%eax
08555121 +0x009:  mov    %eax,(%esp)
08555124 +0x00c:  call   0823020c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x58b6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x58b6
08555129 +0x011:  mov    %eax,-0x14(%ebp)
0855512c +0x014:  cmpl   $0x0,-0x14(%ebp)
08555130 +0x018:  je     085552a9 <+0x191>
08555136 +0x01e:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0855513d +0x025:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08555142 +0x02a:  mov    %eax,-0x10(%ebp)
08555145 +0x02d:  mov    0xc(%ebp),%eax
08555148 +0x030:  movl   $0x61,0x8(%esp)
08555150 +0x038:  movl   $0x0,0x4(%esp)
08555158 +0x040:  mov    %eax,(%esp)
0855515b +0x043:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08555160 +0x048:  movl   $0x0,-0xc(%ebp)
08555167 +0x04f:  mov    0xc(%ebp),%eax
0855516a +0x052:  mov    %eax,(%esp)
0855516d +0x055:  call   08110b4c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x5e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x5e
08555172 +0x05a:  mov    %eax,-0x20(%ebp)
08555175 +0x05d:  mov    -0x14(%ebp),%eax
08555178 +0x060:  mov    %eax,(%esp)
0855517b +0x063:  call   08234566 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9c10>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9c10
08555180 +0x068:  mov    0xc(%ebp),%edx
08555183 +0x06b:  mov    %eax,0x4(%esp)
08555187 +0x06f:  mov    %edx,(%esp)
0855518a +0x072:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0855518f +0x077:  mov    0xc(%ebp),%eax
08555192 +0x07a:  movl   $0x0,0x4(%esp)
0855519a +0x082:  mov    %eax,(%esp)
0855519d +0x085:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085551a2 +0x08a:  mov    -0x14(%ebp),%eax
085551a5 +0x08d:  lea    0x40(%eax),%edx
085551a8 +0x090:  lea    -0x1c(%ebp),%eax
085551ab +0x093:  mov    %edx,0x4(%esp)
085551af +0x097:  mov    %eax,(%esp)
085551b2 +0x09a:  call   085581cc <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0xd2d>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0xd2d
085551b7 +0x09f:  sub    $0x4,%esp
085551ba +0x0a2:  lea    -0x1c(%ebp),%eax
085551bd +0x0a5:  mov    %eax,0x4(%esp)
085551c1 +0x0a9:  lea    -0x24(%ebp),%eax
085551c4 +0x0ac:  mov    %eax,(%esp)
085551c7 +0x0af:  call   085586f8 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x1259>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x1259
085551cc +0x0b4:  mov    -0x14(%ebp),%eax
085551cf +0x0b7:  lea    0x40(%eax),%edx
085551d2 +0x0ba:  lea    -0x18(%ebp),%eax
085551d5 +0x0bd:  mov    %edx,0x4(%esp)
085551d9 +0x0c1:  mov    %eax,(%esp)
085551dc +0x0c4:  call   085581a6 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0xd07>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0xd07
085551e1 +0x0c9:  sub    $0x4,%esp
085551e4 +0x0cc:  lea    -0x18(%ebp),%eax
085551e7 +0x0cf:  mov    %eax,0x4(%esp)
085551eb +0x0d3:  lea    -0x28(%ebp),%eax
085551ee +0x0d6:  mov    %eax,(%esp)
085551f1 +0x0d9:  call   085586f8 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x1259>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x1259
085551f6 +0x0de:  jmp    0855525e <+0x146>
085551f8 +0x0e0:  lea    -0x24(%ebp),%eax
085551fb +0x0e3:  mov    %eax,(%esp)
085551fe +0x0e6:  call   085586ea <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x124b>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x124b
08555203 +0x0eb:  mov    0x4(%eax),%eax
08555206 +0x0ee:  mov    %eax,(%esp)
08555209 +0x0f1:  call   085574d4 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x35>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x35
0855520e +0x0f6:  mov    %eax,0x4(%esp)
08555212 +0x0fa:  mov    -0x14(%ebp),%eax
08555215 +0x0fd:  mov    %eax,(%esp)
08555218 +0x100:  call   085577ac <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x30d>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x30d
0855521d +0x105:  test   %al,%al
0855521f +0x107:  jne    08555252 <+0x13a>
08555221 +0x109:  addl   $0x1,-0xc(%ebp)
08555225 +0x10d:  lea    -0x24(%ebp),%eax
08555228 +0x110:  mov    %eax,(%esp)
0855522b +0x113:  call   085586ea <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x124b>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x124b
08555230 +0x118:  mov    0x4(%eax),%eax
08555233 +0x11b:  mov    0x8(%ebp),%edx
08555236 +0x11e:  mov    %edx,0xc(%esp)
0855523a +0x122:  mov    -0x10(%ebp),%edx
0855523d +0x125:  mov    %edx,0x8(%esp)
08555241 +0x129:  mov    0xc(%ebp),%edx
08555244 +0x12c:  mov    %edx,0x4(%esp)
08555248 +0x130:  mov    %eax,(%esp)
0855524b +0x133:  call   08551a36 <_ZNK8WongWork8CMailBox5CMail10MakePacketEP11PacketGuardlPK5CUser>  ; WongWork::CMailBox::CMail::MakePacket(PacketGuard*, long, CUser const*) const
08555250 +0x138:  jmp    08555253 <+0x13b>
08555252 +0x13a:  nop
08555253 +0x13b:  lea    -0x24(%ebp),%eax
08555256 +0x13e:  mov    %eax,(%esp)
08555259 +0x141:  call   08558708 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x1269>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x1269
0855525e +0x146:  lea    -0x28(%ebp),%eax
08555261 +0x149:  mov    %eax,0x4(%esp)
08555265 +0x14d:  lea    -0x24(%ebp),%eax
08555268 +0x150:  mov    %eax,(%esp)
0855526b +0x153:  call   08558754 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x12b5>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x12b5
08555270 +0x158:  test   %al,%al
08555272 +0x15a:  jne    085551f8 <+0xe0>
08555274 +0x15c:  mov    0xc(%ebp),%eax
08555277 +0x15f:  mov    -0xc(%ebp),%edx
0855527a +0x162:  mov    %edx,0x8(%esp)
0855527e +0x166:  lea    -0x20(%ebp),%edx
08555281 +0x169:  mov    %edx,0x4(%esp)
08555285 +0x16d:  mov    %eax,(%esp)
08555288 +0x170:  call   08110b28 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x3a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x3a
0855528d +0x175:  mov    -0x14(%ebp),%eax
08555290 +0x178:  mov    %eax,(%esp)
08555293 +0x17b:  call   0823455a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9c04>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9c04
08555298 +0x180:  mov    0xc(%ebp),%edx
0855529b +0x183:  mov    %eax,0x4(%esp)
0855529f +0x187:  mov    %edx,(%esp)
085552a2 +0x18a:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085552a7 +0x18f:  jmp    085552aa <+0x192>
085552a9 +0x191:  nop
085552aa +0x192:  leave
085552ab +0x193:  ret
```

## 反编译 C

```c
// WongWork::CMailBoxHelper::MakeMailBoxListPacket @ 0x8555118

/* WongWork::CMailBoxHelper::MakeMailBoxListPacket(CUser*, PacketGuard*) */

void WongWork::CMailBoxHelper::MakeMailBoxListPacket(CUser *param_1,PacketGuard *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  _Rb_tree_const_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>> local_2c [4];
  _Rb_tree_const_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>> local_28 [4];
  int local_24;
  map<unsigned_int,WongWork::CMailBox::CMail*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>>
  local_20 [4];
  map<unsigned_int,WongWork::CMailBox::CMail*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>>
  local_1c [4];
  CMailBox *local_18;
  long local_14;
  int local_10;
  
  local_18 = (CMailBox *)CUser::GetMailBox(param_1);
  if (local_18 != (CMailBox *)0x0) {
    local_14 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)param_2,0,0x61);
    local_10 = 0;
    local_24 = InterfacePacketBuf::get_index((InterfacePacketBuf *)param_2);
    iVar2 = CMailBox::GetRecvSize(local_18);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_2,iVar2);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_2,0);
    std::
    map<unsigned_int,WongWork::CMailBox::CMail*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>>
    ::begin(local_20);
    std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>::
    _Rb_tree_const_iterator(local_28,(_Rb_tree_iterator *)local_20);
    std::
    map<unsigned_int,WongWork::CMailBox::CMail*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>>
    ::end(local_1c);
    std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>::
    _Rb_tree_const_iterator(local_2c,(_Rb_tree_iterator *)local_1c);
    while( true ) {
      cVar1 = std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>
              ::operator!=(local_28,(_Rb_tree_const_iterator *)local_2c);
      if (cVar1 == '\0') break;
      iVar2 = std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>
              ::operator->(local_28);
      uVar3 = CMailBox::CMail::GetLetterId(*(CMail **)(iVar2 + 4));
      cVar1 = CMailBox::FindPackageLoadLack(local_18,uVar3);
      if (cVar1 == '\0') {
        local_10 = local_10 + 1;
        iVar2 = std::
                _Rb_tree_const_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>::
                operator->(local_28);
        CMailBox::CMail::MakePacket(*(CMail **)(iVar2 + 4),param_2,local_14,param_1);
      }
      std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>::
      operator++(local_28);
    }
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_2,&local_24,local_10);
    iVar2 = CMailBox::GetNotLoadedMailCount(local_18);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)param_2,iVar2);
  }
  return;
}
```

# makePacket_BuyingStatusList

`_ZN10CQuestShop27makePacket_BuyingStatusListER11PacketGuardb`

`CQuestShop::makePacket_BuyingStatusList(PacketGuard&, bool)`

| 类 | 地址 |
|---|---|
| `CQuestShop` | `0x085ef5dc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085ef5dc  _ZN10CQuestShop27makePacket_BuyingStatusListER11PacketGuardb
#           CQuestShop::makePacket_BuyingStatusList(PacketGuard&, bool)
# range [0x085ef5dc, 0x085ef6fb]
085ef5dc +0x000:  push   %ebp
085ef5dd +0x001:  mov    %esp,%ebp
085ef5df +0x003:  sub    $0x48,%esp
085ef5e2 +0x006:  mov    0x10(%ebp),%eax
085ef5e5 +0x009:  mov    %al,-0x2c(%ebp)
085ef5e8 +0x00c:  movzbl -0x2c(%ebp),%eax
085ef5ec +0x010:  xor    $0x1,%eax
085ef5ef +0x013:  test   %al,%al
085ef5f1 +0x015:  je     085ef5fe <+0x22>
085ef5f3 +0x017:  mov    0x8(%ebp),%eax
085ef5f6 +0x01a:  add    $0x8,%eax
085ef5f9 +0x01d:  mov    %eax,-0x1c(%ebp)
085ef5fc +0x020:  jmp    085ef607 <+0x2b>
085ef5fe +0x022:  mov    0x8(%ebp),%eax
085ef601 +0x025:  add    $0x20,%eax
085ef604 +0x028:  mov    %eax,-0x1c(%ebp)
085ef607 +0x02b:  mov    -0x1c(%ebp),%eax
085ef60a +0x02e:  mov    %eax,(%esp)
085ef60d +0x031:  call   08450242 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2e58>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2e58
085ef612 +0x036:  mov    %al,-0x15(%ebp)
085ef615 +0x039:  movzbl -0x15(%ebp),%edx
085ef619 +0x03d:  mov    0xc(%ebp),%eax
085ef61c +0x040:  mov    %edx,0x4(%esp)
085ef620 +0x044:  mov    %eax,(%esp)
085ef623 +0x047:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085ef628 +0x04c:  lea    -0x20(%ebp),%eax
085ef62b +0x04f:  mov    -0x1c(%ebp),%edx
085ef62e +0x052:  mov    %edx,0x4(%esp)
085ef632 +0x056:  mov    %eax,(%esp)
085ef635 +0x059:  call   08450180 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2d96>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2d96
085ef63a +0x05e:  sub    $0x4,%esp
085ef63d +0x061:  lea    -0x24(%ebp),%eax
085ef640 +0x064:  mov    -0x1c(%ebp),%edx
085ef643 +0x067:  mov    %edx,0x4(%esp)
085ef647 +0x06b:  mov    %eax,(%esp)
085ef64a +0x06e:  call   0845015a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2d70>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2d70
085ef64f +0x073:  sub    $0x4,%esp
085ef652 +0x076:  jmp    085ef6e0 <+0x104>
085ef657 +0x07b:  movl   $0xffffffff,-0x14(%ebp)
085ef65e +0x082:  lea    -0x24(%ebp),%eax
085ef661 +0x085:  mov    %eax,(%esp)
085ef664 +0x088:  call   084501ba <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2dd0>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2dd0
085ef669 +0x08d:  movzbl (%eax),%eax
085ef66c +0x090:  movzbl %al,%eax
085ef66f +0x093:  mov    %eax,-0x10(%ebp)
085ef672 +0x096:  lea    -0x24(%ebp),%eax
085ef675 +0x099:  mov    %eax,(%esp)
085ef678 +0x09c:  call   084501ba <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2dd0>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2dd0
085ef67d +0x0a1:  movzwl 0x2(%eax),%eax
085ef681 +0x0a5:  cwtl
085ef682 +0x0a6:  mov    %eax,-0xc(%ebp)
085ef685 +0x0a9:  cmpl   $0x4c,-0x10(%ebp)
085ef689 +0x0ad:  jle    085ef69b <+0xbf>
085ef68b +0x0af:  movl   $0xffffffff,-0x14(%ebp)
085ef692 +0x0b6:  movl   $0x0,-0xc(%ebp)
085ef699 +0x0bd:  jmp    085ef6b1 <+0xd5>
085ef69b +0x0bf:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085ef6a0 +0x0c4:  mov    -0x10(%ebp),%edx
085ef6a3 +0x0c7:  movzbl 0x63c0(%eax,%edx,1),%eax
085ef6ab +0x0cf:  movsbl %al,%eax
085ef6ae +0x0d2:  mov    %eax,-0x14(%ebp)
085ef6b1 +0x0d5:  mov    0xc(%ebp),%eax
085ef6b4 +0x0d8:  mov    -0x14(%ebp),%edx
085ef6b7 +0x0db:  mov    %edx,0x4(%esp)
085ef6bb +0x0df:  mov    %eax,(%esp)
085ef6be +0x0e2:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085ef6c3 +0x0e7:  mov    0xc(%ebp),%eax
085ef6c6 +0x0ea:  mov    -0xc(%ebp),%edx
085ef6c9 +0x0ed:  mov    %edx,0x4(%esp)
085ef6cd +0x0f1:  mov    %eax,(%esp)
085ef6d0 +0x0f4:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085ef6d5 +0x0f9:  lea    -0x24(%ebp),%eax
085ef6d8 +0x0fc:  mov    %eax,(%esp)
085ef6db +0x0ff:  call   084540e0 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x6cf6>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x6cf6
085ef6e0 +0x104:  lea    -0x20(%ebp),%eax
085ef6e3 +0x107:  mov    %eax,0x4(%esp)
085ef6e7 +0x10b:  lea    -0x24(%ebp),%eax
085ef6ea +0x10e:  mov    %eax,(%esp)
085ef6ed +0x111:  call   084501a6 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2dbc>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2dbc
085ef6f2 +0x116:  test   %al,%al
085ef6f4 +0x118:  jne    085ef657 <+0x7b>
085ef6fa +0x11e:  leave
085ef6fb +0x11f:  ret
```

## 反编译 C

```c
// CQuestShop::makePacket_BuyingStatusList @ 0x85ef5dc

/* CQuestShop::makePacket_BuyingStatusList(PacketGuard&, bool) */

void __thiscall
CQuestShop::makePacket_BuyingStatusList(CQuestShop *this,PacketGuard *param_1,bool param_2)

{
  char cVar1;
  byte *pbVar2;
  int iVar3;
  map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
  local_28 [4];
  map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
  local_24 [4];
  map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
  *local_20;
  byte local_19;
  int local_18;
  uint local_14;
  int local_10;
  
  if (param_2) {
    local_20 = (map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
                *)(this + 0x20);
  }
  else {
    local_20 = (map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
                *)(this + 8);
  }
  local_19 = std::
             map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
             ::size(local_20);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,(uint)local_19);
  std::
  map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
  ::end(local_24);
  std::
  map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
  ::begin(local_28);
  while( true ) {
    cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,short>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_char_const,short>> *)local_28,
                       (_Rb_tree_iterator *)local_24);
    if (cVar1 == '\0') break;
    local_18 = 0xffffffff;
    pbVar2 = (byte *)std::_Rb_tree_iterator<std::pair<unsigned_char_const,short>>::operator->
                               ((_Rb_tree_iterator<std::pair<unsigned_char_const,short>> *)local_28)
    ;
    local_14 = (uint)*pbVar2;
    iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,short>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_char_const,short>> *)local_28);
    local_10 = (int)*(short *)(iVar3 + 2);
    if ((int)local_14 < 0x4d) {
      iVar3 = G_CDataManager();
      local_18 = (int)*(char *)(iVar3 + 0x63c0 + local_14);
    }
    else {
      local_18 = -1;
      local_10 = 0;
    }
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,local_18);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,local_10);
    std::_Rb_tree_iterator<std::pair<unsigned_char_const,short>>::operator++
              ((_Rb_tree_iterator<std::pair<unsigned_char_const,short>> *)local_28);
  }
  return;
}
```

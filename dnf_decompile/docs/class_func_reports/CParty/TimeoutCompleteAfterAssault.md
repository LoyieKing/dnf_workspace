# TimeoutCompleteAfterAssault

`_ZN6CParty27TimeoutCompleteAfterAssaultEv`

`CParty::TimeoutCompleteAfterAssault()`

| 类 | 地址 |
|---|---|
| `CParty` | `0x0859a34e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0859a34e  _ZN6CParty27TimeoutCompleteAfterAssaultEv
#           CParty::TimeoutCompleteAfterAssault()
# range [0x0859a34e, 0x0859a48b]
0859a34e +0x000:  push   %ebp
0859a34f +0x001:  mov    %esp,%ebp
0859a351 +0x003:  push   %esi
0859a352 +0x004:  push   %ebx
0859a353 +0x005:  sub    $0x30,%esp
0859a356 +0x008:  mov    0x8(%ebp),%eax
0859a359 +0x00b:  movzbl 0x118(%eax),%eax
0859a360 +0x012:  test   %al,%al
0859a362 +0x014:  je     0859a378 <+0x2a>
0859a364 +0x016:  mov    0x8(%ebp),%eax
0859a367 +0x019:  movb   $0x0,0x118(%eax)
0859a36e +0x020:  mov    $0x0,%eax
0859a373 +0x025:  jmp    0859a485 <+0x137>
0859a378 +0x02a:  mov    0x8(%ebp),%eax
0859a37b +0x02d:  mov    %eax,(%esp)
0859a37e +0x030:  call   085b3f72 <_ZN6CParty21recv_party_packet_allEv>  ; CParty::recv_party_packet_all()
0859a383 +0x035:  xor    $0x1,%eax
0859a386 +0x038:  test   %al,%al
0859a388 +0x03a:  je     0859a480 <+0x132>
0859a38e +0x040:  movl   $0x0,-0xc(%ebp)
0859a395 +0x047:  jmp    0859a471 <+0x123>
0859a39a +0x04c:  mov    -0xc(%ebp),%eax
0859a39d +0x04f:  mov    %eax,0x4(%esp)
0859a3a1 +0x053:  mov    0x8(%ebp),%eax
0859a3a4 +0x056:  mov    %eax,(%esp)
0859a3a7 +0x059:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
0859a3ac +0x05e:  xor    $0x1,%eax
0859a3af +0x061:  test   %al,%al
0859a3b1 +0x063:  jne    0859a46c <+0x11e>
0859a3b7 +0x069:  mov    0x8(%ebp),%eax
0859a3ba +0x06c:  lea    0x1dc(%eax),%edx
0859a3c0 +0x072:  mov    -0xc(%ebp),%eax
0859a3c3 +0x075:  mov    %eax,0x4(%esp)
0859a3c7 +0x079:  mov    %edx,(%esp)
0859a3ca +0x07c:  call   085bf406 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x964>  ; global constructors keyed to CParty::cMember::cMember()+0x964
0859a3cf +0x081:  xor    $0x1,%eax
0859a3d2 +0x084:  test   %al,%al
0859a3d4 +0x086:  je     0859a46d <+0x11f>
0859a3da +0x08c:  mov    -0xc(%ebp),%eax
0859a3dd +0x08f:  mov    %eax,0x4(%esp)
0859a3e1 +0x093:  mov    0x8(%ebp),%eax
0859a3e4 +0x096:  mov    %eax,(%esp)
0859a3e7 +0x099:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
0859a3ec +0x09e:  mov    %eax,(%esp)
0859a3ef +0x0a1:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
0859a3f4 +0x0a6:  mov    %eax,%esi
0859a3f6 +0x0a8:  mov    0x8(%ebp),%eax
0859a3f9 +0x0ab:  mov    %eax,(%esp)
0859a3fc +0x0ae:  call   0822d846 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2ef0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2ef0
0859a401 +0x0b3:  mov    %eax,%ebx
0859a403 +0x0b5:  movl   $0x0,0xc(%esp)
0859a40b +0x0bd:  movl   $0x1fa,0x8(%esp)
0859a413 +0x0c5:  movl   $&_ZZN6CParty27TimeoutCompleteAfterAssaultEvE19__PRETTY_FUNCTION__,0x4(%esp)
0859a41b +0x0cd:  lea    -0x1c(%ebp),%eax
0859a41e +0x0d0:  mov    %eax,(%esp)
0859a421 +0x0d3:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0859a426 +0x0d8:  mov    %esi,0xc(%esp)
0859a42a +0x0dc:  mov    %ebx,0x8(%esp)
0859a42e +0x0e0:  movl   $"CParty::TimeoutCompleteAfterAssault(index:%d, name:%s)",0x4(%esp)
0859a436 +0x0e8:  lea    -0x1c(%ebp),%eax
0859a439 +0x0eb:  mov    %eax,(%esp)
0859a43c +0x0ee:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0859a441 +0x0f3:  mov    -0xc(%ebp),%eax
0859a444 +0x0f6:  mov    %eax,0x4(%esp)
0859a448 +0x0fa:  mov    0x8(%ebp),%eax
0859a44b +0x0fd:  mov    %eax,(%esp)
0859a44e +0x100:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
0859a453 +0x105:  movl   $0x2,0x8(%esp)
0859a45b +0x10d:  mov    %eax,0x4(%esp)
0859a45f +0x111:  mov    0x8(%ebp),%eax
0859a462 +0x114:  mov    %eax,(%esp)
0859a465 +0x117:  call   0859c114 <_ZN6CParty10leave_userEP5CUser20ENUM_PARTY_INFO_TYPE>  ; CParty::leave_user(CUser*, ENUM_PARTY_INFO_TYPE)
0859a46a +0x11c:  jmp    0859a46d <+0x11f>
0859a46c +0x11e:  nop
0859a46d +0x11f:  addl   $0x1,-0xc(%ebp)
0859a471 +0x123:  cmpl   $0x3,-0xc(%ebp)
0859a475 +0x127:  setle  %al
0859a478 +0x12a:  test   %al,%al
0859a47a +0x12c:  jne    0859a39a <+0x4c>
0859a480 +0x132:  mov    $0x1,%eax
0859a485 +0x137:  add    $0x30,%esp
0859a488 +0x13a:  pop    %ebx
0859a489 +0x13b:  pop    %esi
0859a48a +0x13c:  pop    %ebp
0859a48b +0x13d:  ret
```

## 反编译 C

```c
// CParty::TimeoutCompleteAfterAssault @ 0x859a34e

/* CParty::TimeoutCompleteAfterAssault() */

undefined4 __thiscall CParty::TimeoutCompleteAfterAssault(CParty *this)

{
  char cVar1;
  undefined4 uVar2;
  CUserCharacInfo *this_00;
  undefined4 uVar3;
  cMyTrace local_20 [16];
  int local_10;
  
  if (this[0x118] == (CParty)0x0) {
    cVar1 = recv_party_packet_all(this);
    if (cVar1 != '\x01') {
      for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
        cVar1 = _checkValidUser(this,local_10);
        if (cVar1 == '\x01') {
          cVar1 = CPartyResultRecvFlag::IsRecv((CPartyResultRecvFlag *)(this + 0x1dc),local_10);
          if (cVar1 != '\x01') {
            this_00 = (CUserCharacInfo *)get_user(this,local_10);
            uVar2 = CUserCharacInfo::getCurCharacName(this_00);
            uVar3 = GetPartyIndex(this);
            cMyTrace::cMyTrace(local_20,"bool CParty::TimeoutCompleteAfterAssault()",0x1fa,0);
            cMyTrace::operator()
                      (local_20,"CParty::TimeoutCompleteAfterAssault(index:%d, name:%s)",uVar3,uVar2
                      );
            uVar2 = get_user(this,local_10);
            leave_user(this,uVar2,2);
          }
        }
      }
    }
    uVar2 = 1;
  }
  else {
    this[0x118] = (CParty)0x0;
    uVar2 = 0;
  }
  return uVar2;
}
```

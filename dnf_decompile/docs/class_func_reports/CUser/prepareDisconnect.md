# prepareDisconnect

`_ZN5CUser17prepareDisconnectEv`

`CUser::prepareDisconnect()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x086487ea` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086487ea  _ZN5CUser17prepareDisconnectEv
#           CUser::prepareDisconnect()
# range [0x086487ea, 0x086489f3]
086487ea +0x000:  push   %ebp
086487eb +0x001:  mov    %esp,%ebp
086487ed +0x003:  push   %esi
086487ee +0x004:  push   %ebx
086487ef +0x005:  sub    $0x30,%esp
086487f2 +0x008:  mov    0x8(%ebp),%eax
086487f5 +0x00b:  mov    %eax,(%esp)
086487f8 +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
086487fd +0x013:  cmp    $0x1,%eax
08648800 +0x016:  setle  %al
08648803 +0x019:  test   %al,%al
08648805 +0x01b:  jne    086489ec <+0x202>
0864880b +0x021:  mov    0x8(%ebp),%eax
0864880e +0x024:  mov    %eax,(%esp)
08648811 +0x027:  call   0823021a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x58c4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x58c4
08648816 +0x02c:  xor    $0x1,%eax
08648819 +0x02f:  test   %al,%al
0864881b +0x031:  je     086488a3 <+0xb9>
08648821 +0x037:  movl   $0x1,0x4(%esp)
08648829 +0x03f:  mov    0x8(%ebp),%eax
0864882c +0x042:  mov    %eax,(%esp)
0864882f +0x045:  call   0823022a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x58d4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x58d4
08648834 +0x04a:  mov    0x8(%ebp),%eax
08648837 +0x04d:  mov    %eax,(%esp)
0864883a +0x050:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
0864883f +0x055:  movl   $0x0,0x14(%esp)
08648847 +0x05d:  movl   $0x0,0x10(%esp)
0864884f +0x065:  movl   $0x1,0xc(%esp)
08648857 +0x06d:  movl   $0x3b9,0x8(%esp)
0864885f +0x075:  mov    0x8(%ebp),%edx
08648862 +0x078:  mov    %edx,0x4(%esp)
08648866 +0x07c:  mov    %eax,(%esp)
08648869 +0x07f:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
0864886e +0x084:  mov    0x8(%ebp),%eax
08648871 +0x087:  mov    0x8e0fc(%eax),%eax
08648877 +0x08d:  lea    0x1(%eax),%edx
0864887a +0x090:  mov    0x8(%ebp),%eax
0864887d +0x093:  mov    %edx,0x8e0fc(%eax)
08648883 +0x099:  mov    0x8(%ebp),%eax
08648886 +0x09c:  mov    0x8e0fc(%eax),%ebx
0864888c +0x0a2:  mov    0x8(%ebp),%eax
0864888f +0x0a5:  mov    %eax,(%esp)
08648892 +0x0a8:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08648897 +0x0ad:  mov    %ebx,0x4(%esp)
0864889b +0x0b1:  mov    %eax,(%esp)
0864889e +0x0b4:  call   084281ae <_ZN21DB_ForceSaveSimpleSSO11makeRequestEji>  ; DB_ForceSaveSimpleSSO::makeRequest(unsigned int, int)
086488a3 +0x0b9:  mov    0x8(%ebp),%eax
086488a6 +0x0bc:  mov    %eax,(%esp)
086488a9 +0x0bf:  call   0822fd20 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53ca>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53ca
086488ae +0x0c4:  mov    %eax,(%esp)
086488b1 +0x0c7:  call   0822ef58 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4602>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4602
086488b6 +0x0cc:  cmp    $0x1,%eax
086488b9 +0x0cf:  je     086488d3 <+0xe9>
086488bb +0x0d1:  mov    0x8(%ebp),%eax
086488be +0x0d4:  mov    %eax,(%esp)
086488c1 +0x0d7:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
086488c6 +0x0dc:  mov    %eax,(%esp)
086488c9 +0x0df:  call   0822efc0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x466a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x466a
086488ce +0x0e4:  cmp    $0x1,%eax
086488d1 +0x0e7:  jne    086488da <+0xf0>
086488d3 +0x0e9:  mov    $0x1,%eax
086488d8 +0x0ee:  jmp    086488df <+0xf5>
086488da +0x0f0:  mov    $0x0,%eax
086488df +0x0f5:  test   %al,%al
086488e1 +0x0f7:  je     086488ee <+0x104>
086488e3 +0x0f9:  mov    0x8(%ebp),%eax
086488e6 +0x0fc:  mov    %eax,(%esp)
086488e9 +0x0ff:  call   0820a580 <_ZN33Dispatcher_SecurityCardAuthCancel7processEP5CUser>  ; Dispatcher_SecurityCardAuthCancel::process(CUser*)
086488ee +0x104:  mov    0x8(%ebp),%eax
086488f1 +0x107:  mov    %eax,(%esp)
086488f4 +0x10a:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
086488f9 +0x10f:  mov    %eax,%esi
086488fb +0x111:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08648900 +0x116:  mov    %eax,(%esp)
08648903 +0x119:  call   08234516 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9bc0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9bc0
08648908 +0x11e:  mov    %eax,%ebx
0864890a +0x120:  movl   $0x0,0xc(%esp)
08648912 +0x128:  movl   $0x8ed,0x8(%esp)
0864891a +0x130:  movl   $&_ZZN5CUser17prepareDisconnectEvE19__PRETTY_FUNCTION__,0x4(%esp)
08648922 +0x138:  lea    -0x18(%ebp),%eax
08648925 +0x13b:  mov    %eax,(%esp)
08648928 +0x13e:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0864892d +0x143:  mov    %esi,0xc(%esp)
08648931 +0x147:  mov    %ebx,0x8(%esp)
08648935 +0x14b:  movl   $"[Taiwan, Antibot] Delete client. (sequence:%d, mid:%u)",0x4(%esp)
0864893d +0x153:  lea    -0x18(%ebp),%eax
08648940 +0x156:  mov    %eax,(%esp)
08648943 +0x159:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08648948 +0x15e:  mov    &_ZN10GlobalData17s_antibotChecker_E,%eax
0864894d +0x163:  mov    (%eax),%eax
0864894f +0x165:  add    $0x8,%eax
08648952 +0x168:  mov    (%eax),%esi
08648954 +0x16a:  mov    0x8(%ebp),%eax
08648957 +0x16d:  mov    %eax,(%esp)
0864895a +0x170:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0864895f +0x175:  mov    %eax,%ebx
08648961 +0x177:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08648966 +0x17c:  mov    %eax,(%esp)
08648969 +0x17f:  call   08234516 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9bc0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9bc0
0864896e +0x184:  mov    &_ZN10GlobalData17s_antibotChecker_E,%edx
08648974 +0x18a:  mov    %ebx,0xc(%esp)
08648978 +0x18e:  movl   $0x0,0x8(%esp)
08648980 +0x196:  mov    %eax,0x4(%esp)
08648984 +0x19a:  mov    %edx,(%esp)
08648987 +0x19d:  call   *%esi
08648989 +0x19f:  mov    &_ZN10GlobalData17s_antibotChecker_E,%eax
0864898e +0x1a4:  mov    (%eax),%eax
08648990 +0x1a6:  add    $0x24,%eax
08648993 +0x1a9:  mov    (%eax),%ebx
08648995 +0x1ab:  mov    0x8(%ebp),%eax
08648998 +0x1ae:  mov    %eax,(%esp)
0864899b +0x1b1:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
086489a0 +0x1b6:  mov    &_ZN10GlobalData17s_antibotChecker_E,%edx
086489a6 +0x1bc:  mov    %eax,0x4(%esp)
086489aa +0x1c0:  mov    %edx,(%esp)
086489ad +0x1c3:  call   *%ebx
086489af +0x1c5:  mov    0x8(%ebp),%eax
086489b2 +0x1c8:  add    $0x6ef92,%eax
086489b7 +0x1cd:  mov    %eax,(%esp)
086489ba +0x1d0:  call   08172fea <_ZN6Taiwan14GarenaAuthData12getTimeStampEv>  ; Taiwan::GarenaAuthData::getTimeStamp()
086489bf +0x1d5:  mov    %eax,%ebx
086489c1 +0x1d7:  mov    0x8(%ebp),%eax
086489c4 +0x1da:  mov    %eax,(%esp)
086489c7 +0x1dd:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
086489cc +0x1e2:  movzwl %ax,%esi
086489cf +0x1e5:  mov    0x8(%ebp),%eax
086489d2 +0x1e8:  mov    %eax,(%esp)
086489d5 +0x1eb:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
086489da +0x1f0:  mov    %ebx,0x8(%esp)
086489de +0x1f4:  mov    %esi,0x4(%esp)
086489e2 +0x1f8:  mov    %eax,(%esp)
086489e5 +0x1fb:  call   0815b89a <_ZN16DBUpdateExitTime11makeRequestEjij>  ; DBUpdateExitTime::makeRequest(unsigned int, int, unsigned int)
086489ea +0x200:  jmp    086489ed <+0x203>
086489ec +0x202:  nop
086489ed +0x203:  add    $0x30,%esp
086489f0 +0x206:  pop    %ebx
086489f1 +0x207:  pop    %esi
086489f2 +0x208:  pop    %ebp
086489f3 +0x209:  ret
```

## 反编译 C

```c
// CUser::prepareDisconnect @ 0x86487ea

/* CUser::prepareDisconnect() */

void __thiscall CUser::prepareDisconnect(CUser *this)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  CHackAnalyzer *pCVar5;
  uint uVar6;
  CSecurityCard *this_00;
  CPad *this_01;
  undefined4 uVar7;
  CEnvironment *pCVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  cMyTrace local_1c [16];
  
  iVar4 = get_state(this);
  if (iVar4 < 2) {
    return;
  }
  cVar3 = isHumanCertified(this);
  if (cVar3 != '\x01') {
    setHumanCertified(this,true);
    pCVar5 = (CHackAnalyzer *)getHackAnalyzer(this);
    WongWork::CHackAnalyzer::addServerHackCnt(pCVar5,this,0x3b9,1,0,0);
    *(int *)(this + 0x8e0fc) = *(int *)(this + 0x8e0fc) + 1;
    iVar4 = *(int *)(this + 0x8e0fc);
    uVar6 = get_acc_id(this);
    DB_ForceSaveSimpleSSO::makeRequest(uVar6,iVar4);
  }
  this_00 = (CSecurityCard *)getSecurityCard(this);
  iVar4 = WongWork::CSecurityCard::getRequestState(this_00);
  if (iVar4 != 1) {
    this_01 = (CPad *)getPad(this);
    iVar4 = Sanicova::CPad::getRequestState(this_01);
    if (iVar4 != 1) {
      bVar2 = false;
      goto LAB_086488df;
    }
  }
  bVar2 = true;
LAB_086488df:
  if (bVar2) {
    Dispatcher_SecurityCardAuthCancel::process(this);
  }
  uVar7 = get_acc_id(this);
  pCVar8 = (CEnvironment *)G_CEnvironment();
  uVar9 = CEnvironment::getProcessSequence(pCVar8);
  cMyTrace::cMyTrace(local_1c,"void CUser::prepareDisconnect()",0x8ed,0);
  cMyTrace::operator()
            (local_1c,"[Taiwan, Antibot] Delete client. (sequence:%d, mid:%u)",uVar9,uVar7);
  pcVar1 = *(code **)(*GlobalData::s_antibotChecker_ + 8);
  uVar7 = get_acc_id(this);
  pCVar8 = (CEnvironment *)G_CEnvironment();
  uVar9 = CEnvironment::getProcessSequence(pCVar8);
  (*pcVar1)(GlobalData::s_antibotChecker_,uVar9,0,uVar7);
  pcVar1 = *(code **)(*GlobalData::s_antibotChecker_ + 0x24);
  uVar7 = get_acc_id(this);
  (*pcVar1)(GlobalData::s_antibotChecker_,uVar7);
  uVar6 = Taiwan::GarenaAuthData::getTimeStamp((GarenaAuthData *)(this + 0x6ef92));
  uVar10 = get_unique_id(this);
  uVar11 = get_acc_id(this);
  DBUpdateExitTime::makeRequest(uVar11,uVar10 & 0xffff,uVar6);
  return;
}
```

# processEventPcRoomPlayTime

`_ZN13EventClassify15CPcRoomPlayTime26processEventPcRoomPlayTimeEP5CUser`

`EventClassify::CPcRoomPlayTime::processEventPcRoomPlayTime(CUser*)`

| 类 | 地址 |
|---|---|
| `EventClassify::CPcRoomPlayTime` | `0x0811089c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0811089c  _ZN13EventClassify15CPcRoomPlayTime26processEventPcRoomPlayTimeEP5CUser
#           EventClassify::CPcRoomPlayTime::processEventPcRoomPlayTime(CUser*)
# range [0x0811089c, 0x08110a37]
0811089c +0x000:  push   %ebp
0811089d +0x001:  mov    %esp,%ebp
0811089f +0x003:  push   %edi
081108a0 +0x004:  push   %esi
081108a1 +0x005:  push   %ebx
081108a2 +0x006:  sub    $0x6c,%esp
081108a5 +0x009:  mov    0xc(%ebp),%eax
081108a8 +0x00c:  mov    %eax,(%esp)
081108ab +0x00f:  call   0868f7ba <_ZN5CUser21collectPcRoomPlayTimeEv>  ; CUser::collectPcRoomPlayTime()
081108b0 +0x014:  mov    0xc(%ebp),%eax
081108b3 +0x017:  mov    %eax,(%esp)
081108b6 +0x01a:  call   08110e10 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x322>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x322
081108bb +0x01f:  mov    0x8(%ebp),%edx
081108be +0x022:  mov    0x1c(%edx),%edx
081108c1 +0x025:  mov    0xc(%edx),%edx
081108c4 +0x028:  cmp    %edx,%eax
081108c6 +0x02a:  setb   %al
081108c9 +0x02d:  test   %al,%al
081108cb +0x02f:  je     081108d7 <+0x3b>
081108cd +0x031:  mov    $0x13,%eax
081108d2 +0x036:  jmp    08110a30 <+0x194>
081108d7 +0x03b:  mov    0xc(%ebp),%eax
081108da +0x03e:  mov    %eax,(%esp)
081108dd +0x041:  call   08110dd0 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x2e2>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x2e2
081108e2 +0x046:  mov    0xc(%ebp),%eax
081108e5 +0x049:  mov    %eax,(%esp)
081108e8 +0x04c:  call   08110dec <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x2fe>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x2fe
081108ed +0x051:  mov    %eax,-0x4c(%ebp)
081108f0 +0x054:  mov    0xc(%ebp),%eax
081108f3 +0x057:  mov    %eax,(%esp)
081108f6 +0x05a:  call   08110e10 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x322>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x322
081108fb +0x05f:  mov    %eax,%edi
081108fd +0x061:  mov    0xc(%ebp),%eax
08110900 +0x064:  mov    %eax,(%esp)
08110903 +0x067:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08110908 +0x06c:  mov    %eax,%esi
0811090a +0x06e:  mov    0xc(%ebp),%eax
0811090d +0x071:  mov    %eax,(%esp)
08110910 +0x074:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08110915 +0x079:  mov    %eax,%ebx
08110917 +0x07b:  movl   $0x0,0xc(%esp)
0811091f +0x083:  movl   $0x8ea,0x8(%esp)
08110927 +0x08b:  movl   $&_ZZN13EventClassify15CPcRoomPlayTime26processEventPcRoomPlayTimeEP5CUserE19__PRETTY_FUNCTION__,0x4(%esp)
0811092f +0x093:  lea    -0x28(%ebp),%eax
08110932 +0x096:  mov    %eax,(%esp)
08110935 +0x099:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0811093a +0x09e:  mov    -0x4c(%ebp),%eax
0811093d +0x0a1:  mov    %eax,0x14(%esp)
08110941 +0x0a5:  mov    %edi,0x10(%esp)
08110945 +0x0a9:  mov    %esi,0xc(%esp)
08110949 +0x0ad:  mov    %ebx,0x8(%esp)
0811094d +0x0b1:  movl   $"<PCROOM_PLAY_TIME_EVENT> send_reward m_id(%d), charac_no(%d), total_time(%d), reward_cnt(%d)",0x4(%esp)
08110955 +0x0b9:  lea    -0x28(%ebp),%eax
08110958 +0x0bc:  mov    %eax,(%esp)
0811095b +0x0bf:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08110960 +0x0c4:  mov    0xc(%ebp),%eax
08110963 +0x0c7:  mov    %eax,(%esp)
08110966 +0x0ca:  call   08110dfe <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x310>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x310
0811096b +0x0cf:  mov    0xc(%ebp),%eax
0811096e +0x0d2:  mov    %eax,(%esp)
08110971 +0x0d5:  call   08110dec <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x2fe>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x2fe
08110976 +0x0da:  movzbl %al,%esi
08110979 +0x0dd:  mov    0xc(%ebp),%eax
0811097c +0x0e0:  mov    %eax,(%esp)
0811097f +0x0e3:  call   08110e10 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x322>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x322
08110984 +0x0e8:  mov    %eax,%ebx
08110986 +0x0ea:  mov    0xc(%ebp),%eax
08110989 +0x0ed:  mov    %eax,(%esp)
0811098c +0x0f0:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08110991 +0x0f5:  mov    %esi,0x8(%esp)
08110995 +0x0f9:  mov    %ebx,0x4(%esp)
08110999 +0x0fd:  mov    %eax,(%esp)
0811099c +0x100:  call   08447bd0 <_ZN26DB_SavePcRoomPlayTimeEvent11makeRequestEjjh>  ; DB_SavePcRoomPlayTimeEvent::makeRequest(unsigned int, unsigned int, unsigned char)
081109a1 +0x105:  lea    -0x3b(%ebp),%eax
081109a4 +0x108:  mov    %eax,(%esp)
081109a7 +0x10b:  call   08110c0a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x11c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x11c
081109ac +0x110:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081109b1 +0x115:  mov    %eax,(%esp)
081109b4 +0x118:  call   080f131e <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x3a0>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3a0
081109b9 +0x11d:  test   %al,%al
081109bb +0x11f:  je     081109cd <+0x131>
081109bd +0x121:  mov    0xc(%ebp),%eax
081109c0 +0x124:  mov    %eax,(%esp)
081109c3 +0x127:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
081109c8 +0x12c:  mov    %al,-0x31(%ebp)
081109cb +0x12f:  jmp    081109db <+0x13f>
081109cd +0x131:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
081109d2 +0x136:  mov    0x378(%eax),%eax
081109d8 +0x13c:  mov    %al,-0x31(%ebp)
081109db +0x13f:  mov    0xc(%ebp),%eax
081109de +0x142:  mov    %eax,(%esp)
081109e1 +0x145:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081109e6 +0x14a:  mov    %eax,-0x30(%ebp)
081109e9 +0x14d:  mov    0xc(%ebp),%eax
081109ec +0x150:  mov    %eax,(%esp)
081109ef +0x153:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
081109f4 +0x158:  mov    %eax,-0x2c(%ebp)
081109f7 +0x15b:  lea    -0x3b(%ebp),%ebx
081109fa +0x15e:  mov    0xc(%ebp),%eax
081109fd +0x161:  mov    %eax,(%esp)
08110a00 +0x164:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
08110a05 +0x169:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%edx
08110a0b +0x16f:  mov    %eax,0x4(%esp)
08110a0f +0x173:  mov    %edx,(%esp)
08110a12 +0x176:  call   0811208a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x159c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x159c
08110a17 +0x17b:  movl   $0x13,0x8(%esp)
08110a1f +0x183:  mov    %ebx,0x4(%esp)
08110a23 +0x187:  mov    %eax,(%esp)
08110a26 +0x18a:  call   08470df4 <_ZN19CMonitorServerProxy10SendPacketEPci>  ; CMonitorServerProxy::SendPacket(char*, int)
08110a2b +0x18f:  mov    $0x0,%eax
08110a30 +0x194:  add    $0x6c,%esp
08110a33 +0x197:  pop    %ebx
08110a34 +0x198:  pop    %esi
08110a35 +0x199:  pop    %edi
08110a36 +0x19a:  pop    %ebp
08110a37 +0x19b:  ret
```

## 反编译 C

```c
// EventClassify::CPcRoomPlayTime::processEventPcRoomPlayTime @ 0x811089c

/* EventClassify::CPcRoomPlayTime::processEventPcRoomPlayTime(CUser*) */

undefined4 __thiscall
EventClassify::CPcRoomPlayTime::processEventPcRoomPlayTime(CPcRoomPlayTime *this,CUser *param_1)

{
  uchar uVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  GameWorld *this_00;
  int iVar9;
  CMonitorServerProxy *this_01;
  Packet_PcRoomPlayTimeReward local_3f [10];
  undefined1 local_35;
  undefined4 local_34;
  undefined4 local_30;
  cMyTrace local_2c [28];
  
  CUser::collectPcRoomPlayTime(param_1);
  uVar3 = CUser::getTotalPcRoomPlayTime(param_1);
  if (uVar3 < *(uint *)(*(int *)(this + 0x1c) + 0xc)) {
    uVar4 = 0x13;
  }
  else {
    CUser::incPcRoomPlayTimeRewardCnt(param_1);
    uVar4 = CUser::getPcRoomPlayTimeRewardCnt(param_1);
    uVar5 = CUser::getTotalPcRoomPlayTime(param_1);
    uVar6 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    uVar7 = CUser::get_acc_id(param_1);
    cMyTrace::cMyTrace(local_2c,
                       "int EventClassify::CPcRoomPlayTime::processEventPcRoomPlayTime(CUser*)",
                       0x8ea,0);
    cMyTrace::operator()
              (local_2c,
               "<PCROOM_PLAY_TIME_EVENT> send_reward m_id(%d), charac_no(%d), total_time(%d), reward_cnt(%d)"
               ,uVar7,uVar6,uVar5,uVar4);
    CUser::resetTotalPcRoomPlayTime(param_1);
    uVar1 = CUser::getPcRoomPlayTimeRewardCnt(param_1);
    uVar3 = CUser::getTotalPcRoomPlayTime(param_1);
    uVar8 = CUser::get_acc_id(param_1);
    DB_SavePcRoomPlayTimeEvent::makeRequest(uVar8,uVar3,uVar1);
    Packet_PcRoomPlayTimeReward::Packet_PcRoomPlayTimeReward(local_3f);
    this_00 = (GameWorld *)G_GameWorld();
    cVar2 = GameWorld::IsIntegratedPvPBaseChannel(this_00);
    if (cVar2 == '\0') {
      iVar9 = G_CEnvironment();
      local_35 = (undefined1)*(undefined4 *)(iVar9 + 0x378);
    }
    else {
      local_35 = CUser::GetServerGroup(param_1);
    }
    local_34 = CUser::get_acc_id(param_1);
    local_30 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    uVar4 = CUser::GetServerGroup(param_1);
    this_01 = (CMonitorServerProxy *)
              CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                        (GlobalData::s_monitor_proxy_mgr,uVar4);
    CMonitorServerProxy::SendPacket(this_01,(char *)local_3f,0x13);
    uVar4 = 0;
  }
  return uVar4;
}
```

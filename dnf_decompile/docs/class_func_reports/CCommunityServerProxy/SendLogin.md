# SendLogin

`_ZN21CCommunityServerProxy9SendLoginEP5CUserP18SIG_LOAD_PVP_BUDDY`

`CCommunityServerProxy::SendLogin(CUser*, SIG_LOAD_PVP_BUDDY*)`

| 类 | 地址 |
|---|---|
| `CCommunityServerProxy` | `0x0846ca06` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0846ca06  _ZN21CCommunityServerProxy9SendLoginEP5CUserP18SIG_LOAD_PVP_BUDDY
#           CCommunityServerProxy::SendLogin(CUser*, SIG_LOAD_PVP_BUDDY*)
# range [0x0846ca06, 0x0846cb43]
0846ca06 +0x000:  push   %ebp
0846ca07 +0x001:  mov    %esp,%ebp
0846ca09 +0x003:  sub    $0x5c8,%esp
0846ca0f +0x009:  lea    -0x5aa(%ebp),%eax
0846ca15 +0x00f:  mov    %eax,(%esp)
0846ca18 +0x012:  call   0846ce14 <_GLOBAL__I__ZN21CCommunityServerProxyC2EPci+0xe7>  ; global constructors keyed to CCommunityServerProxy::CCommunityServerProxy(char*, int)+0xe7
0846ca1d +0x017:  mov    0xc(%ebp),%eax
0846ca20 +0x01a:  mov    %eax,(%esp)
0846ca23 +0x01d:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0846ca28 +0x022:  mov    %eax,-0x5a0(%ebp)
0846ca2e +0x028:  mov    0xc(%ebp),%eax
0846ca31 +0x02b:  mov    %eax,(%esp)
0846ca34 +0x02e:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0846ca39 +0x033:  mov    %eax,-0x59b(%ebp)
0846ca3f +0x039:  mov    0xc(%ebp),%eax
0846ca42 +0x03c:  mov    %eax,(%esp)
0846ca45 +0x03f:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
0846ca4a +0x044:  mov    %al,-0x59c(%ebp)
0846ca50 +0x04a:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0846ca55 +0x04f:  mov    %eax,(%esp)
0846ca58 +0x052:  call   0814aaca <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x869>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x869
0846ca5d +0x057:  mov    %al,-0x593(%ebp)
0846ca63 +0x05d:  mov    0xc(%ebp),%eax
0846ca66 +0x060:  mov    %eax,(%esp)
0846ca69 +0x063:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
0846ca6e +0x068:  mov    %eax,-0x597(%ebp)
0846ca74 +0x06e:  mov    0xc(%ebp),%eax
0846ca77 +0x071:  mov    %eax,(%esp)
0846ca7a +0x074:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0846ca7f +0x079:  mov    %eax,-0x592(%ebp)
0846ca85 +0x07f:  mov    0xc(%ebp),%eax
0846ca88 +0x082:  mov    %eax,(%esp)
0846ca8b +0x085:  call   0815741c <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x7b>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x7b
0846ca90 +0x08a:  mov    %al,-0x56e(%ebp)
0846ca96 +0x090:  mov    0xc(%ebp),%eax
0846ca99 +0x093:  mov    %eax,(%esp)
0846ca9c +0x096:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0846caa1 +0x09b:  mov    %al,-0x570(%ebp)
0846caa7 +0x0a1:  mov    0xc(%ebp),%eax
0846caaa +0x0a4:  mov    %eax,(%esp)
0846caad +0x0a7:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
0846cab2 +0x0ac:  mov    %al,-0x56f(%ebp)
0846cab8 +0x0b2:  mov    0xc(%ebp),%eax
0846cabb +0x0b5:  mov    %eax,(%esp)
0846cabe +0x0b8:  call   0867ec12 <_ZN5CUser6getSexEv>  ; CUser::getSex()
0846cac3 +0x0bd:  mov    %al,-0x56d(%ebp)
0846cac9 +0x0c3:  mov    0xc(%ebp),%eax
0846cacc +0x0c6:  mov    %eax,(%esp)
0846cacf +0x0c9:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
0846cad4 +0x0ce:  movl   $0x1d,0x8(%esp)
0846cadc +0x0d6:  mov    %eax,0x4(%esp)
0846cae0 +0x0da:  lea    -0x5aa(%ebp),%eax
0846cae6 +0x0e0:  add    $0x1c,%eax
0846cae9 +0x0e3:  mov    %eax,(%esp)
0846caec +0x0e6:  call   0807d8a0 <_init+0x198>
0846caf1 +0x0eb:  mov    0x10(%ebp),%eax
0846caf4 +0x0ee:  mov    (%eax),%eax
0846caf6 +0x0f0:  mov    %eax,-0x56c(%ebp)
0846cafc +0x0f6:  mov    0x10(%ebp),%eax
0846caff +0x0f9:  add    $0x4,%eax
0846cb02 +0x0fc:  movl   $0x560,0x8(%esp)
0846cb0a +0x104:  mov    %eax,0x4(%esp)
0846cb0e +0x108:  lea    -0x5aa(%ebp),%eax
0846cb14 +0x10e:  add    $0x42,%eax
0846cb17 +0x111:  mov    %eax,(%esp)
0846cb1a +0x114:  call   0807d8a0 <_init+0x198>
0846cb1f +0x119:  movzwl -0x5a8(%ebp),%eax
0846cb26 +0x120:  movzwl %ax,%edx
0846cb29 +0x123:  lea    -0x5aa(%ebp),%eax
0846cb2f +0x129:  mov    %edx,0x8(%esp)
0846cb33 +0x12d:  mov    %eax,0x4(%esp)
0846cb37 +0x131:  mov    0x8(%ebp),%eax
0846cb3a +0x134:  mov    %eax,(%esp)
0846cb3d +0x137:  call   0846c7c4 <_ZN21CCommunityServerProxy13SendTcpPacketEPci>  ; CCommunityServerProxy::SendTcpPacket(char*, int)
0846cb42 +0x13c:  leave
0846cb43 +0x13d:  ret
```

## 反编译 C

```c
// CCommunityServerProxy::SendLogin @ 0x846ca06

/* CCommunityServerProxy::SendLogin(CUser*, SIG_LOAD_PVP_BUDDY*) */

void __thiscall
CCommunityServerProxy::SendLogin
          (CCommunityServerProxy *this,CUser *param_1,SIG_LOAD_PVP_BUDDY *param_2)

{
  CEnvironment *this_00;
  void *__src;
  Packet_Community_Login local_5ae [2];
  ushort local_5ac;
  undefined4 local_5a4;
  undefined1 local_5a0;
  undefined4 local_59f;
  undefined4 local_59b;
  undefined1 local_597;
  undefined4 local_596;
  undefined1 auStack_592 [30];
  undefined1 local_574;
  undefined1 local_573;
  undefined1 local_572;
  undefined1 local_571;
  undefined4 local_570;
  undefined1 auStack_56c [1384];
  
  Packet_Community_Login::Packet_Community_Login(local_5ae);
  local_5a4 = CUser::get_acc_id(param_1);
  local_59f = CUser::get_acc_id(param_1);
  local_5a0 = CUser::GetServerGroup(param_1);
  this_00 = (CEnvironment *)G_CEnvironment();
  local_597 = CEnvironment::get_channel_no(this_00);
  local_59b = CUser::GetUID(param_1);
  local_596 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
  local_572 = CUserCharacInfo::getCurCharacGrowType((CUserCharacInfo *)param_1);
  local_574 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
  local_573 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
  local_571 = CUser::getSex(param_1);
  __src = (void *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
  memcpy(auStack_592,__src,0x1d);
  local_570 = *(undefined4 *)param_2;
  memcpy(auStack_56c,param_2 + 4,0x560);
  SendTcpPacket(this,(char *)local_5ae,(uint)local_5ac);
  return;
}
```

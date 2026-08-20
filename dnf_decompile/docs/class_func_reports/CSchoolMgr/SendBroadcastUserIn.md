# SendBroadcastUserIn

`_ZN10CSchoolMgr19SendBroadcastUserInEP5CUser`

`CSchoolMgr::SendBroadcastUserIn(CUser*)`

| 类 | 地址 |
|---|---|
| `CSchoolMgr` | `0x08567fe8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08567fe8  _ZN10CSchoolMgr19SendBroadcastUserInEP5CUser
#           CSchoolMgr::SendBroadcastUserIn(CUser*)
# range [0x08567fe8, 0x085681cd]
08567fe8 +0x000:  push   %ebp
08567fe9 +0x001:  mov    %esp,%ebp
08567feb +0x003:  push   %edi
08567fec +0x004:  push   %esi
08567fed +0x005:  push   %ebx
08567fee +0x006:  sub    $0x13c,%esp
08567ff4 +0x00c:  movl   $0x0,0xc(%esp)
08567ffc +0x014:  movl   $"channel_connect",0x8(%esp)
08568004 +0x01c:  movl   $0x4,0x4(%esp)
0856800c +0x024:  movl   $&g_scriptStringManager_,(%esp)
08568013 +0x02b:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
08568018 +0x030:  mov    %eax,-0x1c(%ebp)
0856801b +0x033:  cmpl   $0x0,-0x1c(%ebp)
0856801f +0x037:  je     085681c2 <+0x1da>
08568025 +0x03d:  lea    -0x12f(%ebp),%edx
0856802b +0x043:  mov    $0xff,%ebx
08568030 +0x048:  mov    $0x0,%eax
08568035 +0x04d:  mov    %edx,%ecx
08568037 +0x04f:  and    $0x1,%ecx
0856803a +0x052:  test   %ecx,%ecx
0856803c +0x054:  je     08568046 <+0x5e>
0856803e +0x056:  mov    %al,(%edx)
08568040 +0x058:  add    $0x1,%edx
08568043 +0x05b:  sub    $0x1,%ebx
08568046 +0x05e:  mov    %edx,%ecx
08568048 +0x060:  and    $0x2,%ecx
0856804b +0x063:  test   %ecx,%ecx
0856804d +0x065:  je     08568058 <+0x70>
0856804f +0x067:  mov    %ax,(%edx)
08568052 +0x06a:  add    $0x2,%edx
08568055 +0x06d:  sub    $0x2,%ebx
08568058 +0x070:  mov    %ebx,%ecx
0856805a +0x072:  shr    $0x2,%ecx
0856805d +0x075:  mov    %edx,%edi
0856805f +0x077:  rep stos %eax,%es:(%edi)
08568061 +0x079:  mov    %edi,%edx
08568063 +0x07b:  mov    %ebx,%ecx
08568065 +0x07d:  and    $0x2,%ecx
08568068 +0x080:  test   %ecx,%ecx
0856806a +0x082:  je     08568072 <+0x8a>
0856806c +0x084:  mov    %ax,(%edx)
0856806f +0x087:  add    $0x2,%edx
08568072 +0x08a:  mov    %ebx,%ecx
08568074 +0x08c:  and    $0x1,%ecx
08568077 +0x08f:  test   %ecx,%ecx
08568079 +0x091:  je     08568080 <+0x98>
0856807b +0x093:  mov    %al,(%edx)
0856807d +0x095:  add    $0x1,%edx
08568080 +0x098:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08568085 +0x09d:  mov    %eax,(%esp)
08568088 +0x0a0:  call   0814aaca <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x869>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x869
0856808d +0x0a5:  mov    %eax,%ebx
0856808f +0x0a7:  mov    0xc(%ebp),%eax
08568092 +0x0aa:  mov    %eax,(%esp)
08568095 +0x0ad:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
0856809a +0x0b2:  mov    %ebx,0xc(%esp)
0856809e +0x0b6:  mov    %eax,0x8(%esp)
085680a2 +0x0ba:  mov    -0x1c(%ebp),%eax
085680a5 +0x0bd:  mov    %eax,0x4(%esp)
085680a9 +0x0c1:  lea    -0x12f(%ebp),%eax
085680af +0x0c7:  mov    %eax,(%esp)
085680b2 +0x0ca:  call   0807e440 <_init+0xd38>
085680b7 +0x0cf:  lea    -0x28(%ebp),%eax
085680ba +0x0d2:  mov    %eax,(%esp)
085680bd +0x0d5:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
085680c2 +0x0da:  movl   $0xc,0x8(%esp)
085680ca +0x0e2:  movl   $0x0,0x4(%esp)
085680d2 +0x0ea:  lea    -0x28(%ebp),%eax
085680d5 +0x0ed:  mov    %eax,(%esp)
085680d8 +0x0f0:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085680dd +0x0f5:  movl   $0x0,0x4(%esp)
085680e5 +0x0fd:  lea    -0x28(%ebp),%eax
085680e8 +0x100:  mov    %eax,(%esp)
085680eb +0x103:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085680f0 +0x108:  movl   $0x0,0x4(%esp)
085680f8 +0x110:  lea    -0x28(%ebp),%eax
085680fb +0x113:  mov    %eax,(%esp)
085680fe +0x116:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08568103 +0x11b:  movl   $0x0,0x4(%esp)
0856810b +0x123:  lea    -0x28(%ebp),%eax
0856810e +0x126:  mov    %eax,(%esp)
08568111 +0x129:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08568116 +0x12e:  lea    -0x12f(%ebp),%eax
0856811c +0x134:  mov    %eax,(%esp)
0856811f +0x137:  call   0807e3b0 <_init+0xca8>
08568124 +0x13c:  mov    %eax,0x4(%esp)
08568128 +0x140:  lea    -0x28(%ebp),%eax
0856812b +0x143:  mov    %eax,(%esp)
0856812e +0x146:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08568133 +0x14b:  lea    -0x12f(%ebp),%eax
08568139 +0x151:  mov    %eax,(%esp)
0856813c +0x154:  call   0807e3b0 <_init+0xca8>
08568141 +0x159:  mov    %eax,0x8(%esp)
08568145 +0x15d:  lea    -0x12f(%ebp),%eax
0856814b +0x163:  mov    %eax,0x4(%esp)
0856814f +0x167:  lea    -0x28(%ebp),%eax
08568152 +0x16a:  mov    %eax,(%esp)
08568155 +0x16d:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
0856815a +0x172:  movl   $0x1,0x4(%esp)
08568162 +0x17a:  lea    -0x28(%ebp),%eax
08568165 +0x17d:  mov    %eax,(%esp)
08568168 +0x180:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0856816d +0x185:  mov    0xc(%ebp),%eax
08568170 +0x188:  mov    %eax,0x4(%esp)
08568174 +0x18c:  lea    -0x30(%ebp),%eax
08568177 +0x18f:  mov    %eax,(%esp)
0856817a +0x192:  call   085690b6 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0xa80>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0xa80
0856817f +0x197:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08568184 +0x19c:  lea    -0x30(%ebp),%edx
08568187 +0x19f:  mov    %edx,0x8(%esp)
0856818b +0x1a3:  lea    -0x28(%ebp),%edx
0856818e +0x1a6:  mov    %edx,0x4(%esp)
08568192 +0x1aa:  mov    %eax,(%esp)
08568195 +0x1ad:  call   086c9234 <_ZN9GameWorld10send_groupER11PacketGuardP7CBelong>  ; GameWorld::send_group(PacketGuard&, CBelong*)
0856819a +0x1b2:  jmp    085681b7 <+0x1cf>
0856819c +0x1b4:  mov    %edx,%ebx
0856819e +0x1b6:  mov    %eax,%esi
085681a0 +0x1b8:  lea    -0x28(%ebp),%eax
085681a3 +0x1bb:  mov    %eax,(%esp)
085681a6 +0x1be:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085681ab +0x1c3:  mov    %esi,%eax
085681ad +0x1c5:  mov    %ebx,%edx
085681af +0x1c7:  mov    %eax,(%esp)
085681b2 +0x1ca:  call   08ae3750 <_Unwind_Resume>
085681b7 +0x1cf:  lea    -0x28(%ebp),%eax
085681ba +0x1d2:  mov    %eax,(%esp)
085681bd +0x1d5:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085681c2 +0x1da:  add    $0x13c,%esp
085681c8 +0x1e0:  pop    %ebx
085681c9 +0x1e1:  pop    %esi
085681ca +0x1e2:  pop    %edi
085681cb +0x1e3:  pop    %ebp
085681cc +0x1e4:  ret
085681cd +0x1e5:  nop
```

## 反编译 C

```c
// CSchoolMgr::SendBroadcastUserIn @ 0x8567fe8

/* CSchoolMgr::SendBroadcastUserIn(CUser*) */

void __thiscall CSchoolMgr::SendBroadcastUserIn(CSchoolMgr *this,CUser *param_1)

{
  CEnvironment *this_00;
  undefined4 uVar1;
  undefined4 uVar2;
  size_t sVar3;
  GameWorld *this_01;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  bool bVar7;
  byte bVar8;
  char local_133;
  char local_132 [254];
  CSchoolMember local_34 [8];
  PacketGuard local_2c [12];
  char *local_20;
  
  bVar8 = 0;
  local_20 = (char *)RDARScriptStringManager::findString
                               ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                "channel_connect",(bool *)0x0);
  if (local_20 != (char *)0x0) {
    pcVar5 = &local_133;
    uVar6 = 0xff;
    bVar7 = ((uint)pcVar5 & 1) != 0;
    if (bVar7) {
      local_133 = '\0';
      pcVar5 = local_132;
      uVar6 = 0xfe;
    }
    if (((uint)pcVar5 & 2) != 0) {
      pcVar5[0] = '\0';
      pcVar5[1] = '\0';
      pcVar5 = pcVar5 + 2;
      uVar6 = uVar6 - 2;
    }
    for (uVar4 = uVar6 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      pcVar5[0] = '\0';
      pcVar5[1] = '\0';
      pcVar5[2] = '\0';
      pcVar5[3] = '\0';
      pcVar5 = pcVar5 + ((uint)bVar8 * -2 + 1) * 4;
    }
    if ((uVar6 & 2) != 0) {
      pcVar5[0] = '\0';
      pcVar5[1] = '\0';
      pcVar5 = pcVar5 + 2;
    }
    if (!bVar7) {
      *pcVar5 = '\0';
    }
    this_00 = (CEnvironment *)G_CEnvironment();
    uVar1 = CEnvironment::get_channel_no(this_00);
    uVar2 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
    sprintf(&local_133,local_20,uVar2,uVar1);
    PacketGuard::PacketGuard(local_2c);
                    /* try { // try from 085680d8 to 08568199 has its CatchHandler @ 0856819c */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_2c,0,0xc);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,0);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_2c,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,0);
    sVar3 = strlen(&local_133);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,sVar3);
    sVar3 = strlen(&local_133);
    InterfacePacketBuf::put_str((InterfacePacketBuf *)local_2c,&local_133,sVar3);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_2c,true);
    CSchoolMember::CSchoolMember(local_34,param_1);
    this_01 = (GameWorld *)G_GameWorld();
    GameWorld::send_group(this_01,local_2c,(CBelong *)local_34);
    PacketGuard::~PacketGuard(local_2c);
  }
  return;
}
```

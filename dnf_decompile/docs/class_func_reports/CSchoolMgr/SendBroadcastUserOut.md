# SendBroadcastUserOut

`_ZN10CSchoolMgr20SendBroadcastUserOutEP5CUser`

`CSchoolMgr::SendBroadcastUserOut(CUser*)`

| 类 | 地址 |
|---|---|
| `CSchoolMgr` | `0x085681ce` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085681ce  _ZN10CSchoolMgr20SendBroadcastUserOutEP5CUser
#           CSchoolMgr::SendBroadcastUserOut(CUser*)
# range [0x085681ce, 0x0856839f]
085681ce +0x000:  push   %ebp
085681cf +0x001:  mov    %esp,%ebp
085681d1 +0x003:  push   %edi
085681d2 +0x004:  push   %esi
085681d3 +0x005:  push   %ebx
085681d4 +0x006:  sub    $0x13c,%esp
085681da +0x00c:  movl   $0x0,0xc(%esp)
085681e2 +0x014:  movl   $"channel_disconnect",0x8(%esp)
085681ea +0x01c:  movl   $0x4,0x4(%esp)
085681f2 +0x024:  movl   $&g_scriptStringManager_,(%esp)
085681f9 +0x02b:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
085681fe +0x030:  mov    %eax,-0x1c(%ebp)
08568201 +0x033:  cmpl   $0x0,-0x1c(%ebp)
08568205 +0x037:  je     08568395 <+0x1c7>
0856820b +0x03d:  lea    -0x12f(%ebp),%edx
08568211 +0x043:  mov    $0xff,%ebx
08568216 +0x048:  mov    $0x0,%eax
0856821b +0x04d:  mov    %edx,%ecx
0856821d +0x04f:  and    $0x1,%ecx
08568220 +0x052:  test   %ecx,%ecx
08568222 +0x054:  je     0856822c <+0x5e>
08568224 +0x056:  mov    %al,(%edx)
08568226 +0x058:  add    $0x1,%edx
08568229 +0x05b:  sub    $0x1,%ebx
0856822c +0x05e:  mov    %edx,%ecx
0856822e +0x060:  and    $0x2,%ecx
08568231 +0x063:  test   %ecx,%ecx
08568233 +0x065:  je     0856823e <+0x70>
08568235 +0x067:  mov    %ax,(%edx)
08568238 +0x06a:  add    $0x2,%edx
0856823b +0x06d:  sub    $0x2,%ebx
0856823e +0x070:  mov    %ebx,%ecx
08568240 +0x072:  shr    $0x2,%ecx
08568243 +0x075:  mov    %edx,%edi
08568245 +0x077:  rep stos %eax,%es:(%edi)
08568247 +0x079:  mov    %edi,%edx
08568249 +0x07b:  mov    %ebx,%ecx
0856824b +0x07d:  and    $0x2,%ecx
0856824e +0x080:  test   %ecx,%ecx
08568250 +0x082:  je     08568258 <+0x8a>
08568252 +0x084:  mov    %ax,(%edx)
08568255 +0x087:  add    $0x2,%edx
08568258 +0x08a:  mov    %ebx,%ecx
0856825a +0x08c:  and    $0x1,%ecx
0856825d +0x08f:  test   %ecx,%ecx
0856825f +0x091:  je     08568266 <+0x98>
08568261 +0x093:  mov    %al,(%edx)
08568263 +0x095:  add    $0x1,%edx
08568266 +0x098:  mov    0xc(%ebp),%eax
08568269 +0x09b:  mov    %eax,(%esp)
0856826c +0x09e:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
08568271 +0x0a3:  mov    %eax,0x8(%esp)
08568275 +0x0a7:  mov    -0x1c(%ebp),%eax
08568278 +0x0aa:  mov    %eax,0x4(%esp)
0856827c +0x0ae:  lea    -0x12f(%ebp),%eax
08568282 +0x0b4:  mov    %eax,(%esp)
08568285 +0x0b7:  call   0807e440 <_init+0xd38>
0856828a +0x0bc:  lea    -0x28(%ebp),%eax
0856828d +0x0bf:  mov    %eax,(%esp)
08568290 +0x0c2:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08568295 +0x0c7:  movl   $0xc,0x8(%esp)
0856829d +0x0cf:  movl   $0x0,0x4(%esp)
085682a5 +0x0d7:  lea    -0x28(%ebp),%eax
085682a8 +0x0da:  mov    %eax,(%esp)
085682ab +0x0dd:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085682b0 +0x0e2:  movl   $0x0,0x4(%esp)
085682b8 +0x0ea:  lea    -0x28(%ebp),%eax
085682bb +0x0ed:  mov    %eax,(%esp)
085682be +0x0f0:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085682c3 +0x0f5:  movl   $0x0,0x4(%esp)
085682cb +0x0fd:  lea    -0x28(%ebp),%eax
085682ce +0x100:  mov    %eax,(%esp)
085682d1 +0x103:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085682d6 +0x108:  movl   $0x0,0x4(%esp)
085682de +0x110:  lea    -0x28(%ebp),%eax
085682e1 +0x113:  mov    %eax,(%esp)
085682e4 +0x116:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085682e9 +0x11b:  lea    -0x12f(%ebp),%eax
085682ef +0x121:  mov    %eax,(%esp)
085682f2 +0x124:  call   0807e3b0 <_init+0xca8>
085682f7 +0x129:  mov    %eax,0x4(%esp)
085682fb +0x12d:  lea    -0x28(%ebp),%eax
085682fe +0x130:  mov    %eax,(%esp)
08568301 +0x133:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08568306 +0x138:  lea    -0x12f(%ebp),%eax
0856830c +0x13e:  mov    %eax,(%esp)
0856830f +0x141:  call   0807e3b0 <_init+0xca8>
08568314 +0x146:  mov    %eax,0x8(%esp)
08568318 +0x14a:  lea    -0x12f(%ebp),%eax
0856831e +0x150:  mov    %eax,0x4(%esp)
08568322 +0x154:  lea    -0x28(%ebp),%eax
08568325 +0x157:  mov    %eax,(%esp)
08568328 +0x15a:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
0856832d +0x15f:  movl   $0x1,0x4(%esp)
08568335 +0x167:  lea    -0x28(%ebp),%eax
08568338 +0x16a:  mov    %eax,(%esp)
0856833b +0x16d:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08568340 +0x172:  mov    0xc(%ebp),%eax
08568343 +0x175:  mov    %eax,0x4(%esp)
08568347 +0x179:  lea    -0x30(%ebp),%eax
0856834a +0x17c:  mov    %eax,(%esp)
0856834d +0x17f:  call   085690b6 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0xa80>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0xa80
08568352 +0x184:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08568357 +0x189:  lea    -0x30(%ebp),%edx
0856835a +0x18c:  mov    %edx,0x8(%esp)
0856835e +0x190:  lea    -0x28(%ebp),%edx
08568361 +0x193:  mov    %edx,0x4(%esp)
08568365 +0x197:  mov    %eax,(%esp)
08568368 +0x19a:  call   086c9234 <_ZN9GameWorld10send_groupER11PacketGuardP7CBelong>  ; GameWorld::send_group(PacketGuard&, CBelong*)
0856836d +0x19f:  jmp    0856838a <+0x1bc>
0856836f +0x1a1:  mov    %edx,%ebx
08568371 +0x1a3:  mov    %eax,%esi
08568373 +0x1a5:  lea    -0x28(%ebp),%eax
08568376 +0x1a8:  mov    %eax,(%esp)
08568379 +0x1ab:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0856837e +0x1b0:  mov    %esi,%eax
08568380 +0x1b2:  mov    %ebx,%edx
08568382 +0x1b4:  mov    %eax,(%esp)
08568385 +0x1b7:  call   08ae3750 <_Unwind_Resume>
0856838a +0x1bc:  lea    -0x28(%ebp),%eax
0856838d +0x1bf:  mov    %eax,(%esp)
08568390 +0x1c2:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08568395 +0x1c7:  add    $0x13c,%esp
0856839b +0x1cd:  pop    %ebx
0856839c +0x1ce:  pop    %esi
0856839d +0x1cf:  pop    %edi
0856839e +0x1d0:  pop    %ebp
0856839f +0x1d1:  ret
```

## 反编译 C

```c
// CSchoolMgr::SendBroadcastUserOut @ 0x85681ce

/* CSchoolMgr::SendBroadcastUserOut(CUser*) */

void __thiscall CSchoolMgr::SendBroadcastUserOut(CSchoolMgr *this,CUser *param_1)

{
  undefined4 uVar1;
  size_t sVar2;
  GameWorld *this_00;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  bool bVar6;
  byte bVar7;
  char local_133;
  char local_132 [254];
  CSchoolMember local_34 [8];
  PacketGuard local_2c [12];
  char *local_20;
  
  bVar7 = 0;
  local_20 = (char *)RDARScriptStringManager::findString
                               ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                "channel_disconnect",(bool *)0x0);
  if (local_20 != (char *)0x0) {
    pcVar4 = &local_133;
    uVar5 = 0xff;
    bVar6 = ((uint)pcVar4 & 1) != 0;
    if (bVar6) {
      local_133 = '\0';
      pcVar4 = local_132;
      uVar5 = 0xfe;
    }
    if (((uint)pcVar4 & 2) != 0) {
      pcVar4[0] = '\0';
      pcVar4[1] = '\0';
      pcVar4 = pcVar4 + 2;
      uVar5 = uVar5 - 2;
    }
    for (uVar3 = uVar5 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      pcVar4[0] = '\0';
      pcVar4[1] = '\0';
      pcVar4[2] = '\0';
      pcVar4[3] = '\0';
      pcVar4 = pcVar4 + ((uint)bVar7 * -2 + 1) * 4;
    }
    if ((uVar5 & 2) != 0) {
      pcVar4[0] = '\0';
      pcVar4[1] = '\0';
      pcVar4 = pcVar4 + 2;
    }
    if (!bVar6) {
      *pcVar4 = '\0';
    }
    uVar1 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
    sprintf(&local_133,local_20,uVar1);
    PacketGuard::PacketGuard(local_2c);
                    /* try { // try from 085682ab to 0856836c has its CatchHandler @ 0856836f */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_2c,0,0xc);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,0);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_2c,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,0);
    sVar2 = strlen(&local_133);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,sVar2);
    sVar2 = strlen(&local_133);
    InterfacePacketBuf::put_str((InterfacePacketBuf *)local_2c,&local_133,sVar2);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_2c,true);
    CSchoolMember::CSchoolMember(local_34,param_1);
    this_00 = (GameWorld *)G_GameWorld();
    GameWorld::send_group(this_00,local_2c,(CBelong *)local_34);
    PacketGuard::~PacketGuard(local_2c);
  }
  return;
}
```

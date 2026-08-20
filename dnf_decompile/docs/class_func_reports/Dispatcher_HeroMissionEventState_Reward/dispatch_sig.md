# dispatch_sig

`_ZN39Dispatcher_HeroMissionEventState_Reward12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_HeroMissionEventState_Reward::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_HeroMissionEventState_Reward` | `0x08260094` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08260094  _ZN39Dispatcher_HeroMissionEventState_Reward12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_HeroMissionEventState_Reward::dispatch_sig(CUser*, PacketBuf&)
# range [0x08260094, 0x0826028f]
08260094 +0x000:  push   %ebp
08260095 +0x001:  mov    %esp,%ebp
08260097 +0x003:  push   %esi
08260098 +0x004:  push   %ebx
08260099 +0x005:  sub    $0x30,%esp
0826009c +0x008:  movl   $0x0,-0x10(%ebp)
082600a3 +0x00f:  lea    -0x10(%ebp),%eax
082600a6 +0x012:  mov    %eax,0x4(%esp)
082600aa +0x016:  mov    0x10(%ebp),%eax
082600ad +0x019:  mov    %eax,(%esp)
082600b0 +0x01c:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
082600b5 +0x021:  xor    $0x1,%eax
082600b8 +0x024:  test   %al,%al
082600ba +0x026:  je     082600e5 <+0x51>
082600bc +0x028:  movl   $0x0,0xc(%esp)
082600c4 +0x030:  movl   $0x0,0x8(%esp)
082600cc +0x038:  movl   $&_ZZN39Dispatcher_HeroMissionEventState_Reward12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082600d4 +0x040:  movl   $0xb69,(%esp)
082600db +0x047:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082600e0 +0x04c:  jmp    08260289 <+0x1f5>
082600e5 +0x051:  movl   $0x0,-0x14(%ebp)
082600ec +0x058:  lea    -0x14(%ebp),%eax
082600ef +0x05b:  mov    %eax,0x4(%esp)
082600f3 +0x05f:  mov    0x10(%ebp),%eax
082600f6 +0x062:  mov    %eax,(%esp)
082600f9 +0x065:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
082600fe +0x06a:  xor    $0x1,%eax
08260101 +0x06d:  test   %al,%al
08260103 +0x06f:  je     0826012e <+0x9a>
08260105 +0x071:  movl   $0x0,0xc(%esp)
0826010d +0x079:  movl   $0x0,0x8(%esp)
08260115 +0x081:  movl   $&_ZZN39Dispatcher_HeroMissionEventState_Reward12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0826011d +0x089:  movl   $0xb6d,(%esp)
08260124 +0x090:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08260129 +0x095:  jmp    08260289 <+0x1f5>
0826012e +0x09a:  mov    -0x10(%ebp),%eax
08260131 +0x09d:  cmp    $0x1,%eax
08260134 +0x0a0:  jne    0826016e <+0xda>
08260136 +0x0a2:  mov    -0x14(%ebp),%eax
08260139 +0x0a5:  test   %eax,%eax
0826013b +0x0a7:  jns    0826016e <+0xda>
0826013d +0x0a9:  mov    -0x14(%ebp),%eax
08260140 +0x0ac:  cmp    $0x6,%eax
08260143 +0x0af:  jle    0826016e <+0xda>
08260145 +0x0b1:  movl   $0x0,0xc(%esp)
0826014d +0x0b9:  movl   $0x0,0x8(%esp)
08260155 +0x0c1:  movl   $&_ZZN39Dispatcher_HeroMissionEventState_Reward12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0826015d +0x0c9:  movl   $0xb71,(%esp)
08260164 +0x0d0:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08260169 +0x0d5:  jmp    08260289 <+0x1f5>
0826016e +0x0da:  mov    -0x10(%ebp),%eax
08260171 +0x0dd:  test   %eax,%eax
08260173 +0x0df:  jne    0826018e <+0xfa>
08260175 +0x0e1:  call   0811c9ce <_GLOBAL__I_events+0x1071>  ; global constructors keyed to events+0x1071
0826017a +0x0e6:  mov    0xc(%ebp),%edx
0826017d +0x0e9:  mov    %edx,0x4(%esp)
08260181 +0x0ed:  mov    %eax,(%esp)
08260184 +0x0f0:  call   0816770e <_ZN16HeroMissionEvent15sendMissionDataEP5CUser>  ; HeroMissionEvent::sendMissionData(CUser*)
08260189 +0x0f5:  jmp    08260284 <+0x1f0>
0826018e +0x0fa:  mov    -0x14(%ebp),%ebx
08260191 +0x0fd:  call   0811c9ce <_GLOBAL__I_events+0x1071>  ; global constructors keyed to events+0x1071
08260196 +0x102:  mov    %ebx,0x8(%esp)
0826019a +0x106:  mov    0xc(%ebp),%edx
0826019d +0x109:  mov    %edx,0x4(%esp)
082601a1 +0x10d:  mov    %eax,(%esp)
082601a4 +0x110:  call   0816748e <_ZN16HeroMissionEvent13rewardMissionEP5CUserN20HeroMissionCondition9MissionNo1TE>  ; HeroMissionEvent::rewardMission(CUser*, HeroMissionCondition::MissionNo::T)
082601a9 +0x115:  mov    %al,-0x9(%ebp)
082601ac +0x118:  lea    -0x20(%ebp),%eax
082601af +0x11b:  mov    %eax,(%esp)
082601b2 +0x11e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
082601b7 +0x123:  movl   $0x25a,0x8(%esp)
082601bf +0x12b:  movl   $0x1,0x4(%esp)
082601c7 +0x133:  lea    -0x20(%ebp),%eax
082601ca +0x136:  mov    %eax,(%esp)
082601cd +0x139:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
082601d2 +0x13e:  cmpb   $0x0,-0x9(%ebp)
082601d6 +0x142:  je     082601ff <+0x16b>
082601d8 +0x144:  movl   $0x1,0x4(%esp)
082601e0 +0x14c:  lea    -0x20(%ebp),%eax
082601e3 +0x14f:  mov    %eax,(%esp)
082601e6 +0x152:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
082601eb +0x157:  mov    -0x10(%ebp),%eax
082601ee +0x15a:  mov    %eax,0x4(%esp)
082601f2 +0x15e:  lea    -0x20(%ebp),%eax
082601f5 +0x161:  mov    %eax,(%esp)
082601f8 +0x164:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
082601fd +0x169:  jmp    08260237 <+0x1a3>
082601ff +0x16b:  movl   $0x0,0x4(%esp)
08260207 +0x173:  lea    -0x20(%ebp),%eax
0826020a +0x176:  mov    %eax,(%esp)
0826020d +0x179:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08260212 +0x17e:  movl   $0x0,0x4(%esp)
0826021a +0x186:  lea    -0x20(%ebp),%eax
0826021d +0x189:  mov    %eax,(%esp)
08260220 +0x18c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08260225 +0x191:  mov    -0x10(%ebp),%eax
08260228 +0x194:  mov    %eax,0x4(%esp)
0826022c +0x198:  lea    -0x20(%ebp),%eax
0826022f +0x19b:  mov    %eax,(%esp)
08260232 +0x19e:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08260237 +0x1a3:  movl   $0x1,0x4(%esp)
0826023f +0x1ab:  lea    -0x20(%ebp),%eax
08260242 +0x1ae:  mov    %eax,(%esp)
08260245 +0x1b1:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0826024a +0x1b6:  lea    -0x20(%ebp),%eax
0826024d +0x1b9:  mov    %eax,0x4(%esp)
08260251 +0x1bd:  mov    0xc(%ebp),%eax
08260254 +0x1c0:  mov    %eax,(%esp)
08260257 +0x1c3:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0826025c +0x1c8:  jmp    08260279 <+0x1e5>
0826025e +0x1ca:  mov    %edx,%ebx
08260260 +0x1cc:  mov    %eax,%esi
08260262 +0x1ce:  lea    -0x20(%ebp),%eax
08260265 +0x1d1:  mov    %eax,(%esp)
08260268 +0x1d4:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0826026d +0x1d9:  mov    %esi,%eax
0826026f +0x1db:  mov    %ebx,%edx
08260271 +0x1dd:  mov    %eax,(%esp)
08260274 +0x1e0:  call   08ae3750 <_Unwind_Resume>
08260279 +0x1e5:  lea    -0x20(%ebp),%eax
0826027c +0x1e8:  mov    %eax,(%esp)
0826027f +0x1eb:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08260284 +0x1f0:  mov    $0x0,%eax
08260289 +0x1f5:  add    $0x30,%esp
0826028c +0x1f8:  pop    %ebx
0826028d +0x1f9:  pop    %esi
0826028e +0x1fa:  pop    %ebp
0826028f +0x1fb:  ret
```

## 反编译 C

```c
// Dispatcher_HeroMissionEventState_Reward::dispatch_sig @ 0x8260094

/* Dispatcher_HeroMissionEventState_Reward::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_HeroMissionEventState_Reward::dispatch_sig
          (Dispatcher_HeroMissionEventState_Reward *this,CUser *param_1,PacketBuf *param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  HeroMissionEvent *pHVar4;
  PacketGuard local_24 [12];
  int local_18;
  int local_14;
  char local_d;
  
  local_14 = 0;
  cVar2 = PacketBuf::get_short(param_2,(short *)&local_14);
  if (cVar2 == '\x01') {
    local_18 = 0;
    cVar2 = PacketBuf::get_short(param_2,(short *)&local_18);
    iVar1 = local_18;
    if (cVar2 == '\x01') {
      if (((local_14 == 1) && (local_18 < 0)) && (6 < local_18)) {
        uVar3 = LineFunc(0xb71,
                         "virtual int Dispatcher_HeroMissionEventState_Reward::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
      }
      else {
        if (local_14 == 0) {
          pHVar4 = (HeroMissionEvent *)ARAD::Singleton<HeroMissionEvent>::Get();
          HeroMissionEvent::sendMissionData(pHVar4,param_1);
        }
        else {
          pHVar4 = (HeroMissionEvent *)ARAD::Singleton<HeroMissionEvent>::Get();
          local_d = HeroMissionEvent::rewardMission(pHVar4,param_1,iVar1);
          PacketGuard::PacketGuard(local_24);
                    /* try { // try from 082601cd to 0826025b has its CatchHandler @ 0826025e */
          InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,1,0x25a);
          if (local_d == '\0') {
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,0);
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,0);
            InterfacePacketBuf::put_short((InterfacePacketBuf *)local_24,local_14);
          }
          else {
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,1);
            InterfacePacketBuf::put_short((InterfacePacketBuf *)local_24,local_14);
          }
          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
          CUser::Send(param_1,local_24);
          PacketGuard::~PacketGuard(local_24);
        }
        uVar3 = 0;
      }
    }
    else {
      uVar3 = LineFunc(0xb6d,
                       "virtual int Dispatcher_HeroMissionEventState_Reward::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
    }
  }
  else {
    uVar3 = LineFunc(0xb69,
                     "virtual int Dispatcher_HeroMissionEventState_Reward::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
  }
  return uVar3;
}
```

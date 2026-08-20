# dispatch_sig

`_ZN4ARAD10DISPATCHER29Arad_INTER_kUseAvatarRecharge12dispatch_sigEP5CUserPci`

`ARAD::DISPATCHER::Arad_INTER_kUseAvatarRecharge::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `ARAD::DISPATCHER::Arad_INTER_kUseAvatarRecharge` | `0x08199f0e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08199f0e  _ZN4ARAD10DISPATCHER29Arad_INTER_kUseAvatarRecharge12dispatch_sigEP5CUserPci
#           ARAD::DISPATCHER::Arad_INTER_kUseAvatarRecharge::dispatch_sig(CUser*, char*, int)
# range [0x08199f0e, 0x0819a0bf]
08199f0e +0x000:  push   %ebp
08199f0f +0x001:  mov    %esp,%ebp
08199f11 +0x003:  push   %esi
08199f12 +0x004:  push   %ebx
08199f13 +0x005:  sub    $0x30,%esp
08199f16 +0x008:  cmpl   $0x0,0xc(%ebp)
08199f1a +0x00c:  jne    08199f26 <+0x18>
08199f1c +0x00e:  mov    $0x68e,%ebx
08199f21 +0x013:  jmp    0819a0b6 <+0x1a8>
08199f26 +0x018:  mov    0xc(%ebp),%eax
08199f29 +0x01b:  mov    %eax,(%esp)
08199f2c +0x01e:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08199f31 +0x023:  test   %eax,%eax
08199f33 +0x025:  sete   %al
08199f36 +0x028:  test   %al,%al
08199f38 +0x02a:  je     08199f44 <+0x36>
08199f3a +0x02c:  mov    $0x691,%ebx
08199f3f +0x031:  jmp    0819a0b6 <+0x1a8>
08199f44 +0x036:  mov    0x10(%ebp),%eax
08199f47 +0x039:  mov    %eax,-0xc(%ebp)
08199f4a +0x03c:  cmpl   $0x0,-0xc(%ebp)
08199f4e +0x040:  jne    08199f86 <+0x78>
08199f50 +0x042:  movl   $"AVATAR USE AVATAR RECHARGE INTER_DSP(SigAradUseAvatarRecharge) null.",0x10(%esp)
08199f58 +0x04a:  movl   $0x696,0xc(%esp)
08199f60 +0x052:  movl   $&_ZZN4ARAD10DISPATCHER29Arad_INTER_kUseAvatarRecharge12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
08199f68 +0x05a:  movl   $"localjapan/Arad_InterDispatcher.cpp",0x4(%esp)
08199f70 +0x062:  movl   $0x1,(%esp)
08199f77 +0x069:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08199f7c +0x06e:  mov    $0x697,%ebx
08199f81 +0x073:  jmp    0819a0b6 <+0x1a8>
08199f86 +0x078:  call   081935a2 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x20a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x20a
08199f8b +0x07d:  mov    -0xc(%ebp),%edx
08199f8e +0x080:  mov    %edx,0x8(%esp)
08199f92 +0x084:  mov    0xc(%ebp),%edx
08199f95 +0x087:  mov    %edx,0x4(%esp)
08199f99 +0x08b:  mov    %eax,(%esp)
08199f9c +0x08e:  call   081906e2 <_ZN20AvatarRechargeServer25CheckConditionUseRechargeEP5CUserPN4arad24SigAradUseAvatarRechargeE>  ; AvatarRechargeServer::CheckConditionUseRecharge(CUser*, arad::SigAradUseAvatarRecharge*)
08199fa1 +0x093:  xor    $0x1,%eax
08199fa4 +0x096:  test   %al,%al
08199fa6 +0x098:  je     08199fb2 <+0xa4>
08199fa8 +0x09a:  mov    $0x0,%ebx
08199fad +0x09f:  jmp    0819a0b6 <+0x1a8>
08199fb2 +0x0a4:  call   081935a2 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x20a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x20a
08199fb7 +0x0a9:  mov    -0xc(%ebp),%edx
08199fba +0x0ac:  mov    %edx,0x8(%esp)
08199fbe +0x0b0:  mov    0xc(%ebp),%edx
08199fc1 +0x0b3:  mov    %edx,0x4(%esp)
08199fc5 +0x0b7:  mov    %eax,(%esp)
08199fc8 +0x0ba:  call   08190a70 <_ZN20AvatarRechargeServer8RechargeEP5CUserPN4arad24SigAradUseAvatarRechargeE>  ; AvatarRechargeServer::Recharge(CUser*, arad::SigAradUseAvatarRecharge*)
08199fcd +0x0bf:  xor    $0x1,%eax
08199fd0 +0x0c2:  test   %al,%al
08199fd2 +0x0c4:  je     08199fde <+0xd0>
08199fd4 +0x0c6:  mov    $0x0,%ebx
08199fd9 +0x0cb:  jmp    0819a0b6 <+0x1a8>
08199fde +0x0d0:  lea    -0x18(%ebp),%eax
08199fe1 +0x0d3:  mov    %eax,(%esp)
08199fe4 +0x0d6:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08199fe9 +0x0db:  lea    -0x18(%ebp),%eax
08199fec +0x0de:  mov    %eax,(%esp)
08199fef +0x0e1:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
08199ff4 +0x0e6:  movl   $0x24d,0x8(%esp)
08199ffc +0x0ee:  movl   $0x1,0x4(%esp)
0819a004 +0x0f6:  lea    -0x18(%ebp),%eax
0819a007 +0x0f9:  mov    %eax,(%esp)
0819a00a +0x0fc:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0819a00f +0x101:  movl   $0x1,0x4(%esp)
0819a017 +0x109:  lea    -0x18(%ebp),%eax
0819a01a +0x10c:  mov    %eax,(%esp)
0819a01d +0x10f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0819a022 +0x114:  mov    -0xc(%ebp),%eax
0819a025 +0x117:  mov    0xc(%eax),%eax
0819a028 +0x11a:  mov    %eax,0x4(%esp)
0819a02c +0x11e:  lea    -0x18(%ebp),%eax
0819a02f +0x121:  mov    %eax,(%esp)
0819a032 +0x124:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0819a037 +0x129:  mov    -0xc(%ebp),%eax
0819a03a +0x12c:  mov    0x4(%eax),%eax
0819a03d +0x12f:  mov    %eax,0x4(%esp)
0819a041 +0x133:  lea    -0x18(%ebp),%eax
0819a044 +0x136:  mov    %eax,(%esp)
0819a047 +0x139:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0819a04c +0x13e:  mov    -0xc(%ebp),%eax
0819a04f +0x141:  movzwl (%eax),%eax
0819a052 +0x144:  movzwl %ax,%eax
0819a055 +0x147:  mov    %eax,0x4(%esp)
0819a059 +0x14b:  lea    -0x18(%ebp),%eax
0819a05c +0x14e:  mov    %eax,(%esp)
0819a05f +0x151:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0819a064 +0x156:  movl   $0x1,0x4(%esp)
0819a06c +0x15e:  lea    -0x18(%ebp),%eax
0819a06f +0x161:  mov    %eax,(%esp)
0819a072 +0x164:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0819a077 +0x169:  lea    -0x18(%ebp),%eax
0819a07a +0x16c:  mov    %eax,0x4(%esp)
0819a07e +0x170:  mov    0xc(%ebp),%eax
0819a081 +0x173:  mov    %eax,(%esp)
0819a084 +0x176:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0819a089 +0x17b:  mov    $0x0,%ebx
0819a08e +0x180:  lea    -0x18(%ebp),%eax
0819a091 +0x183:  mov    %eax,(%esp)
0819a094 +0x186:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0819a099 +0x18b:  jmp    0819a0b6 <+0x1a8>
0819a09b +0x18d:  mov    %edx,%ebx
0819a09d +0x18f:  mov    %eax,%esi
0819a09f +0x191:  lea    -0x18(%ebp),%eax
0819a0a2 +0x194:  mov    %eax,(%esp)
0819a0a5 +0x197:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0819a0aa +0x19c:  mov    %esi,%eax
0819a0ac +0x19e:  mov    %ebx,%edx
0819a0ae +0x1a0:  mov    %eax,(%esp)
0819a0b1 +0x1a3:  call   08ae3750 <_Unwind_Resume>
0819a0b6 +0x1a8:  mov    %ebx,%eax
0819a0b8 +0x1aa:  add    $0x30,%esp
0819a0bb +0x1ad:  pop    %ebx
0819a0bc +0x1ae:  pop    %esi
0819a0bd +0x1af:  pop    %ebp
0819a0be +0x1b0:  ret
0819a0bf +0x1b1:  nop
```

## 反编译 C

```c
// ARAD::DISPATCHER::Arad_INTER_kUseAvatarRecharge::dispatch_sig @ 0x8199f0e

/* ARAD::DISPATCHER::Arad_INTER_kUseAvatarRecharge::dispatch_sig(CUser*, char*, int) */

undefined4
ARAD::DISPATCHER::Arad_INTER_kUseAvatarRecharge::dispatch_sig
          (CUser *param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  AvatarRechargeServer *pAVar3;
  undefined4 uVar4;
  PacketGuard local_1c [12];
  SigAradUseAvatarRecharge *local_10;
  
  if (param_2 == (char *)0x0) {
    uVar4 = 0x68e;
  }
  else {
    iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if (iVar2 == 0) {
      uVar4 = 0x691;
    }
    else {
      local_10 = (SigAradUseAvatarRecharge *)param_3;
      if (param_3 == 0) {
        LogManager::logFormat
                  (1,"localjapan/Arad_InterDispatcher.cpp",
                   "virtual int ARAD::DISPATCHER::Arad_INTER_kUseAvatarRecharge::dispatch_sig(CUser*, char*, int)"
                   ,0x696,"AVATAR USE AVATAR RECHARGE INTER_DSP(SigAradUseAvatarRecharge) null.");
        uVar4 = 0x697;
      }
      else {
        pAVar3 = (AvatarRechargeServer *)Singleton<AvatarRechargeServer>::Get();
        cVar1 = AvatarRechargeServer::CheckConditionUseRecharge(pAVar3,(CUser *)param_2,local_10);
        if (cVar1 == '\x01') {
          pAVar3 = (AvatarRechargeServer *)Singleton<AvatarRechargeServer>::Get();
          cVar1 = AvatarRechargeServer::Recharge(pAVar3,(CUser *)param_2,local_10);
          if (cVar1 == '\x01') {
            PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 08199fef to 0819a088 has its CatchHandler @ 0819a09b */
            InterfacePacketBuf::clear((InterfacePacketBuf *)local_1c);
            InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x24d);
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
            InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0xc));
            InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 4));
            InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,(uint)*(ushort *)local_10);
            InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
            CUser::Send((CUser *)param_2,local_1c);
            uVar4 = 0;
            PacketGuard::~PacketGuard(local_1c);
          }
          else {
            uVar4 = 0;
          }
        }
        else {
          uVar4 = 0;
        }
      }
    }
  }
  return uVar4;
}
```

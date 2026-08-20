# dispatch_sig

`_ZN4ARAD10DISPATCHER36Arad_INTER_kAvatarHiddenOptionChange12dispatch_sigEP5CUserPci`

`ARAD::DISPATCHER::Arad_INTER_kAvatarHiddenOptionChange::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `ARAD::DISPATCHER::Arad_INTER_kAvatarHiddenOptionChange` | `0x08199d6e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08199d6e  _ZN4ARAD10DISPATCHER36Arad_INTER_kAvatarHiddenOptionChange12dispatch_sigEP5CUserPci
#           ARAD::DISPATCHER::Arad_INTER_kAvatarHiddenOptionChange::dispatch_sig(CUser*, char*, int)
# range [0x08199d6e, 0x08199f0d]
08199d6e +0x000:  push   %ebp
08199d6f +0x001:  mov    %esp,%ebp
08199d71 +0x003:  push   %esi
08199d72 +0x004:  push   %ebx
08199d73 +0x005:  sub    $0x30,%esp
08199d76 +0x008:  cmpl   $0x0,0xc(%ebp)
08199d7a +0x00c:  jne    08199d86 <+0x18>
08199d7c +0x00e:  mov    $0x664,%ebx
08199d81 +0x013:  jmp    08199f04 <+0x196>
08199d86 +0x018:  mov    0x10(%ebp),%eax
08199d89 +0x01b:  mov    %eax,-0xc(%ebp)
08199d8c +0x01e:  cmpl   $0x0,-0xc(%ebp)
08199d90 +0x022:  jne    08199dc8 <+0x5a>
08199d92 +0x024:  movl   $"AVATAR HIDDENOPTION CHANGE INTER_DSP(SigAvatarHiddenOptionChange) null.",0x10(%esp)
08199d9a +0x02c:  movl   $0x669,0xc(%esp)
08199da2 +0x034:  movl   $&_ZZN4ARAD10DISPATCHER36Arad_INTER_kAvatarHiddenOptionChange12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
08199daa +0x03c:  movl   $"localjapan/Arad_InterDispatcher.cpp",0x4(%esp)
08199db2 +0x044:  movl   $0x1,(%esp)
08199db9 +0x04b:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08199dbe +0x050:  mov    $0x66a,%ebx
08199dc3 +0x055:  jmp    08199f04 <+0x196>
08199dc8 +0x05a:  mov    0xc(%ebp),%eax
08199dcb +0x05d:  mov    %eax,(%esp)
08199dce +0x060:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08199dd3 +0x065:  test   %eax,%eax
08199dd5 +0x067:  sete   %al
08199dd8 +0x06a:  test   %al,%al
08199dda +0x06c:  je     08199de6 <+0x78>
08199ddc +0x06e:  mov    $0x670,%ebx
08199de1 +0x073:  jmp    08199f04 <+0x196>
08199de6 +0x078:  call   0817f0a4 <_GLOBAL__I__ZN29AvatarFixedHiddenOptionServerC2Ev+0x2d5>  ; global constructors keyed to AvatarFixedHiddenOptionServer::AvatarFixedHiddenOptionServer()+0x2d5
08199deb +0x07d:  mov    -0xc(%ebp),%edx
08199dee +0x080:  mov    %edx,0x8(%esp)
08199df2 +0x084:  mov    0xc(%ebp),%edx
08199df5 +0x087:  mov    %edx,0x4(%esp)
08199df9 +0x08b:  mov    %eax,(%esp)
08199dfc +0x08e:  call   0817e4c6 <_ZN29AvatarFixedHiddenOptionServer14CheckConditionEP5CUserPN4arad27SigAvatarHiddenOptionChangeE>  ; AvatarFixedHiddenOptionServer::CheckCondition(CUser*, arad::SigAvatarHiddenOptionChange*)
08199e01 +0x093:  xor    $0x1,%eax
08199e04 +0x096:  test   %al,%al
08199e06 +0x098:  je     08199e12 <+0xa4>
08199e08 +0x09a:  mov    $0x0,%ebx
08199e0d +0x09f:  jmp    08199f04 <+0x196>
08199e12 +0x0a4:  call   0817f0a4 <_GLOBAL__I__ZN29AvatarFixedHiddenOptionServerC2Ev+0x2d5>  ; global constructors keyed to AvatarFixedHiddenOptionServer::AvatarFixedHiddenOptionServer()+0x2d5
08199e17 +0x0a9:  mov    -0xc(%ebp),%edx
08199e1a +0x0ac:  mov    %edx,0x8(%esp)
08199e1e +0x0b0:  mov    0xc(%ebp),%edx
08199e21 +0x0b3:  mov    %edx,0x4(%esp)
08199e25 +0x0b7:  mov    %eax,(%esp)
08199e28 +0x0ba:  call   0817e8d6 <_ZN29AvatarFixedHiddenOptionServer18ChangeHiddenOptionEP5CUserPN4arad27SigAvatarHiddenOptionChangeE>  ; AvatarFixedHiddenOptionServer::ChangeHiddenOption(CUser*, arad::SigAvatarHiddenOptionChange*)
08199e2d +0x0bf:  xor    $0x1,%eax
08199e30 +0x0c2:  test   %al,%al
08199e32 +0x0c4:  je     08199e3e <+0xd0>
08199e34 +0x0c6:  mov    $0x0,%ebx
08199e39 +0x0cb:  jmp    08199f04 <+0x196>
08199e3e +0x0d0:  lea    -0x18(%ebp),%eax
08199e41 +0x0d3:  mov    %eax,(%esp)
08199e44 +0x0d6:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08199e49 +0x0db:  lea    -0x18(%ebp),%eax
08199e4c +0x0de:  mov    %eax,(%esp)
08199e4f +0x0e1:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
08199e54 +0x0e6:  movl   $0x24c,0x8(%esp)
08199e5c +0x0ee:  movl   $0x1,0x4(%esp)
08199e64 +0x0f6:  lea    -0x18(%ebp),%eax
08199e67 +0x0f9:  mov    %eax,(%esp)
08199e6a +0x0fc:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08199e6f +0x101:  movl   $0x1,0x4(%esp)
08199e77 +0x109:  lea    -0x18(%ebp),%eax
08199e7a +0x10c:  mov    %eax,(%esp)
08199e7d +0x10f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08199e82 +0x114:  mov    -0xc(%ebp),%eax
08199e85 +0x117:  movzwl 0x2(%eax),%eax
08199e89 +0x11b:  cwtl
08199e8a +0x11c:  mov    %eax,0x4(%esp)
08199e8e +0x120:  lea    -0x18(%ebp),%eax
08199e91 +0x123:  mov    %eax,(%esp)
08199e94 +0x126:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08199e99 +0x12b:  mov    -0xc(%ebp),%eax
08199e9c +0x12e:  movzwl 0x4(%eax),%eax
08199ea0 +0x132:  movzwl %ax,%eax
08199ea3 +0x135:  mov    %eax,0x4(%esp)
08199ea7 +0x139:  lea    -0x18(%ebp),%eax
08199eaa +0x13c:  mov    %eax,(%esp)
08199ead +0x13f:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08199eb2 +0x144:  movl   $0x1,0x4(%esp)
08199eba +0x14c:  lea    -0x18(%ebp),%eax
08199ebd +0x14f:  mov    %eax,(%esp)
08199ec0 +0x152:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08199ec5 +0x157:  lea    -0x18(%ebp),%eax
08199ec8 +0x15a:  mov    %eax,0x4(%esp)
08199ecc +0x15e:  mov    0xc(%ebp),%eax
08199ecf +0x161:  mov    %eax,(%esp)
08199ed2 +0x164:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08199ed7 +0x169:  mov    $0x0,%ebx
08199edc +0x16e:  lea    -0x18(%ebp),%eax
08199edf +0x171:  mov    %eax,(%esp)
08199ee2 +0x174:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08199ee7 +0x179:  jmp    08199f04 <+0x196>
08199ee9 +0x17b:  mov    %edx,%ebx
08199eeb +0x17d:  mov    %eax,%esi
08199eed +0x17f:  lea    -0x18(%ebp),%eax
08199ef0 +0x182:  mov    %eax,(%esp)
08199ef3 +0x185:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08199ef8 +0x18a:  mov    %esi,%eax
08199efa +0x18c:  mov    %ebx,%edx
08199efc +0x18e:  mov    %eax,(%esp)
08199eff +0x191:  call   08ae3750 <_Unwind_Resume>
08199f04 +0x196:  mov    %ebx,%eax
08199f06 +0x198:  add    $0x30,%esp
08199f09 +0x19b:  pop    %ebx
08199f0a +0x19c:  pop    %esi
08199f0b +0x19d:  pop    %ebp
08199f0c +0x19e:  ret
08199f0d +0x19f:  nop
```

## 反编译 C

```c
// ARAD::DISPATCHER::Arad_INTER_kAvatarHiddenOptionChange::dispatch_sig @ 0x8199d6e

/* ARAD::DISPATCHER::Arad_INTER_kAvatarHiddenOptionChange::dispatch_sig(CUser*, char*, int) */

undefined4
ARAD::DISPATCHER::Arad_INTER_kAvatarHiddenOptionChange::dispatch_sig
          (CUser *param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  AvatarFixedHiddenOptionServer *pAVar3;
  undefined4 uVar4;
  PacketGuard local_1c [12];
  SigAvatarHiddenOptionChange *local_10;
  
  if (param_2 == (char *)0x0) {
    uVar4 = 0x664;
  }
  else {
    local_10 = (SigAvatarHiddenOptionChange *)param_3;
    if (param_3 == 0) {
      LogManager::logFormat
                (1,"localjapan/Arad_InterDispatcher.cpp",
                 "virtual int ARAD::DISPATCHER::Arad_INTER_kAvatarHiddenOptionChange::dispatch_sig(CUser*, char*, int)"
                 ,0x669,"AVATAR HIDDENOPTION CHANGE INTER_DSP(SigAvatarHiddenOptionChange) null.");
      uVar4 = 0x66a;
    }
    else {
      iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
      if (iVar2 == 0) {
        uVar4 = 0x670;
      }
      else {
        pAVar3 = (AvatarFixedHiddenOptionServer *)Singleton<AvatarFixedHiddenOptionServer>::Get();
        cVar1 = AvatarFixedHiddenOptionServer::CheckCondition(pAVar3,(CUser *)param_2,local_10);
        if (cVar1 == '\x01') {
          pAVar3 = (AvatarFixedHiddenOptionServer *)Singleton<AvatarFixedHiddenOptionServer>::Get();
          cVar1 = AvatarFixedHiddenOptionServer::ChangeHiddenOption
                            (pAVar3,(CUser *)param_2,local_10);
          if (cVar1 == '\x01') {
            PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 08199e4f to 08199ed6 has its CatchHandler @ 08199ee9 */
            InterfacePacketBuf::clear((InterfacePacketBuf *)local_1c);
            InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x24c);
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
            InterfacePacketBuf::put_short
                      ((InterfacePacketBuf *)local_1c,(int)*(short *)(local_10 + 2));
            InterfacePacketBuf::put_short
                      ((InterfacePacketBuf *)local_1c,(uint)*(ushort *)(local_10 + 4));
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

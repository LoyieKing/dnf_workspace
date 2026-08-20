# dispatch_sig

`_ZN23Inter_SecurityCardIssue12dispatch_sigEP5CUserPci`

`Inter_SecurityCardIssue::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_SecurityCardIssue` | `0x084d3a22` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084d3a22  _ZN23Inter_SecurityCardIssue12dispatch_sigEP5CUserPci
#           Inter_SecurityCardIssue::dispatch_sig(CUser*, char*, int)
# range [0x084d3a22, 0x084d3d55]
084d3a22 +0x000:  push   %ebp
084d3a23 +0x001:  mov    %esp,%ebp
084d3a25 +0x003:  push   %edi
084d3a26 +0x004:  push   %esi
084d3a27 +0x005:  push   %ebx
084d3a28 +0x006:  sub    $0xfc,%esp
084d3a2e +0x00c:  mov    0xc(%ebp),%eax
084d3a31 +0x00f:  mov    %eax,(%esp)
084d3a34 +0x012:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084d3a39 +0x017:  cmp    $0x2,%eax
084d3a3c +0x01a:  setle  %al
084d3a3f +0x01d:  test   %al,%al
084d3a41 +0x01f:  je     084d3a4d <+0x2b>
084d3a43 +0x021:  mov    $0x0,%eax
084d3a48 +0x026:  jmp    084d3d4b <+0x329>
084d3a4d +0x02b:  mov    0x10(%ebp),%eax
084d3a50 +0x02e:  mov    %eax,-0x1c(%ebp)
084d3a53 +0x031:  mov    -0x1c(%ebp),%eax
084d3a56 +0x034:  mov    0x8c(%eax),%eax
084d3a5c +0x03a:  test   %eax,%eax
084d3a5e +0x03c:  jne    084d3d23 <+0x301>
084d3a64 +0x042:  lea    -0x9a(%ebp),%edx
084d3a6a +0x048:  mov    $0x42,%ebx
084d3a6f +0x04d:  mov    $0x0,%eax
084d3a74 +0x052:  mov    %edx,%ecx
084d3a76 +0x054:  and    $0x2,%ecx
084d3a79 +0x057:  test   %ecx,%ecx
084d3a7b +0x059:  je     084d3a86 <+0x64>
084d3a7d +0x05b:  mov    %ax,(%edx)
084d3a80 +0x05e:  add    $0x2,%edx
084d3a83 +0x061:  sub    $0x2,%ebx
084d3a86 +0x064:  mov    %ebx,%ecx
084d3a88 +0x066:  shr    $0x2,%ecx
084d3a8b +0x069:  mov    %edx,%edi
084d3a8d +0x06b:  rep stos %eax,%es:(%edi)
084d3a8f +0x06d:  mov    %edi,%edx
084d3a91 +0x06f:  mov    %ebx,%ecx
084d3a93 +0x071:  and    $0x2,%ecx
084d3a96 +0x074:  test   %ecx,%ecx
084d3a98 +0x076:  je     084d3aa0 <+0x7e>
084d3a9a +0x078:  mov    %ax,(%edx)
084d3a9d +0x07b:  add    $0x2,%edx
084d3aa0 +0x07e:  mov    %ebx,%ecx
084d3aa2 +0x080:  and    $0x1,%ecx
084d3aa5 +0x083:  test   %ecx,%ecx
084d3aa7 +0x085:  je     084d3aae <+0x8c>
084d3aa9 +0x087:  mov    %al,(%edx)
084d3aab +0x089:  add    $0x1,%edx
084d3aae +0x08c:  lea    -0x58(%ebp),%ebx
084d3ab1 +0x08f:  mov    $0x0,%eax
084d3ab6 +0x094:  mov    $0xc,%edx
084d3abb +0x099:  mov    %ebx,%edi
084d3abd +0x09b:  mov    %edx,%ecx
084d3abf +0x09d:  rep stos %eax,%es:(%edi)
084d3ac1 +0x09f:  mov    0xc(%ebp),%eax
084d3ac4 +0x0a2:  mov    %eax,(%esp)
084d3ac7 +0x0a5:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
084d3acc +0x0aa:  movl   $0x0,0x4(%esp)
084d3ad4 +0x0b2:  mov    %eax,(%esp)
084d3ad7 +0x0b5:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
084d3adc +0x0ba:  mov    %eax,0xc(%esp)
084d3ae0 +0x0be:  movl   $"%s",0x8(%esp)
084d3ae8 +0x0c6:  movl   $0x30,0x4(%esp)
084d3af0 +0x0ce:  lea    -0x58(%ebp),%eax
084d3af3 +0x0d1:  mov    %eax,(%esp)
084d3af6 +0x0d4:  call   0858c81c <_ZN6OS_API8snprintfEPcjPKcz>  ; OS_API::snprintf(char*, unsigned int, char const*, ...)
084d3afb +0x0d9:  mov    -0x1c(%ebp),%eax
084d3afe +0x0dc:  lea    0x4(%eax),%ecx
084d3b01 +0x0df:  mov    &_ZN10GlobalData20s_securityCardCenterE,%eax
084d3b06 +0x0e4:  lea    -0x9a(%ebp),%edx
084d3b0c +0x0ea:  mov    %edx,0x8(%esp)
084d3b10 +0x0ee:  mov    %ecx,0x4(%esp)
084d3b14 +0x0f2:  mov    %eax,(%esp)
084d3b17 +0x0f5:  call   085fe2e2 <_ZN8WongWork19CSecurityCardCenter13encryptStringEPKcPc>  ; WongWork::CSecurityCardCenter::encryptString(char const*, char*)
084d3b1c +0x0fa:  mov    &_ZN10GlobalData20s_securityCardCenterE,%eax
084d3b21 +0x0ff:  lea    -0x58(%ebp),%edx
084d3b24 +0x102:  mov    %edx,0x8(%esp)
084d3b28 +0x106:  lea    -0x58(%ebp),%edx
084d3b2b +0x109:  mov    %edx,0x4(%esp)
084d3b2f +0x10d:  mov    %eax,(%esp)
084d3b32 +0x110:  call   085fe2e2 <_ZN8WongWork19CSecurityCardCenter13encryptStringEPKcPc>  ; WongWork::CSecurityCardCenter::encryptString(char const*, char*)
084d3b37 +0x115:  movl   $0x42,0x8(%esp)
084d3b3f +0x11d:  movl   $0x0,0x4(%esp)
084d3b47 +0x125:  lea    -0xdc(%ebp),%eax
084d3b4d +0x12b:  mov    %eax,(%esp)
084d3b50 +0x12e:  call   0807dcc0 <_init+0x5b8>
084d3b55 +0x133:  mov    -0x1c(%ebp),%eax
084d3b58 +0x136:  lea    0x25(%eax),%ecx
084d3b5b +0x139:  mov    &_ZN10GlobalData20s_securityCardCenterE,%eax
084d3b60 +0x13e:  lea    -0xdc(%ebp),%edx
084d3b66 +0x144:  mov    %edx,0x8(%esp)
084d3b6a +0x148:  mov    %ecx,0x4(%esp)
084d3b6e +0x14c:  mov    %eax,(%esp)
084d3b71 +0x14f:  call   085fe2e2 <_ZN8WongWork19CSecurityCardCenter13encryptStringEPKcPc>  ; WongWork::CSecurityCardCenter::encryptString(char const*, char*)
084d3b76 +0x154:  lea    -0x28(%ebp),%eax
084d3b79 +0x157:  mov    %eax,(%esp)
084d3b7c +0x15a:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084d3b81 +0x15f:  movl   $0xa4,0x8(%esp)
084d3b89 +0x167:  movl   $0x1,0x4(%esp)
084d3b91 +0x16f:  lea    -0x28(%ebp),%eax
084d3b94 +0x172:  mov    %eax,(%esp)
084d3b97 +0x175:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084d3b9c +0x17a:  movl   $0x1,0x4(%esp)
084d3ba4 +0x182:  lea    -0x28(%ebp),%eax
084d3ba7 +0x185:  mov    %eax,(%esp)
084d3baa +0x188:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d3baf +0x18d:  lea    -0x58(%ebp),%eax
084d3bb2 +0x190:  mov    %eax,(%esp)
084d3bb5 +0x193:  call   0807e3b0 <_init+0xca8>
084d3bba +0x198:  mov    %eax,0x4(%esp)
084d3bbe +0x19c:  lea    -0x28(%ebp),%eax
084d3bc1 +0x19f:  mov    %eax,(%esp)
084d3bc4 +0x1a2:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084d3bc9 +0x1a7:  lea    -0x58(%ebp),%eax
084d3bcc +0x1aa:  mov    %eax,(%esp)
084d3bcf +0x1ad:  call   0807e3b0 <_init+0xca8>
084d3bd4 +0x1b2:  mov    %eax,0x8(%esp)
084d3bd8 +0x1b6:  lea    -0x58(%ebp),%eax
084d3bdb +0x1b9:  mov    %eax,0x4(%esp)
084d3bdf +0x1bd:  lea    -0x28(%ebp),%eax
084d3be2 +0x1c0:  mov    %eax,(%esp)
084d3be5 +0x1c3:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084d3bea +0x1c8:  lea    -0x9a(%ebp),%eax
084d3bf0 +0x1ce:  mov    %eax,(%esp)
084d3bf3 +0x1d1:  call   0807e3b0 <_init+0xca8>
084d3bf8 +0x1d6:  mov    %eax,0x4(%esp)
084d3bfc +0x1da:  lea    -0x28(%ebp),%eax
084d3bff +0x1dd:  mov    %eax,(%esp)
084d3c02 +0x1e0:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084d3c07 +0x1e5:  lea    -0x9a(%ebp),%eax
084d3c0d +0x1eb:  mov    %eax,(%esp)
084d3c10 +0x1ee:  call   0807e3b0 <_init+0xca8>
084d3c15 +0x1f3:  mov    %eax,0x8(%esp)
084d3c19 +0x1f7:  lea    -0x9a(%ebp),%eax
084d3c1f +0x1fd:  mov    %eax,0x4(%esp)
084d3c23 +0x201:  lea    -0x28(%ebp),%eax
084d3c26 +0x204:  mov    %eax,(%esp)
084d3c29 +0x207:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084d3c2e +0x20c:  lea    -0xdc(%ebp),%eax
084d3c34 +0x212:  mov    %eax,(%esp)
084d3c37 +0x215:  call   0807e3b0 <_init+0xca8>
084d3c3c +0x21a:  mov    %eax,0x4(%esp)
084d3c40 +0x21e:  lea    -0x28(%ebp),%eax
084d3c43 +0x221:  mov    %eax,(%esp)
084d3c46 +0x224:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084d3c4b +0x229:  lea    -0xdc(%ebp),%eax
084d3c51 +0x22f:  mov    %eax,(%esp)
084d3c54 +0x232:  call   0807e3b0 <_init+0xca8>
084d3c59 +0x237:  mov    %eax,0x8(%esp)
084d3c5d +0x23b:  lea    -0xdc(%ebp),%eax
084d3c63 +0x241:  mov    %eax,0x4(%esp)
084d3c67 +0x245:  lea    -0x28(%ebp),%eax
084d3c6a +0x248:  mov    %eax,(%esp)
084d3c6d +0x24b:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084d3c72 +0x250:  movl   $0x1,0x4(%esp)
084d3c7a +0x258:  lea    -0x28(%ebp),%eax
084d3c7d +0x25b:  mov    %eax,(%esp)
084d3c80 +0x25e:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084d3c85 +0x263:  lea    -0x28(%ebp),%eax
084d3c88 +0x266:  mov    %eax,0x4(%esp)
084d3c8c +0x26a:  mov    0xc(%ebp),%eax
084d3c8f +0x26d:  mov    %eax,(%esp)
084d3c92 +0x270:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084d3c97 +0x275:  mov    0xc(%ebp),%eax
084d3c9a +0x278:  mov    %eax,(%esp)
084d3c9d +0x27b:  call   0822fd20 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53ca>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53ca
084d3ca2 +0x280:  mov    %eax,(%esp)
084d3ca5 +0x283:  call   085fdd68 <_ZN8WongWork13CSecurityCard4initEv>  ; WongWork::CSecurityCard::init()
084d3caa +0x288:  mov    -0x1c(%ebp),%eax
084d3cad +0x28b:  lea    0x5e(%eax),%esi
084d3cb0 +0x28e:  mov    -0x1c(%ebp),%eax
084d3cb3 +0x291:  lea    0x37(%eax),%ebx
084d3cb6 +0x294:  mov    0xc(%ebp),%eax
084d3cb9 +0x297:  mov    %eax,(%esp)
084d3cbc +0x29a:  call   0822fd20 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53ca>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53ca
084d3cc1 +0x29f:  mov    %esi,0x1c(%esp)
084d3cc5 +0x2a3:  movl   $0x0,0x18(%esp)
084d3ccd +0x2ab:  movl   $0x0,0x14(%esp)
084d3cd5 +0x2b3:  movl   $0x0,0x10(%esp)
084d3cdd +0x2bb:  movl   $0x0,0xc(%esp)
084d3ce5 +0x2c3:  movl   $0x0,0x8(%esp)
084d3ced +0x2cb:  mov    %ebx,0x4(%esp)
084d3cf1 +0x2cf:  mov    %eax,(%esp)
084d3cf4 +0x2d2:  call   085fde9c <_ZN8WongWork13CSecurityCard19setSecurityCardInfoEPKcbbiiiPc>  ; WongWork::CSecurityCard::setSecurityCardInfo(char const*, bool, bool, int, int, int, char*)
084d3cf9 +0x2d7:  jmp    084d3d16 <+0x2f4>
084d3cfb +0x2d9:  mov    %edx,%ebx
084d3cfd +0x2db:  mov    %eax,%esi
084d3cff +0x2dd:  lea    -0x28(%ebp),%eax
084d3d02 +0x2e0:  mov    %eax,(%esp)
084d3d05 +0x2e3:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d3d0a +0x2e8:  mov    %esi,%eax
084d3d0c +0x2ea:  mov    %ebx,%edx
084d3d0e +0x2ec:  mov    %eax,(%esp)
084d3d11 +0x2ef:  call   08ae3750 <_Unwind_Resume>
084d3d16 +0x2f4:  lea    -0x28(%ebp),%eax
084d3d19 +0x2f7:  mov    %eax,(%esp)
084d3d1c +0x2fa:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d3d21 +0x2ff:  jmp    084d3d46 <+0x324>
084d3d23 +0x301:  mov    -0x1c(%ebp),%eax
084d3d26 +0x304:  mov    0x8c(%eax),%eax
084d3d2c +0x30a:  movzbl %al,%eax
084d3d2f +0x30d:  mov    %eax,0x8(%esp)
084d3d33 +0x311:  movl   $0xa4,0x4(%esp)
084d3d3b +0x319:  mov    0xc(%ebp),%eax
084d3d3e +0x31c:  mov    %eax,(%esp)
084d3d41 +0x31f:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
084d3d46 +0x324:  mov    $0x0,%eax
084d3d4b +0x329:  add    $0xfc,%esp
084d3d51 +0x32f:  pop    %ebx
084d3d52 +0x330:  pop    %esi
084d3d53 +0x331:  pop    %edi
084d3d54 +0x332:  pop    %ebp
084d3d55 +0x333:  ret
```

## 反编译 C

```c
// Inter_SecurityCardIssue::dispatch_sig @ 0x84d3a22

/* WARNING: Removing unreachable block (ram,0x084d3aa9) */
/* Inter_SecurityCardIssue::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_SecurityCardIssue::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  size_t sVar4;
  CSecurityCard *pCVar5;
  char *pcVar6;
  uint uVar7;
  bool bVar8;
  byte bVar9;
  char local_e0 [66];
  char local_9e [66];
  char local_5c [48];
  PacketGuard local_2c [12];
  int local_20;
  
  bVar9 = 0;
  iVar2 = CUser::get_state((CUser *)param_2);
  if (2 < iVar2) {
    local_20 = param_3;
    if (*(int *)(param_3 + 0x8c) == 0) {
      pcVar6 = local_9e;
      uVar7 = 0x42;
      bVar8 = ((uint)pcVar6 & 2) != 0;
      if (bVar8) {
        local_9e[0] = '\0';
        local_9e[1] = '\0';
        pcVar6 = local_9e + 2;
        uVar7 = 0x40;
      }
      for (uVar7 = uVar7 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        pcVar6[0] = '\0';
        pcVar6[1] = '\0';
        pcVar6[2] = '\0';
        pcVar6[3] = '\0';
        pcVar6 = pcVar6 + ((uint)bVar9 * -2 + 1) * 4;
      }
      if (!bVar8) {
        pcVar6[0] = '\0';
        pcVar6[1] = '\0';
      }
      pcVar6 = local_5c;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        pcVar6[0] = '\0';
        pcVar6[1] = '\0';
        pcVar6[2] = '\0';
        pcVar6[3] = '\0';
        pcVar6 = pcVar6 + ((uint)bVar9 * -2 + 1) * 4;
      }
      uVar7 = CUser::get_acc_id((CUser *)param_2);
      uVar3 = NumberToString(uVar7,0);
      OS_API::snprintf(local_5c,0x30,"%s",uVar3);
      WongWork::CSecurityCardCenter::encryptString
                (GlobalData::s_securityCardCenter,(char *)(local_20 + 4),local_9e);
      WongWork::CSecurityCardCenter::encryptString
                (GlobalData::s_securityCardCenter,local_5c,local_5c);
      memset(local_e0,0,0x42);
      WongWork::CSecurityCardCenter::encryptString
                (GlobalData::s_securityCardCenter,(char *)(local_20 + 0x25),local_e0);
      PacketGuard::PacketGuard(local_2c);
                    /* try { // try from 084d3b97 to 084d3cf8 has its CatchHandler @ 084d3cfb */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_2c,1,0xa4);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,1);
      sVar4 = strlen(local_5c);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,sVar4);
      sVar4 = strlen(local_5c);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_2c,local_5c,sVar4);
      sVar4 = strlen(local_9e);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,sVar4);
      sVar4 = strlen(local_9e);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_2c,local_9e,sVar4);
      sVar4 = strlen(local_e0);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,sVar4);
      sVar4 = strlen(local_e0);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_2c,local_e0,sVar4);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_2c,true);
      CUser::Send((CUser *)param_2,local_2c);
      pCVar5 = (CSecurityCard *)CUser::getSecurityCard((CUser *)param_2);
      WongWork::CSecurityCard::init(pCVar5);
      pcVar6 = (char *)(local_20 + 0x5e);
      pcVar1 = (char *)(local_20 + 0x37);
      pCVar5 = (CSecurityCard *)CUser::getSecurityCard((CUser *)param_2);
      WongWork::CSecurityCard::setSecurityCardInfo(pCVar5,pcVar1,false,false,0,0,0,pcVar6);
      PacketGuard::~PacketGuard(local_2c);
    }
    else {
      CUser::SendCmdErrorPacket((CUser *)param_2,0xa4,*(uint *)(param_3 + 0x8c) & 0xff);
    }
  }
  return 0;
}
```

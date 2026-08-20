# dispatch_sig

`_ZN28Inter_SecurityCardRetransfer12dispatch_sigEP5CUserPci`

`Inter_SecurityCardRetransfer::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_SecurityCardRetransfer` | `0x084d3e78` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084d3e78  _ZN28Inter_SecurityCardRetransfer12dispatch_sigEP5CUserPci
#           Inter_SecurityCardRetransfer::dispatch_sig(CUser*, char*, int)
# range [0x084d3e78, 0x084d41a9]
084d3e78 +0x000:  push   %ebp
084d3e79 +0x001:  mov    %esp,%ebp
084d3e7b +0x003:  push   %edi
084d3e7c +0x004:  push   %esi
084d3e7d +0x005:  push   %ebx
084d3e7e +0x006:  sub    $0xfc,%esp
084d3e84 +0x00c:  mov    0xc(%ebp),%eax
084d3e87 +0x00f:  mov    %eax,(%esp)
084d3e8a +0x012:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084d3e8f +0x017:  cmp    $0x2,%eax
084d3e92 +0x01a:  setle  %al
084d3e95 +0x01d:  test   %al,%al
084d3e97 +0x01f:  je     084d3ea3 <+0x2b>
084d3e99 +0x021:  mov    $0x0,%eax
084d3e9e +0x026:  jmp    084d419f <+0x327>
084d3ea3 +0x02b:  mov    0x10(%ebp),%eax
084d3ea6 +0x02e:  mov    %eax,-0x1c(%ebp)
084d3ea9 +0x031:  mov    -0x1c(%ebp),%eax
084d3eac +0x034:  mov    0x88(%eax),%eax
084d3eb2 +0x03a:  test   %eax,%eax
084d3eb4 +0x03c:  jne    084d4177 <+0x2ff>
084d3eba +0x042:  lea    -0x9a(%ebp),%edx
084d3ec0 +0x048:  mov    $0x42,%ebx
084d3ec5 +0x04d:  mov    $0x0,%eax
084d3eca +0x052:  mov    %edx,%ecx
084d3ecc +0x054:  and    $0x2,%ecx
084d3ecf +0x057:  test   %ecx,%ecx
084d3ed1 +0x059:  je     084d3edc <+0x64>
084d3ed3 +0x05b:  mov    %ax,(%edx)
084d3ed6 +0x05e:  add    $0x2,%edx
084d3ed9 +0x061:  sub    $0x2,%ebx
084d3edc +0x064:  mov    %ebx,%ecx
084d3ede +0x066:  shr    $0x2,%ecx
084d3ee1 +0x069:  mov    %edx,%edi
084d3ee3 +0x06b:  rep stos %eax,%es:(%edi)
084d3ee5 +0x06d:  mov    %edi,%edx
084d3ee7 +0x06f:  mov    %ebx,%ecx
084d3ee9 +0x071:  and    $0x2,%ecx
084d3eec +0x074:  test   %ecx,%ecx
084d3eee +0x076:  je     084d3ef6 <+0x7e>
084d3ef0 +0x078:  mov    %ax,(%edx)
084d3ef3 +0x07b:  add    $0x2,%edx
084d3ef6 +0x07e:  mov    %ebx,%ecx
084d3ef8 +0x080:  and    $0x1,%ecx
084d3efb +0x083:  test   %ecx,%ecx
084d3efd +0x085:  je     084d3f04 <+0x8c>
084d3eff +0x087:  mov    %al,(%edx)
084d3f01 +0x089:  add    $0x1,%edx
084d3f04 +0x08c:  lea    -0x58(%ebp),%ebx
084d3f07 +0x08f:  mov    $0x0,%eax
084d3f0c +0x094:  mov    $0xc,%edx
084d3f11 +0x099:  mov    %ebx,%edi
084d3f13 +0x09b:  mov    %edx,%ecx
084d3f15 +0x09d:  rep stos %eax,%es:(%edi)
084d3f17 +0x09f:  mov    0xc(%ebp),%eax
084d3f1a +0x0a2:  mov    %eax,(%esp)
084d3f1d +0x0a5:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
084d3f22 +0x0aa:  movl   $0x0,0x4(%esp)
084d3f2a +0x0b2:  mov    %eax,(%esp)
084d3f2d +0x0b5:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
084d3f32 +0x0ba:  mov    %eax,0xc(%esp)
084d3f36 +0x0be:  movl   $"%s",0x8(%esp)
084d3f3e +0x0c6:  movl   $0x30,0x4(%esp)
084d3f46 +0x0ce:  lea    -0x58(%ebp),%eax
084d3f49 +0x0d1:  mov    %eax,(%esp)
084d3f4c +0x0d4:  call   0858c81c <_ZN6OS_API8snprintfEPcjPKcz>  ; OS_API::snprintf(char*, unsigned int, char const*, ...)
084d3f51 +0x0d9:  mov    -0x1c(%ebp),%eax
084d3f54 +0x0dc:  lea    0x4(%eax),%ecx
084d3f57 +0x0df:  mov    &_ZN10GlobalData20s_securityCardCenterE,%eax
084d3f5c +0x0e4:  lea    -0x9a(%ebp),%edx
084d3f62 +0x0ea:  mov    %edx,0x8(%esp)
084d3f66 +0x0ee:  mov    %ecx,0x4(%esp)
084d3f6a +0x0f2:  mov    %eax,(%esp)
084d3f6d +0x0f5:  call   085fe2e2 <_ZN8WongWork19CSecurityCardCenter13encryptStringEPKcPc>  ; WongWork::CSecurityCardCenter::encryptString(char const*, char*)
084d3f72 +0x0fa:  mov    &_ZN10GlobalData20s_securityCardCenterE,%eax
084d3f77 +0x0ff:  lea    -0x58(%ebp),%edx
084d3f7a +0x102:  mov    %edx,0x8(%esp)
084d3f7e +0x106:  lea    -0x58(%ebp),%edx
084d3f81 +0x109:  mov    %edx,0x4(%esp)
084d3f85 +0x10d:  mov    %eax,(%esp)
084d3f88 +0x110:  call   085fe2e2 <_ZN8WongWork19CSecurityCardCenter13encryptStringEPKcPc>  ; WongWork::CSecurityCardCenter::encryptString(char const*, char*)
084d3f8d +0x115:  movl   $0x42,0x8(%esp)
084d3f95 +0x11d:  movl   $0x0,0x4(%esp)
084d3f9d +0x125:  lea    -0xdc(%ebp),%eax
084d3fa3 +0x12b:  mov    %eax,(%esp)
084d3fa6 +0x12e:  call   0807dcc0 <_init+0x5b8>
084d3fab +0x133:  mov    -0x1c(%ebp),%eax
084d3fae +0x136:  lea    0x52(%eax),%ecx
084d3fb1 +0x139:  mov    &_ZN10GlobalData20s_securityCardCenterE,%eax
084d3fb6 +0x13e:  lea    -0xdc(%ebp),%edx
084d3fbc +0x144:  mov    %edx,0x8(%esp)
084d3fc0 +0x148:  mov    %ecx,0x4(%esp)
084d3fc4 +0x14c:  mov    %eax,(%esp)
084d3fc7 +0x14f:  call   085fe2e2 <_ZN8WongWork19CSecurityCardCenter13encryptStringEPKcPc>  ; WongWork::CSecurityCardCenter::encryptString(char const*, char*)
084d3fcc +0x154:  lea    -0x28(%ebp),%eax
084d3fcf +0x157:  mov    %eax,(%esp)
084d3fd2 +0x15a:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084d3fd7 +0x15f:  movl   $0xca,0x8(%esp)
084d3fdf +0x167:  movl   $0x1,0x4(%esp)
084d3fe7 +0x16f:  lea    -0x28(%ebp),%eax
084d3fea +0x172:  mov    %eax,(%esp)
084d3fed +0x175:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084d3ff2 +0x17a:  movl   $0x1,0x4(%esp)
084d3ffa +0x182:  lea    -0x28(%ebp),%eax
084d3ffd +0x185:  mov    %eax,(%esp)
084d4000 +0x188:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d4005 +0x18d:  lea    -0x58(%ebp),%eax
084d4008 +0x190:  mov    %eax,(%esp)
084d400b +0x193:  call   0807e3b0 <_init+0xca8>
084d4010 +0x198:  mov    %eax,0x4(%esp)
084d4014 +0x19c:  lea    -0x28(%ebp),%eax
084d4017 +0x19f:  mov    %eax,(%esp)
084d401a +0x1a2:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084d401f +0x1a7:  lea    -0x58(%ebp),%eax
084d4022 +0x1aa:  mov    %eax,(%esp)
084d4025 +0x1ad:  call   0807e3b0 <_init+0xca8>
084d402a +0x1b2:  mov    %eax,0x8(%esp)
084d402e +0x1b6:  lea    -0x58(%ebp),%eax
084d4031 +0x1b9:  mov    %eax,0x4(%esp)
084d4035 +0x1bd:  lea    -0x28(%ebp),%eax
084d4038 +0x1c0:  mov    %eax,(%esp)
084d403b +0x1c3:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084d4040 +0x1c8:  lea    -0x9a(%ebp),%eax
084d4046 +0x1ce:  mov    %eax,(%esp)
084d4049 +0x1d1:  call   0807e3b0 <_init+0xca8>
084d404e +0x1d6:  mov    %eax,0x4(%esp)
084d4052 +0x1da:  lea    -0x28(%ebp),%eax
084d4055 +0x1dd:  mov    %eax,(%esp)
084d4058 +0x1e0:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084d405d +0x1e5:  lea    -0x9a(%ebp),%eax
084d4063 +0x1eb:  mov    %eax,(%esp)
084d4066 +0x1ee:  call   0807e3b0 <_init+0xca8>
084d406b +0x1f3:  mov    %eax,0x8(%esp)
084d406f +0x1f7:  lea    -0x9a(%ebp),%eax
084d4075 +0x1fd:  mov    %eax,0x4(%esp)
084d4079 +0x201:  lea    -0x28(%ebp),%eax
084d407c +0x204:  mov    %eax,(%esp)
084d407f +0x207:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084d4084 +0x20c:  lea    -0xdc(%ebp),%eax
084d408a +0x212:  mov    %eax,(%esp)
084d408d +0x215:  call   0807e3b0 <_init+0xca8>
084d4092 +0x21a:  mov    %eax,0x4(%esp)
084d4096 +0x21e:  lea    -0x28(%ebp),%eax
084d4099 +0x221:  mov    %eax,(%esp)
084d409c +0x224:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084d40a1 +0x229:  lea    -0xdc(%ebp),%eax
084d40a7 +0x22f:  mov    %eax,(%esp)
084d40aa +0x232:  call   0807e3b0 <_init+0xca8>
084d40af +0x237:  mov    %eax,0x8(%esp)
084d40b3 +0x23b:  lea    -0xdc(%ebp),%eax
084d40b9 +0x241:  mov    %eax,0x4(%esp)
084d40bd +0x245:  lea    -0x28(%ebp),%eax
084d40c0 +0x248:  mov    %eax,(%esp)
084d40c3 +0x24b:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084d40c8 +0x250:  movl   $0x1,0x4(%esp)
084d40d0 +0x258:  lea    -0x28(%ebp),%eax
084d40d3 +0x25b:  mov    %eax,(%esp)
084d40d6 +0x25e:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084d40db +0x263:  lea    -0x28(%ebp),%eax
084d40de +0x266:  mov    %eax,0x4(%esp)
084d40e2 +0x26a:  mov    0xc(%ebp),%eax
084d40e5 +0x26d:  mov    %eax,(%esp)
084d40e8 +0x270:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084d40ed +0x275:  mov    0xc(%ebp),%eax
084d40f0 +0x278:  mov    %eax,(%esp)
084d40f3 +0x27b:  call   0822fd20 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53ca>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53ca
084d40f8 +0x280:  mov    %eax,(%esp)
084d40fb +0x283:  call   085fdd68 <_ZN8WongWork13CSecurityCard4initEv>  ; WongWork::CSecurityCard::init()
084d4100 +0x288:  mov    -0x1c(%ebp),%eax
084d4103 +0x28b:  lea    0x2b(%eax),%ebx
084d4106 +0x28e:  mov    0xc(%ebp),%eax
084d4109 +0x291:  mov    %eax,(%esp)
084d410c +0x294:  call   0822fd20 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53ca>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53ca
084d4111 +0x299:  movl   $0x0,0x1c(%esp)
084d4119 +0x2a1:  movl   $0x0,0x18(%esp)
084d4121 +0x2a9:  movl   $0x0,0x14(%esp)
084d4129 +0x2b1:  movl   $0x0,0x10(%esp)
084d4131 +0x2b9:  movl   $0x0,0xc(%esp)
084d4139 +0x2c1:  movl   $0x1,0x8(%esp)
084d4141 +0x2c9:  mov    %ebx,0x4(%esp)
084d4145 +0x2cd:  mov    %eax,(%esp)
084d4148 +0x2d0:  call   085fde9c <_ZN8WongWork13CSecurityCard19setSecurityCardInfoEPKcbbiiiPc>  ; WongWork::CSecurityCard::setSecurityCardInfo(char const*, bool, bool, int, int, int, char*)
084d414d +0x2d5:  jmp    084d416a <+0x2f2>
084d414f +0x2d7:  mov    %edx,%ebx
084d4151 +0x2d9:  mov    %eax,%esi
084d4153 +0x2db:  lea    -0x28(%ebp),%eax
084d4156 +0x2de:  mov    %eax,(%esp)
084d4159 +0x2e1:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d415e +0x2e6:  mov    %esi,%eax
084d4160 +0x2e8:  mov    %ebx,%edx
084d4162 +0x2ea:  mov    %eax,(%esp)
084d4165 +0x2ed:  call   08ae3750 <_Unwind_Resume>
084d416a +0x2f2:  lea    -0x28(%ebp),%eax
084d416d +0x2f5:  mov    %eax,(%esp)
084d4170 +0x2f8:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d4175 +0x2fd:  jmp    084d419a <+0x322>
084d4177 +0x2ff:  mov    -0x1c(%ebp),%eax
084d417a +0x302:  mov    0x88(%eax),%eax
084d4180 +0x308:  movzbl %al,%eax
084d4183 +0x30b:  mov    %eax,0x8(%esp)
084d4187 +0x30f:  movl   $0xca,0x4(%esp)
084d418f +0x317:  mov    0xc(%ebp),%eax
084d4192 +0x31a:  mov    %eax,(%esp)
084d4195 +0x31d:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
084d419a +0x322:  mov    $0x0,%eax
084d419f +0x327:  add    $0xfc,%esp
084d41a5 +0x32d:  pop    %ebx
084d41a6 +0x32e:  pop    %esi
084d41a7 +0x32f:  pop    %edi
084d41a8 +0x330:  pop    %ebp
084d41a9 +0x331:  ret
```

## 反编译 C

```c
// Inter_SecurityCardRetransfer::dispatch_sig @ 0x84d3e78

/* WARNING: Removing unreachable block (ram,0x084d3eff) */
/* Inter_SecurityCardRetransfer::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_SecurityCardRetransfer::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  size_t sVar3;
  CSecurityCard *pCVar4;
  char *pcVar5;
  uint uVar6;
  bool bVar7;
  byte bVar8;
  char local_e0 [66];
  char local_9e [66];
  char local_5c [48];
  PacketGuard local_2c [12];
  int local_20;
  
  bVar8 = 0;
  iVar1 = CUser::get_state((CUser *)param_2);
  if (2 < iVar1) {
    local_20 = param_3;
    if (*(int *)(param_3 + 0x88) == 0) {
      pcVar5 = local_9e;
      uVar6 = 0x42;
      bVar7 = ((uint)pcVar5 & 2) != 0;
      if (bVar7) {
        local_9e[0] = '\0';
        local_9e[1] = '\0';
        pcVar5 = local_9e + 2;
        uVar6 = 0x40;
      }
      for (uVar6 = uVar6 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        pcVar5[0] = '\0';
        pcVar5[1] = '\0';
        pcVar5[2] = '\0';
        pcVar5[3] = '\0';
        pcVar5 = pcVar5 + ((uint)bVar8 * -2 + 1) * 4;
      }
      if (!bVar7) {
        pcVar5[0] = '\0';
        pcVar5[1] = '\0';
      }
      pcVar5 = local_5c;
      for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
        pcVar5[0] = '\0';
        pcVar5[1] = '\0';
        pcVar5[2] = '\0';
        pcVar5[3] = '\0';
        pcVar5 = pcVar5 + ((uint)bVar8 * -2 + 1) * 4;
      }
      uVar6 = CUser::get_acc_id((CUser *)param_2);
      uVar2 = NumberToString(uVar6,0);
      OS_API::snprintf(local_5c,0x30,"%s",uVar2);
      WongWork::CSecurityCardCenter::encryptString
                (GlobalData::s_securityCardCenter,(char *)(local_20 + 4),local_9e);
      WongWork::CSecurityCardCenter::encryptString
                (GlobalData::s_securityCardCenter,local_5c,local_5c);
      memset(local_e0,0,0x42);
      WongWork::CSecurityCardCenter::encryptString
                (GlobalData::s_securityCardCenter,(char *)(local_20 + 0x52),local_e0);
      PacketGuard::PacketGuard(local_2c);
                    /* try { // try from 084d3fed to 084d414c has its CatchHandler @ 084d414f */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_2c,1,0xca);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,1);
      sVar3 = strlen(local_5c);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,sVar3);
      sVar3 = strlen(local_5c);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_2c,local_5c,sVar3);
      sVar3 = strlen(local_9e);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,sVar3);
      sVar3 = strlen(local_9e);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_2c,local_9e,sVar3);
      sVar3 = strlen(local_e0);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,sVar3);
      sVar3 = strlen(local_e0);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_2c,local_e0,sVar3);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_2c,true);
      CUser::Send((CUser *)param_2,local_2c);
      pCVar4 = (CSecurityCard *)CUser::getSecurityCard((CUser *)param_2);
      WongWork::CSecurityCard::init(pCVar4);
      pcVar5 = (char *)(local_20 + 0x2b);
      pCVar4 = (CSecurityCard *)CUser::getSecurityCard((CUser *)param_2);
      WongWork::CSecurityCard::setSecurityCardInfo(pCVar4,pcVar5,true,false,0,0,0,(char *)0x0);
      PacketGuard::~PacketGuard(local_2c);
    }
    else {
      CUser::SendCmdErrorPacket((CUser *)param_2,0xca,*(uint *)(param_3 + 0x88) & 0xff);
    }
  }
  return 0;
}
```

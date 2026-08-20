# dispatch_sig

`_ZN23Inter_AddPvPBuddyResult12dispatch_sigEP5CUserPci`

`Inter_AddPvPBuddyResult::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_AddPvPBuddyResult` | `0x084e1978` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e1978  _ZN23Inter_AddPvPBuddyResult12dispatch_sigEP5CUserPci
#           Inter_AddPvPBuddyResult::dispatch_sig(CUser*, char*, int)
# range [0x084e1978, 0x084e1c1d]
084e1978 +0x000:  push   %ebp
084e1979 +0x001:  mov    %esp,%ebp
084e197b +0x003:  push   %esi
084e197c +0x004:  push   %ebx
084e197d +0x005:  sub    $0x40,%esp
084e1980 +0x008:  mov    0x10(%ebp),%eax
084e1983 +0x00b:  mov    %eax,-0x14(%ebp)
084e1986 +0x00e:  mov    0xc(%ebp),%eax
084e1989 +0x011:  mov    %eax,(%esp)
084e198c +0x014:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084e1991 +0x019:  cmp    $0x2,%eax
084e1994 +0x01c:  setle  %al
084e1997 +0x01f:  test   %al,%al
084e1999 +0x021:  je     084e19a5 <+0x2d>
084e199b +0x023:  mov    $0x0,%eax
084e19a0 +0x028:  jmp    084e1c16 <+0x29e>
084e19a5 +0x02d:  mov    -0x14(%ebp),%eax
084e19a8 +0x030:  mov    0xa(%eax),%ebx
084e19ab +0x033:  mov    0xc(%ebp),%eax
084e19ae +0x036:  mov    %eax,(%esp)
084e19b1 +0x039:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084e19b6 +0x03e:  cmp    %eax,%ebx
084e19b8 +0x040:  setne  %al
084e19bb +0x043:  test   %al,%al
084e19bd +0x045:  je     084e19c9 <+0x51>
084e19bf +0x047:  mov    $0x0,%eax
084e19c4 +0x04c:  jmp    084e1c16 <+0x29e>
084e19c9 +0x051:  mov    -0x14(%ebp),%eax
084e19cc +0x054:  movzbl 0x12(%eax),%eax
084e19d0 +0x058:  test   %al,%al
084e19d2 +0x05a:  jne    084e1af7 <+0x17f>
084e19d8 +0x060:  mov    -0x14(%ebp),%eax
084e19db +0x063:  movzbl 0x32(%eax),%eax
084e19df +0x067:  test   %al,%al
084e19e1 +0x069:  je     084e1a09 <+0x91>
084e19e3 +0x06b:  mov    -0x14(%ebp),%eax
084e19e6 +0x06e:  movzbl 0x32(%eax),%eax
084e19ea +0x072:  movzbl %al,%eax
084e19ed +0x075:  mov    %eax,0x8(%esp)
084e19f1 +0x079:  movl   $0x121,0x4(%esp)
084e19f9 +0x081:  mov    0xc(%ebp),%eax
084e19fc +0x084:  mov    %eax,(%esp)
084e19ff +0x087:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
084e1a04 +0x08c:  jmp    084e1c11 <+0x299>
084e1a09 +0x091:  lea    -0x20(%ebp),%eax
084e1a0c +0x094:  mov    %eax,(%esp)
084e1a0f +0x097:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084e1a14 +0x09c:  lea    -0x20(%ebp),%eax
084e1a17 +0x09f:  mov    %eax,(%esp)
084e1a1a +0x0a2:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
084e1a1f +0x0a7:  movl   $0x121,0x8(%esp)
084e1a27 +0x0af:  movl   $0x1,0x4(%esp)
084e1a2f +0x0b7:  lea    -0x20(%ebp),%eax
084e1a32 +0x0ba:  mov    %eax,(%esp)
084e1a35 +0x0bd:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084e1a3a +0x0c2:  movl   $0x1,0x4(%esp)
084e1a42 +0x0ca:  lea    -0x20(%ebp),%eax
084e1a45 +0x0cd:  mov    %eax,(%esp)
084e1a48 +0x0d0:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084e1a4d +0x0d5:  mov    -0x14(%ebp),%eax
084e1a50 +0x0d8:  movzbl 0x13(%eax),%eax
084e1a54 +0x0dc:  movsbl %al,%eax
084e1a57 +0x0df:  mov    %eax,0x4(%esp)
084e1a5b +0x0e3:  lea    -0x20(%ebp),%eax
084e1a5e +0x0e6:  mov    %eax,(%esp)
084e1a61 +0x0e9:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084e1a66 +0x0ee:  mov    -0x14(%ebp),%eax
084e1a69 +0x0f1:  add    $0x14,%eax
084e1a6c +0x0f4:  mov    %eax,(%esp)
084e1a6f +0x0f7:  call   0807e3b0 <_init+0xca8>
084e1a74 +0x0fc:  mov    %eax,-0x10(%ebp)
084e1a77 +0x0ff:  mov    -0x10(%ebp),%eax
084e1a7a +0x102:  mov    %eax,0x4(%esp)
084e1a7e +0x106:  lea    -0x20(%ebp),%eax
084e1a81 +0x109:  mov    %eax,(%esp)
084e1a84 +0x10c:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084e1a89 +0x111:  mov    -0x14(%ebp),%eax
084e1a8c +0x114:  lea    0x14(%eax),%edx
084e1a8f +0x117:  mov    -0x10(%ebp),%eax
084e1a92 +0x11a:  mov    %eax,0x8(%esp)
084e1a96 +0x11e:  mov    %edx,0x4(%esp)
084e1a9a +0x122:  lea    -0x20(%ebp),%eax
084e1a9d +0x125:  mov    %eax,(%esp)
084e1aa0 +0x128:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084e1aa5 +0x12d:  movl   $0x1,0x4(%esp)
084e1aad +0x135:  lea    -0x20(%ebp),%eax
084e1ab0 +0x138:  mov    %eax,(%esp)
084e1ab3 +0x13b:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084e1ab8 +0x140:  lea    -0x20(%ebp),%eax
084e1abb +0x143:  mov    %eax,0x4(%esp)
084e1abf +0x147:  mov    0xc(%ebp),%eax
084e1ac2 +0x14a:  mov    %eax,(%esp)
084e1ac5 +0x14d:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084e1aca +0x152:  jmp    084e1ae7 <+0x16f>
084e1acc +0x154:  mov    %edx,%ebx
084e1ace +0x156:  mov    %eax,%esi
084e1ad0 +0x158:  lea    -0x20(%ebp),%eax
084e1ad3 +0x15b:  mov    %eax,(%esp)
084e1ad6 +0x15e:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e1adb +0x163:  mov    %esi,%eax
084e1add +0x165:  mov    %ebx,%edx
084e1adf +0x167:  mov    %eax,(%esp)
084e1ae2 +0x16a:  call   08ae3750 <_Unwind_Resume>
084e1ae7 +0x16f:  lea    -0x20(%ebp),%eax
084e1aea +0x172:  mov    %eax,(%esp)
084e1aed +0x175:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e1af2 +0x17a:  jmp    084e1c11 <+0x299>
084e1af7 +0x17f:  mov    -0x14(%ebp),%eax
084e1afa +0x182:  movzbl 0x32(%eax),%eax
084e1afe +0x186:  test   %al,%al
084e1b00 +0x188:  je     084e1b28 <+0x1b0>
084e1b02 +0x18a:  mov    -0x14(%ebp),%eax
084e1b05 +0x18d:  movzbl 0x32(%eax),%eax
084e1b09 +0x191:  movzbl %al,%eax
084e1b0c +0x194:  mov    %eax,0x8(%esp)
084e1b10 +0x198:  movl   $0x122,0x4(%esp)
084e1b18 +0x1a0:  mov    0xc(%ebp),%eax
084e1b1b +0x1a3:  mov    %eax,(%esp)
084e1b1e +0x1a6:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
084e1b23 +0x1ab:  jmp    084e1c11 <+0x299>
084e1b28 +0x1b0:  lea    -0x2c(%ebp),%eax
084e1b2b +0x1b3:  mov    %eax,(%esp)
084e1b2e +0x1b6:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084e1b33 +0x1bb:  lea    -0x2c(%ebp),%eax
084e1b36 +0x1be:  mov    %eax,(%esp)
084e1b39 +0x1c1:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
084e1b3e +0x1c6:  movl   $0x122,0x8(%esp)
084e1b46 +0x1ce:  movl   $0x1,0x4(%esp)
084e1b4e +0x1d6:  lea    -0x2c(%ebp),%eax
084e1b51 +0x1d9:  mov    %eax,(%esp)
084e1b54 +0x1dc:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084e1b59 +0x1e1:  movl   $0x1,0x4(%esp)
084e1b61 +0x1e9:  lea    -0x2c(%ebp),%eax
084e1b64 +0x1ec:  mov    %eax,(%esp)
084e1b67 +0x1ef:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084e1b6c +0x1f4:  mov    -0x14(%ebp),%eax
084e1b6f +0x1f7:  movzbl 0x13(%eax),%eax
084e1b73 +0x1fb:  movsbl %al,%eax
084e1b76 +0x1fe:  mov    %eax,0x4(%esp)
084e1b7a +0x202:  lea    -0x2c(%ebp),%eax
084e1b7d +0x205:  mov    %eax,(%esp)
084e1b80 +0x208:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084e1b85 +0x20d:  mov    -0x14(%ebp),%eax
084e1b88 +0x210:  add    $0x14,%eax
084e1b8b +0x213:  mov    %eax,(%esp)
084e1b8e +0x216:  call   0807e3b0 <_init+0xca8>
084e1b93 +0x21b:  mov    %eax,-0xc(%ebp)
084e1b96 +0x21e:  mov    -0xc(%ebp),%eax
084e1b99 +0x221:  mov    %eax,0x4(%esp)
084e1b9d +0x225:  lea    -0x2c(%ebp),%eax
084e1ba0 +0x228:  mov    %eax,(%esp)
084e1ba3 +0x22b:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084e1ba8 +0x230:  mov    -0x14(%ebp),%eax
084e1bab +0x233:  lea    0x14(%eax),%edx
084e1bae +0x236:  mov    -0xc(%ebp),%eax
084e1bb1 +0x239:  mov    %eax,0x8(%esp)
084e1bb5 +0x23d:  mov    %edx,0x4(%esp)
084e1bb9 +0x241:  lea    -0x2c(%ebp),%eax
084e1bbc +0x244:  mov    %eax,(%esp)
084e1bbf +0x247:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084e1bc4 +0x24c:  movl   $0x1,0x4(%esp)
084e1bcc +0x254:  lea    -0x2c(%ebp),%eax
084e1bcf +0x257:  mov    %eax,(%esp)
084e1bd2 +0x25a:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084e1bd7 +0x25f:  lea    -0x2c(%ebp),%eax
084e1bda +0x262:  mov    %eax,0x4(%esp)
084e1bde +0x266:  mov    0xc(%ebp),%eax
084e1be1 +0x269:  mov    %eax,(%esp)
084e1be4 +0x26c:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084e1be9 +0x271:  jmp    084e1c06 <+0x28e>
084e1beb +0x273:  mov    %edx,%ebx
084e1bed +0x275:  mov    %eax,%esi
084e1bef +0x277:  lea    -0x2c(%ebp),%eax
084e1bf2 +0x27a:  mov    %eax,(%esp)
084e1bf5 +0x27d:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e1bfa +0x282:  mov    %esi,%eax
084e1bfc +0x284:  mov    %ebx,%edx
084e1bfe +0x286:  mov    %eax,(%esp)
084e1c01 +0x289:  call   08ae3750 <_Unwind_Resume>
084e1c06 +0x28e:  lea    -0x2c(%ebp),%eax
084e1c09 +0x291:  mov    %eax,(%esp)
084e1c0c +0x294:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e1c11 +0x299:  mov    $0x0,%eax
084e1c16 +0x29e:  add    $0x40,%esp
084e1c19 +0x2a1:  pop    %ebx
084e1c1a +0x2a2:  pop    %esi
084e1c1b +0x2a3:  pop    %ebp
084e1c1c +0x2a4:  ret
084e1c1d +0x2a5:  nop
```

## 反编译 C

```c
// Inter_AddPvPBuddyResult::dispatch_sig @ 0x84e1978

/* Inter_AddPvPBuddyResult::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_AddPvPBuddyResult::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  PacketGuard local_30 [12];
  PacketGuard local_24 [12];
  int local_18;
  size_t local_14;
  size_t local_10;
  
  local_18 = param_3;
  iVar1 = CUser::get_state((CUser *)param_2);
  if ((2 < iVar1) &&
     (iVar1 = *(int *)(local_18 + 10),
     iVar2 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2), iVar1 == iVar2)) {
    if (*(char *)(local_18 + 0x12) == '\0') {
      if (*(char *)(local_18 + 0x32) == '\0') {
        PacketGuard::PacketGuard(local_24);
                    /* try { // try from 084e1a1a to 084e1ac9 has its CatchHandler @ 084e1acc */
        InterfacePacketBuf::clear((InterfacePacketBuf *)local_24);
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,1,0x121);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,1);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,(int)*(char *)(local_18 + 0x13))
        ;
        local_14 = strlen((char *)(local_18 + 0x14));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,local_14);
        InterfacePacketBuf::put_str
                  ((InterfacePacketBuf *)local_24,(char *)(local_18 + 0x14),local_14);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
        CUser::Send((CUser *)param_2,local_24);
        PacketGuard::~PacketGuard(local_24);
      }
      else {
        CUser::SendCmdErrorPacket((CUser *)param_2,0x121,*(undefined1 *)(local_18 + 0x32));
      }
    }
    else if (*(char *)(local_18 + 0x32) == '\0') {
      PacketGuard::PacketGuard(local_30);
                    /* try { // try from 084e1b39 to 084e1be8 has its CatchHandler @ 084e1beb */
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_30);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,1,0x122);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,1);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,(int)*(char *)(local_18 + 0x13));
      local_10 = strlen((char *)(local_18 + 0x14));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_30,local_10);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_30,(char *)(local_18 + 0x14),local_10)
      ;
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
      CUser::Send((CUser *)param_2,local_30);
      PacketGuard::~PacketGuard(local_30);
    }
    else {
      CUser::SendCmdErrorPacket((CUser *)param_2,0x122,*(undefined1 *)(local_18 + 0x32));
    }
  }
  return 0;
}
```

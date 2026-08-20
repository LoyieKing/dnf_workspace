# dispatch_sig

`_ZN26Inter_Monitor_MegaphoneMsg12dispatch_sigEP5CUserPci`

`Inter_Monitor_MegaphoneMsg::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_Monitor_MegaphoneMsg` | `0x084d09aa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084d09aa  _ZN26Inter_Monitor_MegaphoneMsg12dispatch_sigEP5CUserPci
#           Inter_Monitor_MegaphoneMsg::dispatch_sig(CUser*, char*, int)
# range [0x084d09aa, 0x084d0b39]
084d09aa +0x000:  push   %ebp
084d09ab +0x001:  mov    %esp,%ebp
084d09ad +0x003:  push   %esi
084d09ae +0x004:  push   %ebx
084d09af +0x005:  sub    $0x20,%esp
084d09b2 +0x008:  mov    0x10(%ebp),%eax
084d09b5 +0x00b:  mov    %eax,-0xc(%ebp)
084d09b8 +0x00e:  lea    -0x18(%ebp),%eax
084d09bb +0x011:  mov    %eax,(%esp)
084d09be +0x014:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084d09c3 +0x019:  movl   $0x76,0x8(%esp)
084d09cb +0x021:  movl   $0x0,0x4(%esp)
084d09d3 +0x029:  lea    -0x18(%ebp),%eax
084d09d6 +0x02c:  mov    %eax,(%esp)
084d09d9 +0x02f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084d09de +0x034:  mov    -0xc(%ebp),%eax
084d09e1 +0x037:  movzbl 0xe(%eax),%eax
084d09e5 +0x03b:  movzbl %al,%eax
084d09e8 +0x03e:  mov    %eax,0x4(%esp)
084d09ec +0x042:  lea    -0x18(%ebp),%eax
084d09ef +0x045:  mov    %eax,(%esp)
084d09f2 +0x048:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d09f7 +0x04d:  mov    -0xc(%ebp),%eax
084d09fa +0x050:  movzbl 0xb(%eax),%eax
084d09fe +0x054:  movzbl %al,%eax
084d0a01 +0x057:  mov    %eax,0x4(%esp)
084d0a05 +0x05b:  lea    -0x18(%ebp),%eax
084d0a08 +0x05e:  mov    %eax,(%esp)
084d0a0b +0x061:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d0a10 +0x066:  mov    -0xc(%ebp),%eax
084d0a13 +0x069:  movzwl 0xc(%eax),%eax
084d0a17 +0x06d:  movzwl %ax,%eax
084d0a1a +0x070:  mov    %eax,0x4(%esp)
084d0a1e +0x074:  lea    -0x18(%ebp),%eax
084d0a21 +0x077:  mov    %eax,(%esp)
084d0a24 +0x07a:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084d0a29 +0x07f:  mov    -0xc(%ebp),%eax
084d0a2c +0x082:  add    $0xf,%eax
084d0a2f +0x085:  mov    %eax,(%esp)
084d0a32 +0x088:  call   0807e3b0 <_init+0xca8>
084d0a37 +0x08d:  mov    %eax,0x4(%esp)
084d0a3b +0x091:  lea    -0x18(%ebp),%eax
084d0a3e +0x094:  mov    %eax,(%esp)
084d0a41 +0x097:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084d0a46 +0x09c:  mov    -0xc(%ebp),%eax
084d0a49 +0x09f:  add    $0xf,%eax
084d0a4c +0x0a2:  mov    %eax,(%esp)
084d0a4f +0x0a5:  call   0807e3b0 <_init+0xca8>
084d0a54 +0x0aa:  mov    -0xc(%ebp),%edx
084d0a57 +0x0ad:  add    $0xf,%edx
084d0a5a +0x0b0:  mov    %eax,0x8(%esp)
084d0a5e +0x0b4:  mov    %edx,0x4(%esp)
084d0a62 +0x0b8:  lea    -0x18(%ebp),%eax
084d0a65 +0x0bb:  mov    %eax,(%esp)
084d0a68 +0x0be:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084d0a6d +0x0c3:  mov    -0xc(%ebp),%eax
084d0a70 +0x0c6:  movzbl 0x2d(%eax),%eax
084d0a74 +0x0ca:  movzbl %al,%eax
084d0a77 +0x0cd:  mov    %eax,0x4(%esp)
084d0a7b +0x0d1:  lea    -0x18(%ebp),%eax
084d0a7e +0x0d4:  mov    %eax,(%esp)
084d0a81 +0x0d7:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084d0a86 +0x0dc:  mov    -0xc(%ebp),%eax
084d0a89 +0x0df:  movzbl 0x2d(%eax),%eax
084d0a8d +0x0e3:  movzbl %al,%eax
084d0a90 +0x0e6:  mov    -0xc(%ebp),%edx
084d0a93 +0x0e9:  add    $0x2e,%edx
084d0a96 +0x0ec:  mov    %eax,0x8(%esp)
084d0a9a +0x0f0:  mov    %edx,0x4(%esp)
084d0a9e +0x0f4:  lea    -0x18(%ebp),%eax
084d0aa1 +0x0f7:  mov    %eax,(%esp)
084d0aa4 +0x0fa:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084d0aa9 +0x0ff:  movl   $0x1,0x4(%esp)
084d0ab1 +0x107:  lea    -0x18(%ebp),%eax
084d0ab4 +0x10a:  mov    %eax,(%esp)
084d0ab7 +0x10d:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084d0abc +0x112:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084d0ac1 +0x117:  mov    %eax,(%esp)
084d0ac4 +0x11a:  call   080f131e <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x3a0>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3a0
084d0ac9 +0x11f:  test   %al,%al
084d0acb +0x121:  je     084d0af1 <+0x147>
084d0acd +0x123:  mov    -0xc(%ebp),%eax
084d0ad0 +0x126:  movzbl 0xa(%eax),%eax
084d0ad4 +0x12a:  movsbl %al,%ebx
084d0ad7 +0x12d:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084d0adc +0x132:  mov    %ebx,0x8(%esp)
084d0ae0 +0x136:  lea    -0x18(%ebp),%edx
084d0ae3 +0x139:  mov    %edx,0x4(%esp)
084d0ae7 +0x13d:  mov    %eax,(%esp)
084d0aea +0x140:  call   086c90ae <_ZN9GameWorld17send_server_groupER11PacketGuardc>  ; GameWorld::send_server_group(PacketGuard&, char)
084d0aef +0x145:  jmp    084d0b05 <+0x15b>
084d0af1 +0x147:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084d0af6 +0x14c:  lea    -0x18(%ebp),%edx
084d0af9 +0x14f:  mov    %edx,0x4(%esp)
084d0afd +0x153:  mov    %eax,(%esp)
084d0b00 +0x156:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
084d0b05 +0x15b:  mov    $0x0,%ebx
084d0b0a +0x160:  lea    -0x18(%ebp),%eax
084d0b0d +0x163:  mov    %eax,(%esp)
084d0b10 +0x166:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d0b15 +0x16b:  mov    %ebx,%eax
084d0b17 +0x16d:  add    $0x20,%esp
084d0b1a +0x170:  pop    %ebx
084d0b1b +0x171:  pop    %esi
084d0b1c +0x172:  pop    %ebp
084d0b1d +0x173:  ret
084d0b1e +0x174:  mov    %edx,%ebx
084d0b20 +0x176:  mov    %eax,%esi
084d0b22 +0x178:  lea    -0x18(%ebp),%eax
084d0b25 +0x17b:  mov    %eax,(%esp)
084d0b28 +0x17e:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d0b2d +0x183:  mov    %esi,%eax
084d0b2f +0x185:  mov    %ebx,%edx
084d0b31 +0x187:  mov    %eax,(%esp)
084d0b34 +0x18a:  call   08ae3750 <_Unwind_Resume>
084d0b39 +0x18f:  nop
```

## 反编译 C

```c
// Inter_Monitor_MegaphoneMsg::dispatch_sig @ 0x84d09aa

/* Inter_Monitor_MegaphoneMsg::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_Monitor_MegaphoneMsg::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  char cVar1;
  size_t sVar2;
  GameWorld *pGVar3;
  PacketGuard local_1c [12];
  int local_10;
  
  local_10 = param_3;
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084d09d9 to 084d0b04 has its CatchHandler @ 084d0b1e */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0x76);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(uint)*(byte *)(local_10 + 0xe));
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(uint)*(byte *)(local_10 + 0xb));
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,(uint)*(ushort *)(local_10 + 0xc));
  sVar2 = strlen((char *)(local_10 + 0xf));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,sVar2);
  sVar2 = strlen((char *)(local_10 + 0xf));
  InterfacePacketBuf::put_str((InterfacePacketBuf *)local_1c,(char *)(local_10 + 0xf),sVar2);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,(uint)*(byte *)(local_10 + 0x2d));
  InterfacePacketBuf::put_str
            ((InterfacePacketBuf *)local_1c,(char *)(local_10 + 0x2e),
             (uint)*(byte *)(local_10 + 0x2d));
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  pGVar3 = (GameWorld *)G_GameWorld();
  cVar1 = GameWorld::IsIntegratedPvPBaseChannel(pGVar3);
  if (cVar1 == '\0') {
    pGVar3 = (GameWorld *)G_GameWorld();
    GameWorld::send_all(pGVar3,local_1c);
  }
  else {
    cVar1 = *(char *)(local_10 + 10);
    pGVar3 = (GameWorld *)G_GameWorld();
    GameWorld::send_server_group(pGVar3,local_1c,cVar1);
  }
  PacketGuard::~PacketGuard(local_1c);
  return 0;
}
```

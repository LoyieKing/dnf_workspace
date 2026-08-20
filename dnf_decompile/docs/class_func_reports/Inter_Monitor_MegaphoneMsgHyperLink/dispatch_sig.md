# dispatch_sig

`_ZN35Inter_Monitor_MegaphoneMsgHyperLink12dispatch_sigEP5CUserPci`

`Inter_Monitor_MegaphoneMsgHyperLink::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_Monitor_MegaphoneMsgHyperLink` | `0x084e5c26` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e5c26  _ZN35Inter_Monitor_MegaphoneMsgHyperLink12dispatch_sigEP5CUserPci
#           Inter_Monitor_MegaphoneMsgHyperLink::dispatch_sig(CUser*, char*, int)
# range [0x084e5c26, 0x084e5e19]
084e5c26 +0x000:  push   %ebp
084e5c27 +0x001:  mov    %esp,%ebp
084e5c29 +0x003:  push   %esi
084e5c2a +0x004:  push   %ebx
084e5c2b +0x005:  sub    $0x30,%esp
084e5c2e +0x008:  mov    0x10(%ebp),%eax
084e5c31 +0x00b:  mov    %eax,-0x10(%ebp)
084e5c34 +0x00e:  lea    -0x1c(%ebp),%eax
084e5c37 +0x011:  mov    %eax,(%esp)
084e5c3a +0x014:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084e5c3f +0x019:  movl   $0x174,0x8(%esp)
084e5c47 +0x021:  movl   $0x0,0x4(%esp)
084e5c4f +0x029:  lea    -0x1c(%ebp),%eax
084e5c52 +0x02c:  mov    %eax,(%esp)
084e5c55 +0x02f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084e5c5a +0x034:  mov    -0x10(%ebp),%eax
084e5c5d +0x037:  movzbl 0xe(%eax),%eax
084e5c61 +0x03b:  movzbl %al,%eax
084e5c64 +0x03e:  mov    %eax,0x4(%esp)
084e5c68 +0x042:  lea    -0x1c(%ebp),%eax
084e5c6b +0x045:  mov    %eax,(%esp)
084e5c6e +0x048:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084e5c73 +0x04d:  mov    -0x10(%ebp),%eax
084e5c76 +0x050:  movzbl 0xb(%eax),%eax
084e5c7a +0x054:  movzbl %al,%eax
084e5c7d +0x057:  mov    %eax,0x4(%esp)
084e5c81 +0x05b:  lea    -0x1c(%ebp),%eax
084e5c84 +0x05e:  mov    %eax,(%esp)
084e5c87 +0x061:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084e5c8c +0x066:  mov    -0x10(%ebp),%eax
084e5c8f +0x069:  movzwl 0xc(%eax),%eax
084e5c93 +0x06d:  movzwl %ax,%eax
084e5c96 +0x070:  mov    %eax,0x4(%esp)
084e5c9a +0x074:  lea    -0x1c(%ebp),%eax
084e5c9d +0x077:  mov    %eax,(%esp)
084e5ca0 +0x07a:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084e5ca5 +0x07f:  mov    -0x10(%ebp),%eax
084e5ca8 +0x082:  add    $0xf,%eax
084e5cab +0x085:  mov    %eax,(%esp)
084e5cae +0x088:  call   0807e3b0 <_init+0xca8>
084e5cb3 +0x08d:  mov    %eax,0x4(%esp)
084e5cb7 +0x091:  lea    -0x1c(%ebp),%eax
084e5cba +0x094:  mov    %eax,(%esp)
084e5cbd +0x097:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084e5cc2 +0x09c:  mov    -0x10(%ebp),%eax
084e5cc5 +0x09f:  add    $0xf,%eax
084e5cc8 +0x0a2:  mov    %eax,(%esp)
084e5ccb +0x0a5:  call   0807e3b0 <_init+0xca8>
084e5cd0 +0x0aa:  mov    -0x10(%ebp),%edx
084e5cd3 +0x0ad:  add    $0xf,%edx
084e5cd6 +0x0b0:  mov    %eax,0x8(%esp)
084e5cda +0x0b4:  mov    %edx,0x4(%esp)
084e5cde +0x0b8:  lea    -0x1c(%ebp),%eax
084e5ce1 +0x0bb:  mov    %eax,(%esp)
084e5ce4 +0x0be:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084e5ce9 +0x0c3:  mov    -0x10(%ebp),%eax
084e5cec +0x0c6:  movzbl 0x166(%eax),%eax
084e5cf3 +0x0cd:  movzbl %al,%eax
084e5cf6 +0x0d0:  mov    %eax,0x4(%esp)
084e5cfa +0x0d4:  lea    -0x1c(%ebp),%eax
084e5cfd +0x0d7:  mov    %eax,(%esp)
084e5d00 +0x0da:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084e5d05 +0x0df:  mov    -0x10(%ebp),%eax
084e5d08 +0x0e2:  movzbl 0x166(%eax),%eax
084e5d0f +0x0e9:  movzbl %al,%eax
084e5d12 +0x0ec:  mov    -0x10(%ebp),%edx
084e5d15 +0x0ef:  add    $0x167,%edx
084e5d1b +0x0f5:  mov    %eax,0x8(%esp)
084e5d1f +0x0f9:  mov    %edx,0x4(%esp)
084e5d23 +0x0fd:  lea    -0x1c(%ebp),%eax
084e5d26 +0x100:  mov    %eax,(%esp)
084e5d29 +0x103:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084e5d2e +0x108:  mov    -0x10(%ebp),%eax
084e5d31 +0x10b:  movzbl 0x2d(%eax),%eax
084e5d35 +0x10f:  movzbl %al,%eax
084e5d38 +0x112:  mov    %eax,0x4(%esp)
084e5d3c +0x116:  lea    -0x1c(%ebp),%eax
084e5d3f +0x119:  mov    %eax,(%esp)
084e5d42 +0x11c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084e5d47 +0x121:  movl   $0x0,-0xc(%ebp)
084e5d4e +0x128:  jmp    084e5d7a <+0x154>
084e5d50 +0x12a:  mov    -0xc(%ebp),%eax
084e5d53 +0x12d:  imul   $0x68,%eax,%eax
084e5d56 +0x130:  add    $0x20,%eax
084e5d59 +0x133:  add    -0x10(%ebp),%eax
084e5d5c +0x136:  add    $0xe,%eax
084e5d5f +0x139:  movl   $0x68,0x8(%esp)
084e5d67 +0x141:  mov    %eax,0x4(%esp)
084e5d6b +0x145:  lea    -0x1c(%ebp),%eax
084e5d6e +0x148:  mov    %eax,(%esp)
084e5d71 +0x14b:  call   0811df08 <_GLOBAL__I__ZN15CItemDictionaryC2Ev+0x48>  ; global constructors keyed to CItemDictionary::CItemDictionary()+0x48
084e5d76 +0x150:  addl   $0x1,-0xc(%ebp)
084e5d7a +0x154:  mov    -0x10(%ebp),%eax
084e5d7d +0x157:  movzbl 0x2d(%eax),%eax
084e5d81 +0x15b:  movzbl %al,%eax
084e5d84 +0x15e:  cmp    -0xc(%ebp),%eax
084e5d87 +0x161:  setg   %al
084e5d8a +0x164:  test   %al,%al
084e5d8c +0x166:  jne    084e5d50 <+0x12a>
084e5d8e +0x168:  movl   $0x1,0x4(%esp)
084e5d96 +0x170:  lea    -0x1c(%ebp),%eax
084e5d99 +0x173:  mov    %eax,(%esp)
084e5d9c +0x176:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084e5da1 +0x17b:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084e5da6 +0x180:  mov    %eax,(%esp)
084e5da9 +0x183:  call   080f131e <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x3a0>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3a0
084e5dae +0x188:  test   %al,%al
084e5db0 +0x18a:  je     084e5dd6 <+0x1b0>
084e5db2 +0x18c:  mov    -0x10(%ebp),%eax
084e5db5 +0x18f:  movzbl 0xa(%eax),%eax
084e5db9 +0x193:  movsbl %al,%ebx
084e5dbc +0x196:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084e5dc1 +0x19b:  mov    %ebx,0x8(%esp)
084e5dc5 +0x19f:  lea    -0x1c(%ebp),%edx
084e5dc8 +0x1a2:  mov    %edx,0x4(%esp)
084e5dcc +0x1a6:  mov    %eax,(%esp)
084e5dcf +0x1a9:  call   086c90ae <_ZN9GameWorld17send_server_groupER11PacketGuardc>  ; GameWorld::send_server_group(PacketGuard&, char)
084e5dd4 +0x1ae:  jmp    084e5dea <+0x1c4>
084e5dd6 +0x1b0:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084e5ddb +0x1b5:  lea    -0x1c(%ebp),%edx
084e5dde +0x1b8:  mov    %edx,0x4(%esp)
084e5de2 +0x1bc:  mov    %eax,(%esp)
084e5de5 +0x1bf:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
084e5dea +0x1c4:  mov    $0x0,%ebx
084e5def +0x1c9:  lea    -0x1c(%ebp),%eax
084e5df2 +0x1cc:  mov    %eax,(%esp)
084e5df5 +0x1cf:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e5dfa +0x1d4:  mov    %ebx,%eax
084e5dfc +0x1d6:  add    $0x30,%esp
084e5dff +0x1d9:  pop    %ebx
084e5e00 +0x1da:  pop    %esi
084e5e01 +0x1db:  pop    %ebp
084e5e02 +0x1dc:  ret
084e5e03 +0x1dd:  mov    %edx,%ebx
084e5e05 +0x1df:  mov    %eax,%esi
084e5e07 +0x1e1:  lea    -0x1c(%ebp),%eax
084e5e0a +0x1e4:  mov    %eax,(%esp)
084e5e0d +0x1e7:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e5e12 +0x1ec:  mov    %esi,%eax
084e5e14 +0x1ee:  mov    %ebx,%edx
084e5e16 +0x1f0:  mov    %eax,(%esp)
084e5e19 +0x1f3:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// Inter_Monitor_MegaphoneMsgHyperLink::dispatch_sig @ 0x84e5c26

/* Inter_Monitor_MegaphoneMsgHyperLink::dispatch_sig(CUser*, char*, int) */

undefined4
Inter_Monitor_MegaphoneMsgHyperLink::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  char cVar1;
  size_t sVar2;
  GameWorld *pGVar3;
  PacketGuard local_20 [12];
  int local_14;
  int local_10;
  
  local_14 = param_3;
  PacketGuard::PacketGuard(local_20);
                    /* try { // try from 084e5c55 to 084e5de9 has its CatchHandler @ 084e5e03 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0x174);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(uint)*(byte *)(local_14 + 0xe));
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(uint)*(byte *)(local_14 + 0xb));
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_20,(uint)*(ushort *)(local_14 + 0xc));
  sVar2 = strlen((char *)(local_14 + 0xf));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,sVar2);
  sVar2 = strlen((char *)(local_14 + 0xf));
  InterfacePacketBuf::put_str((InterfacePacketBuf *)local_20,(char *)(local_14 + 0xf),sVar2);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,(uint)*(byte *)(local_14 + 0x166));
  InterfacePacketBuf::put_str
            ((InterfacePacketBuf *)local_20,(char *)(local_14 + 0x167),
             (uint)*(byte *)(local_14 + 0x166));
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(uint)*(byte *)(local_14 + 0x2d));
  for (local_10 = 0; local_10 < (int)(uint)*(byte *)(local_14 + 0x2d); local_10 = local_10 + 1) {
    InterfacePacketBuf::put_binary
              ((InterfacePacketBuf *)local_20,(char *)(local_10 * 0x68 + local_14 + 0x2e),0x68);
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
  pGVar3 = (GameWorld *)G_GameWorld();
  cVar1 = GameWorld::IsIntegratedPvPBaseChannel(pGVar3);
  if (cVar1 == '\0') {
    pGVar3 = (GameWorld *)G_GameWorld();
    GameWorld::send_all(pGVar3,local_20);
  }
  else {
    cVar1 = *(char *)(local_14 + 10);
    pGVar3 = (GameWorld *)G_GameWorld();
    GameWorld::send_server_group(pGVar3,local_20,cVar1);
  }
  PacketGuard::~PacketGuard(local_20);
  return 0;
}
```

# process

`_ZN27Dispatcher_RequestJoinGuild7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_RequestJoinGuild::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_RequestJoinGuild` | `0x081d4e28` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d4e28  _ZN27Dispatcher_RequestJoinGuild7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_RequestJoinGuild::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081d4e28, 0x081d4f75]
081d4e28 +0x000:  push   %ebp
081d4e29 +0x001:  mov    %esp,%ebp
081d4e2b +0x003:  sub    $0x68,%esp
081d4e2e +0x006:  mov    0x10(%ebp),%eax
081d4e31 +0x009:  mov    %eax,-0xc(%ebp)
081d4e34 +0x00c:  mov    0xc(%ebp),%eax
081d4e37 +0x00f:  mov    %eax,(%esp)
081d4e3a +0x012:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081d4e3f +0x017:  cmp    $0x3,%eax
081d4e42 +0x01a:  setne  %al
081d4e45 +0x01d:  test   %al,%al
081d4e47 +0x01f:  je     081d4e53 <+0x2b>
081d4e49 +0x021:  mov    $0x0,%eax
081d4e4e +0x026:  jmp    081d4f73 <+0x14b>
081d4e53 +0x02b:  mov    0xc(%ebp),%eax
081d4e56 +0x02e:  mov    %eax,(%esp)
081d4e59 +0x031:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
081d4e5e +0x036:  test   %eax,%eax
081d4e60 +0x038:  setne  %al
081d4e63 +0x03b:  test   %al,%al
081d4e65 +0x03d:  je     081d4e8c <+0x64>
081d4e67 +0x03f:  movl   $0x12,0x8(%esp)
081d4e6f +0x047:  movl   $0x15d,0x4(%esp)
081d4e77 +0x04f:  mov    0xc(%ebp),%eax
081d4e7a +0x052:  mov    %eax,(%esp)
081d4e7d +0x055:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081d4e82 +0x05a:  mov    $0x0,%eax
081d4e87 +0x05f:  jmp    081d4f73 <+0x14b>
081d4e8c +0x064:  movl   $0x44,0x8(%esp)
081d4e94 +0x06c:  movl   $0x0,0x4(%esp)
081d4e9c +0x074:  lea    -0x50(%ebp),%eax
081d4e9f +0x077:  mov    %eax,(%esp)
081d4ea2 +0x07a:  call   0807dcc0 <_init+0x5b8>
081d4ea7 +0x07f:  mov    -0xc(%ebp),%eax
081d4eaa +0x082:  add    $0x11,%eax
081d4ead +0x085:  movl   $0x16,0x8(%esp)
081d4eb5 +0x08d:  mov    %eax,0x4(%esp)
081d4eb9 +0x091:  lea    -0x50(%ebp),%eax
081d4ebc +0x094:  mov    %eax,(%esp)
081d4ebf +0x097:  call   0807d8d0 <_init+0x1c8>
081d4ec4 +0x09c:  mov    0xc(%ebp),%eax
081d4ec7 +0x09f:  mov    %eax,(%esp)
081d4eca +0x0a2:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
081d4ecf +0x0a7:  mov    %eax,-0x38(%ebp)
081d4ed2 +0x0aa:  mov    0xc(%ebp),%eax
081d4ed5 +0x0ad:  mov    %eax,(%esp)
081d4ed8 +0x0b0:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081d4edd +0x0b5:  mov    %eax,-0x34(%ebp)
081d4ee0 +0x0b8:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081d4ee5 +0x0bd:  mov    %eax,(%esp)
081d4ee8 +0x0c0:  call   080f131e <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x3a0>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3a0
081d4eed +0x0c5:  test   %al,%al
081d4eef +0x0c7:  je     081d4f01 <+0xd9>
081d4ef1 +0x0c9:  mov    0xc(%ebp),%eax
081d4ef4 +0x0cc:  mov    %eax,(%esp)
081d4ef7 +0x0cf:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
081d4efc +0x0d4:  mov    %eax,-0x30(%ebp)
081d4eff +0x0d7:  jmp    081d4f0f <+0xe7>
081d4f01 +0x0d9:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
081d4f06 +0x0de:  mov    0x378(%eax),%eax
081d4f0c +0x0e4:  mov    %eax,-0x30(%ebp)
081d4f0f +0x0e7:  mov    0xc(%ebp),%eax
081d4f12 +0x0ea:  mov    %eax,(%esp)
081d4f15 +0x0ed:  call   08101056 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x78>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x78
081d4f1a +0x0f2:  movl   $0x2,0x8(%esp)
081d4f22 +0x0fa:  mov    %eax,0x4(%esp)
081d4f26 +0x0fe:  lea    -0x50(%ebp),%eax
081d4f29 +0x101:  add    $0x24,%eax
081d4f2c +0x104:  mov    %eax,(%esp)
081d4f2f +0x107:  call   0807d8a0 <_init+0x198>
081d4f34 +0x10c:  mov    -0xc(%ebp),%eax
081d4f37 +0x10f:  add    $0x2c,%eax
081d4f3a +0x112:  movl   $0x19,0x8(%esp)
081d4f42 +0x11a:  mov    %eax,0x4(%esp)
081d4f46 +0x11e:  lea    -0x50(%ebp),%eax
081d4f49 +0x121:  add    $0x27,%eax
081d4f4c +0x124:  mov    %eax,(%esp)
081d4f4f +0x127:  call   0807d8d0 <_init+0x1c8>
081d4f54 +0x12c:  mov    0xc(%ebp),%eax
081d4f57 +0x12f:  mov    %eax,(%esp)
081d4f5a +0x132:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
081d4f5f +0x137:  lea    -0x50(%ebp),%edx
081d4f62 +0x13a:  mov    %edx,0x4(%esp)
081d4f66 +0x13e:  mov    %eax,(%esp)
081d4f69 +0x141:  call   0843d19a <_ZN19DB_RequestJoinGuild11makeRequestEiP22SIG_REQUEST_JOIN_GUILD>  ; DB_RequestJoinGuild::makeRequest(int, SIG_REQUEST_JOIN_GUILD*)
081d4f6e +0x146:  mov    $0x0,%eax
081d4f73 +0x14b:  leave
081d4f74 +0x14c:  ret
081d4f75 +0x14d:  nop
```

## 反编译 C

```c
// Dispatcher_RequestJoinGuild::process @ 0x81d4e28

/* Dispatcher_RequestJoinGuild::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 Dispatcher_RequestJoinGuild::process(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  char cVar1;
  int iVar2;
  GameWorld *this;
  void *__src;
  SIG_REQUEST_JOIN_GUILD local_54 [24];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 auStack_30 [3];
  char acStack_2d [29];
  ParamBase *local_10;
  
  local_10 = param_3;
  iVar2 = CUser::get_state((CUser *)param_2);
  if (iVar2 == 3) {
    iVar2 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_2);
    if (iVar2 == 0) {
      memset(local_54,0,0x44);
      strncpy((char *)local_54,(char *)(local_10 + 0x11),0x16);
      local_3c = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
      local_38 = CUser::get_acc_id((CUser *)param_2);
      this = (GameWorld *)G_GameWorld();
      cVar1 = GameWorld::IsIntegratedPvPBaseChannel(this);
      if (cVar1 == '\0') {
        iVar2 = G_CEnvironment();
        local_34 = *(undefined4 *)(iVar2 + 0x378);
      }
      else {
        local_34 = CUser::GetServerGroup((CUser *)param_2);
      }
      __src = (void *)CUser::GetSsnString((CUser *)param_2);
      memcpy(auStack_30,__src,2);
      strncpy(acStack_2d,(char *)(local_10 + 0x2c),0x19);
      iVar2 = CUser::GetUID((CUser *)param_2);
      DB_RequestJoinGuild::makeRequest(iVar2,local_54);
    }
    else {
      CUser::SendCmdErrorPacket((CUser *)param_2,0x15d,0x12);
    }
  }
  return 0;
}
```

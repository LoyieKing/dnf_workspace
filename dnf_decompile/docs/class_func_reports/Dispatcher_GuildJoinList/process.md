# process

`_ZN24Dispatcher_GuildJoinList7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_GuildJoinList::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_GuildJoinList` | `0x081d52a6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d52a6  _ZN24Dispatcher_GuildJoinList7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_GuildJoinList::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081d52a6, 0x081d538d]
081d52a6 +0x00:  push   %ebp
081d52a7 +0x01:  mov    %esp,%ebp
081d52a9 +0x03:  push   %ebx
081d52aa +0x04:  sub    $0x24,%esp
081d52ad +0x07:  mov    0xc(%ebp),%eax
081d52b0 +0x0a:  mov    %eax,(%esp)
081d52b3 +0x0d:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081d52b8 +0x12:  cmp    $0x3,%eax
081d52bb +0x15:  setne  %al
081d52be +0x18:  test   %al,%al
081d52c0 +0x1a:  je     081d52cc <+0x26>
081d52c2 +0x1c:  mov    $0x0,%eax
081d52c7 +0x21:  jmp    081d5388 <+0xe2>
081d52cc +0x26:  mov    0xc(%ebp),%eax
081d52cf +0x29:  mov    %eax,(%esp)
081d52d2 +0x2c:  call   08230172 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x581c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x581c
081d52d7 +0x31:  xor    $0x1,%eax
081d52da +0x34:  test   %al,%al
081d52dc +0x36:  je     081d52f7 <+0x51>
081d52de +0x38:  mov    0xc(%ebp),%eax
081d52e1 +0x3b:  mov    %eax,(%esp)
081d52e4 +0x3e:  call   0866c414 <_ZN5CUser16IsSubGuildMasterEv>  ; CUser::IsSubGuildMaster()
081d52e9 +0x43:  xor    $0x1,%eax
081d52ec +0x46:  test   %al,%al
081d52ee +0x48:  je     081d52f7 <+0x51>
081d52f0 +0x4a:  mov    $0x1,%eax
081d52f5 +0x4f:  jmp    081d52fc <+0x56>
081d52f7 +0x51:  mov    $0x0,%eax
081d52fc +0x56:  test   %al,%al
081d52fe +0x58:  je     081d5322 <+0x7c>
081d5300 +0x5a:  movl   $0x24,0x8(%esp)
081d5308 +0x62:  movl   $0x161,0x4(%esp)
081d5310 +0x6a:  mov    0xc(%ebp),%eax
081d5313 +0x6d:  mov    %eax,(%esp)
081d5316 +0x70:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081d531b +0x75:  mov    $0x0,%eax
081d5320 +0x7a:  jmp    081d5388 <+0xe2>
081d5322 +0x7c:  movl   $0x0,-0xc(%ebp)
081d5329 +0x83:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081d532e +0x88:  mov    %eax,(%esp)
081d5331 +0x8b:  call   080f131e <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x3a0>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3a0
081d5336 +0x90:  test   %al,%al
081d5338 +0x92:  je     081d534a <+0xa4>
081d533a +0x94:  mov    0xc(%ebp),%eax
081d533d +0x97:  mov    %eax,(%esp)
081d5340 +0x9a:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
081d5345 +0x9f:  mov    %eax,-0xc(%ebp)
081d5348 +0xa2:  jmp    081d5358 <+0xb2>
081d534a +0xa4:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
081d534f +0xa9:  mov    0x378(%eax),%eax
081d5355 +0xaf:  mov    %eax,-0xc(%ebp)
081d5358 +0xb2:  mov    0xc(%ebp),%eax
081d535b +0xb5:  mov    %eax,(%esp)
081d535e +0xb8:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
081d5363 +0xbd:  mov    %eax,%ebx
081d5365 +0xbf:  mov    0xc(%ebp),%eax
081d5368 +0xc2:  mov    %eax,(%esp)
081d536b +0xc5:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
081d5370 +0xca:  mov    -0xc(%ebp),%edx
081d5373 +0xcd:  mov    %edx,0x8(%esp)
081d5377 +0xd1:  mov    %ebx,0x4(%esp)
081d537b +0xd5:  mov    %eax,(%esp)
081d537e +0xd8:  call   0843dd7c <_ZN16DB_GuildJoinList11makeRequestEij17ENUM_SERVER_GROUP>  ; DB_GuildJoinList::makeRequest(int, unsigned int, ENUM_SERVER_GROUP)
081d5383 +0xdd:  mov    $0x0,%eax
081d5388 +0xe2:  add    $0x24,%esp
081d538b +0xe5:  pop    %ebx
081d538c +0xe6:  pop    %ebp
081d538d +0xe7:  ret
```

## 反编译 C

```c
// Dispatcher_GuildJoinList::process @ 0x81d52a6

/* Dispatcher_GuildJoinList::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 Dispatcher_GuildJoinList::process(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  GameWorld *this;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 local_10;
  
  iVar3 = CUser::get_state((CUser *)param_2);
  if (iVar3 == 3) {
    cVar2 = CUser::IsGuildMaster((CUser *)param_2);
    if ((cVar2 == '\x01') || (cVar2 = CUser::IsSubGuildMaster((CUser *)param_2), cVar2 == '\x01')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      CUser::SendCmdErrorPacket((CUser *)param_2,0x161,0x24);
    }
    else {
      this = (GameWorld *)G_GameWorld();
      cVar2 = GameWorld::IsIntegratedPvPBaseChannel(this);
      if (cVar2 == '\0') {
        iVar3 = G_CEnvironment();
        local_10 = *(undefined4 *)(iVar3 + 0x378);
      }
      else {
        local_10 = CUser::GetServerGroup((CUser *)param_2);
      }
      uVar4 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_2);
      uVar5 = CUser::GetUID((CUser *)param_2);
      DB_GuildJoinList::makeRequest(uVar5,uVar4,local_10);
    }
  }
  return 0;
}
```

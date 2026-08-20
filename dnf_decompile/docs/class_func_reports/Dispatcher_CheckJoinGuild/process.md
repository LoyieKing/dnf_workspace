# process

`_ZN25Dispatcher_CheckJoinGuild7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_CheckJoinGuild::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_CheckJoinGuild` | `0x081d4bf6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d4bf6  _ZN25Dispatcher_CheckJoinGuild7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_CheckJoinGuild::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081d4bf6, 0x081d4ce1]
081d4bf6 +0x00:  push   %ebp
081d4bf7 +0x01:  mov    %esp,%ebp
081d4bf9 +0x03:  sub    $0x38,%esp
081d4bfc +0x06:  mov    0x10(%ebp),%eax
081d4bff +0x09:  mov    %eax,-0xc(%ebp)
081d4c02 +0x0c:  mov    0xc(%ebp),%eax
081d4c05 +0x0f:  mov    %eax,(%esp)
081d4c08 +0x12:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081d4c0d +0x17:  cmp    $0x3,%eax
081d4c10 +0x1a:  setne  %al
081d4c13 +0x1d:  test   %al,%al
081d4c15 +0x1f:  je     081d4c21 <+0x2b>
081d4c17 +0x21:  mov    $0x0,%eax
081d4c1c +0x26:  jmp    081d4ce0 <+0xea>
081d4c21 +0x2b:  mov    0xc(%ebp),%eax
081d4c24 +0x2e:  mov    %eax,(%esp)
081d4c27 +0x31:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
081d4c2c +0x36:  test   %eax,%eax
081d4c2e +0x38:  setne  %al
081d4c31 +0x3b:  test   %al,%al
081d4c33 +0x3d:  je     081d4c5a <+0x64>
081d4c35 +0x3f:  movl   $0x12,0x8(%esp)
081d4c3d +0x47:  movl   $0x15c,0x4(%esp)
081d4c45 +0x4f:  mov    0xc(%ebp),%eax
081d4c48 +0x52:  mov    %eax,(%esp)
081d4c4b +0x55:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081d4c50 +0x5a:  mov    $0x0,%eax
081d4c55 +0x5f:  jmp    081d4ce0 <+0xea>
081d4c5a +0x64:  movl   $0x1c,0x8(%esp)
081d4c62 +0x6c:  movl   $0x0,0x4(%esp)
081d4c6a +0x74:  lea    -0x28(%ebp),%eax
081d4c6d +0x77:  mov    %eax,(%esp)
081d4c70 +0x7a:  call   0807dcc0 <_init+0x5b8>
081d4c75 +0x7f:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081d4c7a +0x84:  mov    %eax,(%esp)
081d4c7d +0x87:  call   080f131e <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x3a0>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3a0
081d4c82 +0x8c:  test   %al,%al
081d4c84 +0x8e:  je     081d4c96 <+0xa0>
081d4c86 +0x90:  mov    0xc(%ebp),%eax
081d4c89 +0x93:  mov    %eax,(%esp)
081d4c8c +0x96:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
081d4c91 +0x9b:  mov    %eax,-0x10(%ebp)
081d4c94 +0x9e:  jmp    081d4ca4 <+0xae>
081d4c96 +0xa0:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
081d4c9b +0xa5:  mov    0x378(%eax),%eax
081d4ca1 +0xab:  mov    %eax,-0x10(%ebp)
081d4ca4 +0xae:  mov    -0xc(%ebp),%eax
081d4ca7 +0xb1:  add    $0x11,%eax
081d4caa +0xb4:  movl   $0x16,0x8(%esp)
081d4cb2 +0xbc:  mov    %eax,0x4(%esp)
081d4cb6 +0xc0:  lea    -0x28(%ebp),%eax
081d4cb9 +0xc3:  mov    %eax,(%esp)
081d4cbc +0xc6:  call   0807d8d0 <_init+0x1c8>
081d4cc1 +0xcb:  mov    0xc(%ebp),%eax
081d4cc4 +0xce:  mov    %eax,(%esp)
081d4cc7 +0xd1:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
081d4ccc +0xd6:  lea    -0x28(%ebp),%edx
081d4ccf +0xd9:  mov    %edx,0x4(%esp)
081d4cd3 +0xdd:  mov    %eax,(%esp)
081d4cd6 +0xe0:  call   0843cc06 <_ZN17DB_CheckJoinGuild11makeRequestEiP20SIG_CHECK_JOIN_GUILD>  ; DB_CheckJoinGuild::makeRequest(int, SIG_CHECK_JOIN_GUILD*)
081d4cdb +0xe5:  mov    $0x0,%eax
081d4ce0 +0xea:  leave
081d4ce1 +0xeb:  ret
```

## 反编译 C

```c
// Dispatcher_CheckJoinGuild::process @ 0x81d4bf6

/* Dispatcher_CheckJoinGuild::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 Dispatcher_CheckJoinGuild::process(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  char cVar1;
  int iVar2;
  GameWorld *this;
  SIG_CHECK_JOIN_GUILD local_2c [24];
  undefined4 local_14;
  ParamBase *local_10;
  
  local_10 = param_3;
  iVar2 = CUser::get_state((CUser *)param_2);
  if (iVar2 == 3) {
    iVar2 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_2);
    if (iVar2 == 0) {
      memset(local_2c,0,0x1c);
      this = (GameWorld *)G_GameWorld();
      cVar1 = GameWorld::IsIntegratedPvPBaseChannel(this);
      if (cVar1 == '\0') {
        iVar2 = G_CEnvironment();
        local_14 = *(undefined4 *)(iVar2 + 0x378);
      }
      else {
        local_14 = CUser::GetServerGroup((CUser *)param_2);
      }
      strncpy((char *)local_2c,(char *)(local_10 + 0x11),0x16);
      iVar2 = CUser::GetUID((CUser *)param_2);
      DB_CheckJoinGuild::makeRequest(iVar2,local_2c);
    }
    else {
      CUser::SendCmdErrorPacket((CUser *)param_2,0x15c,0x12);
    }
  }
  return 0;
}
```

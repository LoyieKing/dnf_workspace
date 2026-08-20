# process

`_ZN24Dispatcher_JoinGuildInfo7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_JoinGuildInfo::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_JoinGuildInfo` | `0x081d5398` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d5398  _ZN24Dispatcher_JoinGuildInfo7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_JoinGuildInfo::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081d5398, 0x081d543b]
081d5398 +0x00:  push   %ebp
081d5399 +0x01:  mov    %esp,%ebp
081d539b +0x03:  push   %ebx
081d539c +0x04:  sub    $0x24,%esp
081d539f +0x07:  mov    0xc(%ebp),%eax
081d53a2 +0x0a:  mov    %eax,(%esp)
081d53a5 +0x0d:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081d53aa +0x12:  cmp    $0x3,%eax
081d53ad +0x15:  setne  %al
081d53b0 +0x18:  test   %al,%al
081d53b2 +0x1a:  je     081d53bb <+0x23>
081d53b4 +0x1c:  mov    $0x0,%eax
081d53b9 +0x21:  jmp    081d5435 <+0x9d>
081d53bb +0x23:  mov    0xc(%ebp),%eax
081d53be +0x26:  mov    %eax,(%esp)
081d53c1 +0x29:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
081d53c6 +0x2e:  test   %eax,%eax
081d53c8 +0x30:  setne  %al
081d53cb +0x33:  test   %al,%al
081d53cd +0x35:  je     081d53d6 <+0x3e>
081d53cf +0x37:  mov    $0x0,%eax
081d53d4 +0x3c:  jmp    081d5435 <+0x9d>
081d53d6 +0x3e:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081d53db +0x43:  mov    %eax,(%esp)
081d53de +0x46:  call   080f131e <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x3a0>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3a0
081d53e3 +0x4b:  test   %al,%al
081d53e5 +0x4d:  je     081d53f7 <+0x5f>
081d53e7 +0x4f:  mov    0xc(%ebp),%eax
081d53ea +0x52:  mov    %eax,(%esp)
081d53ed +0x55:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
081d53f2 +0x5a:  mov    %eax,-0xc(%ebp)
081d53f5 +0x5d:  jmp    081d5405 <+0x6d>
081d53f7 +0x5f:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
081d53fc +0x64:  mov    0x378(%eax),%eax
081d5402 +0x6a:  mov    %eax,-0xc(%ebp)
081d5405 +0x6d:  mov    0xc(%ebp),%eax
081d5408 +0x70:  mov    %eax,(%esp)
081d540b +0x73:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
081d5410 +0x78:  mov    %eax,%ebx
081d5412 +0x7a:  mov    0xc(%ebp),%eax
081d5415 +0x7d:  mov    %eax,(%esp)
081d5418 +0x80:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
081d541d +0x85:  mov    %ebx,0x8(%esp)
081d5421 +0x89:  mov    -0xc(%ebp),%edx
081d5424 +0x8c:  mov    %edx,0x4(%esp)
081d5428 +0x90:  mov    %eax,(%esp)
081d542b +0x93:  call   0843d5fa <_ZN16DB_JoinGuildInfo11makeRequestEi17ENUM_SERVER_GROUPj>  ; DB_JoinGuildInfo::makeRequest(int, ENUM_SERVER_GROUP, unsigned int)
081d5430 +0x98:  mov    $0x0,%eax
081d5435 +0x9d:  add    $0x24,%esp
081d5438 +0xa0:  pop    %ebx
081d5439 +0xa1:  pop    %ebp
081d543a +0xa2:  ret
081d543b +0xa3:  nop
```

## 反编译 C

```c
// Dispatcher_JoinGuildInfo::process @ 0x81d5398

/* Dispatcher_JoinGuildInfo::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 Dispatcher_JoinGuildInfo::process(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  char cVar1;
  int iVar2;
  GameWorld *this;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 local_10;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if ((iVar2 == 3) &&
     (iVar2 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_2), iVar2 == 0)) {
    this = (GameWorld *)G_GameWorld();
    cVar1 = GameWorld::IsIntegratedPvPBaseChannel(this);
    if (cVar1 == '\0') {
      iVar2 = G_CEnvironment();
      local_10 = *(undefined4 *)(iVar2 + 0x378);
    }
    else {
      local_10 = CUser::GetServerGroup((CUser *)param_2);
    }
    uVar3 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
    uVar4 = CUser::GetUID((CUser *)param_2);
    DB_JoinGuildInfo::makeRequest(uVar4,local_10,uVar3);
  }
  return 0;
}
```

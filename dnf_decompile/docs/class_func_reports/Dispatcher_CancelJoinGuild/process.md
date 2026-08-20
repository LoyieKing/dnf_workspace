# process

`_ZN26Dispatcher_CancelJoinGuild7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_CancelJoinGuild::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_CancelJoinGuild` | `0x081d4fcc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d4fcc  _ZN26Dispatcher_CancelJoinGuild7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_CancelJoinGuild::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081d4fcc, 0x081d505d]
081d4fcc +0x00:  push   %ebp
081d4fcd +0x01:  mov    %esp,%ebp
081d4fcf +0x03:  push   %esi
081d4fd0 +0x04:  push   %ebx
081d4fd1 +0x05:  sub    $0x20,%esp
081d4fd4 +0x08:  mov    0xc(%ebp),%eax
081d4fd7 +0x0b:  mov    %eax,(%esp)
081d4fda +0x0e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081d4fdf +0x13:  cmp    $0x3,%eax
081d4fe2 +0x16:  setne  %al
081d4fe5 +0x19:  test   %al,%al
081d4fe7 +0x1b:  je     081d4ff0 <+0x24>
081d4fe9 +0x1d:  mov    $0x0,%eax
081d4fee +0x22:  jmp    081d5057 <+0x8b>
081d4ff0 +0x24:  mov    0xc(%ebp),%eax
081d4ff3 +0x27:  mov    %eax,(%esp)
081d4ff6 +0x2a:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
081d4ffb +0x2f:  test   %eax,%eax
081d4ffd +0x31:  setne  %al
081d5000 +0x34:  test   %al,%al
081d5002 +0x36:  je     081d500b <+0x3f>
081d5004 +0x38:  mov    $0x0,%eax
081d5009 +0x3d:  jmp    081d5057 <+0x8b>
081d500b +0x3f:  mov    0x10(%ebp),%eax
081d500e +0x42:  mov    %eax,-0xc(%ebp)
081d5011 +0x45:  mov    0xc(%ebp),%eax
081d5014 +0x48:  mov    %eax,(%esp)
081d5017 +0x4b:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
081d501c +0x50:  mov    %eax,%ebx
081d501e +0x52:  mov    -0xc(%ebp),%eax
081d5021 +0x55:  mov    0xd(%eax),%esi
081d5024 +0x58:  mov    0xc(%ebp),%eax
081d5027 +0x5b:  mov    %eax,(%esp)
081d502a +0x5e:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
081d502f +0x63:  mov    %ebx,0x8(%esp)
081d5033 +0x67:  mov    %esi,0x4(%esp)
081d5037 +0x6b:  mov    %eax,(%esp)
081d503a +0x6e:  call   0843d78c <_ZN18DB_CancelJoinGuild11makeRequestEijj>  ; DB_CancelJoinGuild::makeRequest(int, unsigned int, unsigned int)
081d503f +0x73:  movl   $0x15e,0x4(%esp)
081d5047 +0x7b:  mov    0xc(%ebp),%eax
081d504a +0x7e:  mov    %eax,(%esp)
081d504d +0x81:  call   0867bea0 <_ZN5CUser15SendCmdOkPacketE14ENUM_CMDPACKET>  ; CUser::SendCmdOkPacket(ENUM_CMDPACKET)
081d5052 +0x86:  mov    $0x0,%eax
081d5057 +0x8b:  add    $0x20,%esp
081d505a +0x8e:  pop    %ebx
081d505b +0x8f:  pop    %esi
081d505c +0x90:  pop    %ebp
081d505d +0x91:  ret
```

## 反编译 C

```c
// Dispatcher_CancelJoinGuild::process @ 0x81d4fcc

/* Dispatcher_CancelJoinGuild::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 Dispatcher_CancelJoinGuild::process(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if ((iVar2 == 3) &&
     (iVar2 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_2), iVar2 == 0)) {
    uVar3 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
    uVar1 = *(uint *)(param_3 + 0xd);
    iVar2 = CUser::GetUID((CUser *)param_2);
    DB_CancelJoinGuild::makeRequest(iVar2,uVar1,uVar3);
    CUser::SendCmdOkPacket((CUser *)param_2,0x15e);
  }
  return 0;
}
```

# process

`_ZN24Dispatcher_DenyJoinGuild7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_DenyJoinGuild::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_DenyJoinGuild` | `0x081d51e6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d51e6  _ZN24Dispatcher_DenyJoinGuild7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_DenyJoinGuild::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081d51e6, 0x081d529b]
081d51e6 +0x00:  push   %ebp
081d51e7 +0x01:  mov    %esp,%ebp
081d51e9 +0x03:  push   %esi
081d51ea +0x04:  push   %ebx
081d51eb +0x05:  sub    $0x20,%esp
081d51ee +0x08:  mov    0x10(%ebp),%eax
081d51f1 +0x0b:  mov    %eax,-0xc(%ebp)
081d51f4 +0x0e:  mov    0xc(%ebp),%eax
081d51f7 +0x11:  mov    %eax,(%esp)
081d51fa +0x14:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081d51ff +0x19:  cmp    $0x3,%eax
081d5202 +0x1c:  setne  %al
081d5205 +0x1f:  test   %al,%al
081d5207 +0x21:  je     081d5213 <+0x2d>
081d5209 +0x23:  mov    $0x0,%eax
081d520e +0x28:  jmp    081d5294 <+0xae>
081d5213 +0x2d:  mov    0xc(%ebp),%eax
081d5216 +0x30:  mov    %eax,(%esp)
081d5219 +0x33:  call   08230172 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x581c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x581c
081d521e +0x38:  xor    $0x1,%eax
081d5221 +0x3b:  test   %al,%al
081d5223 +0x3d:  je     081d523e <+0x58>
081d5225 +0x3f:  mov    0xc(%ebp),%eax
081d5228 +0x42:  mov    %eax,(%esp)
081d522b +0x45:  call   0866c414 <_ZN5CUser16IsSubGuildMasterEv>  ; CUser::IsSubGuildMaster()
081d5230 +0x4a:  xor    $0x1,%eax
081d5233 +0x4d:  test   %al,%al
081d5235 +0x4f:  je     081d523e <+0x58>
081d5237 +0x51:  mov    $0x1,%eax
081d523c +0x56:  jmp    081d5243 <+0x5d>
081d523e +0x58:  mov    $0x0,%eax
081d5243 +0x5d:  test   %al,%al
081d5245 +0x5f:  je     081d524e <+0x68>
081d5247 +0x61:  mov    $0x0,%eax
081d524c +0x66:  jmp    081d5294 <+0xae>
081d524e +0x68:  mov    -0xc(%ebp),%eax
081d5251 +0x6b:  mov    0xd(%eax),%esi
081d5254 +0x6e:  mov    0xc(%ebp),%eax
081d5257 +0x71:  mov    %eax,(%esp)
081d525a +0x74:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
081d525f +0x79:  mov    %eax,%ebx
081d5261 +0x7b:  mov    0xc(%ebp),%eax
081d5264 +0x7e:  mov    %eax,(%esp)
081d5267 +0x81:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
081d526c +0x86:  mov    %esi,0x8(%esp)
081d5270 +0x8a:  mov    %ebx,0x4(%esp)
081d5274 +0x8e:  mov    %eax,(%esp)
081d5277 +0x91:  call   0843df0e <_ZN16DB_DenyJoinGuild11makeRequestEijj>  ; DB_DenyJoinGuild::makeRequest(int, unsigned int, unsigned int)
081d527c +0x96:  movl   $0x160,0x4(%esp)
081d5284 +0x9e:  mov    0xc(%ebp),%eax
081d5287 +0xa1:  mov    %eax,(%esp)
081d528a +0xa4:  call   0867bea0 <_ZN5CUser15SendCmdOkPacketE14ENUM_CMDPACKET>  ; CUser::SendCmdOkPacket(ENUM_CMDPACKET)
081d528f +0xa9:  mov    $0x0,%eax
081d5294 +0xae:  add    $0x20,%esp
081d5297 +0xb1:  pop    %ebx
081d5298 +0xb2:  pop    %esi
081d5299 +0xb3:  pop    %ebp
081d529a +0xb4:  ret
081d529b +0xb5:  nop
```

## 反编译 C

```c
// Dispatcher_DenyJoinGuild::process @ 0x81d51e6

/* Dispatcher_DenyJoinGuild::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 Dispatcher_DenyJoinGuild::process(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = CUser::get_state((CUser *)param_2);
  if (iVar4 == 3) {
    cVar3 = CUser::IsGuildMaster((CUser *)param_2);
    if ((cVar3 == '\x01') || (cVar3 = CUser::IsSubGuildMaster((CUser *)param_2), cVar3 == '\x01')) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      uVar1 = *(uint *)(param_3 + 0xd);
      uVar5 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_2);
      iVar4 = CUser::GetUID((CUser *)param_2);
      DB_DenyJoinGuild::makeRequest(iVar4,uVar5,uVar1);
      CUser::SendCmdOkPacket((CUser *)param_2,0x160);
    }
  }
  return 0;
}
```

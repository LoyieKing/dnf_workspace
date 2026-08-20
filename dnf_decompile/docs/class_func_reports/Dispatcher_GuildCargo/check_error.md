# check_error

`_ZN21Dispatcher_GuildCargo11check_errorEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_GuildCargo::check_error(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_GuildCargo` | `0x081d0a6a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d0a6a  _ZN21Dispatcher_GuildCargo11check_errorEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_GuildCargo::check_error(CUser*, MSG_BASE&, ParamBase&)
# range [0x081d0a6a, 0x081d0ae1]
081d0a6a +0x00:  push   %ebp
081d0a6b +0x01:  mov    %esp,%ebp
081d0a6d +0x03:  sub    $0x18,%esp
081d0a70 +0x06:  mov    0xc(%ebp),%eax
081d0a73 +0x09:  mov    %eax,(%esp)
081d0a76 +0x0c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081d0a7b +0x11:  cmp    $0x3,%eax
081d0a7e +0x14:  jne    081d0a8f <+0x25>
081d0a80 +0x16:  mov    0xc(%ebp),%eax
081d0a83 +0x19:  mov    %eax,(%esp)
081d0a86 +0x1c:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
081d0a8b +0x21:  test   %eax,%eax
081d0a8d +0x23:  jne    081d0a96 <+0x2c>
081d0a8f +0x25:  mov    $0x1,%eax
081d0a94 +0x2a:  jmp    081d0a9b <+0x31>
081d0a96 +0x2c:  mov    $0x0,%eax
081d0a9b +0x31:  test   %al,%al
081d0a9d +0x33:  je     081d0aa6 <+0x3c>
081d0a9f +0x35:  mov    $0xffffffff,%eax
081d0aa4 +0x3a:  jmp    081d0adf <+0x75>
081d0aa6 +0x3c:  mov    0xc(%ebp),%eax
081d0aa9 +0x3f:  mov    %eax,(%esp)
081d0aac +0x42:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
081d0ab1 +0x47:  test   %eax,%eax
081d0ab3 +0x49:  sete   %al
081d0ab6 +0x4c:  test   %al,%al
081d0ab8 +0x4e:  je     081d0ac1 <+0x57>
081d0aba +0x50:  mov    $0x64,%eax
081d0abf +0x55:  jmp    081d0adf <+0x75>
081d0ac1 +0x57:  mov    0xc(%ebp),%eax
081d0ac4 +0x5a:  mov    %eax,(%esp)
081d0ac7 +0x5d:  call   082301d8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5882>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5882
081d0acc +0x62:  xor    $0x1,%eax
081d0acf +0x65:  test   %al,%al
081d0ad1 +0x67:  je     081d0ada <+0x70>
081d0ad3 +0x69:  mov    $0xb5,%eax
081d0ad8 +0x6e:  jmp    081d0adf <+0x75>
081d0ada +0x70:  mov    $0x0,%eax
081d0adf +0x75:  leave
081d0ae0 +0x76:  ret
081d0ae1 +0x77:  nop
```

## 反编译 C

```c
// Dispatcher_GuildCargo::check_error @ 0x81d0a6a

/* Dispatcher_GuildCargo::check_error(CUser*, MSG_BASE&, ParamBase&) */

undefined4 Dispatcher_GuildCargo::check_error(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = CUser::get_state((CUser *)param_2);
  if (iVar3 == 3) {
    iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if (iVar3 != 0) {
      bVar1 = false;
      goto LAB_081d0a9b;
    }
  }
  bVar1 = true;
LAB_081d0a9b:
  if (bVar1) {
    uVar4 = 0xffffffff;
  }
  else {
    iVar3 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_2);
    if (iVar3 == 0) {
      uVar4 = 100;
    }
    else {
      cVar2 = CUser::IsExistGuildAgit((CUser *)param_2);
      if (cVar2 == '\x01') {
        uVar4 = 0;
      }
      else {
        uVar4 = 0xb5;
      }
    }
  }
  return uVar4;
}
```

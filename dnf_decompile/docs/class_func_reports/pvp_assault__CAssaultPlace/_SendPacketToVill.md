# _SendPacketToVill

`_ZN11pvp_assault13CAssaultPlace17_SendPacketToVillER11PacketGuard`

`pvp_assault::CAssaultPlace::_SendPacketToVill(PacketGuard&)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultPlace` | `0x082e6d92` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082e6d92  _ZN11pvp_assault13CAssaultPlace17_SendPacketToVillER11PacketGuard
#           pvp_assault::CAssaultPlace::_SendPacketToVill(PacketGuard&)
# range [0x082e6d92, 0x082e6dcd]
082e6d92 +0x00:  push   %ebp
082e6d93 +0x01:  mov    %esp,%ebp
082e6d95 +0x03:  push   %ebx
082e6d96 +0x04:  sub    $0x14,%esp
082e6d99 +0x07:  mov    0x8(%ebp),%eax
082e6d9c +0x0a:  mov    0x118(%eax),%eax
082e6da2 +0x10:  test   %eax,%eax
082e6da4 +0x12:  je     082e6dc7 <+0x35>
082e6da6 +0x14:  mov    0x8(%ebp),%eax
082e6da9 +0x17:  mov    0x118(%eax),%ebx
082e6daf +0x1d:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
082e6db4 +0x22:  mov    0xc(%ebp),%edx
082e6db7 +0x25:  mov    %edx,0x8(%esp)
082e6dbb +0x29:  mov    %ebx,0x4(%esp)
082e6dbf +0x2d:  mov    %eax,(%esp)
082e6dc2 +0x30:  call   086c7f48 <_ZN9GameWorld12send_to_villEiR11PacketGuard>  ; GameWorld::send_to_vill(int, PacketGuard&)
082e6dc7 +0x35:  add    $0x14,%esp
082e6dca +0x38:  pop    %ebx
082e6dcb +0x39:  pop    %ebp
082e6dcc +0x3a:  ret
082e6dcd +0x3b:  nop
```

## 反编译 C

```c
// pvp_assault::CAssaultPlace::_SendPacketToVill @ 0x82e6d92

/* pvp_assault::CAssaultPlace::_SendPacketToVill(PacketGuard&) */

void __thiscall
pvp_assault::CAssaultPlace::_SendPacketToVill(CAssaultPlace *this,PacketGuard *param_1)

{
  int iVar1;
  GameWorld *this_00;
  
  if (*(int *)(this + 0x118) != 0) {
    iVar1 = *(int *)(this + 0x118);
    this_00 = (GameWorld *)G_GameWorld();
    GameWorld::send_to_vill(this_00,iVar1,param_1);
  }
  return;
}
```

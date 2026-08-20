# _SendPacketToArea

`_ZN11pvp_assault13CAssaultPlace17_SendPacketToAreaER11PacketGuard`

`pvp_assault::CAssaultPlace::_SendPacketToArea(PacketGuard&)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultPlace` | `0x082e6d3a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082e6d3a  _ZN11pvp_assault13CAssaultPlace17_SendPacketToAreaER11PacketGuard
#           pvp_assault::CAssaultPlace::_SendPacketToArea(PacketGuard&)
# range [0x082e6d3a, 0x082e6d91]
082e6d3a +0x00:  push   %ebp
082e6d3b +0x01:  mov    %esp,%ebp
082e6d3d +0x03:  push   %esi
082e6d3e +0x04:  push   %ebx
082e6d3f +0x05:  sub    $0x10,%esp
082e6d42 +0x08:  mov    0x8(%ebp),%eax
082e6d45 +0x0b:  mov    0x118(%eax),%eax
082e6d4b +0x11:  test   %eax,%eax
082e6d4d +0x13:  jne    082e6d5c <+0x22>
082e6d4f +0x15:  mov    0x8(%ebp),%eax
082e6d52 +0x18:  mov    0x11c(%eax),%eax
082e6d58 +0x1e:  test   %eax,%eax
082e6d5a +0x20:  je     082e6d8a <+0x50>
082e6d5c +0x22:  mov    0x8(%ebp),%eax
082e6d5f +0x25:  mov    0x11c(%eax),%esi
082e6d65 +0x2b:  mov    0x8(%ebp),%eax
082e6d68 +0x2e:  mov    0x118(%eax),%ebx
082e6d6e +0x34:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
082e6d73 +0x39:  mov    0xc(%ebp),%edx
082e6d76 +0x3c:  mov    %edx,0xc(%esp)
082e6d7a +0x40:  mov    %esi,0x8(%esp)
082e6d7e +0x44:  mov    %ebx,0x4(%esp)
082e6d82 +0x48:  mov    %eax,(%esp)
082e6d85 +0x4b:  call   086c8168 <_ZN9GameWorld12send_to_areaEiiR11PacketGuard>  ; GameWorld::send_to_area(int, int, PacketGuard&)
082e6d8a +0x50:  add    $0x10,%esp
082e6d8d +0x53:  pop    %ebx
082e6d8e +0x54:  pop    %esi
082e6d8f +0x55:  pop    %ebp
082e6d90 +0x56:  ret
082e6d91 +0x57:  nop
```

## 反编译 C

```c
// pvp_assault::CAssaultPlace::_SendPacketToArea @ 0x82e6d3a

/* pvp_assault::CAssaultPlace::_SendPacketToArea(PacketGuard&) */

void __thiscall
pvp_assault::CAssaultPlace::_SendPacketToArea(CAssaultPlace *this,PacketGuard *param_1)

{
  int iVar1;
  int iVar2;
  GameWorld *this_00;
  
  if ((*(int *)(this + 0x118) != 0) || (*(int *)(this + 0x11c) != 0)) {
    iVar1 = *(int *)(this + 0x11c);
    iVar2 = *(int *)(this + 0x118);
    this_00 = (GameWorld *)G_GameWorld();
    GameWorld::send_to_area(this_00,iVar2,iVar1,param_1);
  }
  return;
}
```

# _SendPacketToArea

`_ZN11pvp_assault13CAssaultPlace17_SendPacketToAreaER11PacketGuardRSt6vectorIP5CUserSaIS5_EE`

`pvp_assault::CAssaultPlace::_SendPacketToArea(PacketGuard&, std::vector<CUser*, std::allocator<CUser*> >&)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultPlace` | `0x082e6dce` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082e6dce  _ZN11pvp_assault13CAssaultPlace17_SendPacketToAreaER11PacketGuardRSt6vectorIP5CUserSaIS5_EE
#           pvp_assault::CAssaultPlace::_SendPacketToArea(PacketGuard&, std::vector<CUser*, std::allocator<CUser*> >&)
# range [0x082e6dce, 0x082e6e2b]
082e6dce +0x00:  push   %ebp
082e6dcf +0x01:  mov    %esp,%ebp
082e6dd1 +0x03:  push   %esi
082e6dd2 +0x04:  push   %ebx
082e6dd3 +0x05:  sub    $0x20,%esp
082e6dd6 +0x08:  mov    0x8(%ebp),%eax
082e6dd9 +0x0b:  mov    0x118(%eax),%eax
082e6ddf +0x11:  test   %eax,%eax
082e6de1 +0x13:  jne    082e6df0 <+0x22>
082e6de3 +0x15:  mov    0x8(%ebp),%eax
082e6de6 +0x18:  mov    0x11c(%eax),%eax
082e6dec +0x1e:  test   %eax,%eax
082e6dee +0x20:  je     082e6e25 <+0x57>
082e6df0 +0x22:  mov    0x8(%ebp),%eax
082e6df3 +0x25:  mov    0x11c(%eax),%esi
082e6df9 +0x2b:  mov    0x8(%ebp),%eax
082e6dfc +0x2e:  mov    0x118(%eax),%ebx
082e6e02 +0x34:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
082e6e07 +0x39:  mov    0x10(%ebp),%edx
082e6e0a +0x3c:  mov    %edx,0x10(%esp)
082e6e0e +0x40:  mov    0xc(%ebp),%edx
082e6e11 +0x43:  mov    %edx,0xc(%esp)
082e6e15 +0x47:  mov    %esi,0x8(%esp)
082e6e19 +0x4b:  mov    %ebx,0x4(%esp)
082e6e1d +0x4f:  mov    %eax,(%esp)
082e6e20 +0x52:  call   086c828e <_ZN9GameWorld12send_to_areaEiiR11PacketGuardRSt6vectorIP5CUserSaIS4_EE>  ; GameWorld::send_to_area(int, int, PacketGuard&, std::vector<CUser*, std::allocator<CUser*> >&)
082e6e25 +0x57:  add    $0x20,%esp
082e6e28 +0x5a:  pop    %ebx
082e6e29 +0x5b:  pop    %esi
082e6e2a +0x5c:  pop    %ebp
082e6e2b +0x5d:  ret
```

## 反编译 C

```c
// pvp_assault::CAssaultPlace::_SendPacketToArea @ 0x82e6dce

/* pvp_assault::CAssaultPlace::_SendPacketToArea(PacketGuard&, std::vector<CUser*,
   std::allocator<CUser*> >&) */

void __thiscall
pvp_assault::CAssaultPlace::_SendPacketToArea
          (CAssaultPlace *this,PacketGuard *param_1,vector *param_2)

{
  int iVar1;
  int iVar2;
  GameWorld *this_00;
  
  if ((*(int *)(this + 0x118) != 0) || (*(int *)(this + 0x11c) != 0)) {
    iVar1 = *(int *)(this + 0x11c);
    iVar2 = *(int *)(this + 0x118);
    this_00 = (GameWorld *)G_GameWorld();
    GameWorld::send_to_area(this_00,iVar2,iVar1,param_1,param_2);
  }
  return;
}
```

# _SendUserState

`_ZN11pvp_assault13CAssaultPlace14_SendUserStateEv`

`pvp_assault::CAssaultPlace::_SendUserState()`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultPlace` | `0x082e79f6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082e79f6  _ZN11pvp_assault13CAssaultPlace14_SendUserStateEv
#           pvp_assault::CAssaultPlace::_SendUserState()
# range [0x082e79f6, 0x082e7a5d]
082e79f6 +0x00:  push   %ebp
082e79f7 +0x01:  mov    %esp,%ebp
082e79f9 +0x03:  push   %esi
082e79fa +0x04:  push   %ebx
082e79fb +0x05:  sub    $0x20,%esp
082e79fe +0x08:  lea    -0x14(%ebp),%eax
082e7a01 +0x0b:  mov    %eax,(%esp)
082e7a04 +0x0e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
082e7a09 +0x13:  lea    -0x14(%ebp),%eax
082e7a0c +0x16:  mov    %eax,0x4(%esp)
082e7a10 +0x1a:  mov    0x8(%ebp),%eax
082e7a13 +0x1d:  mov    %eax,(%esp)
082e7a16 +0x20:  call   082e8c5a <_ZN11pvp_assault13CAssaultPlace14_MakeUserStateEP11PacketGuard>  ; pvp_assault::CAssaultPlace::_MakeUserState(PacketGuard*)
082e7a1b +0x25:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
082e7a20 +0x2a:  lea    -0x14(%ebp),%edx
082e7a23 +0x2d:  mov    %edx,0x4(%esp)
082e7a27 +0x31:  mov    %eax,(%esp)
082e7a2a +0x34:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
082e7a2f +0x39:  jmp    082e7a4c <+0x56>
082e7a31 +0x3b:  mov    %edx,%ebx
082e7a33 +0x3d:  mov    %eax,%esi
082e7a35 +0x3f:  lea    -0x14(%ebp),%eax
082e7a38 +0x42:  mov    %eax,(%esp)
082e7a3b +0x45:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082e7a40 +0x4a:  mov    %esi,%eax
082e7a42 +0x4c:  mov    %ebx,%edx
082e7a44 +0x4e:  mov    %eax,(%esp)
082e7a47 +0x51:  call   08ae3750 <_Unwind_Resume>
082e7a4c +0x56:  lea    -0x14(%ebp),%eax
082e7a4f +0x59:  mov    %eax,(%esp)
082e7a52 +0x5c:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082e7a57 +0x61:  add    $0x20,%esp
082e7a5a +0x64:  pop    %ebx
082e7a5b +0x65:  pop    %esi
082e7a5c +0x66:  pop    %ebp
082e7a5d +0x67:  ret
```

## 反编译 C

```c
// pvp_assault::CAssaultPlace::_SendUserState @ 0x82e79f6

/* pvp_assault::CAssaultPlace::_SendUserState() */

void __thiscall pvp_assault::CAssaultPlace::_SendUserState(CAssaultPlace *this)

{
  GameWorld *this_00;
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 082e7a16 to 082e7a2e has its CatchHandler @ 082e7a31 */
  _MakeUserState(this,local_18);
  this_00 = (GameWorld *)G_GameWorld();
  GameWorld::send_all(this_00,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}
```

# _SendUserMiniInfo

`_ZN11pvp_assault13CAssaultPlace17_SendUserMiniInfoEv`

`pvp_assault::CAssaultPlace::_SendUserMiniInfo()`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultPlace` | `0x082e7986` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082e7986  _ZN11pvp_assault13CAssaultPlace17_SendUserMiniInfoEv
#           pvp_assault::CAssaultPlace::_SendUserMiniInfo()
# range [0x082e7986, 0x082e79f5]
082e7986 +0x00:  push   %ebp
082e7987 +0x01:  mov    %esp,%ebp
082e7989 +0x03:  push   %esi
082e798a +0x04:  push   %ebx
082e798b +0x05:  sub    $0x20,%esp
082e798e +0x08:  lea    -0x14(%ebp),%eax
082e7991 +0x0b:  mov    %eax,(%esp)
082e7994 +0x0e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
082e7999 +0x13:  movl   $0x0,0x8(%esp)
082e79a1 +0x1b:  lea    -0x14(%ebp),%eax
082e79a4 +0x1e:  mov    %eax,0x4(%esp)
082e79a8 +0x22:  mov    0x8(%ebp),%eax
082e79ab +0x25:  mov    %eax,(%esp)
082e79ae +0x28:  call   082e8b66 <_ZN11pvp_assault13CAssaultPlace13_MakeUserInfoEP11PacketGuard13ENUM_USERINFO>  ; pvp_assault::CAssaultPlace::_MakeUserInfo(PacketGuard*, ENUM_USERINFO)
082e79b3 +0x2d:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
082e79b8 +0x32:  lea    -0x14(%ebp),%edx
082e79bb +0x35:  mov    %edx,0x4(%esp)
082e79bf +0x39:  mov    %eax,(%esp)
082e79c2 +0x3c:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
082e79c7 +0x41:  jmp    082e79e4 <+0x5e>
082e79c9 +0x43:  mov    %edx,%ebx
082e79cb +0x45:  mov    %eax,%esi
082e79cd +0x47:  lea    -0x14(%ebp),%eax
082e79d0 +0x4a:  mov    %eax,(%esp)
082e79d3 +0x4d:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082e79d8 +0x52:  mov    %esi,%eax
082e79da +0x54:  mov    %ebx,%edx
082e79dc +0x56:  mov    %eax,(%esp)
082e79df +0x59:  call   08ae3750 <_Unwind_Resume>
082e79e4 +0x5e:  lea    -0x14(%ebp),%eax
082e79e7 +0x61:  mov    %eax,(%esp)
082e79ea +0x64:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082e79ef +0x69:  add    $0x20,%esp
082e79f2 +0x6c:  pop    %ebx
082e79f3 +0x6d:  pop    %esi
082e79f4 +0x6e:  pop    %ebp
082e79f5 +0x6f:  ret
```

## 反编译 C

```c
// pvp_assault::CAssaultPlace::_SendUserMiniInfo @ 0x82e7986

/* pvp_assault::CAssaultPlace::_SendUserMiniInfo() */

void __thiscall pvp_assault::CAssaultPlace::_SendUserMiniInfo(CAssaultPlace *this)

{
  GameWorld *this_00;
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 082e79ae to 082e79c6 has its CatchHandler @ 082e79c9 */
  _MakeUserInfo(this,local_18,0);
  this_00 = (GameWorld *)G_GameWorld();
  GameWorld::send_all(this_00,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}
```

# _SendUserInfo

`_ZN11pvp_assault13CAssaultPlace13_SendUserInfoEv`

`pvp_assault::CAssaultPlace::_SendUserInfo()`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultPlace` | `0x082e7918` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082e7918  _ZN11pvp_assault13CAssaultPlace13_SendUserInfoEv
#           pvp_assault::CAssaultPlace::_SendUserInfo()
# range [0x082e7918, 0x082e7985]
082e7918 +0x00:  push   %ebp
082e7919 +0x01:  mov    %esp,%ebp
082e791b +0x03:  push   %esi
082e791c +0x04:  push   %ebx
082e791d +0x05:  sub    $0x20,%esp
082e7920 +0x08:  lea    -0x14(%ebp),%eax
082e7923 +0x0b:  mov    %eax,(%esp)
082e7926 +0x0e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
082e792b +0x13:  movl   $0x1,0x8(%esp)
082e7933 +0x1b:  lea    -0x14(%ebp),%eax
082e7936 +0x1e:  mov    %eax,0x4(%esp)
082e793a +0x22:  mov    0x8(%ebp),%eax
082e793d +0x25:  mov    %eax,(%esp)
082e7940 +0x28:  call   082e8b66 <_ZN11pvp_assault13CAssaultPlace13_MakeUserInfoEP11PacketGuard13ENUM_USERINFO>  ; pvp_assault::CAssaultPlace::_MakeUserInfo(PacketGuard*, ENUM_USERINFO)
082e7945 +0x2d:  lea    -0x14(%ebp),%eax
082e7948 +0x30:  mov    %eax,0x4(%esp)
082e794c +0x34:  mov    0x8(%ebp),%eax
082e794f +0x37:  mov    %eax,(%esp)
082e7952 +0x3a:  call   082e6bf6 <_ZN11pvp_assault13CAssaultPlace10SendPacketER11PacketGuard>  ; pvp_assault::CAssaultPlace::SendPacket(PacketGuard&)
082e7957 +0x3f:  jmp    082e7974 <+0x5c>
082e7959 +0x41:  mov    %edx,%ebx
082e795b +0x43:  mov    %eax,%esi
082e795d +0x45:  lea    -0x14(%ebp),%eax
082e7960 +0x48:  mov    %eax,(%esp)
082e7963 +0x4b:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082e7968 +0x50:  mov    %esi,%eax
082e796a +0x52:  mov    %ebx,%edx
082e796c +0x54:  mov    %eax,(%esp)
082e796f +0x57:  call   08ae3750 <_Unwind_Resume>
082e7974 +0x5c:  lea    -0x14(%ebp),%eax
082e7977 +0x5f:  mov    %eax,(%esp)
082e797a +0x62:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082e797f +0x67:  add    $0x20,%esp
082e7982 +0x6a:  pop    %ebx
082e7983 +0x6b:  pop    %esi
082e7984 +0x6c:  pop    %ebp
082e7985 +0x6d:  ret
```

## 反编译 C

```c
// pvp_assault::CAssaultPlace::_SendUserInfo @ 0x82e7918

/* pvp_assault::CAssaultPlace::_SendUserInfo() */

void __thiscall pvp_assault::CAssaultPlace::_SendUserInfo(CAssaultPlace *this)

{
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 082e7940 to 082e7956 has its CatchHandler @ 082e7959 */
  _MakeUserInfo(this,local_18,1);
  SendPacket(this,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}
```

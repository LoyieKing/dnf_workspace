# _MoveAssaultPlace

`_ZN11pvp_assault13CAssaultPlace17_MoveAssaultPlaceEv`

`pvp_assault::CAssaultPlace::_MoveAssaultPlace()`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultPlace` | `0x082e8300` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082e8300  _ZN11pvp_assault13CAssaultPlace17_MoveAssaultPlaceEv
#           pvp_assault::CAssaultPlace::_MoveAssaultPlace()
# range [0x082e8300, 0x082e8365]
082e8300 +0x00:  push   %ebp
082e8301 +0x01:  mov    %esp,%ebp
082e8303 +0x03:  push   %esi
082e8304 +0x04:  push   %ebx
082e8305 +0x05:  sub    $0x20,%esp
082e8308 +0x08:  lea    -0x14(%ebp),%eax
082e830b +0x0b:  mov    %eax,(%esp)
082e830e +0x0e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
082e8313 +0x13:  lea    -0x14(%ebp),%eax
082e8316 +0x16:  mov    %eax,0x4(%esp)
082e831a +0x1a:  mov    0x8(%ebp),%eax
082e831d +0x1d:  mov    %eax,(%esp)
082e8320 +0x20:  call   082e852e <_ZN11pvp_assault13CAssaultPlace21_MakeMoveAssaultPlaceEP11PacketGuard>  ; pvp_assault::CAssaultPlace::_MakeMoveAssaultPlace(PacketGuard*)
082e8325 +0x25:  lea    -0x14(%ebp),%eax
082e8328 +0x28:  mov    %eax,0x4(%esp)
082e832c +0x2c:  mov    0x8(%ebp),%eax
082e832f +0x2f:  mov    %eax,(%esp)
082e8332 +0x32:  call   082e6bf6 <_ZN11pvp_assault13CAssaultPlace10SendPacketER11PacketGuard>  ; pvp_assault::CAssaultPlace::SendPacket(PacketGuard&)
082e8337 +0x37:  jmp    082e8354 <+0x54>
082e8339 +0x39:  mov    %edx,%ebx
082e833b +0x3b:  mov    %eax,%esi
082e833d +0x3d:  lea    -0x14(%ebp),%eax
082e8340 +0x40:  mov    %eax,(%esp)
082e8343 +0x43:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082e8348 +0x48:  mov    %esi,%eax
082e834a +0x4a:  mov    %ebx,%edx
082e834c +0x4c:  mov    %eax,(%esp)
082e834f +0x4f:  call   08ae3750 <_Unwind_Resume>
082e8354 +0x54:  lea    -0x14(%ebp),%eax
082e8357 +0x57:  mov    %eax,(%esp)
082e835a +0x5a:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082e835f +0x5f:  add    $0x20,%esp
082e8362 +0x62:  pop    %ebx
082e8363 +0x63:  pop    %esi
082e8364 +0x64:  pop    %ebp
082e8365 +0x65:  ret
```

## 反编译 C

```c
// pvp_assault::CAssaultPlace::_MoveAssaultPlace @ 0x82e8300

/* pvp_assault::CAssaultPlace::_MoveAssaultPlace() */

void __thiscall pvp_assault::CAssaultPlace::_MoveAssaultPlace(CAssaultPlace *this)

{
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 082e8320 to 082e8336 has its CatchHandler @ 082e8339 */
  _MakeMoveAssaultPlace(this,local_18);
  SendPacket(this,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}
```

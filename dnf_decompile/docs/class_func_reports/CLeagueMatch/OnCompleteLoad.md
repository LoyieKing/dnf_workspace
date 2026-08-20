# OnCompleteLoad

`_ZN12CLeagueMatch14OnCompleteLoadEP5CUser`

`CLeagueMatch::OnCompleteLoad(CUser*)`

| 类 | 地址 |
|---|---|
| `CLeagueMatch` | `0x0855e22c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0855e22c  _ZN12CLeagueMatch14OnCompleteLoadEP5CUser
#           CLeagueMatch::OnCompleteLoad(CUser*)
# range [0x0855e22c, 0x0855e377]
0855e22c +0x000:  push   %ebp
0855e22d +0x001:  mov    %esp,%ebp
0855e22f +0x003:  push   %esi
0855e230 +0x004:  push   %ebx
0855e231 +0x005:  sub    $0x30,%esp
0855e234 +0x008:  lea    -0x20(%ebp),%eax
0855e237 +0x00b:  mov    %eax,(%esp)
0855e23a +0x00e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0855e23f +0x013:  movl   $0x81,0x8(%esp)
0855e247 +0x01b:  movl   $0x0,0x4(%esp)
0855e24f +0x023:  lea    -0x20(%ebp),%eax
0855e252 +0x026:  mov    %eax,(%esp)
0855e255 +0x029:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0855e25a +0x02e:  mov    0xc(%ebp),%eax
0855e25d +0x031:  mov    %eax,(%esp)
0855e260 +0x034:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
0855e265 +0x039:  movzwl %ax,%eax
0855e268 +0x03c:  mov    %eax,0x4(%esp)
0855e26c +0x040:  lea    -0x20(%ebp),%eax
0855e26f +0x043:  mov    %eax,(%esp)
0855e272 +0x046:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0855e277 +0x04b:  movl   $0x1,0x4(%esp)
0855e27f +0x053:  lea    -0x20(%ebp),%eax
0855e282 +0x056:  mov    %eax,(%esp)
0855e285 +0x059:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0855e28a +0x05e:  movl   $0x0,-0x14(%ebp)
0855e291 +0x065:  jmp    0855e33a <+0x10e>
0855e296 +0x06a:  movl   $0x0,-0x10(%ebp)
0855e29d +0x071:  jmp    0855e327 <+0xfb>
0855e2a2 +0x076:  mov    -0x14(%ebp),%ecx
0855e2a5 +0x079:  mov    -0x10(%ebp),%eax
0855e2a8 +0x07c:  mov    0x8(%ebp),%ebx
0855e2ab +0x07f:  shl    $0x2,%eax
0855e2ae +0x082:  lea    0x0(,%eax,8),%edx
0855e2b5 +0x089:  sub    %eax,%edx
0855e2b7 +0x08b:  mov    %ecx,%eax
0855e2b9 +0x08d:  mov    %eax,%ecx
0855e2bb +0x08f:  shl    $0x4,%ecx
0855e2be +0x092:  lea    0x0(,%ecx,8),%eax
0855e2c5 +0x099:  sub    %ecx,%eax
0855e2c7 +0x09b:  lea    (%edx,%eax,1),%eax
0855e2ca +0x09e:  lea    (%ebx,%eax,1),%eax
0855e2cd +0x0a1:  add    $0x24,%eax
0855e2d0 +0x0a4:  mov    (%eax),%eax
0855e2d2 +0x0a6:  mov    %eax,-0xc(%ebp)
0855e2d5 +0x0a9:  mov    -0x14(%ebp),%ecx
0855e2d8 +0x0ac:  mov    -0x10(%ebp),%eax
0855e2db +0x0af:  mov    0x8(%ebp),%ebx
0855e2de +0x0b2:  shl    $0x2,%eax
0855e2e1 +0x0b5:  lea    0x0(,%eax,8),%edx
0855e2e8 +0x0bc:  sub    %eax,%edx
0855e2ea +0x0be:  mov    %ecx,%eax
0855e2ec +0x0c0:  mov    %eax,%ecx
0855e2ee +0x0c2:  shl    $0x4,%ecx
0855e2f1 +0x0c5:  lea    0x0(,%ecx,8),%eax
0855e2f8 +0x0cc:  sub    %ecx,%eax
0855e2fa +0x0ce:  lea    (%edx,%eax,1),%eax
0855e2fd +0x0d1:  lea    (%ebx,%eax,1),%eax
0855e300 +0x0d4:  add    $0x10,%eax
0855e303 +0x0d7:  movzbl 0x18(%eax),%eax
0855e307 +0x0db:  test   %al,%al
0855e309 +0x0dd:  je     0855e323 <+0xf7>
0855e30b +0x0df:  cmpl   $0x0,-0xc(%ebp)
0855e30f +0x0e3:  je     0855e323 <+0xf7>
0855e311 +0x0e5:  lea    -0x20(%ebp),%eax
0855e314 +0x0e8:  mov    %eax,0x4(%esp)
0855e318 +0x0ec:  mov    -0xc(%ebp),%eax
0855e31b +0x0ef:  mov    %eax,(%esp)
0855e31e +0x0f2:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0855e323 +0x0f7:  addl   $0x1,-0x10(%ebp)
0855e327 +0x0fb:  cmpl   $0x3,-0x10(%ebp)
0855e32b +0x0ff:  setle  %al
0855e32e +0x102:  test   %al,%al
0855e330 +0x104:  jne    0855e2a2 <+0x76>
0855e336 +0x10a:  addl   $0x1,-0x14(%ebp)
0855e33a +0x10e:  cmpl   $0x1,-0x14(%ebp)
0855e33e +0x112:  setle  %al
0855e341 +0x115:  test   %al,%al
0855e343 +0x117:  jne    0855e296 <+0x6a>
0855e349 +0x11d:  jmp    0855e366 <+0x13a>
0855e34b +0x11f:  mov    %edx,%ebx
0855e34d +0x121:  mov    %eax,%esi
0855e34f +0x123:  lea    -0x20(%ebp),%eax
0855e352 +0x126:  mov    %eax,(%esp)
0855e355 +0x129:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0855e35a +0x12e:  mov    %esi,%eax
0855e35c +0x130:  mov    %ebx,%edx
0855e35e +0x132:  mov    %eax,(%esp)
0855e361 +0x135:  call   08ae3750 <_Unwind_Resume>
0855e366 +0x13a:  lea    -0x20(%ebp),%eax
0855e369 +0x13d:  mov    %eax,(%esp)
0855e36c +0x140:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0855e371 +0x145:  add    $0x30,%esp
0855e374 +0x148:  pop    %ebx
0855e375 +0x149:  pop    %esi
0855e376 +0x14a:  pop    %ebp
0855e377 +0x14b:  ret
```

## 反编译 C

```c
// CLeagueMatch::OnCompleteLoad @ 0x855e22c

/* CLeagueMatch::OnCompleteLoad(CUser*) */

void __thiscall CLeagueMatch::OnCompleteLoad(CLeagueMatch *this,CUser *param_1)

{
  uint uVar1;
  PacketGuard local_24 [12];
  int local_18;
  int local_14;
  CUser *local_10;
  
  PacketGuard::PacketGuard(local_24);
                    /* try { // try from 0855e255 to 0855e322 has its CatchHandler @ 0855e34b */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,0,0x81);
  uVar1 = CUser::get_unique_id(param_1);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_24,uVar1 & 0xffff);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
  for (local_18 = 0; local_18 < 2; local_18 = local_18 + 1) {
    for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
      local_10 = *(CUser **)(this + local_14 * 0x1c + local_18 * 0x70 + 0x24);
      if ((this[local_14 * 0x1c + local_18 * 0x70 + 0x28] != (CLeagueMatch)0x0) &&
         (local_10 != (CUser *)0x0)) {
        CUser::Send(local_10,local_24);
      }
    }
  }
  PacketGuard::~PacketGuard(local_24);
  return;
}
```

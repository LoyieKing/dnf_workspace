# _MakeChangeHp

`_ZN11pvp_assault13CAssaultPlace13_MakeChangeHpEP11PacketGuardii`

`pvp_assault::CAssaultPlace::_MakeChangeHp(PacketGuard*, int, int)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultPlace` | `0x082e90a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082e90a0  _ZN11pvp_assault13CAssaultPlace13_MakeChangeHpEP11PacketGuardii
#           pvp_assault::CAssaultPlace::_MakeChangeHp(PacketGuard*, int, int)
# range [0x082e90a0, 0x082e910b]
082e90a0 +0x00:  push   %ebp
082e90a1 +0x01:  mov    %esp,%ebp
082e90a3 +0x03:  sub    $0x18,%esp
082e90a6 +0x06:  mov    0xc(%ebp),%eax
082e90a9 +0x09:  movl   $0x88,0x8(%esp)
082e90b1 +0x11:  movl   $0x0,0x4(%esp)
082e90b9 +0x19:  mov    %eax,(%esp)
082e90bc +0x1c:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
082e90c1 +0x21:  mov    0x10(%ebp),%eax
082e90c4 +0x24:  shl    $0x5,%eax
082e90c7 +0x27:  add    0x8(%ebp),%eax
082e90ca +0x2a:  mov    %eax,(%esp)
082e90cd +0x2d:  call   082e6662 <_ZN11pvp_assault10CAssaulter15GetUserUniqueIdEv>  ; pvp_assault::CAssaulter::GetUserUniqueId()
082e90d2 +0x32:  movzwl %ax,%edx
082e90d5 +0x35:  mov    0xc(%ebp),%eax
082e90d8 +0x38:  mov    %edx,0x4(%esp)
082e90dc +0x3c:  mov    %eax,(%esp)
082e90df +0x3f:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
082e90e4 +0x44:  mov    0xc(%ebp),%eax
082e90e7 +0x47:  mov    0x14(%ebp),%edx
082e90ea +0x4a:  mov    %edx,0x4(%esp)
082e90ee +0x4e:  mov    %eax,(%esp)
082e90f1 +0x51:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
082e90f6 +0x56:  mov    0xc(%ebp),%eax
082e90f9 +0x59:  movl   $0x1,0x4(%esp)
082e9101 +0x61:  mov    %eax,(%esp)
082e9104 +0x64:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
082e9109 +0x69:  leave
082e910a +0x6a:  ret
082e910b +0x6b:  nop
```

## 反编译 C

```c
// pvp_assault::CAssaultPlace::_MakeChangeHp @ 0x82e90a0

/* pvp_assault::CAssaultPlace::_MakeChangeHp(PacketGuard*, int, int) */

void __thiscall
pvp_assault::CAssaultPlace::_MakeChangeHp
          (CAssaultPlace *this,PacketGuard *param_1,int param_2,int param_3)

{
  uint uVar1;
  
  InterfacePacketBuf::put_header((InterfacePacketBuf *)param_1,0,0x88);
  uVar1 = CAssaulter::GetUserUniqueId((CAssaulter *)(this + param_2 * 0x20));
  InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,uVar1 & 0xffff);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,param_3);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)param_1,true);
  return;
}
```

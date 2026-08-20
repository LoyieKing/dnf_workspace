# SendWalkOut

`_ZN7WarRoom11SendWalkOutEP5CUser17ENUM_WALKOUT_TYPE`

`WarRoom::SendWalkOut(CUser*, ENUM_WALKOUT_TYPE)`

| 类 | 地址 |
|---|---|
| `WarRoom` | `0x086be152` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086be152  _ZN7WarRoom11SendWalkOutEP5CUser17ENUM_WALKOUT_TYPE
#           WarRoom::SendWalkOut(CUser*, ENUM_WALKOUT_TYPE)
# range [0x086be152, 0x086be1f9]
086be152 +0x00:  push   %ebp
086be153 +0x01:  mov    %esp,%ebp
086be155 +0x03:  push   %esi
086be156 +0x04:  push   %ebx
086be157 +0x05:  sub    $0x20,%esp
086be15a +0x08:  lea    -0x14(%ebp),%eax
086be15d +0x0b:  mov    %eax,(%esp)
086be160 +0x0e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
086be165 +0x13:  movl   $0xa,0x8(%esp)
086be16d +0x1b:  movl   $0x0,0x4(%esp)
086be175 +0x23:  lea    -0x14(%ebp),%eax
086be178 +0x26:  mov    %eax,(%esp)
086be17b +0x29:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086be180 +0x2e:  movl   $0x0,0x4(%esp)
086be188 +0x36:  lea    -0x14(%ebp),%eax
086be18b +0x39:  mov    %eax,(%esp)
086be18e +0x3c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086be193 +0x41:  mov    0x10(%ebp),%eax
086be196 +0x44:  mov    %eax,0x4(%esp)
086be19a +0x48:  lea    -0x14(%ebp),%eax
086be19d +0x4b:  mov    %eax,(%esp)
086be1a0 +0x4e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086be1a5 +0x53:  movl   $0x1,0x4(%esp)
086be1ad +0x5b:  lea    -0x14(%ebp),%eax
086be1b0 +0x5e:  mov    %eax,(%esp)
086be1b3 +0x61:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086be1b8 +0x66:  lea    -0x14(%ebp),%eax
086be1bb +0x69:  mov    %eax,0x4(%esp)
086be1bf +0x6d:  mov    0xc(%ebp),%eax
086be1c2 +0x70:  mov    %eax,(%esp)
086be1c5 +0x73:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
086be1ca +0x78:  mov    $0x1,%ebx
086be1cf +0x7d:  lea    -0x14(%ebp),%eax
086be1d2 +0x80:  mov    %eax,(%esp)
086be1d5 +0x83:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086be1da +0x88:  mov    %ebx,%eax
086be1dc +0x8a:  add    $0x20,%esp
086be1df +0x8d:  pop    %ebx
086be1e0 +0x8e:  pop    %esi
086be1e1 +0x8f:  pop    %ebp
086be1e2 +0x90:  ret
086be1e3 +0x91:  mov    %edx,%ebx
086be1e5 +0x93:  mov    %eax,%esi
086be1e7 +0x95:  lea    -0x14(%ebp),%eax
086be1ea +0x98:  mov    %eax,(%esp)
086be1ed +0x9b:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086be1f2 +0xa0:  mov    %esi,%eax
086be1f4 +0xa2:  mov    %ebx,%edx
086be1f6 +0xa4:  mov    %eax,(%esp)
086be1f9 +0xa7:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// WarRoom::SendWalkOut @ 0x86be152

/* WarRoom::SendWalkOut(CUser*, ENUM_WALKOUT_TYPE) */

undefined4 __thiscall WarRoom::SendWalkOut(undefined4 this,CUser *param_1,int param_3)

{
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 086be17b to 086be1c9 has its CatchHandler @ 086be1e3 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,10);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,0);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,param_3);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  CUser::Send(param_1,local_18);
  PacketGuard::~PacketGuard(local_18);
  return 1;
}
```

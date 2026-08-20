# send

`_ZN23DisPatcher_WalkoutParty4sendEP5CUserR9ParamBase`

`DisPatcher_WalkoutParty::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_WalkoutParty` | `0x081cb0b8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081cb0b8  _ZN23DisPatcher_WalkoutParty4sendEP5CUserR9ParamBase
#           DisPatcher_WalkoutParty::send(CUser*, ParamBase&)
# range [0x081cb0b8, 0x081cb1c9]
081cb0b8 +0x000:  push   %ebp
081cb0b9 +0x001:  mov    %esp,%ebp
081cb0bb +0x003:  push   %esi
081cb0bc +0x004:  push   %ebx
081cb0bd +0x005:  sub    $0x20,%esp
081cb0c0 +0x008:  mov    0x10(%ebp),%eax
081cb0c3 +0x00b:  mov    %eax,-0xc(%ebp)
081cb0c6 +0x00e:  lea    -0x18(%ebp),%eax
081cb0c9 +0x011:  mov    %eax,(%esp)
081cb0cc +0x014:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081cb0d1 +0x019:  movl   $0xe,0x8(%esp)
081cb0d9 +0x021:  movl   $0x1,0x4(%esp)
081cb0e1 +0x029:  lea    -0x18(%ebp),%eax
081cb0e4 +0x02c:  mov    %eax,(%esp)
081cb0e7 +0x02f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081cb0ec +0x034:  mov    -0xc(%ebp),%eax
081cb0ef +0x037:  mov    0x4(%eax),%eax
081cb0f2 +0x03a:  cmp    $0x13,%eax
081cb0f5 +0x03d:  jne    081cb144 <+0x8c>
081cb0f7 +0x03f:  movl   $0x0,0x4(%esp)
081cb0ff +0x047:  lea    -0x18(%ebp),%eax
081cb102 +0x04a:  mov    %eax,(%esp)
081cb105 +0x04d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081cb10a +0x052:  movl   $0x13,0x4(%esp)
081cb112 +0x05a:  lea    -0x18(%ebp),%eax
081cb115 +0x05d:  mov    %eax,(%esp)
081cb118 +0x060:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081cb11d +0x065:  movl   $0x1,0x4(%esp)
081cb125 +0x06d:  lea    -0x18(%ebp),%eax
081cb128 +0x070:  mov    %eax,(%esp)
081cb12b +0x073:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081cb130 +0x078:  lea    -0x18(%ebp),%eax
081cb133 +0x07b:  mov    %eax,0x4(%esp)
081cb137 +0x07f:  mov    0xc(%ebp),%eax
081cb13a +0x082:  mov    %eax,(%esp)
081cb13d +0x085:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081cb142 +0x08a:  jmp    081cb1b8 <+0x100>
081cb144 +0x08c:  mov    -0xc(%ebp),%eax
081cb147 +0x08f:  mov    0x4(%eax),%eax
081cb14a +0x092:  test   %eax,%eax
081cb14c +0x094:  jle    081cb1b8 <+0x100>
081cb14e +0x096:  movl   $0x0,0x4(%esp)
081cb156 +0x09e:  lea    -0x18(%ebp),%eax
081cb159 +0x0a1:  mov    %eax,(%esp)
081cb15c +0x0a4:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081cb161 +0x0a9:  mov    -0xc(%ebp),%eax
081cb164 +0x0ac:  mov    0x4(%eax),%eax
081cb167 +0x0af:  mov    %eax,0x4(%esp)
081cb16b +0x0b3:  lea    -0x18(%ebp),%eax
081cb16e +0x0b6:  mov    %eax,(%esp)
081cb171 +0x0b9:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081cb176 +0x0be:  movl   $0x1,0x4(%esp)
081cb17e +0x0c6:  lea    -0x18(%ebp),%eax
081cb181 +0x0c9:  mov    %eax,(%esp)
081cb184 +0x0cc:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081cb189 +0x0d1:  lea    -0x18(%ebp),%eax
081cb18c +0x0d4:  mov    %eax,0x4(%esp)
081cb190 +0x0d8:  mov    0xc(%ebp),%eax
081cb193 +0x0db:  mov    %eax,(%esp)
081cb196 +0x0de:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081cb19b +0x0e3:  jmp    081cb1b8 <+0x100>
081cb19d +0x0e5:  mov    %edx,%ebx
081cb19f +0x0e7:  mov    %eax,%esi
081cb1a1 +0x0e9:  lea    -0x18(%ebp),%eax
081cb1a4 +0x0ec:  mov    %eax,(%esp)
081cb1a7 +0x0ef:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081cb1ac +0x0f4:  mov    %esi,%eax
081cb1ae +0x0f6:  mov    %ebx,%edx
081cb1b0 +0x0f8:  mov    %eax,(%esp)
081cb1b3 +0x0fb:  call   08ae3750 <_Unwind_Resume>
081cb1b8 +0x100:  lea    -0x18(%ebp),%eax
081cb1bb +0x103:  mov    %eax,(%esp)
081cb1be +0x106:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081cb1c3 +0x10b:  add    $0x20,%esp
081cb1c6 +0x10e:  pop    %ebx
081cb1c7 +0x10f:  pop    %esi
081cb1c8 +0x110:  pop    %ebp
081cb1c9 +0x111:  ret
```

## 反编译 C

```c
// DisPatcher_WalkoutParty::send @ 0x81cb0b8

/* DisPatcher_WalkoutParty::send(CUser*, ParamBase&) */

void __thiscall
DisPatcher_WalkoutParty::send(DisPatcher_WalkoutParty *this,CUser *param_1,ParamBase *param_2)

{
  PacketGuard local_1c [12];
  ParamBase *local_10;
  
  local_10 = param_2;
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 081cb0e7 to 081cb19a has its CatchHandler @ 081cb19d */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0xe);
  if (*(int *)(local_10 + 4) == 0x13) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0x13);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send(param_1,local_1c);
  }
  else if (0 < *(int *)(local_10 + 4)) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 4));
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send(param_1,local_1c);
  }
  PacketGuard::~PacketGuard(local_1c);
  return;
}
```

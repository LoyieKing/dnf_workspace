# send

`_ZN18DisPatcher_UseCoin4sendEP5CUserR9ParamBase`

`DisPatcher_UseCoin::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_UseCoin` | `0x081caa42` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081caa42  _ZN18DisPatcher_UseCoin4sendEP5CUserR9ParamBase
#           DisPatcher_UseCoin::send(CUser*, ParamBase&)
# range [0x081caa42, 0x081cab39]
081caa42 +0x00:  push   %ebp
081caa43 +0x01:  mov    %esp,%ebp
081caa45 +0x03:  push   %esi
081caa46 +0x04:  push   %ebx
081caa47 +0x05:  sub    $0x20,%esp
081caa4a +0x08:  mov    0x10(%ebp),%eax
081caa4d +0x0b:  mov    %eax,-0xc(%ebp)
081caa50 +0x0e:  mov    -0xc(%ebp),%eax
081caa53 +0x11:  mov    0x4(%eax),%eax
081caa56 +0x14:  cmp    $0x7fffffff,%eax
081caa5b +0x19:  je     081cab32 <+0xf0>
081caa61 +0x1f:  mov    -0xc(%ebp),%eax
081caa64 +0x22:  mov    0x4(%eax),%eax
081caa67 +0x25:  test   %eax,%eax
081caa69 +0x27:  jne    081cab10 <+0xce>
081caa6f +0x2d:  lea    -0x18(%ebp),%eax
081caa72 +0x30:  mov    %eax,(%esp)
081caa75 +0x33:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081caa7a +0x38:  movl   $0x2c,0x8(%esp)
081caa82 +0x40:  movl   $0x1,0x4(%esp)
081caa8a +0x48:  lea    -0x18(%ebp),%eax
081caa8d +0x4b:  mov    %eax,(%esp)
081caa90 +0x4e:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081caa95 +0x53:  movl   $0x1,0x4(%esp)
081caa9d +0x5b:  lea    -0x18(%ebp),%eax
081caaa0 +0x5e:  mov    %eax,(%esp)
081caaa3 +0x61:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081caaa8 +0x66:  mov    -0xc(%ebp),%eax
081caaab +0x69:  movzwl 0x8(%eax),%eax
081caaaf +0x6d:  movzwl %ax,%eax
081caab2 +0x70:  mov    %eax,0x4(%esp)
081caab6 +0x74:  lea    -0x18(%ebp),%eax
081caab9 +0x77:  mov    %eax,(%esp)
081caabc +0x7a:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
081caac1 +0x7f:  movl   $0x1,0x4(%esp)
081caac9 +0x87:  lea    -0x18(%ebp),%eax
081caacc +0x8a:  mov    %eax,(%esp)
081caacf +0x8d:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081caad4 +0x92:  lea    -0x18(%ebp),%eax
081caad7 +0x95:  mov    %eax,0x4(%esp)
081caadb +0x99:  mov    0xc(%ebp),%eax
081caade +0x9c:  mov    %eax,(%esp)
081caae1 +0x9f:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081caae6 +0xa4:  jmp    081cab03 <+0xc1>
081caae8 +0xa6:  mov    %edx,%ebx
081caaea +0xa8:  mov    %eax,%esi
081caaec +0xaa:  lea    -0x18(%ebp),%eax
081caaef +0xad:  mov    %eax,(%esp)
081caaf2 +0xb0:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081caaf7 +0xb5:  mov    %esi,%eax
081caaf9 +0xb7:  mov    %ebx,%edx
081caafb +0xb9:  mov    %eax,(%esp)
081caafe +0xbc:  call   08ae3750 <_Unwind_Resume>
081cab03 +0xc1:  lea    -0x18(%ebp),%eax
081cab06 +0xc4:  mov    %eax,(%esp)
081cab09 +0xc7:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081cab0e +0xcc:  jmp    081cab33 <+0xf1>
081cab10 +0xce:  mov    -0xc(%ebp),%eax
081cab13 +0xd1:  mov    0x4(%eax),%eax
081cab16 +0xd4:  movzbl %al,%eax
081cab19 +0xd7:  mov    %eax,0x8(%esp)
081cab1d +0xdb:  movl   $0x2c,0x4(%esp)
081cab25 +0xe3:  mov    0xc(%ebp),%eax
081cab28 +0xe6:  mov    %eax,(%esp)
081cab2b +0xe9:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081cab30 +0xee:  jmp    081cab33 <+0xf1>
081cab32 +0xf0:  nop
081cab33 +0xf1:  add    $0x20,%esp
081cab36 +0xf4:  pop    %ebx
081cab37 +0xf5:  pop    %esi
081cab38 +0xf6:  pop    %ebp
081cab39 +0xf7:  ret
```

## 反编译 C

```c
// DisPatcher_UseCoin::send @ 0x81caa42

/* DisPatcher_UseCoin::send(CUser*, ParamBase&) */

void __thiscall DisPatcher_UseCoin::send(DisPatcher_UseCoin *this,CUser *param_1,ParamBase *param_2)

{
  PacketGuard local_1c [12];
  ParamBase *local_10;
  
  local_10 = param_2;
  if (*(int *)(param_2 + 4) != 0x7fffffff) {
    if (*(int *)(param_2 + 4) == 0) {
      PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 081caa90 to 081caae5 has its CatchHandler @ 081caae8 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x2c);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,(uint)*(ushort *)(local_10 + 8));
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
      CUser::Send(param_1,local_1c);
      PacketGuard::~PacketGuard(local_1c);
    }
    else {
      CUser::SendCmdErrorPacket(param_1,0x2c,*(uint *)(param_2 + 4) & 0xff);
    }
  }
  return;
}
```

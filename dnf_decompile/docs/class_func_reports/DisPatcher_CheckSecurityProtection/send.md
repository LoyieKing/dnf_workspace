# send

`_ZN34DisPatcher_CheckSecurityProtection4sendEP5CUserR9ParamBase`

`DisPatcher_CheckSecurityProtection::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_CheckSecurityProtection` | `0x08264852` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08264852  _ZN34DisPatcher_CheckSecurityProtection4sendEP5CUserR9ParamBase
#           DisPatcher_CheckSecurityProtection::send(CUser*, ParamBase&)
# range [0x08264852, 0x08264911]
08264852 +0x00:  push   %ebp
08264853 +0x01:  mov    %esp,%ebp
08264855 +0x03:  push   %esi
08264856 +0x04:  push   %ebx
08264857 +0x05:  sub    $0x20,%esp
0826485a +0x08:  mov    0x10(%ebp),%eax
0826485d +0x0b:  mov    %eax,-0xc(%ebp)
08264860 +0x0e:  lea    -0x18(%ebp),%eax
08264863 +0x11:  mov    %eax,(%esp)
08264866 +0x14:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0826486b +0x19:  lea    -0x18(%ebp),%eax
0826486e +0x1c:  mov    %eax,(%esp)
08264871 +0x1f:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
08264876 +0x24:  movl   $0x176,0x8(%esp)
0826487e +0x2c:  movl   $0x1,0x4(%esp)
08264886 +0x34:  lea    -0x18(%ebp),%eax
08264889 +0x37:  mov    %eax,(%esp)
0826488c +0x3a:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08264891 +0x3f:  movl   $0x0,0x4(%esp)
08264899 +0x47:  lea    -0x18(%ebp),%eax
0826489c +0x4a:  mov    %eax,(%esp)
0826489f +0x4d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
082648a4 +0x52:  mov    -0xc(%ebp),%eax
082648a7 +0x55:  movzbl 0x4(%eax),%eax
082648ab +0x59:  movzbl %al,%eax
082648ae +0x5c:  mov    %eax,0x4(%esp)
082648b2 +0x60:  lea    -0x18(%ebp),%eax
082648b5 +0x63:  mov    %eax,(%esp)
082648b8 +0x66:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
082648bd +0x6b:  movl   $0x1,0x4(%esp)
082648c5 +0x73:  lea    -0x18(%ebp),%eax
082648c8 +0x76:  mov    %eax,(%esp)
082648cb +0x79:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
082648d0 +0x7e:  lea    -0x18(%ebp),%eax
082648d3 +0x81:  mov    %eax,0x4(%esp)
082648d7 +0x85:  mov    0xc(%ebp),%eax
082648da +0x88:  mov    %eax,(%esp)
082648dd +0x8b:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
082648e2 +0x90:  jmp    082648ff <+0xad>
082648e4 +0x92:  mov    %edx,%ebx
082648e6 +0x94:  mov    %eax,%esi
082648e8 +0x96:  lea    -0x18(%ebp),%eax
082648eb +0x99:  mov    %eax,(%esp)
082648ee +0x9c:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082648f3 +0xa1:  mov    %esi,%eax
082648f5 +0xa3:  mov    %ebx,%edx
082648f7 +0xa5:  mov    %eax,(%esp)
082648fa +0xa8:  call   08ae3750 <_Unwind_Resume>
082648ff +0xad:  lea    -0x18(%ebp),%eax
08264902 +0xb0:  mov    %eax,(%esp)
08264905 +0xb3:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0826490a +0xb8:  add    $0x20,%esp
0826490d +0xbb:  pop    %ebx
0826490e +0xbc:  pop    %esi
0826490f +0xbd:  pop    %ebp
08264910 +0xbe:  ret
08264911 +0xbf:  nop
```

## 反编译 C

```c
// DisPatcher_CheckSecurityProtection::send @ 0x8264852

/* DisPatcher_CheckSecurityProtection::send(CUser*, ParamBase&) */

void __thiscall
DisPatcher_CheckSecurityProtection::send
          (DisPatcher_CheckSecurityProtection *this,CUser *param_1,ParamBase *param_2)

{
  PacketGuard local_1c [12];
  ParamBase *local_10;
  
  local_10 = param_2;
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 08264871 to 082648e1 has its CatchHandler @ 082648e4 */
  InterfacePacketBuf::clear((InterfacePacketBuf *)local_1c);
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x176);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(uint)(byte)local_10[4]);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  CUser::Send(param_1,local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return;
}
```

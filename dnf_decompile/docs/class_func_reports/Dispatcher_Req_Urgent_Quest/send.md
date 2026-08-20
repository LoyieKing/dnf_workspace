# send

`_ZN27Dispatcher_Req_Urgent_Quest4sendEP5CUserR9ParamBase`

`Dispatcher_Req_Urgent_Quest::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Req_Urgent_Quest` | `0x081df75a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081df75a  _ZN27Dispatcher_Req_Urgent_Quest4sendEP5CUserR9ParamBase
#           Dispatcher_Req_Urgent_Quest::send(CUser*, ParamBase&)
# range [0x081df75a, 0x081df83f]
081df75a +0x00:  push   %ebp
081df75b +0x01:  mov    %esp,%ebp
081df75d +0x03:  push   %esi
081df75e +0x04:  push   %ebx
081df75f +0x05:  sub    $0x20,%esp
081df762 +0x08:  mov    0x10(%ebp),%eax
081df765 +0x0b:  mov    %eax,-0xc(%ebp)
081df768 +0x0e:  lea    -0x18(%ebp),%eax
081df76b +0x11:  mov    %eax,(%esp)
081df76e +0x14:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081df773 +0x19:  movl   $0x1c6,0x8(%esp)
081df77b +0x21:  movl   $0x1,0x4(%esp)
081df783 +0x29:  lea    -0x18(%ebp),%eax
081df786 +0x2c:  mov    %eax,(%esp)
081df789 +0x2f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081df78e +0x34:  mov    -0xc(%ebp),%eax
081df791 +0x37:  movzbl 0x4(%eax),%eax
081df795 +0x3b:  test   %al,%al
081df797 +0x3d:  je     081df7a0 <+0x46>
081df799 +0x3f:  mov    $0x1,%eax
081df79e +0x44:  jmp    081df7a5 <+0x4b>
081df7a0 +0x46:  mov    $0x0,%eax
081df7a5 +0x4b:  mov    %eax,0x4(%esp)
081df7a9 +0x4f:  lea    -0x18(%ebp),%eax
081df7ac +0x52:  mov    %eax,(%esp)
081df7af +0x55:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081df7b4 +0x5a:  mov    -0xc(%ebp),%eax
081df7b7 +0x5d:  movzbl 0x4(%eax),%eax
081df7bb +0x61:  test   %al,%al
081df7bd +0x63:  je     081df7d6 <+0x7c>
081df7bf +0x65:  mov    -0xc(%ebp),%eax
081df7c2 +0x68:  mov    0x8(%eax),%eax
081df7c5 +0x6b:  mov    %eax,0x4(%esp)
081df7c9 +0x6f:  lea    -0x18(%ebp),%eax
081df7cc +0x72:  mov    %eax,(%esp)
081df7cf +0x75:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
081df7d4 +0x7a:  jmp    081df7eb <+0x91>
081df7d6 +0x7c:  mov    -0xc(%ebp),%eax
081df7d9 +0x7f:  mov    0xc(%eax),%eax
081df7dc +0x82:  mov    %eax,0x4(%esp)
081df7e0 +0x86:  lea    -0x18(%ebp),%eax
081df7e3 +0x89:  mov    %eax,(%esp)
081df7e6 +0x8c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081df7eb +0x91:  movl   $0x1,0x4(%esp)
081df7f3 +0x99:  lea    -0x18(%ebp),%eax
081df7f6 +0x9c:  mov    %eax,(%esp)
081df7f9 +0x9f:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081df7fe +0xa4:  lea    -0x18(%ebp),%eax
081df801 +0xa7:  mov    %eax,0x4(%esp)
081df805 +0xab:  mov    0xc(%ebp),%eax
081df808 +0xae:  mov    %eax,(%esp)
081df80b +0xb1:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081df810 +0xb6:  jmp    081df82d <+0xd3>
081df812 +0xb8:  mov    %edx,%ebx
081df814 +0xba:  mov    %eax,%esi
081df816 +0xbc:  lea    -0x18(%ebp),%eax
081df819 +0xbf:  mov    %eax,(%esp)
081df81c +0xc2:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081df821 +0xc7:  mov    %esi,%eax
081df823 +0xc9:  mov    %ebx,%edx
081df825 +0xcb:  mov    %eax,(%esp)
081df828 +0xce:  call   08ae3750 <_Unwind_Resume>
081df82d +0xd3:  lea    -0x18(%ebp),%eax
081df830 +0xd6:  mov    %eax,(%esp)
081df833 +0xd9:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081df838 +0xde:  add    $0x20,%esp
081df83b +0xe1:  pop    %ebx
081df83c +0xe2:  pop    %esi
081df83d +0xe3:  pop    %ebp
081df83e +0xe4:  ret
081df83f +0xe5:  nop
```

## 反编译 C

```c
// Dispatcher_Req_Urgent_Quest::send @ 0x81df75a

/* Dispatcher_Req_Urgent_Quest::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_Req_Urgent_Quest::send
          (Dispatcher_Req_Urgent_Quest *this,CUser *param_1,ParamBase *param_2)

{
  PacketGuard local_1c [12];
  ParamBase *local_10;
  
  local_10 = param_2;
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 081df789 to 081df80f has its CatchHandler @ 081df812 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x1c6);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(uint)(local_10[4] != (ParamBase)0x0))
  ;
  if (local_10[4] == (ParamBase)0x0) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0xc));
  }
  else {
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 8));
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  CUser::Send(param_1,local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return;
}
```

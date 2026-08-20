# send

`_ZN20DisPatcher_StartGame4sendEP5CUserR9ParamBase`

`DisPatcher_StartGame::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_StartGame` | `0x081ca4f2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ca4f2  _ZN20DisPatcher_StartGame4sendEP5CUserR9ParamBase
#           DisPatcher_StartGame::send(CUser*, ParamBase&)
# range [0x081ca4f2, 0x081ca5e3]
081ca4f2 +0x00:  push   %ebp
081ca4f3 +0x01:  mov    %esp,%ebp
081ca4f5 +0x03:  push   %esi
081ca4f6 +0x04:  push   %ebx
081ca4f7 +0x05:  sub    $0x20,%esp
081ca4fa +0x08:  mov    0x10(%ebp),%eax
081ca4fd +0x0b:  mov    %eax,-0xc(%ebp)
081ca500 +0x0e:  mov    -0xc(%ebp),%eax
081ca503 +0x11:  mov    0x4(%eax),%eax
081ca506 +0x14:  cmp    $0x7fffffff,%eax
081ca50b +0x19:  je     081ca5db <+0xe9>
081ca511 +0x1f:  mov    -0xc(%ebp),%eax
081ca514 +0x22:  mov    0x4(%eax),%eax
081ca517 +0x25:  test   %eax,%eax
081ca519 +0x27:  je     081ca5dc <+0xea>
081ca51f +0x2d:  lea    -0x18(%ebp),%eax
081ca522 +0x30:  mov    %eax,(%esp)
081ca525 +0x33:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081ca52a +0x38:  movl   $0xf,0x8(%esp)
081ca532 +0x40:  movl   $0x1,0x4(%esp)
081ca53a +0x48:  lea    -0x18(%ebp),%eax
081ca53d +0x4b:  mov    %eax,(%esp)
081ca540 +0x4e:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081ca545 +0x53:  movl   $0x0,0x4(%esp)
081ca54d +0x5b:  lea    -0x18(%ebp),%eax
081ca550 +0x5e:  mov    %eax,(%esp)
081ca553 +0x61:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081ca558 +0x66:  mov    -0xc(%ebp),%eax
081ca55b +0x69:  mov    0x4(%eax),%eax
081ca55e +0x6c:  mov    %eax,0x4(%esp)
081ca562 +0x70:  lea    -0x18(%ebp),%eax
081ca565 +0x73:  mov    %eax,(%esp)
081ca568 +0x76:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081ca56d +0x7b:  mov    -0xc(%ebp),%eax
081ca570 +0x7e:  mov    0x8(%eax),%eax
081ca573 +0x81:  test   %eax,%eax
081ca575 +0x83:  js     081ca58c <+0x9a>
081ca577 +0x85:  mov    -0xc(%ebp),%eax
081ca57a +0x88:  mov    0x8(%eax),%eax
081ca57d +0x8b:  mov    %eax,0x4(%esp)
081ca581 +0x8f:  lea    -0x18(%ebp),%eax
081ca584 +0x92:  mov    %eax,(%esp)
081ca587 +0x95:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081ca58c +0x9a:  movl   $0x1,0x4(%esp)
081ca594 +0xa2:  lea    -0x18(%ebp),%eax
081ca597 +0xa5:  mov    %eax,(%esp)
081ca59a +0xa8:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081ca59f +0xad:  lea    -0x18(%ebp),%eax
081ca5a2 +0xb0:  mov    %eax,0x4(%esp)
081ca5a6 +0xb4:  mov    0xc(%ebp),%eax
081ca5a9 +0xb7:  mov    %eax,(%esp)
081ca5ac +0xba:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081ca5b1 +0xbf:  jmp    081ca5ce <+0xdc>
081ca5b3 +0xc1:  mov    %edx,%ebx
081ca5b5 +0xc3:  mov    %eax,%esi
081ca5b7 +0xc5:  lea    -0x18(%ebp),%eax
081ca5ba +0xc8:  mov    %eax,(%esp)
081ca5bd +0xcb:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081ca5c2 +0xd0:  mov    %esi,%eax
081ca5c4 +0xd2:  mov    %ebx,%edx
081ca5c6 +0xd4:  mov    %eax,(%esp)
081ca5c9 +0xd7:  call   08ae3750 <_Unwind_Resume>
081ca5ce +0xdc:  lea    -0x18(%ebp),%eax
081ca5d1 +0xdf:  mov    %eax,(%esp)
081ca5d4 +0xe2:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081ca5d9 +0xe7:  jmp    081ca5dc <+0xea>
081ca5db +0xe9:  nop
081ca5dc +0xea:  add    $0x20,%esp
081ca5df +0xed:  pop    %ebx
081ca5e0 +0xee:  pop    %esi
081ca5e1 +0xef:  pop    %ebp
081ca5e2 +0xf0:  ret
081ca5e3 +0xf1:  nop
```

## 反编译 C

```c
// DisPatcher_StartGame::send @ 0x81ca4f2

/* DisPatcher_StartGame::send(CUser*, ParamBase&) */

void __thiscall
DisPatcher_StartGame::send(DisPatcher_StartGame *this,CUser *param_1,ParamBase *param_2)

{
  PacketGuard local_1c [12];
  ParamBase *local_10;
  
  local_10 = param_2;
  if ((*(int *)(param_2 + 4) != 0x7fffffff) && (*(int *)(param_2 + 4) != 0)) {
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 081ca540 to 081ca5b0 has its CatchHandler @ 081ca5b3 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0xf);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 4));
    if (-1 < *(int *)(local_10 + 8)) {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 8));
    }
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send(param_1,local_1c);
    PacketGuard::~PacketGuard(local_1c);
  }
  return;
}
```

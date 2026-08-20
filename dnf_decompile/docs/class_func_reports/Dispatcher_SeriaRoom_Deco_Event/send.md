# send

`_ZN31Dispatcher_SeriaRoom_Deco_Event4sendEP5CUserR9ParamBase`

`Dispatcher_SeriaRoom_Deco_Event::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_SeriaRoom_Deco_Event` | `0x081e5e86` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e5e86  _ZN31Dispatcher_SeriaRoom_Deco_Event4sendEP5CUserR9ParamBase
#           Dispatcher_SeriaRoom_Deco_Event::send(CUser*, ParamBase&)
# range [0x081e5e86, 0x081e5f85]
081e5e86 +0x00:  push   %ebp
081e5e87 +0x01:  mov    %esp,%ebp
081e5e89 +0x03:  push   %esi
081e5e8a +0x04:  push   %ebx
081e5e8b +0x05:  sub    $0x20,%esp
081e5e8e +0x08:  mov    0x10(%ebp),%eax
081e5e91 +0x0b:  mov    %eax,-0xc(%ebp)
081e5e94 +0x0e:  lea    -0x18(%ebp),%eax
081e5e97 +0x11:  mov    %eax,(%esp)
081e5e9a +0x14:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081e5e9f +0x19:  movl   $0x1ef,0x8(%esp)
081e5ea7 +0x21:  movl   $0x1,0x4(%esp)
081e5eaf +0x29:  lea    -0x18(%ebp),%eax
081e5eb2 +0x2c:  mov    %eax,(%esp)
081e5eb5 +0x2f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081e5eba +0x34:  mov    -0xc(%ebp),%eax
081e5ebd +0x37:  mov    0x4(%eax),%eax
081e5ec0 +0x3a:  test   %eax,%eax
081e5ec2 +0x3c:  jne    081e5f09 <+0x83>
081e5ec4 +0x3e:  movl   $0x1,0x4(%esp)
081e5ecc +0x46:  lea    -0x18(%ebp),%eax
081e5ecf +0x49:  mov    %eax,(%esp)
081e5ed2 +0x4c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081e5ed7 +0x51:  mov    -0xc(%ebp),%eax
081e5eda +0x54:  movzwl 0x8(%eax),%eax
081e5ede +0x58:  movzwl %ax,%eax
081e5ee1 +0x5b:  mov    %eax,0x4(%esp)
081e5ee5 +0x5f:  lea    -0x18(%ebp),%eax
081e5ee8 +0x62:  mov    %eax,(%esp)
081e5eeb +0x65:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
081e5ef0 +0x6a:  mov    -0xc(%ebp),%eax
081e5ef3 +0x6d:  movzwl 0xa(%eax),%eax
081e5ef7 +0x71:  cwtl
081e5ef8 +0x72:  mov    %eax,0x4(%esp)
081e5efc +0x76:  lea    -0x18(%ebp),%eax
081e5eff +0x79:  mov    %eax,(%esp)
081e5f02 +0x7c:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
081e5f07 +0x81:  jmp    081e5f31 <+0xab>
081e5f09 +0x83:  movl   $0x0,0x4(%esp)
081e5f11 +0x8b:  lea    -0x18(%ebp),%eax
081e5f14 +0x8e:  mov    %eax,(%esp)
081e5f17 +0x91:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081e5f1c +0x96:  mov    -0xc(%ebp),%eax
081e5f1f +0x99:  mov    0x4(%eax),%eax
081e5f22 +0x9c:  mov    %eax,0x4(%esp)
081e5f26 +0xa0:  lea    -0x18(%ebp),%eax
081e5f29 +0xa3:  mov    %eax,(%esp)
081e5f2c +0xa6:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081e5f31 +0xab:  movl   $0x1,0x4(%esp)
081e5f39 +0xb3:  lea    -0x18(%ebp),%eax
081e5f3c +0xb6:  mov    %eax,(%esp)
081e5f3f +0xb9:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081e5f44 +0xbe:  lea    -0x18(%ebp),%eax
081e5f47 +0xc1:  mov    %eax,0x4(%esp)
081e5f4b +0xc5:  mov    0xc(%ebp),%eax
081e5f4e +0xc8:  mov    %eax,(%esp)
081e5f51 +0xcb:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081e5f56 +0xd0:  jmp    081e5f73 <+0xed>
081e5f58 +0xd2:  mov    %edx,%ebx
081e5f5a +0xd4:  mov    %eax,%esi
081e5f5c +0xd6:  lea    -0x18(%ebp),%eax
081e5f5f +0xd9:  mov    %eax,(%esp)
081e5f62 +0xdc:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081e5f67 +0xe1:  mov    %esi,%eax
081e5f69 +0xe3:  mov    %ebx,%edx
081e5f6b +0xe5:  mov    %eax,(%esp)
081e5f6e +0xe8:  call   08ae3750 <_Unwind_Resume>
081e5f73 +0xed:  lea    -0x18(%ebp),%eax
081e5f76 +0xf0:  mov    %eax,(%esp)
081e5f79 +0xf3:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081e5f7e +0xf8:  add    $0x20,%esp
081e5f81 +0xfb:  pop    %ebx
081e5f82 +0xfc:  pop    %esi
081e5f83 +0xfd:  pop    %ebp
081e5f84 +0xfe:  ret
081e5f85 +0xff:  nop
```

## 反编译 C

```c
// Dispatcher_SeriaRoom_Deco_Event::send @ 0x81e5e86

/* Dispatcher_SeriaRoom_Deco_Event::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_SeriaRoom_Deco_Event::send
          (Dispatcher_SeriaRoom_Deco_Event *this,CUser *param_1,ParamBase *param_2)

{
  PacketGuard local_1c [12];
  ParamBase *local_10;
  
  local_10 = param_2;
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 081e5eb5 to 081e5f55 has its CatchHandler @ 081e5f58 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x1ef);
  if (*(int *)(local_10 + 4) == 0) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,(uint)*(ushort *)(local_10 + 8));
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,(int)*(short *)(local_10 + 10));
  }
  else {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 4));
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  CUser::Send(param_1,local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return;
}
```

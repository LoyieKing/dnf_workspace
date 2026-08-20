# send

`_ZN19DisPatcher_UseEquip4sendEP5CUserR9ParamBase`

`DisPatcher_UseEquip::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_UseEquip` | `0x081c0fac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c0fac  _ZN19DisPatcher_UseEquip4sendEP5CUserR9ParamBase
#           DisPatcher_UseEquip::send(CUser*, ParamBase&)
# range [0x081c0fac, 0x081c1093]
081c0fac +0x00:  push   %ebp
081c0fad +0x01:  mov    %esp,%ebp
081c0faf +0x03:  push   %esi
081c0fb0 +0x04:  push   %ebx
081c0fb1 +0x05:  sub    $0x20,%esp
081c0fb4 +0x08:  mov    0x10(%ebp),%eax
081c0fb7 +0x0b:  mov    %eax,-0xc(%ebp)
081c0fba +0x0e:  lea    -0x18(%ebp),%eax
081c0fbd +0x11:  mov    %eax,(%esp)
081c0fc0 +0x14:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081c0fc5 +0x19:  movl   $0x33,0x8(%esp)
081c0fcd +0x21:  movl   $0x1,0x4(%esp)
081c0fd5 +0x29:  lea    -0x18(%ebp),%eax
081c0fd8 +0x2c:  mov    %eax,(%esp)
081c0fdb +0x2f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081c0fe0 +0x34:  mov    -0xc(%ebp),%eax
081c0fe3 +0x37:  mov    0x4(%eax),%eax
081c0fe6 +0x3a:  test   %eax,%eax
081c0fe8 +0x3c:  je     081c1014 <+0x68>
081c0fea +0x3e:  movl   $0x0,0x4(%esp)
081c0ff2 +0x46:  lea    -0x18(%ebp),%eax
081c0ff5 +0x49:  mov    %eax,(%esp)
081c0ff8 +0x4c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081c0ffd +0x51:  mov    -0xc(%ebp),%eax
081c1000 +0x54:  mov    0x4(%eax),%eax
081c1003 +0x57:  mov    %eax,0x4(%esp)
081c1007 +0x5b:  lea    -0x18(%ebp),%eax
081c100a +0x5e:  mov    %eax,(%esp)
081c100d +0x61:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081c1012 +0x66:  jmp    081c1040 <+0x94>
081c1014 +0x68:  movl   $0x1,0x4(%esp)
081c101c +0x70:  lea    -0x18(%ebp),%eax
081c101f +0x73:  mov    %eax,(%esp)
081c1022 +0x76:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081c1027 +0x7b:  mov    -0xc(%ebp),%eax
081c102a +0x7e:  movzbl 0x8(%eax),%eax
081c102e +0x82:  movsbl %al,%eax
081c1031 +0x85:  mov    %eax,0x4(%esp)
081c1035 +0x89:  lea    -0x18(%ebp),%eax
081c1038 +0x8c:  mov    %eax,(%esp)
081c103b +0x8f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081c1040 +0x94:  movl   $0x1,0x4(%esp)
081c1048 +0x9c:  lea    -0x18(%ebp),%eax
081c104b +0x9f:  mov    %eax,(%esp)
081c104e +0xa2:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081c1053 +0xa7:  lea    -0x18(%ebp),%eax
081c1056 +0xaa:  mov    %eax,0x4(%esp)
081c105a +0xae:  mov    0xc(%ebp),%eax
081c105d +0xb1:  mov    %eax,(%esp)
081c1060 +0xb4:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081c1065 +0xb9:  jmp    081c1082 <+0xd6>
081c1067 +0xbb:  mov    %edx,%ebx
081c1069 +0xbd:  mov    %eax,%esi
081c106b +0xbf:  lea    -0x18(%ebp),%eax
081c106e +0xc2:  mov    %eax,(%esp)
081c1071 +0xc5:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081c1076 +0xca:  mov    %esi,%eax
081c1078 +0xcc:  mov    %ebx,%edx
081c107a +0xce:  mov    %eax,(%esp)
081c107d +0xd1:  call   08ae3750 <_Unwind_Resume>
081c1082 +0xd6:  lea    -0x18(%ebp),%eax
081c1085 +0xd9:  mov    %eax,(%esp)
081c1088 +0xdc:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081c108d +0xe1:  add    $0x20,%esp
081c1090 +0xe4:  pop    %ebx
081c1091 +0xe5:  pop    %esi
081c1092 +0xe6:  pop    %ebp
081c1093 +0xe7:  ret
```

## 反编译 C

```c
// DisPatcher_UseEquip::send @ 0x81c0fac

/* DisPatcher_UseEquip::send(CUser*, ParamBase&) */

void __thiscall
DisPatcher_UseEquip::send(DisPatcher_UseEquip *this,CUser *param_1,ParamBase *param_2)

{
  PacketGuard local_1c [12];
  ParamBase *local_10;
  
  local_10 = param_2;
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 081c0fdb to 081c1064 has its CatchHandler @ 081c1067 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x33);
  if (*(int *)(local_10 + 4) == 0) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(int)(char)local_10[8]);
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

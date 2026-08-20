# send

`_ZN34Dispather_RegenerationRandomOption4sendEP5CUserR9ParamBase`

`Dispather_RegenerationRandomOption::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispather_RegenerationRandomOption` | `0x081d7278` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d7278  _ZN34Dispather_RegenerationRandomOption4sendEP5CUserR9ParamBase
#           Dispather_RegenerationRandomOption::send(CUser*, ParamBase&)
# range [0x081d7278, 0x081d735d]
081d7278 +0x00:  push   %ebp
081d7279 +0x01:  mov    %esp,%ebp
081d727b +0x03:  push   %esi
081d727c +0x04:  push   %ebx
081d727d +0x05:  sub    $0x20,%esp
081d7280 +0x08:  mov    0x10(%ebp),%eax
081d7283 +0x0b:  mov    %eax,-0xc(%ebp)
081d7286 +0x0e:  lea    -0x18(%ebp),%eax
081d7289 +0x11:  mov    %eax,(%esp)
081d728c +0x14:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081d7291 +0x19:  movl   $0x197,0x8(%esp)
081d7299 +0x21:  movl   $0x1,0x4(%esp)
081d72a1 +0x29:  lea    -0x18(%ebp),%eax
081d72a4 +0x2c:  mov    %eax,(%esp)
081d72a7 +0x2f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081d72ac +0x34:  mov    -0xc(%ebp),%eax
081d72af +0x37:  mov    0x4(%eax),%eax
081d72b2 +0x3a:  test   %eax,%eax
081d72b4 +0x3c:  jne    081d72e2 <+0x6a>
081d72b6 +0x3e:  movl   $0x1,0x4(%esp)
081d72be +0x46:  lea    -0x18(%ebp),%eax
081d72c1 +0x49:  mov    %eax,(%esp)
081d72c4 +0x4c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081d72c9 +0x51:  mov    -0xc(%ebp),%eax
081d72cc +0x54:  movzwl 0x8(%eax),%eax
081d72d0 +0x58:  cwtl
081d72d1 +0x59:  mov    %eax,0x4(%esp)
081d72d5 +0x5d:  lea    -0x18(%ebp),%eax
081d72d8 +0x60:  mov    %eax,(%esp)
081d72db +0x63:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
081d72e0 +0x68:  jmp    081d730a <+0x92>
081d72e2 +0x6a:  movl   $0x0,0x4(%esp)
081d72ea +0x72:  lea    -0x18(%ebp),%eax
081d72ed +0x75:  mov    %eax,(%esp)
081d72f0 +0x78:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081d72f5 +0x7d:  mov    -0xc(%ebp),%eax
081d72f8 +0x80:  mov    0x4(%eax),%eax
081d72fb +0x83:  mov    %eax,0x4(%esp)
081d72ff +0x87:  lea    -0x18(%ebp),%eax
081d7302 +0x8a:  mov    %eax,(%esp)
081d7305 +0x8d:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081d730a +0x92:  movl   $0x1,0x4(%esp)
081d7312 +0x9a:  lea    -0x18(%ebp),%eax
081d7315 +0x9d:  mov    %eax,(%esp)
081d7318 +0xa0:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081d731d +0xa5:  lea    -0x18(%ebp),%eax
081d7320 +0xa8:  mov    %eax,0x4(%esp)
081d7324 +0xac:  mov    0xc(%ebp),%eax
081d7327 +0xaf:  mov    %eax,(%esp)
081d732a +0xb2:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081d732f +0xb7:  jmp    081d734c <+0xd4>
081d7331 +0xb9:  mov    %edx,%ebx
081d7333 +0xbb:  mov    %eax,%esi
081d7335 +0xbd:  lea    -0x18(%ebp),%eax
081d7338 +0xc0:  mov    %eax,(%esp)
081d733b +0xc3:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081d7340 +0xc8:  mov    %esi,%eax
081d7342 +0xca:  mov    %ebx,%edx
081d7344 +0xcc:  mov    %eax,(%esp)
081d7347 +0xcf:  call   08ae3750 <_Unwind_Resume>
081d734c +0xd4:  lea    -0x18(%ebp),%eax
081d734f +0xd7:  mov    %eax,(%esp)
081d7352 +0xda:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081d7357 +0xdf:  add    $0x20,%esp
081d735a +0xe2:  pop    %ebx
081d735b +0xe3:  pop    %esi
081d735c +0xe4:  pop    %ebp
081d735d +0xe5:  ret
```

## 反编译 C

```c
// Dispather_RegenerationRandomOption::send @ 0x81d7278

/* Dispather_RegenerationRandomOption::send(CUser*, ParamBase&) */

void __thiscall
Dispather_RegenerationRandomOption::send
          (Dispather_RegenerationRandomOption *this,CUser *param_1,ParamBase *param_2)

{
  PacketGuard local_1c [12];
  ParamBase *local_10;
  
  local_10 = param_2;
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 081d72a7 to 081d732e has its CatchHandler @ 081d7331 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x197);
  if (*(int *)(local_10 + 4) == 0) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,(int)*(short *)(local_10 + 8));
  }
  else {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 4));
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  CUser::Send(param_1,local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return;
}
```

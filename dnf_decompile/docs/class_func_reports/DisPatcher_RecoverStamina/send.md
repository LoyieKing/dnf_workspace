# send

`_ZN25DisPatcher_RecoverStamina4sendEP5CUserR9ParamBase`

`DisPatcher_RecoverStamina::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_RecoverStamina` | `0x081c3fb8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c3fb8  _ZN25DisPatcher_RecoverStamina4sendEP5CUserR9ParamBase
#           DisPatcher_RecoverStamina::send(CUser*, ParamBase&)
# range [0x081c3fb8, 0x081c40a9]
081c3fb8 +0x00:  push   %ebp
081c3fb9 +0x01:  mov    %esp,%ebp
081c3fbb +0x03:  push   %esi
081c3fbc +0x04:  push   %ebx
081c3fbd +0x05:  sub    $0x20,%esp
081c3fc0 +0x08:  mov    0x10(%ebp),%eax
081c3fc3 +0x0b:  mov    %eax,-0xc(%ebp)
081c3fc6 +0x0e:  lea    -0x18(%ebp),%eax
081c3fc9 +0x11:  mov    %eax,(%esp)
081c3fcc +0x14:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081c3fd1 +0x19:  movl   $0x9,0x8(%esp)
081c3fd9 +0x21:  movl   $0x1,0x4(%esp)
081c3fe1 +0x29:  lea    -0x18(%ebp),%eax
081c3fe4 +0x2c:  mov    %eax,(%esp)
081c3fe7 +0x2f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081c3fec +0x34:  mov    -0xc(%ebp),%eax
081c3fef +0x37:  mov    0x4(%eax),%eax
081c3ff2 +0x3a:  test   %eax,%eax
081c3ff4 +0x3c:  je     081c4020 <+0x68>
081c3ff6 +0x3e:  movl   $0x0,0x4(%esp)
081c3ffe +0x46:  lea    -0x18(%ebp),%eax
081c4001 +0x49:  mov    %eax,(%esp)
081c4004 +0x4c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081c4009 +0x51:  mov    -0xc(%ebp),%eax
081c400c +0x54:  mov    0x4(%eax),%eax
081c400f +0x57:  mov    %eax,0x4(%esp)
081c4013 +0x5b:  lea    -0x18(%ebp),%eax
081c4016 +0x5e:  mov    %eax,(%esp)
081c4019 +0x61:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081c401e +0x66:  jmp    081c4055 <+0x9d>
081c4020 +0x68:  movl   $0x1,0x4(%esp)
081c4028 +0x70:  lea    -0x18(%ebp),%eax
081c402b +0x73:  mov    %eax,(%esp)
081c402e +0x76:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081c4033 +0x7b:  mov    0xc(%ebp),%eax
081c4036 +0x7e:  mov    %eax,(%esp)
081c4039 +0x81:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
081c403e +0x86:  mov    %eax,(%esp)
081c4041 +0x89:  call   081347d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x3dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x3dd
081c4046 +0x8e:  mov    %eax,0x4(%esp)
081c404a +0x92:  lea    -0x18(%ebp),%eax
081c404d +0x95:  mov    %eax,(%esp)
081c4050 +0x98:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081c4055 +0x9d:  movl   $0x1,0x4(%esp)
081c405d +0xa5:  lea    -0x18(%ebp),%eax
081c4060 +0xa8:  mov    %eax,(%esp)
081c4063 +0xab:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081c4068 +0xb0:  lea    -0x18(%ebp),%eax
081c406b +0xb3:  mov    %eax,0x4(%esp)
081c406f +0xb7:  mov    0xc(%ebp),%eax
081c4072 +0xba:  mov    %eax,(%esp)
081c4075 +0xbd:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081c407a +0xc2:  jmp    081c4097 <+0xdf>
081c407c +0xc4:  mov    %edx,%ebx
081c407e +0xc6:  mov    %eax,%esi
081c4080 +0xc8:  lea    -0x18(%ebp),%eax
081c4083 +0xcb:  mov    %eax,(%esp)
081c4086 +0xce:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081c408b +0xd3:  mov    %esi,%eax
081c408d +0xd5:  mov    %ebx,%edx
081c408f +0xd7:  mov    %eax,(%esp)
081c4092 +0xda:  call   08ae3750 <_Unwind_Resume>
081c4097 +0xdf:  lea    -0x18(%ebp),%eax
081c409a +0xe2:  mov    %eax,(%esp)
081c409d +0xe5:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081c40a2 +0xea:  add    $0x20,%esp
081c40a5 +0xed:  pop    %ebx
081c40a6 +0xee:  pop    %esi
081c40a7 +0xef:  pop    %ebp
081c40a8 +0xf0:  ret
081c40a9 +0xf1:  nop
```

## 反编译 C

```c
// DisPatcher_RecoverStamina::send @ 0x81c3fb8

/* DisPatcher_RecoverStamina::send(CUser*, ParamBase&) */

void __thiscall
DisPatcher_RecoverStamina::send(DisPatcher_RecoverStamina *this,CUser *param_1,ParamBase *param_2)

{
  CInventory *this_00;
  int iVar1;
  PacketGuard local_1c [12];
  ParamBase *local_10;
  
  local_10 = param_2;
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 081c3fe7 to 081c4079 has its CatchHandler @ 081c407c */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,9);
  if (*(int *)(local_10 + 4) == 0) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
    this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    iVar1 = CInventory::get_money(this_00);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,iVar1);
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

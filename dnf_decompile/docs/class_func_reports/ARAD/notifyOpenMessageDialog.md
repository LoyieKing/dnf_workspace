# notifyOpenMessageDialog

`_ZN4ARAD23notifyOpenMessageDialogEP5CUseriiRK22AradServerStateMessage`

`ARAD::notifyOpenMessageDialog(CUser*, int, int, AradServerStateMessage const&)`

| 类 | 地址 |
|---|---|
| `ARAD` | `0x081978dd` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081978dd  _ZN4ARAD23notifyOpenMessageDialogEP5CUseriiRK22AradServerStateMessage
#           ARAD::notifyOpenMessageDialog(CUser*, int, int, AradServerStateMessage const&)
# range [0x081978dd, 0x081979bf]
081978dd +0x00:  push   %ebp
081978de +0x01:  mov    %esp,%ebp
081978e0 +0x03:  push   %esi
081978e1 +0x04:  push   %ebx
081978e2 +0x05:  sub    $0x20,%esp
081978e5 +0x08:  cmpl   $0x0,0x8(%ebp)
081978e9 +0x0c:  jne    081978f5 <+0x18>
081978eb +0x0e:  mov    $0x0,%ebx
081978f0 +0x13:  jmp    081979b7 <+0xda>
081978f5 +0x18:  lea    -0x18(%ebp),%eax
081978f8 +0x1b:  mov    %eax,(%esp)
081978fb +0x1e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08197900 +0x23:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08197907 +0x2a:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0819790c +0x2f:  mov    %eax,-0xc(%ebp)
0819790f +0x32:  movl   $0x21a,0x8(%esp)
08197917 +0x3a:  movl   $0x0,0x4(%esp)
0819791f +0x42:  lea    -0x18(%ebp),%eax
08197922 +0x45:  mov    %eax,(%esp)
08197925 +0x48:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0819792a +0x4d:  mov    0xc(%ebp),%eax
0819792d +0x50:  mov    %eax,0x4(%esp)
08197931 +0x54:  lea    -0x18(%ebp),%eax
08197934 +0x57:  mov    %eax,(%esp)
08197937 +0x5a:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0819793c +0x5f:  mov    0x10(%ebp),%eax
0819793f +0x62:  mov    %eax,0x4(%esp)
08197943 +0x66:  lea    -0x18(%ebp),%eax
08197946 +0x69:  mov    %eax,(%esp)
08197949 +0x6c:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0819794e +0x71:  mov    0x14(%ebp),%eax
08197951 +0x74:  movl   $0xc,0x8(%esp)
08197959 +0x7c:  mov    %eax,0x4(%esp)
0819795d +0x80:  lea    -0x18(%ebp),%eax
08197960 +0x83:  mov    %eax,(%esp)
08197963 +0x86:  call   0811df08 <_GLOBAL__I__ZN15CItemDictionaryC2Ev+0x48>  ; global constructors keyed to CItemDictionary::CItemDictionary()+0x48
08197968 +0x8b:  movl   $0x1,0x4(%esp)
08197970 +0x93:  lea    -0x18(%ebp),%eax
08197973 +0x96:  mov    %eax,(%esp)
08197976 +0x99:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0819797b +0x9e:  lea    -0x18(%ebp),%eax
0819797e +0xa1:  mov    %eax,0x4(%esp)
08197982 +0xa5:  mov    0x8(%ebp),%eax
08197985 +0xa8:  mov    %eax,(%esp)
08197988 +0xab:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0819798d +0xb0:  mov    %eax,%ebx
0819798f +0xb2:  lea    -0x18(%ebp),%eax
08197992 +0xb5:  mov    %eax,(%esp)
08197995 +0xb8:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0819799a +0xbd:  jmp    081979b7 <+0xda>
0819799c +0xbf:  mov    %edx,%ebx
0819799e +0xc1:  mov    %eax,%esi
081979a0 +0xc3:  lea    -0x18(%ebp),%eax
081979a3 +0xc6:  mov    %eax,(%esp)
081979a6 +0xc9:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081979ab +0xce:  mov    %esi,%eax
081979ad +0xd0:  mov    %ebx,%edx
081979af +0xd2:  mov    %eax,(%esp)
081979b2 +0xd5:  call   08ae3750 <_Unwind_Resume>
081979b7 +0xda:  mov    %ebx,%eax
081979b9 +0xdc:  add    $0x20,%esp
081979bc +0xdf:  pop    %ebx
081979bd +0xe0:  pop    %esi
081979be +0xe1:  pop    %ebp
081979bf +0xe2:  ret
```

## 反编译 C

```c
// ARAD::notifyOpenMessageDialog @ 0x81978dd

/* ARAD::notifyOpenMessageDialog(CUser*, int, int, AradServerStateMessage const&) */

undefined4
ARAD::notifyOpenMessageDialog
          (CUser *param_1,int param_2,int param_3,AradServerStateMessage *param_4)

{
  undefined4 uVar1;
  PacketGuard local_1c [12];
  undefined4 local_10;
  
  if (param_1 == (CUser *)0x0) {
    uVar1 = 0;
  }
  else {
    PacketGuard::PacketGuard(local_1c);
    local_10 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
                    /* try { // try from 08197925 to 0819798c has its CatchHandler @ 0819799c */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0x21a);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,param_2);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,param_3);
    InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_1c,(char *)param_4,0xc);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    uVar1 = CUser::Send(param_1,local_1c);
    PacketGuard::~PacketGuard(local_1c);
  }
  return uVar1;
}
```

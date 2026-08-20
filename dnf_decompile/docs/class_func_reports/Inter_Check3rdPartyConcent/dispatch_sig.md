# dispatch_sig

`_ZN26Inter_Check3rdPartyConcent12dispatch_sigEP5CUserPci`

`Inter_Check3rdPartyConcent::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_Check3rdPartyConcent` | `0x084e6096` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e6096  _ZN26Inter_Check3rdPartyConcent12dispatch_sigEP5CUserPci
#           Inter_Check3rdPartyConcent::dispatch_sig(CUser*, char*, int)
# range [0x084e6096, 0x084e616f]
084e6096 +0x00:  push   %ebp
084e6097 +0x01:  mov    %esp,%ebp
084e6099 +0x03:  push   %esi
084e609a +0x04:  push   %ebx
084e609b +0x05:  sub    $0x20,%esp
084e609e +0x08:  mov    0xc(%ebp),%eax
084e60a1 +0x0b:  mov    %eax,(%esp)
084e60a4 +0x0e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084e60a9 +0x13:  cmp    $0x2,%eax
084e60ac +0x16:  setle  %al
084e60af +0x19:  test   %al,%al
084e60b1 +0x1b:  je     084e60bd <+0x27>
084e60b3 +0x1d:  mov    $0x0,%ebx
084e60b8 +0x22:  jmp    084e6166 <+0xd0>
084e60bd +0x27:  mov    0x10(%ebp),%eax
084e60c0 +0x2a:  mov    %eax,-0xc(%ebp)
084e60c3 +0x2d:  lea    -0x18(%ebp),%eax
084e60c6 +0x30:  mov    %eax,(%esp)
084e60c9 +0x33:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084e60ce +0x38:  movl   $0x1c3,0x8(%esp)
084e60d6 +0x40:  movl   $0x1,0x4(%esp)
084e60de +0x48:  lea    -0x18(%ebp),%eax
084e60e1 +0x4b:  mov    %eax,(%esp)
084e60e4 +0x4e:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084e60e9 +0x53:  movl   $0x1,0x4(%esp)
084e60f1 +0x5b:  lea    -0x18(%ebp),%eax
084e60f4 +0x5e:  mov    %eax,(%esp)
084e60f7 +0x61:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084e60fc +0x66:  mov    -0xc(%ebp),%eax
084e60ff +0x69:  movzbl (%eax),%eax
084e6102 +0x6c:  movsbl %al,%eax
084e6105 +0x6f:  mov    %eax,0x4(%esp)
084e6109 +0x73:  lea    -0x18(%ebp),%eax
084e610c +0x76:  mov    %eax,(%esp)
084e610f +0x79:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084e6114 +0x7e:  movl   $0x1,0x4(%esp)
084e611c +0x86:  lea    -0x18(%ebp),%eax
084e611f +0x89:  mov    %eax,(%esp)
084e6122 +0x8c:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084e6127 +0x91:  lea    -0x18(%ebp),%eax
084e612a +0x94:  mov    %eax,0x4(%esp)
084e612e +0x98:  mov    0xc(%ebp),%eax
084e6131 +0x9b:  mov    %eax,(%esp)
084e6134 +0x9e:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084e6139 +0xa3:  mov    $0x0,%ebx
084e613e +0xa8:  lea    -0x18(%ebp),%eax
084e6141 +0xab:  mov    %eax,(%esp)
084e6144 +0xae:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e6149 +0xb3:  jmp    084e6166 <+0xd0>
084e614b +0xb5:  mov    %edx,%ebx
084e614d +0xb7:  mov    %eax,%esi
084e614f +0xb9:  lea    -0x18(%ebp),%eax
084e6152 +0xbc:  mov    %eax,(%esp)
084e6155 +0xbf:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e615a +0xc4:  mov    %esi,%eax
084e615c +0xc6:  mov    %ebx,%edx
084e615e +0xc8:  mov    %eax,(%esp)
084e6161 +0xcb:  call   08ae3750 <_Unwind_Resume>
084e6166 +0xd0:  mov    %ebx,%eax
084e6168 +0xd2:  add    $0x20,%esp
084e616b +0xd5:  pop    %ebx
084e616c +0xd6:  pop    %esi
084e616d +0xd7:  pop    %ebp
084e616e +0xd8:  ret
084e616f +0xd9:  nop
```

## 反编译 C

```c
// Inter_Check3rdPartyConcent::dispatch_sig @ 0x84e6096

/* Inter_Check3rdPartyConcent::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_Check3rdPartyConcent::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  PacketGuard local_1c [12];
  char *local_10;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (2 < iVar1) {
    local_10 = (char *)param_3;
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084e60e4 to 084e6138 has its CatchHandler @ 084e614b */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x1c3);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(int)*local_10);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send((CUser *)param_2,local_1c);
    PacketGuard::~PacketGuard(local_1c);
  }
  return 0;
}
```

# dispatch_sig

`_ZN35Inter_OnTimeEventRewardStartOnLogin12dispatch_sigEP5CUserPci`

`Inter_OnTimeEventRewardStartOnLogin::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_OnTimeEventRewardStartOnLogin` | `0x084e0f82` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e0f82  _ZN35Inter_OnTimeEventRewardStartOnLogin12dispatch_sigEP5CUserPci
#           Inter_OnTimeEventRewardStartOnLogin::dispatch_sig(CUser*, char*, int)
# range [0x084e0f82, 0x084e1061]
084e0f82 +0x00:  push   %ebp
084e0f83 +0x01:  mov    %esp,%ebp
084e0f85 +0x03:  push   %esi
084e0f86 +0x04:  push   %ebx
084e0f87 +0x05:  sub    $0x20,%esp
084e0f8a +0x08:  mov    0x10(%ebp),%eax
084e0f8d +0x0b:  mov    %eax,-0xc(%ebp)
084e0f90 +0x0e:  cmpl   $0x0,0xc(%ebp)
084e0f94 +0x12:  jne    084e0fa0 <+0x1e>
084e0f96 +0x14:  mov    $0x0,%ebx
084e0f9b +0x19:  jmp    084e1059 <+0xd7>
084e0fa0 +0x1e:  mov    -0xc(%ebp),%eax
084e0fa3 +0x21:  mov    0x12(%eax),%ebx
084e0fa6 +0x24:  movl   $0xffffffff,0x4(%esp)
084e0fae +0x2c:  mov    0xc(%ebp),%eax
084e0fb1 +0x2f:  mov    %eax,(%esp)
084e0fb4 +0x32:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084e0fb9 +0x37:  cmp    %eax,%ebx
084e0fbb +0x39:  setne  %al
084e0fbe +0x3c:  test   %al,%al
084e0fc0 +0x3e:  je     084e0fcc <+0x4a>
084e0fc2 +0x40:  mov    $0x0,%ebx
084e0fc7 +0x45:  jmp    084e1059 <+0xd7>
084e0fcc +0x4a:  lea    -0x18(%ebp),%eax
084e0fcf +0x4d:  mov    %eax,(%esp)
084e0fd2 +0x50:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084e0fd7 +0x55:  movl   $0x105,0x8(%esp)
084e0fdf +0x5d:  movl   $0x0,0x4(%esp)
084e0fe7 +0x65:  lea    -0x18(%ebp),%eax
084e0fea +0x68:  mov    %eax,(%esp)
084e0fed +0x6b:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084e0ff2 +0x70:  mov    -0xc(%ebp),%eax
084e0ff5 +0x73:  mov    0xa(%eax),%eax
084e0ff8 +0x76:  mov    %eax,0x4(%esp)
084e0ffc +0x7a:  lea    -0x18(%ebp),%eax
084e0fff +0x7d:  mov    %eax,(%esp)
084e1002 +0x80:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084e1007 +0x85:  movl   $0x1,0x4(%esp)
084e100f +0x8d:  lea    -0x18(%ebp),%eax
084e1012 +0x90:  mov    %eax,(%esp)
084e1015 +0x93:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084e101a +0x98:  lea    -0x18(%ebp),%eax
084e101d +0x9b:  mov    %eax,0x4(%esp)
084e1021 +0x9f:  mov    0xc(%ebp),%eax
084e1024 +0xa2:  mov    %eax,(%esp)
084e1027 +0xa5:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084e102c +0xaa:  mov    $0x0,%ebx
084e1031 +0xaf:  lea    -0x18(%ebp),%eax
084e1034 +0xb2:  mov    %eax,(%esp)
084e1037 +0xb5:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e103c +0xba:  jmp    084e1059 <+0xd7>
084e103e +0xbc:  mov    %edx,%ebx
084e1040 +0xbe:  mov    %eax,%esi
084e1042 +0xc0:  lea    -0x18(%ebp),%eax
084e1045 +0xc3:  mov    %eax,(%esp)
084e1048 +0xc6:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e104d +0xcb:  mov    %esi,%eax
084e104f +0xcd:  mov    %ebx,%edx
084e1051 +0xcf:  mov    %eax,(%esp)
084e1054 +0xd2:  call   08ae3750 <_Unwind_Resume>
084e1059 +0xd7:  mov    %ebx,%eax
084e105b +0xd9:  add    $0x20,%esp
084e105e +0xdc:  pop    %ebx
084e105f +0xdd:  pop    %esi
084e1060 +0xde:  pop    %ebp
084e1061 +0xdf:  ret
```

## 反编译 C

```c
// Inter_OnTimeEventRewardStartOnLogin::dispatch_sig @ 0x84e0f82

/* Inter_OnTimeEventRewardStartOnLogin::dispatch_sig(CUser*, char*, int) */

undefined4
Inter_OnTimeEventRewardStartOnLogin::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  PacketGuard local_1c [12];
  int local_10;
  
  local_10 = param_3;
  if ((param_2 != (char *)0x0) &&
     (iVar1 = *(int *)(param_3 + 0x12), iVar2 = CUser::get_charac_no((CUser *)param_2,-1),
     iVar1 == iVar2)) {
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084e0fed to 084e102b has its CatchHandler @ 084e103e */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0x105);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 10));
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send((CUser *)param_2,local_1c);
    PacketGuard::~PacketGuard(local_1c);
  }
  return 0;
}
```

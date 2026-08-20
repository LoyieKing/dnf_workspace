# dispatch_sig

`_ZN41Inter_MonitorNoticeChangeGuildMemberGrade12dispatch_sigEP5CUserPci`

`Inter_MonitorNoticeChangeGuildMemberGrade::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_MonitorNoticeChangeGuildMemberGrade` | `0x084cc55e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084cc55e  _ZN41Inter_MonitorNoticeChangeGuildMemberGrade12dispatch_sigEP5CUserPci
#           Inter_MonitorNoticeChangeGuildMemberGrade::dispatch_sig(CUser*, char*, int)
# range [0x084cc55e, 0x084cc64f]
084cc55e +0x00:  push   %ebp
084cc55f +0x01:  mov    %esp,%ebp
084cc561 +0x03:  push   %esi
084cc562 +0x04:  push   %ebx
084cc563 +0x05:  sub    $0x20,%esp
084cc566 +0x08:  mov    0xc(%ebp),%eax
084cc569 +0x0b:  mov    %eax,(%esp)
084cc56c +0x0e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084cc571 +0x13:  test   %eax,%eax
084cc573 +0x15:  sete   %al
084cc576 +0x18:  test   %al,%al
084cc578 +0x1a:  je     084cc584 <+0x26>
084cc57a +0x1c:  mov    $0x0,%ebx
084cc57f +0x21:  jmp    084cc647 <+0xe9>
084cc584 +0x26:  mov    0x10(%ebp),%eax
084cc587 +0x29:  mov    %eax,-0xc(%ebp)
084cc58a +0x2c:  mov    -0xc(%ebp),%eax
084cc58d +0x2f:  mov    0xe(%eax),%ebx
084cc590 +0x32:  movl   $0xffffffff,0x4(%esp)
084cc598 +0x3a:  mov    0xc(%ebp),%eax
084cc59b +0x3d:  mov    %eax,(%esp)
084cc59e +0x40:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084cc5a3 +0x45:  cmp    %eax,%ebx
084cc5a5 +0x47:  setne  %al
084cc5a8 +0x4a:  test   %al,%al
084cc5aa +0x4c:  je     084cc5b6 <+0x58>
084cc5ac +0x4e:  mov    $0x0,%ebx
084cc5b1 +0x53:  jmp    084cc647 <+0xe9>
084cc5b6 +0x58:  lea    -0x18(%ebp),%eax
084cc5b9 +0x5b:  mov    %eax,(%esp)
084cc5bc +0x5e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084cc5c1 +0x63:  movl   $0x8c,0x8(%esp)
084cc5c9 +0x6b:  movl   $0x0,0x4(%esp)
084cc5d1 +0x73:  lea    -0x18(%ebp),%eax
084cc5d4 +0x76:  mov    %eax,(%esp)
084cc5d7 +0x79:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084cc5dc +0x7e:  mov    -0xc(%ebp),%eax
084cc5df +0x81:  movzbl 0x12(%eax),%eax
084cc5e3 +0x85:  movzbl %al,%eax
084cc5e6 +0x88:  mov    %eax,0x4(%esp)
084cc5ea +0x8c:  lea    -0x18(%ebp),%eax
084cc5ed +0x8f:  mov    %eax,(%esp)
084cc5f0 +0x92:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084cc5f5 +0x97:  movl   $0x1,0x4(%esp)
084cc5fd +0x9f:  lea    -0x18(%ebp),%eax
084cc600 +0xa2:  mov    %eax,(%esp)
084cc603 +0xa5:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084cc608 +0xaa:  lea    -0x18(%ebp),%eax
084cc60b +0xad:  mov    %eax,0x4(%esp)
084cc60f +0xb1:  mov    0xc(%ebp),%eax
084cc612 +0xb4:  mov    %eax,(%esp)
084cc615 +0xb7:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084cc61a +0xbc:  mov    $0x0,%ebx
084cc61f +0xc1:  lea    -0x18(%ebp),%eax
084cc622 +0xc4:  mov    %eax,(%esp)
084cc625 +0xc7:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084cc62a +0xcc:  jmp    084cc647 <+0xe9>
084cc62c +0xce:  mov    %edx,%ebx
084cc62e +0xd0:  mov    %eax,%esi
084cc630 +0xd2:  lea    -0x18(%ebp),%eax
084cc633 +0xd5:  mov    %eax,(%esp)
084cc636 +0xd8:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084cc63b +0xdd:  mov    %esi,%eax
084cc63d +0xdf:  mov    %ebx,%edx
084cc63f +0xe1:  mov    %eax,(%esp)
084cc642 +0xe4:  call   08ae3750 <_Unwind_Resume>
084cc647 +0xe9:  mov    %ebx,%eax
084cc649 +0xeb:  add    $0x20,%esp
084cc64c +0xee:  pop    %ebx
084cc64d +0xef:  pop    %esi
084cc64e +0xf0:  pop    %ebp
084cc64f +0xf1:  ret
```

## 反编译 C

```c
// Inter_MonitorNoticeChangeGuildMemberGrade::dispatch_sig @ 0x84cc55e

/* Inter_MonitorNoticeChangeGuildMemberGrade::dispatch_sig(CUser*, char*, int) */

undefined4
Inter_MonitorNoticeChangeGuildMemberGrade::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  PacketGuard local_1c [12];
  int local_10;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (iVar1 != 0) {
    local_10 = param_3;
    iVar1 = *(int *)(param_3 + 0xe);
    iVar2 = CUser::get_charac_no((CUser *)param_2,-1);
    if (iVar1 == iVar2) {
      PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084cc5d7 to 084cc619 has its CatchHandler @ 084cc62c */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0x8c);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(uint)*(byte *)(local_10 + 0x12));
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
      CUser::Send((CUser *)param_2,local_1c);
      PacketGuard::~PacketGuard(local_1c);
    }
  }
  return 0;
}
```

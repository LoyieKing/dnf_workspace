# dispatch_sig

`_ZN28Inter_AchieveGuildAttendance12dispatch_sigEP5CUserPci`

`Inter_AchieveGuildAttendance::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_AchieveGuildAttendance` | `0x084e41e4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e41e4  _ZN28Inter_AchieveGuildAttendance12dispatch_sigEP5CUserPci
#           Inter_AchieveGuildAttendance::dispatch_sig(CUser*, char*, int)
# range [0x084e41e4, 0x084e42df]
084e41e4 +0x00:  push   %ebp
084e41e5 +0x01:  mov    %esp,%ebp
084e41e7 +0x03:  push   %esi
084e41e8 +0x04:  push   %ebx
084e41e9 +0x05:  sub    $0x20,%esp
084e41ec +0x08:  mov    0x10(%ebp),%eax
084e41ef +0x0b:  mov    %eax,-0xc(%ebp)
084e41f2 +0x0e:  mov    0xc(%ebp),%eax
084e41f5 +0x11:  mov    %eax,(%esp)
084e41f8 +0x14:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084e41fd +0x19:  cmp    $0x2,%eax
084e4200 +0x1c:  setle  %al
084e4203 +0x1f:  test   %al,%al
084e4205 +0x21:  je     084e4211 <+0x2d>
084e4207 +0x23:  mov    $0x0,%ebx
084e420c +0x28:  jmp    084e42d7 <+0xf3>
084e4211 +0x2d:  mov    -0xc(%ebp),%eax
084e4214 +0x30:  mov    0xa(%eax),%ebx
084e4217 +0x33:  mov    0xc(%ebp),%eax
084e421a +0x36:  mov    %eax,(%esp)
084e421d +0x39:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084e4222 +0x3e:  cmp    %eax,%ebx
084e4224 +0x40:  setne  %al
084e4227 +0x43:  test   %al,%al
084e4229 +0x45:  je     084e4235 <+0x51>
084e422b +0x47:  mov    $0x0,%ebx
084e4230 +0x4c:  jmp    084e42d7 <+0xf3>
084e4235 +0x51:  lea    -0x18(%ebp),%eax
084e4238 +0x54:  mov    %eax,(%esp)
084e423b +0x57:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084e4240 +0x5c:  movl   $0x134,0x8(%esp)
084e4248 +0x64:  movl   $0x0,0x4(%esp)
084e4250 +0x6c:  lea    -0x18(%ebp),%eax
084e4253 +0x6f:  mov    %eax,(%esp)
084e4256 +0x72:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084e425b +0x77:  mov    -0xc(%ebp),%eax
084e425e +0x7a:  mov    0x12(%eax),%eax
084e4261 +0x7d:  mov    %eax,0x4(%esp)
084e4265 +0x81:  lea    -0x18(%ebp),%eax
084e4268 +0x84:  mov    %eax,(%esp)
084e426b +0x87:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084e4270 +0x8c:  mov    -0xc(%ebp),%eax
084e4273 +0x8f:  mov    0x16(%eax),%eax
084e4276 +0x92:  mov    %eax,0x4(%esp)
084e427a +0x96:  lea    -0x18(%ebp),%eax
084e427d +0x99:  mov    %eax,(%esp)
084e4280 +0x9c:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084e4285 +0xa1:  movl   $0x1,0x4(%esp)
084e428d +0xa9:  lea    -0x18(%ebp),%eax
084e4290 +0xac:  mov    %eax,(%esp)
084e4293 +0xaf:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084e4298 +0xb4:  lea    -0x18(%ebp),%eax
084e429b +0xb7:  mov    %eax,0x4(%esp)
084e429f +0xbb:  mov    0xc(%ebp),%eax
084e42a2 +0xbe:  mov    %eax,(%esp)
084e42a5 +0xc1:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084e42aa +0xc6:  mov    $0x0,%ebx
084e42af +0xcb:  lea    -0x18(%ebp),%eax
084e42b2 +0xce:  mov    %eax,(%esp)
084e42b5 +0xd1:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e42ba +0xd6:  jmp    084e42d7 <+0xf3>
084e42bc +0xd8:  mov    %edx,%ebx
084e42be +0xda:  mov    %eax,%esi
084e42c0 +0xdc:  lea    -0x18(%ebp),%eax
084e42c3 +0xdf:  mov    %eax,(%esp)
084e42c6 +0xe2:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e42cb +0xe7:  mov    %esi,%eax
084e42cd +0xe9:  mov    %ebx,%edx
084e42cf +0xeb:  mov    %eax,(%esp)
084e42d2 +0xee:  call   08ae3750 <_Unwind_Resume>
084e42d7 +0xf3:  mov    %ebx,%eax
084e42d9 +0xf5:  add    $0x20,%esp
084e42dc +0xf8:  pop    %ebx
084e42dd +0xf9:  pop    %esi
084e42de +0xfa:  pop    %ebp
084e42df +0xfb:  ret
```

## 反编译 C

```c
// Inter_AchieveGuildAttendance::dispatch_sig @ 0x84e41e4

/* Inter_AchieveGuildAttendance::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_AchieveGuildAttendance::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  PacketGuard local_1c [12];
  int local_10;
  
  local_10 = param_3;
  iVar1 = CUser::get_state((CUser *)param_2);
  if ((2 < iVar1) &&
     (iVar1 = *(int *)(local_10 + 10),
     iVar2 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2), iVar1 == iVar2)) {
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084e4256 to 084e42a9 has its CatchHandler @ 084e42bc */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0x134);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0x12));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0x16));
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send((CUser *)param_2,local_1c);
    PacketGuard::~PacketGuard(local_1c);
  }
  return 0;
}
```

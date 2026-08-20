# dispatch_sig

`_ZN29Inter_CallGuildInviteToCaller12dispatch_sigEP5CUserPci`

`Inter_CallGuildInviteToCaller::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_CallGuildInviteToCaller` | `0x084d2a26` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084d2a26  _ZN29Inter_CallGuildInviteToCaller12dispatch_sigEP5CUserPci
#           Inter_CallGuildInviteToCaller::dispatch_sig(CUser*, char*, int)
# range [0x084d2a26, 0x084d2b95]
084d2a26 +0x000:  push   %ebp
084d2a27 +0x001:  mov    %esp,%ebp
084d2a29 +0x003:  push   %esi
084d2a2a +0x004:  push   %ebx
084d2a2b +0x005:  sub    $0x30,%esp
084d2a2e +0x008:  mov    0xc(%ebp),%eax
084d2a31 +0x00b:  mov    %eax,(%esp)
084d2a34 +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084d2a39 +0x013:  test   %eax,%eax
084d2a3b +0x015:  sete   %al
084d2a3e +0x018:  test   %al,%al
084d2a40 +0x01a:  je     084d2a4c <+0x26>
084d2a42 +0x01c:  mov    $0x0,%ebx
084d2a47 +0x021:  jmp    084d2b8c <+0x166>
084d2a4c +0x026:  mov    0x10(%ebp),%eax
084d2a4f +0x029:  mov    %eax,-0xc(%ebp)
084d2a52 +0x02c:  movl   $0xffffffff,0x4(%esp)
084d2a5a +0x034:  mov    0xc(%ebp),%eax
084d2a5d +0x037:  mov    %eax,(%esp)
084d2a60 +0x03a:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084d2a65 +0x03f:  mov    %eax,%edx
084d2a67 +0x041:  mov    -0xc(%ebp),%eax
084d2a6a +0x044:  mov    0xa(%eax),%eax
084d2a6d +0x047:  cmp    %eax,%edx
084d2a6f +0x049:  setne  %al
084d2a72 +0x04c:  test   %al,%al
084d2a74 +0x04e:  je     084d2acd <+0xa7>
084d2a76 +0x050:  mov    -0xc(%ebp),%eax
084d2a79 +0x053:  mov    0xa(%eax),%ebx
084d2a7c +0x056:  movl   $0xffffffff,0x4(%esp)
084d2a84 +0x05e:  mov    0xc(%ebp),%eax
084d2a87 +0x061:  mov    %eax,(%esp)
084d2a8a +0x064:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084d2a8f +0x069:  mov    %ebx,0x18(%esp)
084d2a93 +0x06d:  mov    %eax,0x14(%esp)
084d2a97 +0x071:  movl   $"MEMBER : Inter_CallGuildInviteToCaller::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)",0x10(%esp)
084d2a9f +0x079:  movl   $0x335c,0xc(%esp)
084d2aa7 +0x081:  movl   $&_ZZN29Inter_CallGuildInviteToCaller12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
084d2aaf +0x089:  movl   $"InterDispatcher.cpp",0x4(%esp)
084d2ab7 +0x091:  movl   $0x1,(%esp)
084d2abe +0x098:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084d2ac3 +0x09d:  mov    $0x0,%ebx
084d2ac8 +0x0a2:  jmp    084d2b8c <+0x166>
084d2acd +0x0a7:  lea    -0x18(%ebp),%eax
084d2ad0 +0x0aa:  mov    %eax,(%esp)
084d2ad3 +0x0ad:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084d2ad8 +0x0b2:  movl   $0x9a,0x8(%esp)
084d2ae0 +0x0ba:  movl   $0x1,0x4(%esp)
084d2ae8 +0x0c2:  lea    -0x18(%ebp),%eax
084d2aeb +0x0c5:  mov    %eax,(%esp)
084d2aee +0x0c8:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084d2af3 +0x0cd:  mov    -0xc(%ebp),%eax
084d2af6 +0x0d0:  mov    0x12(%eax),%eax
084d2af9 +0x0d3:  test   %eax,%eax
084d2afb +0x0d5:  jne    084d2b12 <+0xec>
084d2afd +0x0d7:  movl   $0x1,0x4(%esp)
084d2b05 +0x0df:  lea    -0x18(%ebp),%eax
084d2b08 +0x0e2:  mov    %eax,(%esp)
084d2b0b +0x0e5:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d2b10 +0x0ea:  jmp    084d2b3a <+0x114>
084d2b12 +0x0ec:  movl   $0x0,0x4(%esp)
084d2b1a +0x0f4:  lea    -0x18(%ebp),%eax
084d2b1d +0x0f7:  mov    %eax,(%esp)
084d2b20 +0x0fa:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d2b25 +0x0ff:  mov    -0xc(%ebp),%eax
084d2b28 +0x102:  mov    0x12(%eax),%eax
084d2b2b +0x105:  mov    %eax,0x4(%esp)
084d2b2f +0x109:  lea    -0x18(%ebp),%eax
084d2b32 +0x10c:  mov    %eax,(%esp)
084d2b35 +0x10f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d2b3a +0x114:  movl   $0x1,0x4(%esp)
084d2b42 +0x11c:  lea    -0x18(%ebp),%eax
084d2b45 +0x11f:  mov    %eax,(%esp)
084d2b48 +0x122:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084d2b4d +0x127:  lea    -0x18(%ebp),%eax
084d2b50 +0x12a:  mov    %eax,0x4(%esp)
084d2b54 +0x12e:  mov    0xc(%ebp),%eax
084d2b57 +0x131:  mov    %eax,(%esp)
084d2b5a +0x134:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084d2b5f +0x139:  mov    $0x0,%ebx
084d2b64 +0x13e:  lea    -0x18(%ebp),%eax
084d2b67 +0x141:  mov    %eax,(%esp)
084d2b6a +0x144:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d2b6f +0x149:  jmp    084d2b8c <+0x166>
084d2b71 +0x14b:  mov    %edx,%ebx
084d2b73 +0x14d:  mov    %eax,%esi
084d2b75 +0x14f:  lea    -0x18(%ebp),%eax
084d2b78 +0x152:  mov    %eax,(%esp)
084d2b7b +0x155:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d2b80 +0x15a:  mov    %esi,%eax
084d2b82 +0x15c:  mov    %ebx,%edx
084d2b84 +0x15e:  mov    %eax,(%esp)
084d2b87 +0x161:  call   08ae3750 <_Unwind_Resume>
084d2b8c +0x166:  mov    %ebx,%eax
084d2b8e +0x168:  add    $0x30,%esp
084d2b91 +0x16b:  pop    %ebx
084d2b92 +0x16c:  pop    %esi
084d2b93 +0x16d:  pop    %ebp
084d2b94 +0x16e:  ret
084d2b95 +0x16f:  nop
```

## 反编译 C

```c
// Inter_CallGuildInviteToCaller::dispatch_sig @ 0x84d2a26

/* Inter_CallGuildInviteToCaller::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_CallGuildInviteToCaller::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  PacketGuard local_1c [12];
  int local_10;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (iVar2 != 0) {
    local_10 = param_3;
    iVar2 = CUser::get_charac_no((CUser *)param_2,-1);
    if (iVar2 == *(int *)(local_10 + 10)) {
      PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084d2aee to 084d2b5e has its CatchHandler @ 084d2b71 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x9a);
      if (*(int *)(local_10 + 0x12) == 0) {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
      }
      else {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0x12));
      }
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
      CUser::Send((CUser *)param_2,local_1c);
      PacketGuard::~PacketGuard(local_1c);
    }
    else {
      uVar1 = *(undefined4 *)(local_10 + 10);
      uVar3 = CUser::get_charac_no((CUser *)param_2,-1);
      LogManager::logFormat
                (1,"InterDispatcher.cpp",
                 "virtual int Inter_CallGuildInviteToCaller::dispatch_sig(CUser*, char*, int)",
                 0x335c,
                 "MEMBER : Inter_CallGuildInviteToCaller::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)"
                 ,uVar3,uVar1);
    }
  }
  return 0;
}
```

# dispatch_sig

`_ZN31Inter_ReplyGuildInviteToInvited12dispatch_sigEP5CUserPci`

`Inter_ReplyGuildInviteToInvited::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_ReplyGuildInviteToInvited` | `0x084d2dfe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084d2dfe  _ZN31Inter_ReplyGuildInviteToInvited12dispatch_sigEP5CUserPci
#           Inter_ReplyGuildInviteToInvited::dispatch_sig(CUser*, char*, int)
# range [0x084d2dfe, 0x084d2f6d]
084d2dfe +0x000:  push   %ebp
084d2dff +0x001:  mov    %esp,%ebp
084d2e01 +0x003:  push   %esi
084d2e02 +0x004:  push   %ebx
084d2e03 +0x005:  sub    $0x30,%esp
084d2e06 +0x008:  mov    0xc(%ebp),%eax
084d2e09 +0x00b:  mov    %eax,(%esp)
084d2e0c +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084d2e11 +0x013:  test   %eax,%eax
084d2e13 +0x015:  sete   %al
084d2e16 +0x018:  test   %al,%al
084d2e18 +0x01a:  je     084d2e24 <+0x26>
084d2e1a +0x01c:  mov    $0x0,%ebx
084d2e1f +0x021:  jmp    084d2f64 <+0x166>
084d2e24 +0x026:  mov    0x10(%ebp),%eax
084d2e27 +0x029:  mov    %eax,-0xc(%ebp)
084d2e2a +0x02c:  movl   $0xffffffff,0x4(%esp)
084d2e32 +0x034:  mov    0xc(%ebp),%eax
084d2e35 +0x037:  mov    %eax,(%esp)
084d2e38 +0x03a:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084d2e3d +0x03f:  mov    %eax,%edx
084d2e3f +0x041:  mov    -0xc(%ebp),%eax
084d2e42 +0x044:  mov    0xa(%eax),%eax
084d2e45 +0x047:  cmp    %eax,%edx
084d2e47 +0x049:  setne  %al
084d2e4a +0x04c:  test   %al,%al
084d2e4c +0x04e:  je     084d2ea5 <+0xa7>
084d2e4e +0x050:  mov    -0xc(%ebp),%eax
084d2e51 +0x053:  mov    0xa(%eax),%ebx
084d2e54 +0x056:  movl   $0xffffffff,0x4(%esp)
084d2e5c +0x05e:  mov    0xc(%ebp),%eax
084d2e5f +0x061:  mov    %eax,(%esp)
084d2e62 +0x064:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084d2e67 +0x069:  mov    %ebx,0x18(%esp)
084d2e6b +0x06d:  mov    %eax,0x14(%esp)
084d2e6f +0x071:  movl   $"MEMBER : Inter_CallGuildInviteToInvited::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)",0x10(%esp)
084d2e77 +0x079:  movl   $0x33ae,0xc(%esp)
084d2e7f +0x081:  movl   $&_ZZN31Inter_ReplyGuildInviteToInvited12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
084d2e87 +0x089:  movl   $"InterDispatcher.cpp",0x4(%esp)
084d2e8f +0x091:  movl   $0x1,(%esp)
084d2e96 +0x098:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084d2e9b +0x09d:  mov    $0x0,%ebx
084d2ea0 +0x0a2:  jmp    084d2f64 <+0x166>
084d2ea5 +0x0a7:  lea    -0x18(%ebp),%eax
084d2ea8 +0x0aa:  mov    %eax,(%esp)
084d2eab +0x0ad:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084d2eb0 +0x0b2:  movl   $0x9b,0x8(%esp)
084d2eb8 +0x0ba:  movl   $0x1,0x4(%esp)
084d2ec0 +0x0c2:  lea    -0x18(%ebp),%eax
084d2ec3 +0x0c5:  mov    %eax,(%esp)
084d2ec6 +0x0c8:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084d2ecb +0x0cd:  mov    -0xc(%ebp),%eax
084d2ece +0x0d0:  mov    0x12(%eax),%eax
084d2ed1 +0x0d3:  test   %eax,%eax
084d2ed3 +0x0d5:  jne    084d2eea <+0xec>
084d2ed5 +0x0d7:  movl   $0x1,0x4(%esp)
084d2edd +0x0df:  lea    -0x18(%ebp),%eax
084d2ee0 +0x0e2:  mov    %eax,(%esp)
084d2ee3 +0x0e5:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d2ee8 +0x0ea:  jmp    084d2f12 <+0x114>
084d2eea +0x0ec:  movl   $0x0,0x4(%esp)
084d2ef2 +0x0f4:  lea    -0x18(%ebp),%eax
084d2ef5 +0x0f7:  mov    %eax,(%esp)
084d2ef8 +0x0fa:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d2efd +0x0ff:  mov    -0xc(%ebp),%eax
084d2f00 +0x102:  mov    0x12(%eax),%eax
084d2f03 +0x105:  mov    %eax,0x4(%esp)
084d2f07 +0x109:  lea    -0x18(%ebp),%eax
084d2f0a +0x10c:  mov    %eax,(%esp)
084d2f0d +0x10f:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084d2f12 +0x114:  movl   $0x1,0x4(%esp)
084d2f1a +0x11c:  lea    -0x18(%ebp),%eax
084d2f1d +0x11f:  mov    %eax,(%esp)
084d2f20 +0x122:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084d2f25 +0x127:  lea    -0x18(%ebp),%eax
084d2f28 +0x12a:  mov    %eax,0x4(%esp)
084d2f2c +0x12e:  mov    0xc(%ebp),%eax
084d2f2f +0x131:  mov    %eax,(%esp)
084d2f32 +0x134:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084d2f37 +0x139:  mov    $0x0,%ebx
084d2f3c +0x13e:  lea    -0x18(%ebp),%eax
084d2f3f +0x141:  mov    %eax,(%esp)
084d2f42 +0x144:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d2f47 +0x149:  jmp    084d2f64 <+0x166>
084d2f49 +0x14b:  mov    %edx,%ebx
084d2f4b +0x14d:  mov    %eax,%esi
084d2f4d +0x14f:  lea    -0x18(%ebp),%eax
084d2f50 +0x152:  mov    %eax,(%esp)
084d2f53 +0x155:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d2f58 +0x15a:  mov    %esi,%eax
084d2f5a +0x15c:  mov    %ebx,%edx
084d2f5c +0x15e:  mov    %eax,(%esp)
084d2f5f +0x161:  call   08ae3750 <_Unwind_Resume>
084d2f64 +0x166:  mov    %ebx,%eax
084d2f66 +0x168:  add    $0x30,%esp
084d2f69 +0x16b:  pop    %ebx
084d2f6a +0x16c:  pop    %esi
084d2f6b +0x16d:  pop    %ebp
084d2f6c +0x16e:  ret
084d2f6d +0x16f:  nop
```

## 反编译 C

```c
// Inter_ReplyGuildInviteToInvited::dispatch_sig @ 0x84d2dfe

/* Inter_ReplyGuildInviteToInvited::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_ReplyGuildInviteToInvited::dispatch_sig(CUser *param_1,char *param_2,int param_3)

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
                    /* try { // try from 084d2ec6 to 084d2f36 has its CatchHandler @ 084d2f49 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x9b);
      if (*(int *)(local_10 + 0x12) == 0) {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
      }
      else {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0x12));
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
                 "virtual int Inter_ReplyGuildInviteToInvited::dispatch_sig(CUser*, char*, int)",
                 0x33ae,
                 "MEMBER : Inter_CallGuildInviteToInvited::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)"
                 ,uVar3,uVar1);
    }
  }
  return 0;
}
```

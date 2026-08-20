# dispatch_sig

`_ZN30Inter_NoticeHasBeenGuildMaster12dispatch_sigEP5CUserPci`

`Inter_NoticeHasBeenGuildMaster::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_NoticeHasBeenGuildMaster` | `0x084c9d0a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084c9d0a  _ZN30Inter_NoticeHasBeenGuildMaster12dispatch_sigEP5CUserPci
#           Inter_NoticeHasBeenGuildMaster::dispatch_sig(CUser*, char*, int)
# range [0x084c9d0a, 0x084c9e2f]
084c9d0a +0x000:  push   %ebp
084c9d0b +0x001:  mov    %esp,%ebp
084c9d0d +0x003:  push   %esi
084c9d0e +0x004:  push   %ebx
084c9d0f +0x005:  sub    $0x30,%esp
084c9d12 +0x008:  mov    0xc(%ebp),%eax
084c9d15 +0x00b:  mov    %eax,(%esp)
084c9d18 +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084c9d1d +0x013:  test   %eax,%eax
084c9d1f +0x015:  sete   %al
084c9d22 +0x018:  test   %al,%al
084c9d24 +0x01a:  je     084c9d30 <+0x26>
084c9d26 +0x01c:  mov    $0x0,%ebx
084c9d2b +0x021:  jmp    084c9e26 <+0x11c>
084c9d30 +0x026:  mov    0x10(%ebp),%eax
084c9d33 +0x029:  mov    %eax,-0xc(%ebp)
084c9d36 +0x02c:  movl   $0xffffffff,0x4(%esp)
084c9d3e +0x034:  mov    0xc(%ebp),%eax
084c9d41 +0x037:  mov    %eax,(%esp)
084c9d44 +0x03a:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084c9d49 +0x03f:  mov    %eax,%edx
084c9d4b +0x041:  mov    -0xc(%ebp),%eax
084c9d4e +0x044:  mov    0xa(%eax),%eax
084c9d51 +0x047:  cmp    %eax,%edx
084c9d53 +0x049:  setne  %al
084c9d56 +0x04c:  test   %al,%al
084c9d58 +0x04e:  je     084c9dae <+0xa4>
084c9d5a +0x050:  mov    -0xc(%ebp),%eax
084c9d5d +0x053:  mov    0xa(%eax),%ebx
084c9d60 +0x056:  movl   $0xffffffff,0x4(%esp)
084c9d68 +0x05e:  mov    0xc(%ebp),%eax
084c9d6b +0x061:  mov    %eax,(%esp)
084c9d6e +0x064:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084c9d73 +0x069:  mov    %ebx,0x18(%esp)
084c9d77 +0x06d:  mov    %eax,0x14(%esp)
084c9d7b +0x071:  movl   $"Inter_NoticeHasBeenGuildMaster::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)",0x10(%esp)
084c9d83 +0x079:  movl   $0x23da,0xc(%esp)
084c9d8b +0x081:  movl   $&_ZZN30Inter_NoticeHasBeenGuildMaster12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
084c9d93 +0x089:  movl   $"InterDispatcher.cpp",0x4(%esp)
084c9d9b +0x091:  movl   $0x1,(%esp)
084c9da2 +0x098:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084c9da7 +0x09d:  mov    $0x0,%ebx
084c9dac +0x0a2:  jmp    084c9e26 <+0x11c>
084c9dae +0x0a4:  lea    -0x18(%ebp),%eax
084c9db1 +0x0a7:  mov    %eax,(%esp)
084c9db4 +0x0aa:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084c9db9 +0x0af:  movl   $0x96,0x8(%esp)
084c9dc1 +0x0b7:  movl   $0x0,0x4(%esp)
084c9dc9 +0x0bf:  lea    -0x18(%ebp),%eax
084c9dcc +0x0c2:  mov    %eax,(%esp)
084c9dcf +0x0c5:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084c9dd4 +0x0ca:  movl   $0x1,0x4(%esp)
084c9ddc +0x0d2:  lea    -0x18(%ebp),%eax
084c9ddf +0x0d5:  mov    %eax,(%esp)
084c9de2 +0x0d8:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084c9de7 +0x0dd:  lea    -0x18(%ebp),%eax
084c9dea +0x0e0:  mov    %eax,0x4(%esp)
084c9dee +0x0e4:  mov    0xc(%ebp),%eax
084c9df1 +0x0e7:  mov    %eax,(%esp)
084c9df4 +0x0ea:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084c9df9 +0x0ef:  mov    $0x0,%ebx
084c9dfe +0x0f4:  lea    -0x18(%ebp),%eax
084c9e01 +0x0f7:  mov    %eax,(%esp)
084c9e04 +0x0fa:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084c9e09 +0x0ff:  jmp    084c9e26 <+0x11c>
084c9e0b +0x101:  mov    %edx,%ebx
084c9e0d +0x103:  mov    %eax,%esi
084c9e0f +0x105:  lea    -0x18(%ebp),%eax
084c9e12 +0x108:  mov    %eax,(%esp)
084c9e15 +0x10b:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084c9e1a +0x110:  mov    %esi,%eax
084c9e1c +0x112:  mov    %ebx,%edx
084c9e1e +0x114:  mov    %eax,(%esp)
084c9e21 +0x117:  call   08ae3750 <_Unwind_Resume>
084c9e26 +0x11c:  mov    %ebx,%eax
084c9e28 +0x11e:  add    $0x30,%esp
084c9e2b +0x121:  pop    %ebx
084c9e2c +0x122:  pop    %esi
084c9e2d +0x123:  pop    %ebp
084c9e2e +0x124:  ret
084c9e2f +0x125:  nop
```

## 反编译 C

```c
// Inter_NoticeHasBeenGuildMaster::dispatch_sig @ 0x84c9d0a

/* Inter_NoticeHasBeenGuildMaster::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_NoticeHasBeenGuildMaster::dispatch_sig(CUser *param_1,char *param_2,int param_3)

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
                    /* try { // try from 084c9dcf to 084c9df8 has its CatchHandler @ 084c9e0b */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0x96);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
      CUser::Send((CUser *)param_2,local_1c);
      PacketGuard::~PacketGuard(local_1c);
    }
    else {
      uVar1 = *(undefined4 *)(local_10 + 10);
      uVar3 = CUser::get_charac_no((CUser *)param_2,-1);
      LogManager::logFormat
                (1,"InterDispatcher.cpp",
                 "virtual int Inter_NoticeHasBeenGuildMaster::dispatch_sig(CUser*, char*, int)",
                 0x23da,
                 "Inter_NoticeHasBeenGuildMaster::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)"
                 ,uVar3,uVar1);
    }
  }
  return 0;
}
```

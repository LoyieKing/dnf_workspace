# dispatch_sig

`_ZN22Inter_ReplyGuildLetter12dispatch_sigEP5CUserPci`

`Inter_ReplyGuildLetter::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_ReplyGuildLetter` | `0x084d28ca` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084d28ca  _ZN22Inter_ReplyGuildLetter12dispatch_sigEP5CUserPci
#           Inter_ReplyGuildLetter::dispatch_sig(CUser*, char*, int)
# range [0x084d28ca, 0x084d2a25]
084d28ca +0x000:  push   %ebp
084d28cb +0x001:  mov    %esp,%ebp
084d28cd +0x003:  push   %esi
084d28ce +0x004:  push   %ebx
084d28cf +0x005:  sub    $0x30,%esp
084d28d2 +0x008:  mov    0xc(%ebp),%eax
084d28d5 +0x00b:  mov    %eax,(%esp)
084d28d8 +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084d28dd +0x013:  test   %eax,%eax
084d28df +0x015:  sete   %al
084d28e2 +0x018:  test   %al,%al
084d28e4 +0x01a:  je     084d28f0 <+0x26>
084d28e6 +0x01c:  mov    $0x0,%ebx
084d28eb +0x021:  jmp    084d2a1c <+0x152>
084d28f0 +0x026:  mov    0x10(%ebp),%eax
084d28f3 +0x029:  mov    %eax,-0xc(%ebp)
084d28f6 +0x02c:  movl   $0xffffffff,0x4(%esp)
084d28fe +0x034:  mov    0xc(%ebp),%eax
084d2901 +0x037:  mov    %eax,(%esp)
084d2904 +0x03a:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084d2909 +0x03f:  mov    %eax,%edx
084d290b +0x041:  mov    -0xc(%ebp),%eax
084d290e +0x044:  mov    0xa(%eax),%eax
084d2911 +0x047:  cmp    %eax,%edx
084d2913 +0x049:  setne  %al
084d2916 +0x04c:  test   %al,%al
084d2918 +0x04e:  je     084d2971 <+0xa7>
084d291a +0x050:  mov    -0xc(%ebp),%eax
084d291d +0x053:  mov    0xa(%eax),%ebx
084d2920 +0x056:  movl   $0xffffffff,0x4(%esp)
084d2928 +0x05e:  mov    0xc(%ebp),%eax
084d292b +0x061:  mov    %eax,(%esp)
084d292e +0x064:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084d2933 +0x069:  mov    %ebx,0x18(%esp)
084d2937 +0x06d:  mov    %eax,0x14(%esp)
084d293b +0x071:  movl   $"MEMBER : Inter_ReplyGuildLetter::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)",0x10(%esp)
084d2943 +0x079:  movl   $0x3340,0xc(%esp)
084d294b +0x081:  movl   $&_ZZN22Inter_ReplyGuildLetter12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
084d2953 +0x089:  movl   $"InterDispatcher.cpp",0x4(%esp)
084d295b +0x091:  movl   $0x1,(%esp)
084d2962 +0x098:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084d2967 +0x09d:  mov    $0x0,%ebx
084d296c +0x0a2:  jmp    084d2a1c <+0x152>
084d2971 +0x0a7:  lea    -0x18(%ebp),%eax
084d2974 +0x0aa:  mov    %eax,(%esp)
084d2977 +0x0ad:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084d297c +0x0b2:  movl   $0x61,0x8(%esp)
084d2984 +0x0ba:  movl   $0x1,0x4(%esp)
084d298c +0x0c2:  lea    -0x18(%ebp),%eax
084d298f +0x0c5:  mov    %eax,(%esp)
084d2992 +0x0c8:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084d2997 +0x0cd:  mov    -0xc(%ebp),%eax
084d299a +0x0d0:  movzbl 0x12(%eax),%eax
084d299e +0x0d4:  test   %al,%al
084d29a0 +0x0d6:  jne    084d29b7 <+0xed>
084d29a2 +0x0d8:  movl   $0x1,0x4(%esp)
084d29aa +0x0e0:  lea    -0x18(%ebp),%eax
084d29ad +0x0e3:  mov    %eax,(%esp)
084d29b0 +0x0e6:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d29b5 +0x0eb:  jmp    084d29ca <+0x100>
084d29b7 +0x0ed:  movl   $0x0,0x4(%esp)
084d29bf +0x0f5:  lea    -0x18(%ebp),%eax
084d29c2 +0x0f8:  mov    %eax,(%esp)
084d29c5 +0x0fb:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d29ca +0x100:  movl   $0x1,0x4(%esp)
084d29d2 +0x108:  lea    -0x18(%ebp),%eax
084d29d5 +0x10b:  mov    %eax,(%esp)
084d29d8 +0x10e:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084d29dd +0x113:  lea    -0x18(%ebp),%eax
084d29e0 +0x116:  mov    %eax,0x4(%esp)
084d29e4 +0x11a:  mov    0xc(%ebp),%eax
084d29e7 +0x11d:  mov    %eax,(%esp)
084d29ea +0x120:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084d29ef +0x125:  mov    $0x0,%ebx
084d29f4 +0x12a:  lea    -0x18(%ebp),%eax
084d29f7 +0x12d:  mov    %eax,(%esp)
084d29fa +0x130:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d29ff +0x135:  jmp    084d2a1c <+0x152>
084d2a01 +0x137:  mov    %edx,%ebx
084d2a03 +0x139:  mov    %eax,%esi
084d2a05 +0x13b:  lea    -0x18(%ebp),%eax
084d2a08 +0x13e:  mov    %eax,(%esp)
084d2a0b +0x141:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d2a10 +0x146:  mov    %esi,%eax
084d2a12 +0x148:  mov    %ebx,%edx
084d2a14 +0x14a:  mov    %eax,(%esp)
084d2a17 +0x14d:  call   08ae3750 <_Unwind_Resume>
084d2a1c +0x152:  mov    %ebx,%eax
084d2a1e +0x154:  add    $0x30,%esp
084d2a21 +0x157:  pop    %ebx
084d2a22 +0x158:  pop    %esi
084d2a23 +0x159:  pop    %ebp
084d2a24 +0x15a:  ret
084d2a25 +0x15b:  nop
```

## 反编译 C

```c
// Inter_ReplyGuildLetter::dispatch_sig @ 0x84d28ca

/* Inter_ReplyGuildLetter::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_ReplyGuildLetter::dispatch_sig(CUser *param_1,char *param_2,int param_3)

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
                    /* try { // try from 084d2992 to 084d29ee has its CatchHandler @ 084d2a01 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x61);
      if (*(char *)(local_10 + 0x12) == '\0') {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
      }
      else {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
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
                 "virtual int Inter_ReplyGuildLetter::dispatch_sig(CUser*, char*, int)",0x3340,
                 "MEMBER : Inter_ReplyGuildLetter::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)"
                 ,uVar3,uVar1);
    }
  }
  return 0;
}
```

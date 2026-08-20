# dispatch_sig

`_ZN19Inter_GenCeraTicket12dispatch_sigEP5CUserPci`

`Inter_GenCeraTicket::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_GenCeraTicket` | `0x084ceea2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084ceea2  _ZN19Inter_GenCeraTicket12dispatch_sigEP5CUserPci
#           Inter_GenCeraTicket::dispatch_sig(CUser*, char*, int)
# range [0x084ceea2, 0x084cefd1]
084ceea2 +0x000:  push   %ebp
084ceea3 +0x001:  mov    %esp,%ebp
084ceea5 +0x003:  push   %esi
084ceea6 +0x004:  push   %ebx
084ceea7 +0x005:  sub    $0x40,%esp
084ceeaa +0x008:  cmpl   $0x0,0xc(%ebp)
084ceeae +0x00c:  jne    084ceeba <+0x18>
084ceeb0 +0x00e:  mov    $0x0,%ebx
084ceeb5 +0x013:  jmp    084cefc9 <+0x127>
084ceeba +0x018:  movl   $0x4,0x8(%esp)
084ceec2 +0x020:  mov    0x10(%ebp),%eax
084ceec5 +0x023:  mov    %eax,0x4(%esp)
084ceec9 +0x027:  lea    -0xc(%ebp),%eax
084ceecc +0x02a:  mov    %eax,(%esp)
084ceecf +0x02d:  call   0807d8a0 <_init+0x198>
084ceed4 +0x032:  mov    0x10(%ebp),%eax
084ceed7 +0x035:  add    $0x4,%eax
084ceeda +0x038:  movl   $0x20,0x8(%esp)
084ceee2 +0x040:  mov    %eax,0x4(%esp)
084ceee6 +0x044:  lea    -0x38(%ebp),%eax
084ceee9 +0x047:  mov    %eax,(%esp)
084ceeec +0x04a:  call   0807d8d0 <_init+0x1c8>
084ceef1 +0x04f:  lea    -0x18(%ebp),%eax
084ceef4 +0x052:  mov    %eax,(%esp)
084ceef7 +0x055:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084ceefc +0x05a:  movl   $0x44,0x8(%esp)
084cef04 +0x062:  movl   $0x1,0x4(%esp)
084cef0c +0x06a:  lea    -0x18(%ebp),%eax
084cef0f +0x06d:  mov    %eax,(%esp)
084cef12 +0x070:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084cef17 +0x075:  movl   $0x1,0x4(%esp)
084cef1f +0x07d:  lea    -0x18(%ebp),%eax
084cef22 +0x080:  mov    %eax,(%esp)
084cef25 +0x083:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084cef2a +0x088:  lea    -0x38(%ebp),%eax
084cef2d +0x08b:  mov    %eax,(%esp)
084cef30 +0x08e:  call   0807e3b0 <_init+0xca8>
084cef35 +0x093:  mov    %eax,0x4(%esp)
084cef39 +0x097:  lea    -0x18(%ebp),%eax
084cef3c +0x09a:  mov    %eax,(%esp)
084cef3f +0x09d:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084cef44 +0x0a2:  lea    -0x38(%ebp),%eax
084cef47 +0x0a5:  mov    %eax,(%esp)
084cef4a +0x0a8:  call   0807e3b0 <_init+0xca8>
084cef4f +0x0ad:  mov    %eax,0x8(%esp)
084cef53 +0x0b1:  lea    -0x38(%ebp),%eax
084cef56 +0x0b4:  mov    %eax,0x4(%esp)
084cef5a +0x0b8:  lea    -0x18(%ebp),%eax
084cef5d +0x0bb:  mov    %eax,(%esp)
084cef60 +0x0be:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084cef65 +0x0c3:  mov    -0xc(%ebp),%eax
084cef68 +0x0c6:  mov    %eax,0x4(%esp)
084cef6c +0x0ca:  lea    -0x18(%ebp),%eax
084cef6f +0x0cd:  mov    %eax,(%esp)
084cef72 +0x0d0:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084cef77 +0x0d5:  movl   $0x1,0x4(%esp)
084cef7f +0x0dd:  lea    -0x18(%ebp),%eax
084cef82 +0x0e0:  mov    %eax,(%esp)
084cef85 +0x0e3:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084cef8a +0x0e8:  lea    -0x18(%ebp),%eax
084cef8d +0x0eb:  mov    %eax,0x4(%esp)
084cef91 +0x0ef:  mov    0xc(%ebp),%eax
084cef94 +0x0f2:  mov    %eax,(%esp)
084cef97 +0x0f5:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084cef9c +0x0fa:  mov    $0x0,%ebx
084cefa1 +0x0ff:  lea    -0x18(%ebp),%eax
084cefa4 +0x102:  mov    %eax,(%esp)
084cefa7 +0x105:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084cefac +0x10a:  jmp    084cefc9 <+0x127>
084cefae +0x10c:  mov    %edx,%ebx
084cefb0 +0x10e:  mov    %eax,%esi
084cefb2 +0x110:  lea    -0x18(%ebp),%eax
084cefb5 +0x113:  mov    %eax,(%esp)
084cefb8 +0x116:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084cefbd +0x11b:  mov    %esi,%eax
084cefbf +0x11d:  mov    %ebx,%edx
084cefc1 +0x11f:  mov    %eax,(%esp)
084cefc4 +0x122:  call   08ae3750 <_Unwind_Resume>
084cefc9 +0x127:  mov    %ebx,%eax
084cefcb +0x129:  add    $0x40,%esp
084cefce +0x12c:  pop    %ebx
084cefcf +0x12d:  pop    %esi
084cefd0 +0x12e:  pop    %ebp
084cefd1 +0x12f:  ret
```

## 反编译 C

```c
// Inter_GenCeraTicket::dispatch_sig @ 0x84ceea2

/* Inter_GenCeraTicket::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_GenCeraTicket::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  size_t sVar1;
  char local_3c [32];
  PacketGuard local_1c [12];
  int local_10;
  
  if (param_2 != (char *)0x0) {
    memcpy(&local_10,(void *)param_3,4);
    strncpy(local_3c,(char *)(param_3 + 4),0x20);
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084cef12 to 084cef9b has its CatchHandler @ 084cefae */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x44);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
    sVar1 = strlen(local_3c);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,sVar1);
    sVar1 = strlen(local_3c);
    InterfacePacketBuf::put_str((InterfacePacketBuf *)local_1c,local_3c,sVar1);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,local_10);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send((CUser *)param_2,local_1c);
    PacketGuard::~PacketGuard(local_1c);
  }
  return 0;
}
```

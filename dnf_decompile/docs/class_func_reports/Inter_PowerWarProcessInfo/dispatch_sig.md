# dispatch_sig

`_ZN25Inter_PowerWarProcessInfo12dispatch_sigEP5CUserPci`

`Inter_PowerWarProcessInfo::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_PowerWarProcessInfo` | `0x084daf30` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084daf30  _ZN25Inter_PowerWarProcessInfo12dispatch_sigEP5CUserPci
#           Inter_PowerWarProcessInfo::dispatch_sig(CUser*, char*, int)
# range [0x084daf30, 0x084db06f]
084daf30 +0x000:  push   %ebp
084daf31 +0x001:  mov    %esp,%ebp
084daf33 +0x003:  push   %esi
084daf34 +0x004:  push   %ebx
084daf35 +0x005:  sub    $0x20,%esp
084daf38 +0x008:  mov    0x10(%ebp),%eax
084daf3b +0x00b:  mov    %eax,-0xc(%ebp)
084daf3e +0x00e:  mov    -0xc(%ebp),%eax
084daf41 +0x011:  mov    0xe(%eax),%ebx
084daf44 +0x014:  movl   $0xffffffff,0x4(%esp)
084daf4c +0x01c:  mov    0xc(%ebp),%eax
084daf4f +0x01f:  mov    %eax,(%esp)
084daf52 +0x022:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084daf57 +0x027:  cmp    %eax,%ebx
084daf59 +0x029:  setne  %al
084daf5c +0x02c:  test   %al,%al
084daf5e +0x02e:  je     084daf6a <+0x3a>
084daf60 +0x030:  mov    $0x0,%ebx
084daf65 +0x035:  jmp    084db066 <+0x136>
084daf6a +0x03a:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
084daf71 +0x041:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
084daf76 +0x046:  mov    0xc(%ebp),%edx
084daf79 +0x049:  mov    %eax,0x4(%esp)
084daf7d +0x04d:  mov    %edx,(%esp)
084daf80 +0x050:  call   084ec182 <_GLOBAL__I__Z7getUserj+0x3134>  ; global constructors keyed to getUser(unsigned int)+0x3134
084daf85 +0x055:  lea    -0x18(%ebp),%eax
084daf88 +0x058:  mov    %eax,(%esp)
084daf8b +0x05b:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084daf90 +0x060:  movl   $0xc9,0x8(%esp)
084daf98 +0x068:  movl   $0x0,0x4(%esp)
084dafa0 +0x070:  lea    -0x18(%ebp),%eax
084dafa3 +0x073:  mov    %eax,(%esp)
084dafa6 +0x076:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084dafab +0x07b:  mov    -0xc(%ebp),%eax
084dafae +0x07e:  mov    0x12(%eax),%eax
084dafb1 +0x081:  mov    %eax,0x4(%esp)
084dafb5 +0x085:  lea    -0x18(%ebp),%eax
084dafb8 +0x088:  mov    %eax,(%esp)
084dafbb +0x08b:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084dafc0 +0x090:  mov    -0xc(%ebp),%eax
084dafc3 +0x093:  mov    0x16(%eax),%eax
084dafc6 +0x096:  mov    %eax,0x4(%esp)
084dafca +0x09a:  lea    -0x18(%ebp),%eax
084dafcd +0x09d:  mov    %eax,(%esp)
084dafd0 +0x0a0:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084dafd5 +0x0a5:  mov    -0xc(%ebp),%eax
084dafd8 +0x0a8:  mov    0x1a(%eax),%eax
084dafdb +0x0ab:  mov    %eax,0x4(%esp)
084dafdf +0x0af:  lea    -0x18(%ebp),%eax
084dafe2 +0x0b2:  mov    %eax,(%esp)
084dafe5 +0x0b5:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084dafea +0x0ba:  mov    -0xc(%ebp),%eax
084dafed +0x0bd:  mov    0x1e(%eax),%eax
084daff0 +0x0c0:  mov    %eax,0x4(%esp)
084daff4 +0x0c4:  lea    -0x18(%ebp),%eax
084daff7 +0x0c7:  mov    %eax,(%esp)
084daffa +0x0ca:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084dafff +0x0cf:  mov    -0xc(%ebp),%eax
084db002 +0x0d2:  mov    0x22(%eax),%eax
084db005 +0x0d5:  mov    %eax,0x4(%esp)
084db009 +0x0d9:  lea    -0x18(%ebp),%eax
084db00c +0x0dc:  mov    %eax,(%esp)
084db00f +0x0df:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084db014 +0x0e4:  movl   $0x1,0x4(%esp)
084db01c +0x0ec:  lea    -0x18(%ebp),%eax
084db01f +0x0ef:  mov    %eax,(%esp)
084db022 +0x0f2:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084db027 +0x0f7:  lea    -0x18(%ebp),%eax
084db02a +0x0fa:  mov    %eax,0x4(%esp)
084db02e +0x0fe:  mov    0xc(%ebp),%eax
084db031 +0x101:  mov    %eax,(%esp)
084db034 +0x104:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084db039 +0x109:  mov    $0x0,%ebx
084db03e +0x10e:  lea    -0x18(%ebp),%eax
084db041 +0x111:  mov    %eax,(%esp)
084db044 +0x114:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084db049 +0x119:  jmp    084db066 <+0x136>
084db04b +0x11b:  mov    %edx,%ebx
084db04d +0x11d:  mov    %eax,%esi
084db04f +0x11f:  lea    -0x18(%ebp),%eax
084db052 +0x122:  mov    %eax,(%esp)
084db055 +0x125:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084db05a +0x12a:  mov    %esi,%eax
084db05c +0x12c:  mov    %ebx,%edx
084db05e +0x12e:  mov    %eax,(%esp)
084db061 +0x131:  call   08ae3750 <_Unwind_Resume>
084db066 +0x136:  mov    %ebx,%eax
084db068 +0x138:  add    $0x20,%esp
084db06b +0x13b:  pop    %ebx
084db06c +0x13c:  pop    %esi
084db06d +0x13d:  pop    %ebp
084db06e +0x13e:  ret
084db06f +0x13f:  nop
```

## 反编译 C

```c
// Inter_PowerWarProcessInfo::dispatch_sig @ 0x84daf30

/* Inter_PowerWarProcessInfo::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_PowerWarProcessInfo::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  PacketGuard local_1c [12];
  int local_10;
  
  local_10 = param_3;
  iVar1 = *(int *)(param_3 + 0xe);
  iVar2 = CUser::get_charac_no((CUser *)param_2,-1);
  if (iVar1 == iVar2) {
    lVar3 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    CUserCharacInfo::SetPowerWarProcessInfoLastUpdateTime((CUserCharacInfo *)param_2,lVar3);
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084dafa6 to 084db038 has its CatchHandler @ 084db04b */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0xc9);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0x12));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0x16));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0x1a));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0x1e));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0x22));
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send((CUser *)param_2,local_1c);
    PacketGuard::~PacketGuard(local_1c);
  }
  return 0;
}
```

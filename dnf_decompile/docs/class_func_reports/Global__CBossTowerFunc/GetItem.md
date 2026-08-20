# GetItem

`_ZN6Global14CBossTowerFunc7GetItemEP5CUseribc`

`Global::CBossTowerFunc::GetItem(CUser*, int, bool, char)`

| 类 | 地址 |
|---|---|
| `Global::CBossTowerFunc` | `0x08146994` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08146994  _ZN6Global14CBossTowerFunc7GetItemEP5CUseribc
#           Global::CBossTowerFunc::GetItem(CUser*, int, bool, char)
# range [0x08146994, 0x08146ad7]
08146994 +0x000:  push   %ebp
08146995 +0x001:  mov    %esp,%ebp
08146997 +0x003:  push   %esi
08146998 +0x004:  push   %ebx
08146999 +0x005:  sub    $0x60,%esp
0814699c +0x008:  mov    0x10(%ebp),%edx
0814699f +0x00b:  mov    0x14(%ebp),%eax
081469a2 +0x00e:  mov    %dl,-0x3c(%ebp)
081469a5 +0x011:  mov    %al,-0x40(%ebp)
081469a8 +0x014:  mov    0x8(%ebp),%eax
081469ab +0x017:  mov    %eax,(%esp)
081469ae +0x01a:  call   08655220 <_ZN5CUser12getBossTowerEv>  ; CUser::getBossTower()
081469b3 +0x01f:  mov    %eax,-0x10(%ebp)
081469b6 +0x022:  cmpl   $0x0,-0x10(%ebp)
081469ba +0x026:  je     08146a85 <+0xf1>
081469c0 +0x02c:  mov    -0x10(%ebp),%eax
081469c3 +0x02f:  mov    (%eax),%eax
081469c5 +0x031:  add    $0x28,%eax
081469c8 +0x034:  mov    (%eax),%ecx
081469ca +0x036:  movsbl -0x40(%ebp),%edx
081469ce +0x03a:  movzbl -0x3c(%ebp),%eax
081469d2 +0x03e:  mov    %edx,0x10(%esp)
081469d6 +0x042:  mov    %eax,0xc(%esp)
081469da +0x046:  mov    0xc(%ebp),%eax
081469dd +0x049:  mov    %eax,0x8(%esp)
081469e1 +0x04d:  mov    0x8(%ebp),%eax
081469e4 +0x050:  mov    %eax,0x4(%esp)
081469e8 +0x054:  mov    -0x10(%ebp),%eax
081469eb +0x057:  mov    %eax,(%esp)
081469ee +0x05a:  call   *%ecx
081469f0 +0x05c:  mov    %al,-0x9(%ebp)
081469f3 +0x05f:  cmpb   $0x0,-0x9(%ebp)
081469f7 +0x063:  je     08146acc <+0x138>
081469fd +0x069:  lea    -0x2c(%ebp),%eax
08146a00 +0x06c:  mov    %eax,(%esp)
08146a03 +0x06f:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08146a08 +0x074:  movl   $0x2e,0x8(%esp)
08146a10 +0x07c:  movl   $0x1,0x4(%esp)
08146a18 +0x084:  lea    -0x2c(%ebp),%eax
08146a1b +0x087:  mov    %eax,(%esp)
08146a1e +0x08a:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08146a23 +0x08f:  movl   $0x1,0x4(%esp)
08146a2b +0x097:  lea    -0x2c(%ebp),%eax
08146a2e +0x09a:  mov    %eax,(%esp)
08146a31 +0x09d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08146a36 +0x0a2:  movl   $0x1,0x4(%esp)
08146a3e +0x0aa:  lea    -0x2c(%ebp),%eax
08146a41 +0x0ad:  mov    %eax,(%esp)
08146a44 +0x0b0:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08146a49 +0x0b5:  lea    -0x2c(%ebp),%eax
08146a4c +0x0b8:  mov    %eax,0x4(%esp)
08146a50 +0x0bc:  mov    0x8(%ebp),%eax
08146a53 +0x0bf:  mov    %eax,(%esp)
08146a56 +0x0c2:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08146a5b +0x0c7:  jmp    08146a78 <+0xe4>
08146a5d +0x0c9:  mov    %edx,%ebx
08146a5f +0x0cb:  mov    %eax,%esi
08146a61 +0x0cd:  lea    -0x2c(%ebp),%eax
08146a64 +0x0d0:  mov    %eax,(%esp)
08146a67 +0x0d3:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08146a6c +0x0d8:  mov    %esi,%eax
08146a6e +0x0da:  mov    %ebx,%edx
08146a70 +0x0dc:  mov    %eax,(%esp)
08146a73 +0x0df:  call   08ae3750 <_Unwind_Resume>
08146a78 +0x0e4:  lea    -0x2c(%ebp),%eax
08146a7b +0x0e7:  mov    %eax,(%esp)
08146a7e +0x0ea:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08146a83 +0x0ef:  jmp    08146acc <+0x138>
08146a85 +0x0f1:  mov    0x8(%ebp),%eax
08146a88 +0x0f4:  mov    %eax,(%esp)
08146a8b +0x0f7:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08146a90 +0x0fc:  mov    %eax,%ebx
08146a92 +0x0fe:  movl   $0x5,0xc(%esp)
08146a9a +0x106:  movl   $0xb7,0x8(%esp)
08146aa2 +0x10e:  movl   $&_ZZN6Global14CBossTowerFunc7GetItemEP5CUseribcE19__PRETTY_FUNCTION__,0x4(%esp)
08146aaa +0x116:  lea    -0x20(%ebp),%eax
08146aad +0x119:  mov    %eax,(%esp)
08146ab0 +0x11c:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08146ab5 +0x121:  mov    %ebx,0x8(%esp)
08146ab9 +0x125:  movl   $"bossTower not find : charac_no - %u",0x4(%esp)
08146ac1 +0x12d:  lea    -0x20(%ebp),%eax
08146ac4 +0x130:  mov    %eax,(%esp)
08146ac7 +0x133:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08146acc +0x138:  mov    $0x1,%eax
08146ad1 +0x13d:  add    $0x60,%esp
08146ad4 +0x140:  pop    %ebx
08146ad5 +0x141:  pop    %esi
08146ad6 +0x142:  pop    %ebp
08146ad7 +0x143:  ret
```

## 反编译 C

```c
// Global::CBossTowerFunc::GetItem @ 0x8146994

/* Global::CBossTowerFunc::GetItem(CUser*, int, bool, char) */

undefined4 Global::CBossTowerFunc::GetItem(CUser *param_1,int param_2,bool param_3,char param_4)

{
  undefined4 uVar1;
  PacketGuard local_30 [12];
  cMyTrace local_24 [16];
  int *local_14;
  char local_d;
  
  local_14 = (int *)CUser::getBossTower(param_1);
  if (local_14 == (int *)0x0) {
    uVar1 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    cMyTrace::cMyTrace(local_24,
                       "static bool Global::CBossTowerFunc::GetItem(CUser*, int, bool, char)",0xb7,5
                      );
    cMyTrace::operator()(local_24,"bossTower not find : charac_no - %u",uVar1);
  }
  else {
    local_d = (**(code **)(*local_14 + 0x28))(local_14,param_1,param_2,param_3,(int)param_4);
    if (local_d != '\0') {
      PacketGuard::PacketGuard(local_30);
                    /* try { // try from 08146a1e to 08146a5a has its CatchHandler @ 08146a5d */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,1,0x2e);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,1);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
      CUser::Send(param_1,local_30);
      PacketGuard::~PacketGuard(local_30);
    }
  }
  return 1;
}
```

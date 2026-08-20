# dispatch_sig

`_ZN23Inter_MonitorUserGetout12dispatch_sigEP5CUserPci`

`Inter_MonitorUserGetout::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_MonitorUserGetout` | `0x084c8b0c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084c8b0c  _ZN23Inter_MonitorUserGetout12dispatch_sigEP5CUserPci
#           Inter_MonitorUserGetout::dispatch_sig(CUser*, char*, int)
# range [0x084c8b0c, 0x084c8c4d]
084c8b0c +0x000:  push   %ebp
084c8b0d +0x001:  mov    %esp,%ebp
084c8b0f +0x003:  push   %esi
084c8b10 +0x004:  push   %ebx
084c8b11 +0x005:  sub    $0x40,%esp
084c8b14 +0x008:  mov    0x10(%ebp),%eax
084c8b17 +0x00b:  mov    %eax,-0x10(%ebp)
084c8b1a +0x00e:  mov    -0x10(%ebp),%eax
084c8b1d +0x011:  mov    0xa(%eax),%ebx
084c8b20 +0x014:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
084c8b25 +0x019:  mov    %ebx,0x4(%esp)
084c8b29 +0x01d:  mov    %eax,(%esp)
084c8b2c +0x020:  call   082948c6 <_ZN12CGameManager14GetUserByAccIdEj>  ; CGameManager::GetUserByAccId(unsigned int)
084c8b31 +0x025:  mov    %eax,-0xc(%ebp)
084c8b34 +0x028:  cmpl   $0x0,-0xc(%ebp)
084c8b38 +0x02c:  jne    084c8b44 <+0x38>
084c8b3a +0x02e:  mov    $0x0,%ebx
084c8b3f +0x033:  jmp    084c8c45 <+0x139>
084c8b44 +0x038:  lea    -0x2c(%ebp),%eax
084c8b47 +0x03b:  mov    %eax,(%esp)
084c8b4a +0x03e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084c8b4f +0x043:  movl   $0x1,0x8(%esp)
084c8b57 +0x04b:  movl   $0x1,0x4(%esp)
084c8b5f +0x053:  lea    -0x2c(%ebp),%eax
084c8b62 +0x056:  mov    %eax,(%esp)
084c8b65 +0x059:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084c8b6a +0x05e:  movl   $0x0,0x4(%esp)
084c8b72 +0x066:  lea    -0x2c(%ebp),%eax
084c8b75 +0x069:  mov    %eax,(%esp)
084c8b78 +0x06c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084c8b7d +0x071:  movl   $0x41,0x4(%esp)
084c8b85 +0x079:  lea    -0x2c(%ebp),%eax
084c8b88 +0x07c:  mov    %eax,(%esp)
084c8b8b +0x07f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084c8b90 +0x084:  movl   $0x1,0x4(%esp)
084c8b98 +0x08c:  lea    -0x2c(%ebp),%eax
084c8b9b +0x08f:  mov    %eax,(%esp)
084c8b9e +0x092:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084c8ba3 +0x097:  lea    -0x2c(%ebp),%eax
084c8ba6 +0x09a:  mov    %eax,0x4(%esp)
084c8baa +0x09e:  mov    -0xc(%ebp),%eax
084c8bad +0x0a1:  mov    %eax,(%esp)
084c8bb0 +0x0a4:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084c8bb5 +0x0a9:  movl   $0x0,0xc(%esp)
084c8bbd +0x0b1:  movl   $0x1,0x8(%esp)
084c8bc5 +0x0b9:  movl   $0xf,0x4(%esp)
084c8bcd +0x0c1:  mov    -0xc(%ebp),%eax
084c8bd0 +0x0c4:  mov    %eax,(%esp)
084c8bd3 +0x0c7:  call   086489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>  ; CUser::DisConnSig(DISCONN_SIG, bool, int)
084c8bd8 +0x0cc:  mov    -0x10(%ebp),%eax
084c8bdb +0x0cf:  mov    0xa(%eax),%ebx
084c8bde +0x0d2:  movl   $0x0,0xc(%esp)
084c8be6 +0x0da:  movl   $0x226c,0x8(%esp)
084c8bee +0x0e2:  movl   $&_ZZN23Inter_MonitorUserGetout12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084c8bf6 +0x0ea:  lea    -0x20(%ebp),%eax
084c8bf9 +0x0ed:  mov    %eax,(%esp)
084c8bfc +0x0f0:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084c8c01 +0x0f5:  mov    %ebx,0x8(%esp)
084c8c05 +0x0f9:  movl   $"강제 종료요청 ACCID: %d",0x4(%esp)
084c8c0d +0x101:  lea    -0x20(%ebp),%eax
084c8c10 +0x104:  mov    %eax,(%esp)
084c8c13 +0x107:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084c8c18 +0x10c:  mov    $0x0,%ebx
084c8c1d +0x111:  lea    -0x2c(%ebp),%eax
084c8c20 +0x114:  mov    %eax,(%esp)
084c8c23 +0x117:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084c8c28 +0x11c:  jmp    084c8c45 <+0x139>
084c8c2a +0x11e:  mov    %edx,%ebx
084c8c2c +0x120:  mov    %eax,%esi
084c8c2e +0x122:  lea    -0x2c(%ebp),%eax
084c8c31 +0x125:  mov    %eax,(%esp)
084c8c34 +0x128:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084c8c39 +0x12d:  mov    %esi,%eax
084c8c3b +0x12f:  mov    %ebx,%edx
084c8c3d +0x131:  mov    %eax,(%esp)
084c8c40 +0x134:  call   08ae3750 <_Unwind_Resume>
084c8c45 +0x139:  mov    %ebx,%eax
084c8c47 +0x13b:  add    $0x40,%esp
084c8c4a +0x13e:  pop    %ebx
084c8c4b +0x13f:  pop    %esi
084c8c4c +0x140:  pop    %ebp
084c8c4d +0x141:  ret
```

## 反编译 C

```c
// Inter_MonitorUserGetout::dispatch_sig @ 0x84c8b0c

/* Inter_MonitorUserGetout::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_MonitorUserGetout::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  CGameManager *this;
  PacketGuard local_30 [12];
  cMyTrace local_24 [16];
  int local_14;
  CUser *local_10;
  
  local_14 = param_3;
  uVar1 = *(uint *)(param_3 + 10);
  this = (CGameManager *)G_CGameManager();
  local_10 = (CUser *)CGameManager::GetUserByAccId(this,uVar1);
  if (local_10 != (CUser *)0x0) {
    PacketGuard::PacketGuard(local_30);
                    /* try { // try from 084c8b65 to 084c8c17 has its CatchHandler @ 084c8c2a */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,1,1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,0x41);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
    CUser::Send(local_10,local_30);
    CUser::DisConnSig(local_10,0xf,1,0);
    uVar2 = *(undefined4 *)(local_14 + 10);
    cMyTrace::cMyTrace(local_24,
                       "virtual int Inter_MonitorUserGetout::dispatch_sig(CUser*, char*, int)",
                       0x226c,0);
    cMyTrace::operator()(local_24,&DAT_08c8789d,uVar2);
    PacketGuard::~PacketGuard(local_30);
  }
  return 0;
}
```

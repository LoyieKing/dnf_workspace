# dispatch_sig

`_ZN18Inter_SessionClose12dispatch_sigEP5CUserPci`

`Inter_SessionClose::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_SessionClose` | `0x084c7af0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084c7af0  _ZN18Inter_SessionClose12dispatch_sigEP5CUserPci
#           Inter_SessionClose::dispatch_sig(CUser*, char*, int)
# range [0x084c7af0, 0x084c7c41]
084c7af0 +0x000:  push   %ebp
084c7af1 +0x001:  mov    %esp,%ebp
084c7af3 +0x003:  push   %esi
084c7af4 +0x004:  push   %ebx
084c7af5 +0x005:  sub    $0x40,%esp
084c7af8 +0x008:  mov    0x10(%ebp),%eax
084c7afb +0x00b:  mov    %eax,-0x10(%ebp)
084c7afe +0x00e:  mov    -0x10(%ebp),%eax
084c7b01 +0x011:  mov    (%eax),%ebx
084c7b03 +0x013:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
084c7b08 +0x018:  mov    %ebx,0x4(%esp)
084c7b0c +0x01c:  mov    %eax,(%esp)
084c7b0f +0x01f:  call   082948c6 <_ZN12CGameManager14GetUserByAccIdEj>  ; CGameManager::GetUserByAccId(unsigned int)
084c7b14 +0x024:  mov    %eax,-0xc(%ebp)
084c7b17 +0x027:  cmpl   $0x0,-0xc(%ebp)
084c7b1b +0x02b:  jne    084c7b27 <+0x37>
084c7b1d +0x02d:  mov    $0x0,%ebx
084c7b22 +0x032:  jmp    084c7c39 <+0x149>
084c7b27 +0x037:  lea    -0x2c(%ebp),%eax
084c7b2a +0x03a:  mov    %eax,(%esp)
084c7b2d +0x03d:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084c7b32 +0x042:  movl   $0x1,0x8(%esp)
084c7b3a +0x04a:  movl   $0x1,0x4(%esp)
084c7b42 +0x052:  lea    -0x2c(%ebp),%eax
084c7b45 +0x055:  mov    %eax,(%esp)
084c7b48 +0x058:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084c7b4d +0x05d:  movl   $0x0,0x4(%esp)
084c7b55 +0x065:  lea    -0x2c(%ebp),%eax
084c7b58 +0x068:  mov    %eax,(%esp)
084c7b5b +0x06b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084c7b60 +0x070:  movl   $0x12,0x4(%esp)
084c7b68 +0x078:  lea    -0x2c(%ebp),%eax
084c7b6b +0x07b:  mov    %eax,(%esp)
084c7b6e +0x07e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084c7b73 +0x083:  movl   $0x1,0x4(%esp)
084c7b7b +0x08b:  lea    -0x2c(%ebp),%eax
084c7b7e +0x08e:  mov    %eax,(%esp)
084c7b81 +0x091:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084c7b86 +0x096:  lea    -0x2c(%ebp),%eax
084c7b89 +0x099:  mov    %eax,0x4(%esp)
084c7b8d +0x09d:  mov    -0xc(%ebp),%eax
084c7b90 +0x0a0:  mov    %eax,(%esp)
084c7b93 +0x0a3:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084c7b98 +0x0a8:  mov    -0x10(%ebp),%eax
084c7b9b +0x0ab:  mov    (%eax),%eax
084c7b9d +0x0ad:  movl   $0x0,0x4(%esp)
084c7ba5 +0x0b5:  mov    %eax,(%esp)
084c7ba8 +0x0b8:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
084c7bad +0x0bd:  mov    %eax,%ebx
084c7baf +0x0bf:  movl   $0x0,0xc(%esp)
084c7bb7 +0x0c7:  movl   $0x2004,0x8(%esp)
084c7bbf +0x0cf:  movl   $&_ZZN18Inter_SessionClose12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084c7bc7 +0x0d7:  lea    -0x20(%ebp),%eax
084c7bca +0x0da:  mov    %eax,(%esp)
084c7bcd +0x0dd:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084c7bd2 +0x0e2:  mov    %ebx,0x8(%esp)
084c7bd6 +0x0e6:  movl   $"강제 종료요청 ACCID: %s",0x4(%esp)
084c7bde +0x0ee:  lea    -0x20(%ebp),%eax
084c7be1 +0x0f1:  mov    %eax,(%esp)
084c7be4 +0x0f4:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084c7be9 +0x0f9:  movl   $0x0,0xc(%esp)
084c7bf1 +0x101:  movl   $0x1,0x8(%esp)
084c7bf9 +0x109:  movl   $0xf,0x4(%esp)
084c7c01 +0x111:  mov    -0xc(%ebp),%eax
084c7c04 +0x114:  mov    %eax,(%esp)
084c7c07 +0x117:  call   086489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>  ; CUser::DisConnSig(DISCONN_SIG, bool, int)
084c7c0c +0x11c:  mov    $0x0,%ebx
084c7c11 +0x121:  lea    -0x2c(%ebp),%eax
084c7c14 +0x124:  mov    %eax,(%esp)
084c7c17 +0x127:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084c7c1c +0x12c:  jmp    084c7c39 <+0x149>
084c7c1e +0x12e:  mov    %edx,%ebx
084c7c20 +0x130:  mov    %eax,%esi
084c7c22 +0x132:  lea    -0x2c(%ebp),%eax
084c7c25 +0x135:  mov    %eax,(%esp)
084c7c28 +0x138:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084c7c2d +0x13d:  mov    %esi,%eax
084c7c2f +0x13f:  mov    %ebx,%edx
084c7c31 +0x141:  mov    %eax,(%esp)
084c7c34 +0x144:  call   08ae3750 <_Unwind_Resume>
084c7c39 +0x149:  mov    %ebx,%eax
084c7c3b +0x14b:  add    $0x40,%esp
084c7c3e +0x14e:  pop    %ebx
084c7c3f +0x14f:  pop    %esi
084c7c40 +0x150:  pop    %ebp
084c7c41 +0x151:  ret
```

## 反编译 C

```c
// Inter_SessionClose::dispatch_sig @ 0x84c7af0

/* Inter_SessionClose::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_SessionClose::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  uint uVar1;
  CGameManager *this;
  undefined4 uVar2;
  PacketGuard local_30 [12];
  cMyTrace local_24 [16];
  uint *local_14;
  CUser *local_10;
  
  local_14 = (uint *)param_3;
  uVar1 = *(uint *)param_3;
  this = (CGameManager *)G_CGameManager();
  local_10 = (CUser *)CGameManager::GetUserByAccId(this,uVar1);
  if (local_10 != (CUser *)0x0) {
    PacketGuard::PacketGuard(local_30);
                    /* try { // try from 084c7b48 to 084c7c0b has its CatchHandler @ 084c7c1e */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,1,1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,0x12);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
    CUser::Send(local_10,local_30);
    uVar2 = NumberToString(*local_14,0);
    cMyTrace::cMyTrace(local_24,"virtual int Inter_SessionClose::dispatch_sig(CUser*, char*, int)",
                       0x2004,0);
    cMyTrace::operator()(local_24,&DAT_08c8768a,uVar2);
    CUser::DisConnSig(local_10,0xf,1,0);
    PacketGuard::~PacketGuard(local_30);
  }
  return 0;
}
```

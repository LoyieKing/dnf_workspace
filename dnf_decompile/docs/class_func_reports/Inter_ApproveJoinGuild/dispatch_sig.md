# dispatch_sig

`_ZN22Inter_ApproveJoinGuild12dispatch_sigEP5CUserPci`

`Inter_ApproveJoinGuild::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_ApproveJoinGuild` | `0x084e3f0e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e3f0e  _ZN22Inter_ApproveJoinGuild12dispatch_sigEP5CUserPci
#           Inter_ApproveJoinGuild::dispatch_sig(CUser*, char*, int)
# range [0x084e3f0e, 0x084e4051]
084e3f0e +0x000:  push   %ebp
084e3f0f +0x001:  mov    %esp,%ebp
084e3f11 +0x003:  push   %esi
084e3f12 +0x004:  push   %ebx
084e3f13 +0x005:  sub    $0x20,%esp
084e3f16 +0x008:  mov    0x10(%ebp),%eax
084e3f19 +0x00b:  mov    %eax,-0xc(%ebp)
084e3f1c +0x00e:  mov    0xc(%ebp),%eax
084e3f1f +0x011:  mov    %eax,(%esp)
084e3f22 +0x014:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084e3f27 +0x019:  cmp    $0x2,%eax
084e3f2a +0x01c:  setle  %al
084e3f2d +0x01f:  test   %al,%al
084e3f2f +0x021:  je     084e3f3b <+0x2d>
084e3f31 +0x023:  mov    $0x0,%ebx
084e3f36 +0x028:  jmp    084e4048 <+0x13a>
084e3f3b +0x02d:  mov    -0xc(%ebp),%eax
084e3f3e +0x030:  mov    0xe(%eax),%ebx
084e3f41 +0x033:  mov    0xc(%ebp),%eax
084e3f44 +0x036:  mov    %eax,(%esp)
084e3f47 +0x039:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084e3f4c +0x03e:  cmp    %eax,%ebx
084e3f4e +0x040:  setne  %al
084e3f51 +0x043:  test   %al,%al
084e3f53 +0x045:  je     084e3f5f <+0x51>
084e3f55 +0x047:  mov    $0x0,%ebx
084e3f5a +0x04c:  jmp    084e4048 <+0x13a>
084e3f5f +0x051:  lea    -0x18(%ebp),%eax
084e3f62 +0x054:  mov    %eax,(%esp)
084e3f65 +0x057:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084e3f6a +0x05c:  movl   $0x15f,0x8(%esp)
084e3f72 +0x064:  movl   $0x1,0x4(%esp)
084e3f7a +0x06c:  lea    -0x18(%ebp),%eax
084e3f7d +0x06f:  mov    %eax,(%esp)
084e3f80 +0x072:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084e3f85 +0x077:  mov    -0xc(%ebp),%eax
084e3f88 +0x07a:  mov    0xa(%eax),%eax
084e3f8b +0x07d:  test   %eax,%eax
084e3f8d +0x07f:  je     084e3fce <+0xc0>
084e3f8f +0x081:  movl   $0x0,0x4(%esp)
084e3f97 +0x089:  lea    -0x18(%ebp),%eax
084e3f9a +0x08c:  mov    %eax,(%esp)
084e3f9d +0x08f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084e3fa2 +0x094:  mov    -0xc(%ebp),%eax
084e3fa5 +0x097:  mov    0xa(%eax),%eax
084e3fa8 +0x09a:  mov    %eax,0x4(%esp)
084e3fac +0x09e:  lea    -0x18(%ebp),%eax
084e3faf +0x0a1:  mov    %eax,(%esp)
084e3fb2 +0x0a4:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084e3fb7 +0x0a9:  mov    -0xc(%ebp),%eax
084e3fba +0x0ac:  mov    0x16(%eax),%eax
084e3fbd +0x0af:  mov    %eax,0x4(%esp)
084e3fc1 +0x0b3:  lea    -0x18(%ebp),%eax
084e3fc4 +0x0b6:  mov    %eax,(%esp)
084e3fc7 +0x0b9:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084e3fcc +0x0be:  jmp    084e3ff6 <+0xe8>
084e3fce +0x0c0:  movl   $0x1,0x4(%esp)
084e3fd6 +0x0c8:  lea    -0x18(%ebp),%eax
084e3fd9 +0x0cb:  mov    %eax,(%esp)
084e3fdc +0x0ce:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084e3fe1 +0x0d3:  mov    -0xc(%ebp),%eax
084e3fe4 +0x0d6:  mov    0x16(%eax),%eax
084e3fe7 +0x0d9:  mov    %eax,0x4(%esp)
084e3feb +0x0dd:  lea    -0x18(%ebp),%eax
084e3fee +0x0e0:  mov    %eax,(%esp)
084e3ff1 +0x0e3:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084e3ff6 +0x0e8:  movl   $0x1,0x4(%esp)
084e3ffe +0x0f0:  lea    -0x18(%ebp),%eax
084e4001 +0x0f3:  mov    %eax,(%esp)
084e4004 +0x0f6:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084e4009 +0x0fb:  lea    -0x18(%ebp),%eax
084e400c +0x0fe:  mov    %eax,0x4(%esp)
084e4010 +0x102:  mov    0xc(%ebp),%eax
084e4013 +0x105:  mov    %eax,(%esp)
084e4016 +0x108:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084e401b +0x10d:  mov    $0x0,%ebx
084e4020 +0x112:  lea    -0x18(%ebp),%eax
084e4023 +0x115:  mov    %eax,(%esp)
084e4026 +0x118:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e402b +0x11d:  jmp    084e4048 <+0x13a>
084e402d +0x11f:  mov    %edx,%ebx
084e402f +0x121:  mov    %eax,%esi
084e4031 +0x123:  lea    -0x18(%ebp),%eax
084e4034 +0x126:  mov    %eax,(%esp)
084e4037 +0x129:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e403c +0x12e:  mov    %esi,%eax
084e403e +0x130:  mov    %ebx,%edx
084e4040 +0x132:  mov    %eax,(%esp)
084e4043 +0x135:  call   08ae3750 <_Unwind_Resume>
084e4048 +0x13a:  mov    %ebx,%eax
084e404a +0x13c:  add    $0x20,%esp
084e404d +0x13f:  pop    %ebx
084e404e +0x140:  pop    %esi
084e404f +0x141:  pop    %ebp
084e4050 +0x142:  ret
084e4051 +0x143:  nop
```

## 反编译 C

```c
// Inter_ApproveJoinGuild::dispatch_sig @ 0x84e3f0e

/* Inter_ApproveJoinGuild::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_ApproveJoinGuild::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  PacketGuard local_1c [12];
  int local_10;
  
  local_10 = param_3;
  iVar1 = CUser::get_state((CUser *)param_2);
  if ((2 < iVar1) &&
     (iVar1 = *(int *)(local_10 + 0xe),
     iVar2 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2), iVar1 == iVar2)) {
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084e3f80 to 084e401a has its CatchHandler @ 084e402d */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x15f);
    if (*(int *)(local_10 + 10) == 0) {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0x16));
    }
    else {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 10));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0x16));
    }
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send((CUser *)param_2,local_1c);
    PacketGuard::~PacketGuard(local_1c);
  }
  return 0;
}
```

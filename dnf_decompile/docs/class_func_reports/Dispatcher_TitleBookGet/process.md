# process

`_ZN23Dispatcher_TitleBookGet7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_TitleBookGet::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_TitleBookGet` | `0x081d7ada` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d7ada  _ZN23Dispatcher_TitleBookGet7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_TitleBookGet::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081d7ada, 0x081d7cff]
081d7ada +0x000:  push   %ebp
081d7adb +0x001:  mov    %esp,%ebp
081d7add +0x003:  push   %esi
081d7ade +0x004:  push   %ebx
081d7adf +0x005:  sub    $0x40,%esp
081d7ae2 +0x008:  mov    0x10(%ebp),%eax
081d7ae5 +0x00b:  mov    %eax,-0x10(%ebp)
081d7ae8 +0x00e:  mov    0xc(%ebp),%eax
081d7aeb +0x011:  mov    %eax,(%esp)
081d7aee +0x014:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081d7af3 +0x019:  cmp    $0x2,%eax
081d7af6 +0x01c:  setle  %al
081d7af9 +0x01f:  test   %al,%al
081d7afb +0x021:  je     081d7b07 <+0x2d>
081d7afd +0x023:  mov    $0x0,%eax
081d7b02 +0x028:  jmp    081d7cf9 <+0x21f>
081d7b07 +0x02d:  mov    -0x10(%ebp),%eax
081d7b0a +0x030:  lea    0x11(%eax),%esi
081d7b0d +0x033:  mov    -0x10(%ebp),%eax
081d7b10 +0x036:  mov    0xd(%eax),%eax
081d7b13 +0x039:  mov    %eax,%ebx
081d7b15 +0x03b:  mov    -0x10(%ebp),%eax
081d7b18 +0x03e:  mov    0x15(%eax),%ecx
081d7b1b +0x041:  mov    -0x10(%ebp),%eax
081d7b1e +0x044:  mov    0x1d(%eax),%edx
081d7b21 +0x047:  mov    -0x10(%ebp),%eax
081d7b24 +0x04a:  mov    0x19(%eax),%eax
081d7b27 +0x04d:  mov    %esi,0x14(%esp)
081d7b2b +0x051:  mov    %ebx,0x10(%esp)
081d7b2f +0x055:  mov    %ecx,0xc(%esp)
081d7b33 +0x059:  mov    %edx,0x8(%esp)
081d7b37 +0x05d:  mov    %eax,0x4(%esp)
081d7b3b +0x061:  mov    0xc(%ebp),%eax
081d7b3e +0x064:  mov    %eax,(%esp)
081d7b41 +0x067:  call   086425c4 <_ZN10CTitleBook8getTitleEP5CUser24ENUM_TITLE_BOOK_CATEGORYii14ENUM_ITEMSPACERi>  ; CTitleBook::getTitle(CUser*, ENUM_TITLE_BOOK_CATEGORY, int, int, ENUM_ITEMSPACE, int&)
081d7b46 +0x06c:  mov    %eax,-0xc(%ebp)
081d7b49 +0x06f:  cmpl   $0x0,-0xc(%ebp)
081d7b4d +0x073:  je     081d7c1a <+0x140>
081d7b53 +0x079:  lea    -0x1c(%ebp),%eax
081d7b56 +0x07c:  mov    %eax,(%esp)
081d7b59 +0x07f:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081d7b5e +0x084:  movl   $0x19d,0x8(%esp)
081d7b66 +0x08c:  movl   $0x1,0x4(%esp)
081d7b6e +0x094:  lea    -0x1c(%ebp),%eax
081d7b71 +0x097:  mov    %eax,(%esp)
081d7b74 +0x09a:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081d7b79 +0x09f:  movl   $0x0,0x4(%esp)
081d7b81 +0x0a7:  lea    -0x1c(%ebp),%eax
081d7b84 +0x0aa:  mov    %eax,(%esp)
081d7b87 +0x0ad:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081d7b8c +0x0b2:  mov    -0xc(%ebp),%eax
081d7b8f +0x0b5:  mov    %eax,0x4(%esp)
081d7b93 +0x0b9:  lea    -0x1c(%ebp),%eax
081d7b96 +0x0bc:  mov    %eax,(%esp)
081d7b99 +0x0bf:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081d7b9e +0x0c4:  mov    -0x10(%ebp),%eax
081d7ba1 +0x0c7:  mov    0xd(%eax),%eax
081d7ba4 +0x0ca:  mov    %eax,0x4(%esp)
081d7ba8 +0x0ce:  lea    -0x1c(%ebp),%eax
081d7bab +0x0d1:  mov    %eax,(%esp)
081d7bae +0x0d4:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081d7bb3 +0x0d9:  mov    -0x10(%ebp),%eax
081d7bb6 +0x0dc:  mov    0x19(%eax),%eax
081d7bb9 +0x0df:  mov    %eax,0x4(%esp)
081d7bbd +0x0e3:  lea    -0x1c(%ebp),%eax
081d7bc0 +0x0e6:  mov    %eax,(%esp)
081d7bc3 +0x0e9:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081d7bc8 +0x0ee:  movl   $0x1,0x4(%esp)
081d7bd0 +0x0f6:  lea    -0x1c(%ebp),%eax
081d7bd3 +0x0f9:  mov    %eax,(%esp)
081d7bd6 +0x0fc:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081d7bdb +0x101:  lea    -0x1c(%ebp),%eax
081d7bde +0x104:  mov    %eax,0x4(%esp)
081d7be2 +0x108:  mov    0xc(%ebp),%eax
081d7be5 +0x10b:  mov    %eax,(%esp)
081d7be8 +0x10e:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081d7bed +0x113:  jmp    081d7c0a <+0x130>
081d7bef +0x115:  mov    %edx,%ebx
081d7bf1 +0x117:  mov    %eax,%esi
081d7bf3 +0x119:  lea    -0x1c(%ebp),%eax
081d7bf6 +0x11c:  mov    %eax,(%esp)
081d7bf9 +0x11f:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081d7bfe +0x124:  mov    %esi,%eax
081d7c00 +0x126:  mov    %ebx,%edx
081d7c02 +0x128:  mov    %eax,(%esp)
081d7c05 +0x12b:  call   08ae3750 <_Unwind_Resume>
081d7c0a +0x130:  lea    -0x1c(%ebp),%eax
081d7c0d +0x133:  mov    %eax,(%esp)
081d7c10 +0x136:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081d7c15 +0x13b:  jmp    081d7cf4 <+0x21a>
081d7c1a +0x140:  lea    -0x28(%ebp),%eax
081d7c1d +0x143:  mov    %eax,(%esp)
081d7c20 +0x146:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081d7c25 +0x14b:  movl   $0x19d,0x8(%esp)
081d7c2d +0x153:  movl   $0x1,0x4(%esp)
081d7c35 +0x15b:  lea    -0x28(%ebp),%eax
081d7c38 +0x15e:  mov    %eax,(%esp)
081d7c3b +0x161:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081d7c40 +0x166:  movl   $0x1,0x4(%esp)
081d7c48 +0x16e:  lea    -0x28(%ebp),%eax
081d7c4b +0x171:  mov    %eax,(%esp)
081d7c4e +0x174:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081d7c53 +0x179:  mov    -0x10(%ebp),%eax
081d7c56 +0x17c:  mov    0xd(%eax),%eax
081d7c59 +0x17f:  mov    %eax,0x4(%esp)
081d7c5d +0x183:  lea    -0x28(%ebp),%eax
081d7c60 +0x186:  mov    %eax,(%esp)
081d7c63 +0x189:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081d7c68 +0x18e:  mov    -0x10(%ebp),%eax
081d7c6b +0x191:  mov    0x11(%eax),%eax
081d7c6e +0x194:  mov    %eax,0x4(%esp)
081d7c72 +0x198:  lea    -0x28(%ebp),%eax
081d7c75 +0x19b:  mov    %eax,(%esp)
081d7c78 +0x19e:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081d7c7d +0x1a3:  mov    -0x10(%ebp),%eax
081d7c80 +0x1a6:  mov    0x19(%eax),%eax
081d7c83 +0x1a9:  mov    %eax,0x4(%esp)
081d7c87 +0x1ad:  lea    -0x28(%ebp),%eax
081d7c8a +0x1b0:  mov    %eax,(%esp)
081d7c8d +0x1b3:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081d7c92 +0x1b8:  mov    -0x10(%ebp),%eax
081d7c95 +0x1bb:  mov    0x1d(%eax),%eax
081d7c98 +0x1be:  mov    %eax,0x4(%esp)
081d7c9c +0x1c2:  lea    -0x28(%ebp),%eax
081d7c9f +0x1c5:  mov    %eax,(%esp)
081d7ca2 +0x1c8:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081d7ca7 +0x1cd:  movl   $0x1,0x4(%esp)
081d7caf +0x1d5:  lea    -0x28(%ebp),%eax
081d7cb2 +0x1d8:  mov    %eax,(%esp)
081d7cb5 +0x1db:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081d7cba +0x1e0:  lea    -0x28(%ebp),%eax
081d7cbd +0x1e3:  mov    %eax,0x4(%esp)
081d7cc1 +0x1e7:  mov    0xc(%ebp),%eax
081d7cc4 +0x1ea:  mov    %eax,(%esp)
081d7cc7 +0x1ed:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081d7ccc +0x1f2:  jmp    081d7ce9 <+0x20f>
081d7cce +0x1f4:  mov    %edx,%ebx
081d7cd0 +0x1f6:  mov    %eax,%esi
081d7cd2 +0x1f8:  lea    -0x28(%ebp),%eax
081d7cd5 +0x1fb:  mov    %eax,(%esp)
081d7cd8 +0x1fe:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081d7cdd +0x203:  mov    %esi,%eax
081d7cdf +0x205:  mov    %ebx,%edx
081d7ce1 +0x207:  mov    %eax,(%esp)
081d7ce4 +0x20a:  call   08ae3750 <_Unwind_Resume>
081d7ce9 +0x20f:  lea    -0x28(%ebp),%eax
081d7cec +0x212:  mov    %eax,(%esp)
081d7cef +0x215:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081d7cf4 +0x21a:  mov    $0x0,%eax
081d7cf9 +0x21f:  add    $0x40,%esp
081d7cfc +0x222:  pop    %ebx
081d7cfd +0x223:  pop    %esi
081d7cfe +0x224:  pop    %ebp
081d7cff +0x225:  ret
```

## 反编译 C

```c
// Dispatcher_TitleBookGet::process @ 0x81d7ada

/* Dispatcher_TitleBookGet::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 Dispatcher_TitleBookGet::process(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  int iVar1;
  PacketGuard local_2c [12];
  PacketGuard local_20 [12];
  ParamBase *local_14;
  int local_10;
  
  local_14 = param_3;
  iVar1 = CUser::get_state((CUser *)param_2);
  if (2 < iVar1) {
    local_10 = CTitleBook::getTitle
                         (param_2,*(undefined4 *)(local_14 + 0x19),*(undefined4 *)(local_14 + 0x1d),
                          *(undefined4 *)(local_14 + 0x15),*(undefined4 *)(local_14 + 0xd),
                          local_14 + 0x11);
    if (local_10 == 0) {
      PacketGuard::PacketGuard(local_2c);
                    /* try { // try from 081d7c3b to 081d7ccb has its CatchHandler @ 081d7cce */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_2c,1,0x19d);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,1);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,*(int *)(local_14 + 0xd));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,*(int *)(local_14 + 0x11));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,*(int *)(local_14 + 0x19));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,*(int *)(local_14 + 0x1d));
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_2c,true);
      CUser::Send((CUser *)param_2,local_2c);
      PacketGuard::~PacketGuard(local_2c);
    }
    else {
      PacketGuard::PacketGuard(local_20);
                    /* try { // try from 081d7b74 to 081d7bec has its CatchHandler @ 081d7bef */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,1,0x19d);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,local_10);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,*(int *)(local_14 + 0xd));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,*(int *)(local_14 + 0x19));
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
      CUser::Send((CUser *)param_2,local_20);
      PacketGuard::~PacketGuard(local_20);
    }
  }
  return 0;
}
```

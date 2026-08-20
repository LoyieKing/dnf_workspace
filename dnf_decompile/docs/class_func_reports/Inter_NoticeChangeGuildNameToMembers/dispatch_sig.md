# dispatch_sig

`_ZN36Inter_NoticeChangeGuildNameToMembers12dispatch_sigEP5CUserPci`

`Inter_NoticeChangeGuildNameToMembers::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_NoticeChangeGuildNameToMembers` | `0x084d51dc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084d51dc  _ZN36Inter_NoticeChangeGuildNameToMembers12dispatch_sigEP5CUserPci
#           Inter_NoticeChangeGuildNameToMembers::dispatch_sig(CUser*, char*, int)
# range [0x084d51dc, 0x084d5339]
084d51dc +0x000:  push   %ebp
084d51dd +0x001:  mov    %esp,%ebp
084d51df +0x003:  push   %esi
084d51e0 +0x004:  push   %ebx
084d51e1 +0x005:  sub    $0x40,%esp
084d51e4 +0x008:  mov    0x10(%ebp),%eax
084d51e7 +0x00b:  mov    %eax,-0x10(%ebp)
084d51ea +0x00e:  movl   $0xffffffff,0x4(%esp)
084d51f2 +0x016:  mov    0xc(%ebp),%eax
084d51f5 +0x019:  mov    %eax,(%esp)
084d51f8 +0x01c:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084d51fd +0x021:  mov    %eax,%edx
084d51ff +0x023:  mov    -0x10(%ebp),%eax
084d5202 +0x026:  mov    0xe(%eax),%eax
084d5205 +0x029:  cmp    %eax,%edx
084d5207 +0x02b:  setne  %al
084d520a +0x02e:  test   %al,%al
084d520c +0x030:  je     084d5265 <+0x89>
084d520e +0x032:  mov    -0x10(%ebp),%eax
084d5211 +0x035:  mov    0xe(%eax),%ebx
084d5214 +0x038:  movl   $0xffffffff,0x4(%esp)
084d521c +0x040:  mov    0xc(%ebp),%eax
084d521f +0x043:  mov    %eax,(%esp)
084d5222 +0x046:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084d5227 +0x04b:  mov    %ebx,0x18(%esp)
084d522b +0x04f:  mov    %eax,0x14(%esp)
084d522f +0x053:  movl   $"Inter_NoticeChangeGuildNameToMembers::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharId(%d)",0x10(%esp)
084d5237 +0x05b:  movl   $0x36ca,0xc(%esp)
084d523f +0x063:  movl   $&_ZZN36Inter_NoticeChangeGuildNameToMembers12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
084d5247 +0x06b:  movl   $"InterDispatcher.cpp",0x4(%esp)
084d524f +0x073:  movl   $0x1,(%esp)
084d5256 +0x07a:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084d525b +0x07f:  mov    $0x0,%ebx
084d5260 +0x084:  jmp    084d5331 <+0x155>
084d5265 +0x089:  lea    -0x1c(%ebp),%eax
084d5268 +0x08c:  mov    %eax,(%esp)
084d526b +0x08f:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084d5270 +0x094:  movl   $0xda,0x8(%esp)
084d5278 +0x09c:  movl   $0x0,0x4(%esp)
084d5280 +0x0a4:  lea    -0x1c(%ebp),%eax
084d5283 +0x0a7:  mov    %eax,(%esp)
084d5286 +0x0aa:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084d528b +0x0af:  mov    -0x10(%ebp),%eax
084d528e +0x0b2:  add    $0x16,%eax
084d5291 +0x0b5:  mov    %eax,(%esp)
084d5294 +0x0b8:  call   0807e3b0 <_init+0xca8>
084d5299 +0x0bd:  mov    %eax,-0xc(%ebp)
084d529c +0x0c0:  mov    -0xc(%ebp),%eax
084d529f +0x0c3:  mov    %eax,0x4(%esp)
084d52a3 +0x0c7:  lea    -0x1c(%ebp),%eax
084d52a6 +0x0ca:  mov    %eax,(%esp)
084d52a9 +0x0cd:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084d52ae +0x0d2:  mov    -0x10(%ebp),%eax
084d52b1 +0x0d5:  lea    0x16(%eax),%edx
084d52b4 +0x0d8:  mov    -0xc(%ebp),%eax
084d52b7 +0x0db:  mov    %eax,0x8(%esp)
084d52bb +0x0df:  mov    %edx,0x4(%esp)
084d52bf +0x0e3:  lea    -0x1c(%ebp),%eax
084d52c2 +0x0e6:  mov    %eax,(%esp)
084d52c5 +0x0e9:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084d52ca +0x0ee:  movl   $0x1,0x4(%esp)
084d52d2 +0x0f6:  lea    -0x1c(%ebp),%eax
084d52d5 +0x0f9:  mov    %eax,(%esp)
084d52d8 +0x0fc:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084d52dd +0x101:  lea    -0x1c(%ebp),%eax
084d52e0 +0x104:  mov    %eax,0x4(%esp)
084d52e4 +0x108:  mov    0xc(%ebp),%eax
084d52e7 +0x10b:  mov    %eax,(%esp)
084d52ea +0x10e:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084d52ef +0x113:  mov    -0x10(%ebp),%eax
084d52f2 +0x116:  add    $0x16,%eax
084d52f5 +0x119:  mov    %eax,0x4(%esp)
084d52f9 +0x11d:  mov    0xc(%ebp),%eax
084d52fc +0x120:  mov    %eax,(%esp)
084d52ff +0x123:  call   084ece64 <_GLOBAL__I__Z7getUserj+0x3e16>  ; global constructors keyed to getUser(unsigned int)+0x3e16
084d5304 +0x128:  mov    $0x0,%ebx
084d5309 +0x12d:  lea    -0x1c(%ebp),%eax
084d530c +0x130:  mov    %eax,(%esp)
084d530f +0x133:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d5314 +0x138:  jmp    084d5331 <+0x155>
084d5316 +0x13a:  mov    %edx,%ebx
084d5318 +0x13c:  mov    %eax,%esi
084d531a +0x13e:  lea    -0x1c(%ebp),%eax
084d531d +0x141:  mov    %eax,(%esp)
084d5320 +0x144:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d5325 +0x149:  mov    %esi,%eax
084d5327 +0x14b:  mov    %ebx,%edx
084d5329 +0x14d:  mov    %eax,(%esp)
084d532c +0x150:  call   08ae3750 <_Unwind_Resume>
084d5331 +0x155:  mov    %ebx,%eax
084d5333 +0x157:  add    $0x40,%esp
084d5336 +0x15a:  pop    %ebx
084d5337 +0x15b:  pop    %esi
084d5338 +0x15c:  pop    %ebp
084d5339 +0x15d:  ret
```

## 反编译 C

```c
// Inter_NoticeChangeGuildNameToMembers::dispatch_sig @ 0x84d51dc

/* Inter_NoticeChangeGuildNameToMembers::dispatch_sig(CUser*, char*, int) */

undefined4
Inter_NoticeChangeGuildNameToMembers::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  PacketGuard local_20 [12];
  int local_14;
  size_t local_10;
  
  local_14 = param_3;
  iVar2 = CUser::get_charac_no((CUser *)param_2,-1);
  if (iVar2 == *(int *)(local_14 + 0xe)) {
    PacketGuard::PacketGuard(local_20);
                    /* try { // try from 084d5286 to 084d52ee has its CatchHandler @ 084d5316 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0xda);
    local_10 = strlen((char *)(local_14 + 0x16));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,local_10);
    InterfacePacketBuf::put_str((InterfacePacketBuf *)local_20,(char *)(local_14 + 0x16),local_10);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
    CUser::Send((CUser *)param_2,local_20);
    CUser::ChangeGuildName((CUser *)param_2,(char *)(local_14 + 0x16));
    PacketGuard::~PacketGuard(local_20);
  }
  else {
    uVar1 = *(undefined4 *)(local_14 + 0xe);
    uVar3 = CUser::get_charac_no((CUser *)param_2,-1);
    LogManager::logFormat
              (1,"InterDispatcher.cpp",
               "virtual int Inter_NoticeChangeGuildNameToMembers::dispatch_sig(CUser*, char*, int)",
               0x36ca,
               "Inter_NoticeChangeGuildNameToMembers::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharId(%d)"
               ,uVar3,uVar1);
  }
  return 0;
}
```

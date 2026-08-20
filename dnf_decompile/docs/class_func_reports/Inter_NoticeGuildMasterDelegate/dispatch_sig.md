# dispatch_sig

`_ZN31Inter_NoticeGuildMasterDelegate12dispatch_sigEP5CUserPci`

`Inter_NoticeGuildMasterDelegate::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_NoticeGuildMasterDelegate` | `0x084c9a32` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084c9a32  _ZN31Inter_NoticeGuildMasterDelegate12dispatch_sigEP5CUserPci
#           Inter_NoticeGuildMasterDelegate::dispatch_sig(CUser*, char*, int)
# range [0x084c9a32, 0x084c9b99]
084c9a32 +0x000:  push   %ebp
084c9a33 +0x001:  mov    %esp,%ebp
084c9a35 +0x003:  push   %esi
084c9a36 +0x004:  push   %ebx
084c9a37 +0x005:  sub    $0x40,%esp
084c9a3a +0x008:  mov    0xc(%ebp),%eax
084c9a3d +0x00b:  mov    %eax,(%esp)
084c9a40 +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084c9a45 +0x013:  test   %eax,%eax
084c9a47 +0x015:  sete   %al
084c9a4a +0x018:  test   %al,%al
084c9a4c +0x01a:  je     084c9a58 <+0x26>
084c9a4e +0x01c:  mov    $0x0,%ebx
084c9a53 +0x021:  jmp    084c9b90 <+0x15e>
084c9a58 +0x026:  mov    0x10(%ebp),%eax
084c9a5b +0x029:  mov    %eax,-0x10(%ebp)
084c9a5e +0x02c:  movl   $0xffffffff,0x4(%esp)
084c9a66 +0x034:  mov    0xc(%ebp),%eax
084c9a69 +0x037:  mov    %eax,(%esp)
084c9a6c +0x03a:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084c9a71 +0x03f:  mov    %eax,%edx
084c9a73 +0x041:  mov    -0x10(%ebp),%eax
084c9a76 +0x044:  mov    0xa(%eax),%eax
084c9a79 +0x047:  cmp    %eax,%edx
084c9a7b +0x049:  setne  %al
084c9a7e +0x04c:  test   %al,%al
084c9a80 +0x04e:  je     084c9ad9 <+0xa7>
084c9a82 +0x050:  mov    -0x10(%ebp),%eax
084c9a85 +0x053:  mov    0xa(%eax),%ebx
084c9a88 +0x056:  movl   $0xffffffff,0x4(%esp)
084c9a90 +0x05e:  mov    0xc(%ebp),%eax
084c9a93 +0x061:  mov    %eax,(%esp)
084c9a96 +0x064:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084c9a9b +0x069:  mov    %ebx,0x18(%esp)
084c9a9f +0x06d:  mov    %eax,0x14(%esp)
084c9aa3 +0x071:  movl   $"Inter_NoticeGuildMasterDelegate::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)",0x10(%esp)
084c9aab +0x079:  movl   $0x23a0,0xc(%esp)
084c9ab3 +0x081:  movl   $&_ZZN31Inter_NoticeGuildMasterDelegate12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
084c9abb +0x089:  movl   $"InterDispatcher.cpp",0x4(%esp)
084c9ac3 +0x091:  movl   $0x1,(%esp)
084c9aca +0x098:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084c9acf +0x09d:  mov    $0x0,%ebx
084c9ad4 +0x0a2:  jmp    084c9b90 <+0x15e>
084c9ad9 +0x0a7:  lea    -0x1c(%ebp),%eax
084c9adc +0x0aa:  mov    %eax,(%esp)
084c9adf +0x0ad:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084c9ae4 +0x0b2:  movl   $0x95,0x8(%esp)
084c9aec +0x0ba:  movl   $0x0,0x4(%esp)
084c9af4 +0x0c2:  lea    -0x1c(%ebp),%eax
084c9af7 +0x0c5:  mov    %eax,(%esp)
084c9afa +0x0c8:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084c9aff +0x0cd:  mov    -0x10(%ebp),%eax
084c9b02 +0x0d0:  add    $0x12,%eax
084c9b05 +0x0d3:  mov    %eax,(%esp)
084c9b08 +0x0d6:  call   0807e3b0 <_init+0xca8>
084c9b0d +0x0db:  mov    %eax,-0xc(%ebp)
084c9b10 +0x0de:  mov    -0xc(%ebp),%eax
084c9b13 +0x0e1:  mov    %eax,0x4(%esp)
084c9b17 +0x0e5:  lea    -0x1c(%ebp),%eax
084c9b1a +0x0e8:  mov    %eax,(%esp)
084c9b1d +0x0eb:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084c9b22 +0x0f0:  mov    -0x10(%ebp),%eax
084c9b25 +0x0f3:  lea    0x12(%eax),%edx
084c9b28 +0x0f6:  mov    -0xc(%ebp),%eax
084c9b2b +0x0f9:  mov    %eax,0x8(%esp)
084c9b2f +0x0fd:  mov    %edx,0x4(%esp)
084c9b33 +0x101:  lea    -0x1c(%ebp),%eax
084c9b36 +0x104:  mov    %eax,(%esp)
084c9b39 +0x107:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084c9b3e +0x10c:  movl   $0x1,0x4(%esp)
084c9b46 +0x114:  lea    -0x1c(%ebp),%eax
084c9b49 +0x117:  mov    %eax,(%esp)
084c9b4c +0x11a:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084c9b51 +0x11f:  lea    -0x1c(%ebp),%eax
084c9b54 +0x122:  mov    %eax,0x4(%esp)
084c9b58 +0x126:  mov    0xc(%ebp),%eax
084c9b5b +0x129:  mov    %eax,(%esp)
084c9b5e +0x12c:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084c9b63 +0x131:  mov    $0x0,%ebx
084c9b68 +0x136:  lea    -0x1c(%ebp),%eax
084c9b6b +0x139:  mov    %eax,(%esp)
084c9b6e +0x13c:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084c9b73 +0x141:  jmp    084c9b90 <+0x15e>
084c9b75 +0x143:  mov    %edx,%ebx
084c9b77 +0x145:  mov    %eax,%esi
084c9b79 +0x147:  lea    -0x1c(%ebp),%eax
084c9b7c +0x14a:  mov    %eax,(%esp)
084c9b7f +0x14d:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084c9b84 +0x152:  mov    %esi,%eax
084c9b86 +0x154:  mov    %ebx,%edx
084c9b88 +0x156:  mov    %eax,(%esp)
084c9b8b +0x159:  call   08ae3750 <_Unwind_Resume>
084c9b90 +0x15e:  mov    %ebx,%eax
084c9b92 +0x160:  add    $0x40,%esp
084c9b95 +0x163:  pop    %ebx
084c9b96 +0x164:  pop    %esi
084c9b97 +0x165:  pop    %ebp
084c9b98 +0x166:  ret
084c9b99 +0x167:  nop
```

## 反编译 C

```c
// Inter_NoticeGuildMasterDelegate::dispatch_sig @ 0x84c9a32

/* Inter_NoticeGuildMasterDelegate::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_NoticeGuildMasterDelegate::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  PacketGuard local_20 [12];
  int local_14;
  size_t local_10;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (iVar2 != 0) {
    local_14 = param_3;
    iVar2 = CUser::get_charac_no((CUser *)param_2,-1);
    if (iVar2 == *(int *)(local_14 + 10)) {
      PacketGuard::PacketGuard(local_20);
                    /* try { // try from 084c9afa to 084c9b62 has its CatchHandler @ 084c9b75 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0x95);
      local_10 = strlen((char *)(local_14 + 0x12));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,local_10);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_20,(char *)(local_14 + 0x12),local_10)
      ;
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
      CUser::Send((CUser *)param_2,local_20);
      PacketGuard::~PacketGuard(local_20);
    }
    else {
      uVar1 = *(undefined4 *)(local_14 + 10);
      uVar3 = CUser::get_charac_no((CUser *)param_2,-1);
      LogManager::logFormat
                (1,"InterDispatcher.cpp",
                 "virtual int Inter_NoticeGuildMasterDelegate::dispatch_sig(CUser*, char*, int)",
                 0x23a0,
                 "Inter_NoticeGuildMasterDelegate::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)"
                 ,uVar3,uVar1);
    }
  }
  return 0;
}
```

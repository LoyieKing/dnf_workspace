# dispatch_sig

`_ZN35Inter_GuildReplyGuildMasterDelegate12dispatch_sigEP5CUserPci`

`Inter_GuildReplyGuildMasterDelegate::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_GuildReplyGuildMasterDelegate` | `0x084c9b9a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084c9b9a  _ZN35Inter_GuildReplyGuildMasterDelegate12dispatch_sigEP5CUserPci
#           Inter_GuildReplyGuildMasterDelegate::dispatch_sig(CUser*, char*, int)
# range [0x084c9b9a, 0x084c9d09]
084c9b9a +0x000:  push   %ebp
084c9b9b +0x001:  mov    %esp,%ebp
084c9b9d +0x003:  push   %esi
084c9b9e +0x004:  push   %ebx
084c9b9f +0x005:  sub    $0x30,%esp
084c9ba2 +0x008:  mov    0xc(%ebp),%eax
084c9ba5 +0x00b:  mov    %eax,(%esp)
084c9ba8 +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084c9bad +0x013:  test   %eax,%eax
084c9baf +0x015:  sete   %al
084c9bb2 +0x018:  test   %al,%al
084c9bb4 +0x01a:  je     084c9bc0 <+0x26>
084c9bb6 +0x01c:  mov    $0x0,%ebx
084c9bbb +0x021:  jmp    084c9d00 <+0x166>
084c9bc0 +0x026:  mov    0x10(%ebp),%eax
084c9bc3 +0x029:  mov    %eax,-0xc(%ebp)
084c9bc6 +0x02c:  movl   $0xffffffff,0x4(%esp)
084c9bce +0x034:  mov    0xc(%ebp),%eax
084c9bd1 +0x037:  mov    %eax,(%esp)
084c9bd4 +0x03a:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084c9bd9 +0x03f:  mov    %eax,%edx
084c9bdb +0x041:  mov    -0xc(%ebp),%eax
084c9bde +0x044:  mov    0xa(%eax),%eax
084c9be1 +0x047:  cmp    %eax,%edx
084c9be3 +0x049:  setne  %al
084c9be6 +0x04c:  test   %al,%al
084c9be8 +0x04e:  je     084c9c41 <+0xa7>
084c9bea +0x050:  mov    -0xc(%ebp),%eax
084c9bed +0x053:  mov    0xa(%eax),%ebx
084c9bf0 +0x056:  movl   $0xffffffff,0x4(%esp)
084c9bf8 +0x05e:  mov    0xc(%ebp),%eax
084c9bfb +0x061:  mov    %eax,(%esp)
084c9bfe +0x064:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084c9c03 +0x069:  mov    %ebx,0x18(%esp)
084c9c07 +0x06d:  mov    %eax,0x14(%esp)
084c9c0b +0x071:  movl   $"Inter_NoticeGuildMasterDelegate::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)",0x10(%esp)
084c9c13 +0x079:  movl   $0x23ba,0xc(%esp)
084c9c1b +0x081:  movl   $&_ZZN35Inter_GuildReplyGuildMasterDelegate12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
084c9c23 +0x089:  movl   $"InterDispatcher.cpp",0x4(%esp)
084c9c2b +0x091:  movl   $0x1,(%esp)
084c9c32 +0x098:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084c9c37 +0x09d:  mov    $0x0,%ebx
084c9c3c +0x0a2:  jmp    084c9d00 <+0x166>
084c9c41 +0x0a7:  lea    -0x18(%ebp),%eax
084c9c44 +0x0aa:  mov    %eax,(%esp)
084c9c47 +0x0ad:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084c9c4c +0x0b2:  movl   $0x9e,0x8(%esp)
084c9c54 +0x0ba:  movl   $0x1,0x4(%esp)
084c9c5c +0x0c2:  lea    -0x18(%ebp),%eax
084c9c5f +0x0c5:  mov    %eax,(%esp)
084c9c62 +0x0c8:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084c9c67 +0x0cd:  mov    -0xc(%ebp),%eax
084c9c6a +0x0d0:  mov    0x12(%eax),%eax
084c9c6d +0x0d3:  test   %eax,%eax
084c9c6f +0x0d5:  jne    084c9c86 <+0xec>
084c9c71 +0x0d7:  movl   $0x1,0x4(%esp)
084c9c79 +0x0df:  lea    -0x18(%ebp),%eax
084c9c7c +0x0e2:  mov    %eax,(%esp)
084c9c7f +0x0e5:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084c9c84 +0x0ea:  jmp    084c9cae <+0x114>
084c9c86 +0x0ec:  movl   $0x0,0x4(%esp)
084c9c8e +0x0f4:  lea    -0x18(%ebp),%eax
084c9c91 +0x0f7:  mov    %eax,(%esp)
084c9c94 +0x0fa:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084c9c99 +0x0ff:  mov    -0xc(%ebp),%eax
084c9c9c +0x102:  mov    0x12(%eax),%eax
084c9c9f +0x105:  mov    %eax,0x4(%esp)
084c9ca3 +0x109:  lea    -0x18(%ebp),%eax
084c9ca6 +0x10c:  mov    %eax,(%esp)
084c9ca9 +0x10f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084c9cae +0x114:  movl   $0x1,0x4(%esp)
084c9cb6 +0x11c:  lea    -0x18(%ebp),%eax
084c9cb9 +0x11f:  mov    %eax,(%esp)
084c9cbc +0x122:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084c9cc1 +0x127:  lea    -0x18(%ebp),%eax
084c9cc4 +0x12a:  mov    %eax,0x4(%esp)
084c9cc8 +0x12e:  mov    0xc(%ebp),%eax
084c9ccb +0x131:  mov    %eax,(%esp)
084c9cce +0x134:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084c9cd3 +0x139:  mov    $0x0,%ebx
084c9cd8 +0x13e:  lea    -0x18(%ebp),%eax
084c9cdb +0x141:  mov    %eax,(%esp)
084c9cde +0x144:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084c9ce3 +0x149:  jmp    084c9d00 <+0x166>
084c9ce5 +0x14b:  mov    %edx,%ebx
084c9ce7 +0x14d:  mov    %eax,%esi
084c9ce9 +0x14f:  lea    -0x18(%ebp),%eax
084c9cec +0x152:  mov    %eax,(%esp)
084c9cef +0x155:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084c9cf4 +0x15a:  mov    %esi,%eax
084c9cf6 +0x15c:  mov    %ebx,%edx
084c9cf8 +0x15e:  mov    %eax,(%esp)
084c9cfb +0x161:  call   08ae3750 <_Unwind_Resume>
084c9d00 +0x166:  mov    %ebx,%eax
084c9d02 +0x168:  add    $0x30,%esp
084c9d05 +0x16b:  pop    %ebx
084c9d06 +0x16c:  pop    %esi
084c9d07 +0x16d:  pop    %ebp
084c9d08 +0x16e:  ret
084c9d09 +0x16f:  nop
```

## 反编译 C

```c
// Inter_GuildReplyGuildMasterDelegate::dispatch_sig @ 0x84c9b9a

/* Inter_GuildReplyGuildMasterDelegate::dispatch_sig(CUser*, char*, int) */

undefined4
Inter_GuildReplyGuildMasterDelegate::dispatch_sig(CUser *param_1,char *param_2,int param_3)

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
                    /* try { // try from 084c9c62 to 084c9cd2 has its CatchHandler @ 084c9ce5 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x9e);
      if (*(int *)(local_10 + 0x12) == 0) {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
      }
      else {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0x12));
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
                 "virtual int Inter_GuildReplyGuildMasterDelegate::dispatch_sig(CUser*, char*, int)"
                 ,0x23ba,
                 "Inter_NoticeGuildMasterDelegate::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)"
                 ,uVar3,uVar1);
    }
  }
  return 0;
}
```

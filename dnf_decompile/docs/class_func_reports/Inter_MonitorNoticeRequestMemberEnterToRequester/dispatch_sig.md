# dispatch_sig

`_ZN48Inter_MonitorNoticeRequestMemberEnterToRequester12dispatch_sigEP5CUserPci`

`Inter_MonitorNoticeRequestMemberEnterToRequester::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_MonitorNoticeRequestMemberEnterToRequester` | `0x084ccba0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084ccba0  _ZN48Inter_MonitorNoticeRequestMemberEnterToRequester12dispatch_sigEP5CUserPci
#           Inter_MonitorNoticeRequestMemberEnterToRequester::dispatch_sig(CUser*, char*, int)
# range [0x084ccba0, 0x084ccd53]
084ccba0 +0x000:  push   %ebp
084ccba1 +0x001:  mov    %esp,%ebp
084ccba3 +0x003:  push   %esi
084ccba4 +0x004:  push   %ebx
084ccba5 +0x005:  sub    $0x40,%esp
084ccba8 +0x008:  mov    0xc(%ebp),%eax
084ccbab +0x00b:  mov    %eax,(%esp)
084ccbae +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084ccbb3 +0x013:  test   %eax,%eax
084ccbb5 +0x015:  sete   %al
084ccbb8 +0x018:  test   %al,%al
084ccbba +0x01a:  je     084ccbc6 <+0x26>
084ccbbc +0x01c:  mov    $0x0,%ebx
084ccbc1 +0x021:  jmp    084ccd4a <+0x1aa>
084ccbc6 +0x026:  mov    0x10(%ebp),%eax
084ccbc9 +0x029:  mov    %eax,-0x10(%ebp)
084ccbcc +0x02c:  movl   $0xffffffff,0x4(%esp)
084ccbd4 +0x034:  mov    0xc(%ebp),%eax
084ccbd7 +0x037:  mov    %eax,(%esp)
084ccbda +0x03a:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084ccbdf +0x03f:  mov    %eax,%edx
084ccbe1 +0x041:  mov    -0x10(%ebp),%eax
084ccbe4 +0x044:  mov    0xe(%eax),%eax
084ccbe7 +0x047:  cmp    %eax,%edx
084ccbe9 +0x049:  setne  %al
084ccbec +0x04c:  test   %al,%al
084ccbee +0x04e:  je     084ccc47 <+0xa7>
084ccbf0 +0x050:  mov    -0x10(%ebp),%eax
084ccbf3 +0x053:  mov    0xe(%eax),%ebx
084ccbf6 +0x056:  movl   $0xffffffff,0x4(%esp)
084ccbfe +0x05e:  mov    0xc(%ebp),%eax
084ccc01 +0x061:  mov    %eax,(%esp)
084ccc04 +0x064:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084ccc09 +0x069:  mov    %ebx,0x18(%esp)
084ccc0d +0x06d:  mov    %eax,0x14(%esp)
084ccc11 +0x071:  movl   $"MEMBER : Inter_MonitorNoticeRequestMemberEnterToRequester::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)",0x10(%esp)
084ccc19 +0x079:  movl   $0x27e8,0xc(%esp)
084ccc21 +0x081:  movl   $&_ZZN48Inter_MonitorNoticeRequestMemberEnterToRequester12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
084ccc29 +0x089:  movl   $"InterDispatcher.cpp",0x4(%esp)
084ccc31 +0x091:  movl   $0x1,(%esp)
084ccc38 +0x098:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084ccc3d +0x09d:  mov    $0x0,%ebx
084ccc42 +0x0a2:  jmp    084ccd4a <+0x1aa>
084ccc47 +0x0a7:  lea    -0x1c(%ebp),%eax
084ccc4a +0x0aa:  mov    %eax,(%esp)
084ccc4d +0x0ad:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084ccc52 +0x0b2:  movl   $0x4f,0x8(%esp)
084ccc5a +0x0ba:  movl   $0x1,0x4(%esp)
084ccc62 +0x0c2:  lea    -0x1c(%ebp),%eax
084ccc65 +0x0c5:  mov    %eax,(%esp)
084ccc68 +0x0c8:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084ccc6d +0x0cd:  mov    -0x10(%ebp),%eax
084ccc70 +0x0d0:  movzbl 0x12(%eax),%eax
084ccc74 +0x0d4:  test   %al,%al
084ccc76 +0x0d6:  jne    084ccc8d <+0xed>
084ccc78 +0x0d8:  movl   $0x1,0x4(%esp)
084ccc80 +0x0e0:  lea    -0x1c(%ebp),%eax
084ccc83 +0x0e3:  mov    %eax,(%esp)
084ccc86 +0x0e6:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084ccc8b +0x0eb:  jmp    084cccb9 <+0x119>
084ccc8d +0x0ed:  movl   $0x0,0x4(%esp)
084ccc95 +0x0f5:  lea    -0x1c(%ebp),%eax
084ccc98 +0x0f8:  mov    %eax,(%esp)
084ccc9b +0x0fb:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084ccca0 +0x100:  mov    -0x10(%ebp),%eax
084ccca3 +0x103:  movzbl 0x12(%eax),%eax
084ccca7 +0x107:  movzbl %al,%eax
084cccaa +0x10a:  mov    %eax,0x4(%esp)
084cccae +0x10e:  lea    -0x1c(%ebp),%eax
084cccb1 +0x111:  mov    %eax,(%esp)
084cccb4 +0x114:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084cccb9 +0x119:  mov    -0x10(%ebp),%eax
084cccbc +0x11c:  add    $0x13,%eax
084cccbf +0x11f:  mov    %eax,(%esp)
084cccc2 +0x122:  call   0807e3b0 <_init+0xca8>
084cccc7 +0x127:  mov    %eax,-0xc(%ebp)
084cccca +0x12a:  mov    -0xc(%ebp),%eax
084ccccd +0x12d:  mov    %eax,0x4(%esp)
084cccd1 +0x131:  lea    -0x1c(%ebp),%eax
084cccd4 +0x134:  mov    %eax,(%esp)
084cccd7 +0x137:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084cccdc +0x13c:  mov    -0x10(%ebp),%eax
084cccdf +0x13f:  lea    0x13(%eax),%edx
084ccce2 +0x142:  mov    -0xc(%ebp),%eax
084ccce5 +0x145:  mov    %eax,0x8(%esp)
084ccce9 +0x149:  mov    %edx,0x4(%esp)
084ccced +0x14d:  lea    -0x1c(%ebp),%eax
084cccf0 +0x150:  mov    %eax,(%esp)
084cccf3 +0x153:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084cccf8 +0x158:  movl   $0x1,0x4(%esp)
084ccd00 +0x160:  lea    -0x1c(%ebp),%eax
084ccd03 +0x163:  mov    %eax,(%esp)
084ccd06 +0x166:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084ccd0b +0x16b:  lea    -0x1c(%ebp),%eax
084ccd0e +0x16e:  mov    %eax,0x4(%esp)
084ccd12 +0x172:  mov    0xc(%ebp),%eax
084ccd15 +0x175:  mov    %eax,(%esp)
084ccd18 +0x178:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084ccd1d +0x17d:  mov    $0x0,%ebx
084ccd22 +0x182:  lea    -0x1c(%ebp),%eax
084ccd25 +0x185:  mov    %eax,(%esp)
084ccd28 +0x188:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084ccd2d +0x18d:  jmp    084ccd4a <+0x1aa>
084ccd2f +0x18f:  mov    %edx,%ebx
084ccd31 +0x191:  mov    %eax,%esi
084ccd33 +0x193:  lea    -0x1c(%ebp),%eax
084ccd36 +0x196:  mov    %eax,(%esp)
084ccd39 +0x199:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084ccd3e +0x19e:  mov    %esi,%eax
084ccd40 +0x1a0:  mov    %ebx,%edx
084ccd42 +0x1a2:  mov    %eax,(%esp)
084ccd45 +0x1a5:  call   08ae3750 <_Unwind_Resume>
084ccd4a +0x1aa:  mov    %ebx,%eax
084ccd4c +0x1ac:  add    $0x40,%esp
084ccd4f +0x1af:  pop    %ebx
084ccd50 +0x1b0:  pop    %esi
084ccd51 +0x1b1:  pop    %ebp
084ccd52 +0x1b2:  ret
084ccd53 +0x1b3:  nop
```

## 反编译 C

```c
// Inter_MonitorNoticeRequestMemberEnterToRequester::dispatch_sig @ 0x84ccba0

/* Inter_MonitorNoticeRequestMemberEnterToRequester::dispatch_sig(CUser*, char*, int) */

undefined4
Inter_MonitorNoticeRequestMemberEnterToRequester::dispatch_sig
          (CUser *param_1,char *param_2,int param_3)

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
    if (iVar2 == *(int *)(local_14 + 0xe)) {
      PacketGuard::PacketGuard(local_20);
                    /* try { // try from 084ccc68 to 084ccd1c has its CatchHandler @ 084ccd2f */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,1,0x4f);
      if (*(char *)(local_14 + 0x12) == '\0') {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,1);
      }
      else {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,0);
        InterfacePacketBuf::put_byte
                  ((InterfacePacketBuf *)local_20,(uint)*(byte *)(local_14 + 0x12));
      }
      local_10 = strlen((char *)(local_14 + 0x13));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,local_10);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_20,(char *)(local_14 + 0x13),local_10)
      ;
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
      CUser::Send((CUser *)param_2,local_20);
      PacketGuard::~PacketGuard(local_20);
    }
    else {
      uVar1 = *(undefined4 *)(local_14 + 0xe);
      uVar3 = CUser::get_charac_no((CUser *)param_2,-1);
      LogManager::logFormat
                (1,"InterDispatcher.cpp",
                 "virtual int Inter_MonitorNoticeRequestMemberEnterToRequester::dispatch_sig(CUser*, char*, int)"
                 ,0x27e8,
                 "MEMBER : Inter_MonitorNoticeRequestMemberEnterToRequester::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)"
                 ,uVar3,uVar1);
    }
  }
  return 0;
}
```

# dispatch_sig

`_ZN30Inter_ReplyGuildInviteToCaller12dispatch_sigEP5CUserPci`

`Inter_ReplyGuildInviteToCaller::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_ReplyGuildInviteToCaller` | `0x084d2f6e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084d2f6e  _ZN30Inter_ReplyGuildInviteToCaller12dispatch_sigEP5CUserPci
#           Inter_ReplyGuildInviteToCaller::dispatch_sig(CUser*, char*, int)
# range [0x084d2f6e, 0x084d3169]
084d2f6e +0x000:  push   %ebp
084d2f6f +0x001:  mov    %esp,%ebp
084d2f71 +0x003:  push   %esi
084d2f72 +0x004:  push   %ebx
084d2f73 +0x005:  sub    $0x40,%esp
084d2f76 +0x008:  mov    0xc(%ebp),%eax
084d2f79 +0x00b:  mov    %eax,(%esp)
084d2f7c +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084d2f81 +0x013:  test   %eax,%eax
084d2f83 +0x015:  sete   %al
084d2f86 +0x018:  test   %al,%al
084d2f88 +0x01a:  je     084d2f94 <+0x26>
084d2f8a +0x01c:  mov    $0x0,%ebx
084d2f8f +0x021:  jmp    084d3160 <+0x1f2>
084d2f94 +0x026:  mov    0x10(%ebp),%eax
084d2f97 +0x029:  mov    %eax,-0x10(%ebp)
084d2f9a +0x02c:  movl   $0xffffffff,0x4(%esp)
084d2fa2 +0x034:  mov    0xc(%ebp),%eax
084d2fa5 +0x037:  mov    %eax,(%esp)
084d2fa8 +0x03a:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084d2fad +0x03f:  mov    %eax,%edx
084d2faf +0x041:  mov    -0x10(%ebp),%eax
084d2fb2 +0x044:  mov    0xa(%eax),%eax
084d2fb5 +0x047:  cmp    %eax,%edx
084d2fb7 +0x049:  setne  %al
084d2fba +0x04c:  test   %al,%al
084d2fbc +0x04e:  je     084d3015 <+0xa7>
084d2fbe +0x050:  mov    -0x10(%ebp),%eax
084d2fc1 +0x053:  mov    0xa(%eax),%ebx
084d2fc4 +0x056:  movl   $0xffffffff,0x4(%esp)
084d2fcc +0x05e:  mov    0xc(%ebp),%eax
084d2fcf +0x061:  mov    %eax,(%esp)
084d2fd2 +0x064:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084d2fd7 +0x069:  mov    %ebx,0x18(%esp)
084d2fdb +0x06d:  mov    %eax,0x14(%esp)
084d2fdf +0x071:  movl   $"MEMBER : Inter_ReplyGuildInviteToCaller::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)",0x10(%esp)
084d2fe7 +0x079:  movl   $0x33cf,0xc(%esp)
084d2fef +0x081:  movl   $&_ZZN30Inter_ReplyGuildInviteToCaller12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
084d2ff7 +0x089:  movl   $"InterDispatcher.cpp",0x4(%esp)
084d2fff +0x091:  movl   $0x1,(%esp)
084d3006 +0x098:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084d300b +0x09d:  mov    $0x0,%ebx
084d3010 +0x0a2:  jmp    084d3160 <+0x1f2>
084d3015 +0x0a7:  mov    -0x10(%ebp),%eax
084d3018 +0x0aa:  mov    0x12(%eax),%eax
084d301b +0x0ad:  cmp    $0x2,%eax
084d301e +0x0b0:  jne    084d304f <+0xe1>
084d3020 +0x0b2:  mov    -0x10(%ebp),%eax
084d3023 +0x0b5:  add    $0x16,%eax
084d3026 +0x0b8:  movl   $0x4,0xc(%esp)
084d302e +0x0c0:  movl   $0x1,0x8(%esp)
084d3036 +0x0c8:  mov    %eax,0x4(%esp)
084d303a +0x0cc:  mov    0xc(%ebp),%eax
084d303d +0x0cf:  mov    %eax,(%esp)
084d3040 +0x0d2:  call   0868e0ee <_ZN5CUser29Send_SoloPlay_Reject_NotiPackEPKc26ENUM_SOLO_PLAY_REJECT_MODE25ENUM_SOLO_PLAY_REJECT_MSG>  ; CUser::Send_SoloPlay_Reject_NotiPack(char const*, ENUM_SOLO_PLAY_REJECT_MODE, ENUM_SOLO_PLAY_REJECT_MSG)
084d3045 +0x0d7:  mov    $0x0,%ebx
084d304a +0x0dc:  jmp    084d3160 <+0x1f2>
084d304f +0x0e1:  mov    -0x10(%ebp),%eax
084d3052 +0x0e4:  mov    0x12(%eax),%eax
084d3055 +0x0e7:  cmp    $0x3,%eax
084d3058 +0x0ea:  jne    084d3089 <+0x11b>
084d305a +0x0ec:  mov    -0x10(%ebp),%eax
084d305d +0x0ef:  add    $0x16,%eax
084d3060 +0x0f2:  movl   $0x4,0xc(%esp)
084d3068 +0x0fa:  movl   $0x0,0x8(%esp)
084d3070 +0x102:  mov    %eax,0x4(%esp)
084d3074 +0x106:  mov    0xc(%ebp),%eax
084d3077 +0x109:  mov    %eax,(%esp)
084d307a +0x10c:  call   0868e0ee <_ZN5CUser29Send_SoloPlay_Reject_NotiPackEPKc26ENUM_SOLO_PLAY_REJECT_MODE25ENUM_SOLO_PLAY_REJECT_MSG>  ; CUser::Send_SoloPlay_Reject_NotiPack(char const*, ENUM_SOLO_PLAY_REJECT_MODE, ENUM_SOLO_PLAY_REJECT_MSG)
084d307f +0x111:  mov    $0x0,%ebx
084d3084 +0x116:  jmp    084d3160 <+0x1f2>
084d3089 +0x11b:  lea    -0x1c(%ebp),%eax
084d308c +0x11e:  mov    %eax,(%esp)
084d308f +0x121:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084d3094 +0x126:  movl   $0x94,0x8(%esp)
084d309c +0x12e:  movl   $0x0,0x4(%esp)
084d30a4 +0x136:  lea    -0x1c(%ebp),%eax
084d30a7 +0x139:  mov    %eax,(%esp)
084d30aa +0x13c:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084d30af +0x141:  mov    -0x10(%ebp),%eax
084d30b2 +0x144:  mov    0x12(%eax),%eax
084d30b5 +0x147:  mov    %eax,0x4(%esp)
084d30b9 +0x14b:  lea    -0x1c(%ebp),%eax
084d30bc +0x14e:  mov    %eax,(%esp)
084d30bf +0x151:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d30c4 +0x156:  mov    -0x10(%ebp),%eax
084d30c7 +0x159:  mov    0x12(%eax),%eax
084d30ca +0x15c:  cmp    $0x1,%eax
084d30cd +0x15f:  ja     084d310e <+0x1a0>
084d30cf +0x161:  mov    -0x10(%ebp),%eax
084d30d2 +0x164:  add    $0x16,%eax
084d30d5 +0x167:  mov    %eax,(%esp)
084d30d8 +0x16a:  call   0807e3b0 <_init+0xca8>
084d30dd +0x16f:  mov    %eax,-0xc(%ebp)
084d30e0 +0x172:  mov    -0xc(%ebp),%eax
084d30e3 +0x175:  mov    %eax,0x4(%esp)
084d30e7 +0x179:  lea    -0x1c(%ebp),%eax
084d30ea +0x17c:  mov    %eax,(%esp)
084d30ed +0x17f:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084d30f2 +0x184:  mov    -0x10(%ebp),%eax
084d30f5 +0x187:  lea    0x16(%eax),%edx
084d30f8 +0x18a:  mov    -0xc(%ebp),%eax
084d30fb +0x18d:  mov    %eax,0x8(%esp)
084d30ff +0x191:  mov    %edx,0x4(%esp)
084d3103 +0x195:  lea    -0x1c(%ebp),%eax
084d3106 +0x198:  mov    %eax,(%esp)
084d3109 +0x19b:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084d310e +0x1a0:  movl   $0x1,0x4(%esp)
084d3116 +0x1a8:  lea    -0x1c(%ebp),%eax
084d3119 +0x1ab:  mov    %eax,(%esp)
084d311c +0x1ae:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084d3121 +0x1b3:  lea    -0x1c(%ebp),%eax
084d3124 +0x1b6:  mov    %eax,0x4(%esp)
084d3128 +0x1ba:  mov    0xc(%ebp),%eax
084d312b +0x1bd:  mov    %eax,(%esp)
084d312e +0x1c0:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084d3133 +0x1c5:  mov    $0x0,%ebx
084d3138 +0x1ca:  lea    -0x1c(%ebp),%eax
084d313b +0x1cd:  mov    %eax,(%esp)
084d313e +0x1d0:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d3143 +0x1d5:  jmp    084d3160 <+0x1f2>
084d3145 +0x1d7:  mov    %edx,%ebx
084d3147 +0x1d9:  mov    %eax,%esi
084d3149 +0x1db:  lea    -0x1c(%ebp),%eax
084d314c +0x1de:  mov    %eax,(%esp)
084d314f +0x1e1:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d3154 +0x1e6:  mov    %esi,%eax
084d3156 +0x1e8:  mov    %ebx,%edx
084d3158 +0x1ea:  mov    %eax,(%esp)
084d315b +0x1ed:  call   08ae3750 <_Unwind_Resume>
084d3160 +0x1f2:  mov    %ebx,%eax
084d3162 +0x1f4:  add    $0x40,%esp
084d3165 +0x1f7:  pop    %ebx
084d3166 +0x1f8:  pop    %esi
084d3167 +0x1f9:  pop    %ebp
084d3168 +0x1fa:  ret
084d3169 +0x1fb:  nop
```

## 反编译 C

```c
// Inter_ReplyGuildInviteToCaller::dispatch_sig @ 0x84d2f6e

/* Inter_ReplyGuildInviteToCaller::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_ReplyGuildInviteToCaller::dispatch_sig(CUser *param_1,char *param_2,int param_3)

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
      if (*(int *)(local_14 + 0x12) == 2) {
        CUser::Send_SoloPlay_Reject_NotiPack((CUser *)param_2,local_14 + 0x16,1,4);
      }
      else if (*(int *)(local_14 + 0x12) == 3) {
        CUser::Send_SoloPlay_Reject_NotiPack((CUser *)param_2,local_14 + 0x16,0,4);
      }
      else {
        PacketGuard::PacketGuard(local_20);
                    /* try { // try from 084d30aa to 084d3132 has its CatchHandler @ 084d3145 */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0x94);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,*(int *)(local_14 + 0x12));
        if (*(uint *)(local_14 + 0x12) < 2) {
          local_10 = strlen((char *)(local_14 + 0x16));
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,local_10);
          InterfacePacketBuf::put_str
                    ((InterfacePacketBuf *)local_20,(char *)(local_14 + 0x16),local_10);
        }
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
        CUser::Send((CUser *)param_2,local_20);
        PacketGuard::~PacketGuard(local_20);
      }
    }
    else {
      uVar1 = *(undefined4 *)(local_14 + 10);
      uVar3 = CUser::get_charac_no((CUser *)param_2,-1);
      LogManager::logFormat
                (1,"InterDispatcher.cpp",
                 "virtual int Inter_ReplyGuildInviteToCaller::dispatch_sig(CUser*, char*, int)",
                 0x33cf,
                 "MEMBER : Inter_ReplyGuildInviteToCaller::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)"
                 ,uVar3,uVar1);
    }
  }
  return 0;
}
```

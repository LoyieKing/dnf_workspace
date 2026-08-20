# dispatch_sig

`_ZN36Inter_Monitor_RequestBlackListResult12dispatch_sigEP5CUserPci`

`Inter_Monitor_RequestBlackListResult::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_Monitor_RequestBlackListResult` | `0x084d0ba6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084d0ba6  _ZN36Inter_Monitor_RequestBlackListResult12dispatch_sigEP5CUserPci
#           Inter_Monitor_RequestBlackListResult::dispatch_sig(CUser*, char*, int)
# range [0x084d0ba6, 0x084d0ddf]
084d0ba6 +0x000:  push   %ebp
084d0ba7 +0x001:  mov    %esp,%ebp
084d0ba9 +0x003:  push   %esi
084d0baa +0x004:  push   %ebx
084d0bab +0x005:  sub    $0x70,%esp
084d0bae +0x008:  mov    0xc(%ebp),%eax
084d0bb1 +0x00b:  mov    %eax,(%esp)
084d0bb4 +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084d0bb9 +0x013:  test   %eax,%eax
084d0bbb +0x015:  sete   %al
084d0bbe +0x018:  test   %al,%al
084d0bc0 +0x01a:  je     084d0bcc <+0x26>
084d0bc2 +0x01c:  mov    $0x0,%ebx
084d0bc7 +0x021:  jmp    084d0dd7 <+0x231>
084d0bcc +0x026:  mov    0x10(%ebp),%eax
084d0bcf +0x029:  mov    %eax,-0x18(%ebp)
084d0bd2 +0x02c:  lea    -0x24(%ebp),%eax
084d0bd5 +0x02f:  mov    %eax,(%esp)
084d0bd8 +0x032:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084d0bdd +0x037:  movl   $0x7b,0x8(%esp)
084d0be5 +0x03f:  movl   $0x1,0x4(%esp)
084d0bed +0x047:  lea    -0x24(%ebp),%eax
084d0bf0 +0x04a:  mov    %eax,(%esp)
084d0bf3 +0x04d:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084d0bf8 +0x052:  movl   $0x1,0x4(%esp)
084d0c00 +0x05a:  lea    -0x24(%ebp),%eax
084d0c03 +0x05d:  mov    %eax,(%esp)
084d0c06 +0x060:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d0c0b +0x065:  mov    -0x18(%ebp),%eax
084d0c0e +0x068:  movzbl 0xe(%eax),%eax
084d0c12 +0x06c:  cmp    $0xa,%al
084d0c14 +0x06e:  jbe    084d0c20 <+0x7a>
084d0c16 +0x070:  mov    $0x0,%ebx
084d0c1b +0x075:  jmp    084d0dcc <+0x226>
084d0c20 +0x07a:  mov    -0x18(%ebp),%eax
084d0c23 +0x07d:  movzbl 0xe(%eax),%eax
084d0c27 +0x081:  movzbl %al,%eax
084d0c2a +0x084:  mov    %eax,0x4(%esp)
084d0c2e +0x088:  lea    -0x24(%ebp),%eax
084d0c31 +0x08b:  mov    %eax,(%esp)
084d0c34 +0x08e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d0c39 +0x093:  movl   $0x0,-0x10(%ebp)
084d0c40 +0x09a:  jmp    084d0d6d <+0x1c7>
084d0c45 +0x09f:  mov    -0x10(%ebp),%edx
084d0c48 +0x0a2:  mov    %edx,%eax
084d0c4a +0x0a4:  shl    $0x2,%eax
084d0c4d +0x0a7:  add    %edx,%eax
084d0c4f +0x0a9:  shl    $0x3,%eax
084d0c52 +0x0ac:  add    -0x18(%ebp),%eax
084d0c55 +0x0af:  add    $0x13,%eax
084d0c58 +0x0b2:  mov    %eax,(%esp)
084d0c5b +0x0b5:  call   0807e3b0 <_init+0xca8>
084d0c60 +0x0ba:  mov    %eax,-0x14(%ebp)
084d0c63 +0x0bd:  cmpl   $0x0,-0x14(%ebp)
084d0c67 +0x0c1:  jne    084d0ca4 <+0xfe>
084d0c69 +0x0c3:  mov    0xc(%ebp),%eax
084d0c6c +0x0c6:  mov    %eax,(%esp)
084d0c6f +0x0c9:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084d0c74 +0x0ce:  mov    %eax,0x14(%esp)
084d0c78 +0x0d2:  movl   $"BlackListNameLen Err charno(%d)",0x10(%esp)
084d0c80 +0x0da:  movl   $0x2f6d,0xc(%esp)
084d0c88 +0x0e2:  movl   $&_ZZN36Inter_Monitor_RequestBlackListResult12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
084d0c90 +0x0ea:  movl   $"InterDispatcher.cpp",0x4(%esp)
084d0c98 +0x0f2:  movl   $0x1,(%esp)
084d0c9f +0x0f9:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084d0ca4 +0x0fe:  mov    -0x14(%ebp),%eax
084d0ca7 +0x101:  mov    %eax,0x4(%esp)
084d0cab +0x105:  lea    -0x24(%ebp),%eax
084d0cae +0x108:  mov    %eax,(%esp)
084d0cb1 +0x10b:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084d0cb6 +0x110:  mov    -0x10(%ebp),%edx
084d0cb9 +0x113:  mov    %edx,%eax
084d0cbb +0x115:  shl    $0x2,%eax
084d0cbe +0x118:  add    %edx,%eax
084d0cc0 +0x11a:  shl    $0x3,%eax
084d0cc3 +0x11d:  add    -0x18(%ebp),%eax
084d0cc6 +0x120:  lea    0x13(%eax),%edx
084d0cc9 +0x123:  mov    -0x14(%ebp),%eax
084d0ccc +0x126:  mov    %eax,0x8(%esp)
084d0cd0 +0x12a:  mov    %edx,0x4(%esp)
084d0cd4 +0x12e:  lea    -0x24(%ebp),%eax
084d0cd7 +0x131:  mov    %eax,(%esp)
084d0cda +0x134:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084d0cdf +0x139:  mov    -0x10(%ebp),%edx
084d0ce2 +0x13c:  mov    %edx,%eax
084d0ce4 +0x13e:  shl    $0x2,%eax
084d0ce7 +0x141:  add    %edx,%eax
084d0ce9 +0x143:  shl    $0x3,%eax
084d0cec +0x146:  add    $0x20,%eax
084d0cef +0x149:  add    -0x18(%ebp),%eax
084d0cf2 +0x14c:  add    $0x13,%eax
084d0cf5 +0x14f:  lea    -0x50(%ebp),%edx
084d0cf8 +0x152:  mov    %edx,0x4(%esp)
084d0cfc +0x156:  mov    %eax,(%esp)
084d0cff +0x159:  call   0807e360 <_init+0xc58>
084d0d04 +0x15e:  mov    %eax,-0xc(%ebp)
084d0d07 +0x161:  mov    -0xc(%ebp),%eax
084d0d0a +0x164:  mov    0x14(%eax),%eax
084d0d0d +0x167:  mov    %eax,0x4(%esp)
084d0d11 +0x16b:  lea    -0x24(%ebp),%eax
084d0d14 +0x16e:  mov    %eax,(%esp)
084d0d17 +0x171:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d0d1c +0x176:  mov    -0xc(%ebp),%eax
084d0d1f +0x179:  mov    0x10(%eax),%eax
084d0d22 +0x17c:  mov    %eax,0x4(%esp)
084d0d26 +0x180:  lea    -0x24(%ebp),%eax
084d0d29 +0x183:  mov    %eax,(%esp)
084d0d2c +0x186:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d0d31 +0x18b:  mov    -0xc(%ebp),%eax
084d0d34 +0x18e:  mov    0xc(%eax),%eax
084d0d37 +0x191:  mov    %eax,0x4(%esp)
084d0d3b +0x195:  lea    -0x24(%ebp),%eax
084d0d3e +0x198:  mov    %eax,(%esp)
084d0d41 +0x19b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d0d46 +0x1a0:  mov    -0x10(%ebp),%edx
084d0d49 +0x1a3:  mov    -0x18(%ebp),%ecx
084d0d4c +0x1a6:  mov    %edx,%eax
084d0d4e +0x1a8:  shl    $0x2,%eax
084d0d51 +0x1ab:  add    %edx,%eax
084d0d53 +0x1ad:  shl    $0x3,%eax
084d0d56 +0x1b0:  mov    0xf(%eax,%ecx,1),%eax
084d0d5a +0x1b4:  mov    %eax,0x4(%esp)
084d0d5e +0x1b8:  mov    0xc(%ebp),%eax
084d0d61 +0x1bb:  mov    %eax,(%esp)
084d0d64 +0x1be:  call   0867efae <_ZN5CUser19registerToBlackListEj>  ; CUser::registerToBlackList(unsigned int)
084d0d69 +0x1c3:  addl   $0x1,-0x10(%ebp)
084d0d6d +0x1c7:  mov    -0x18(%ebp),%eax
084d0d70 +0x1ca:  movzbl 0xe(%eax),%eax
084d0d74 +0x1ce:  movzbl %al,%eax
084d0d77 +0x1d1:  cmp    -0x10(%ebp),%eax
084d0d7a +0x1d4:  setg   %al
084d0d7d +0x1d7:  test   %al,%al
084d0d7f +0x1d9:  jne    084d0c45 <+0x9f>
084d0d85 +0x1df:  movl   $0x1,0x4(%esp)
084d0d8d +0x1e7:  lea    -0x24(%ebp),%eax
084d0d90 +0x1ea:  mov    %eax,(%esp)
084d0d93 +0x1ed:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084d0d98 +0x1f2:  lea    -0x24(%ebp),%eax
084d0d9b +0x1f5:  mov    %eax,0x4(%esp)
084d0d9f +0x1f9:  mov    0xc(%ebp),%eax
084d0da2 +0x1fc:  mov    %eax,(%esp)
084d0da5 +0x1ff:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084d0daa +0x204:  mov    $0x0,%ebx
084d0daf +0x209:  jmp    084d0dcc <+0x226>
084d0db1 +0x20b:  mov    %edx,%ebx
084d0db3 +0x20d:  mov    %eax,%esi
084d0db5 +0x20f:  lea    -0x24(%ebp),%eax
084d0db8 +0x212:  mov    %eax,(%esp)
084d0dbb +0x215:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d0dc0 +0x21a:  mov    %esi,%eax
084d0dc2 +0x21c:  mov    %ebx,%edx
084d0dc4 +0x21e:  mov    %eax,(%esp)
084d0dc7 +0x221:  call   08ae3750 <_Unwind_Resume>
084d0dcc +0x226:  lea    -0x24(%ebp),%eax
084d0dcf +0x229:  mov    %eax,(%esp)
084d0dd2 +0x22c:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d0dd7 +0x231:  mov    %ebx,%eax
084d0dd9 +0x233:  add    $0x70,%esp
084d0ddc +0x236:  pop    %ebx
084d0ddd +0x237:  pop    %esi
084d0dde +0x238:  pop    %ebp
084d0ddf +0x239:  ret
```

## 反编译 C

```c
// Inter_Monitor_RequestBlackListResult::dispatch_sig @ 0x84d0ba6

/* Inter_Monitor_RequestBlackListResult::dispatch_sig(CUser*, char*, int) */

undefined4
Inter_Monitor_RequestBlackListResult::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  tm local_54;
  PacketGuard local_28 [12];
  int local_1c;
  size_t local_18;
  int local_14;
  tm *local_10;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (iVar1 != 0) {
    local_1c = param_3;
    PacketGuard::PacketGuard(local_28);
                    /* try { // try from 084d0bf3 to 084d0da9 has its CatchHandler @ 084d0db1 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,1,0x7b);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,1);
    if (*(byte *)(local_1c + 0xe) < 0xb) {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,(uint)*(byte *)(local_1c + 0xe));
      for (local_14 = 0; local_14 < (int)(uint)*(byte *)(local_1c + 0xe); local_14 = local_14 + 1) {
        local_18 = strlen((char *)(local_14 * 0x28 + local_1c + 0x13));
        if (local_18 == 0) {
          uVar2 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
          LogManager::logFormat
                    (1,"InterDispatcher.cpp",
                     "virtual int Inter_Monitor_RequestBlackListResult::dispatch_sig(CUser*, char*, int)"
                     ,0x2f6d,"BlackListNameLen Err charno(%d)",uVar2);
        }
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_28,local_18);
        InterfacePacketBuf::put_str
                  ((InterfacePacketBuf *)local_28,(char *)(local_14 * 0x28 + local_1c + 0x13),
                   local_18);
        local_10 = localtime_r((time_t *)(local_14 * 0x28 + local_1c + 0x33),&local_54);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,local_10->tm_year);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,local_10->tm_mon);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,local_10->tm_mday);
        CUser::registerToBlackList((CUser *)param_2,*(uint *)(local_14 * 0x28 + 0xf + local_1c));
      }
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
      CUser::Send((CUser *)param_2,local_28);
    }
    PacketGuard::~PacketGuard(local_28);
  }
  return 0;
}
```

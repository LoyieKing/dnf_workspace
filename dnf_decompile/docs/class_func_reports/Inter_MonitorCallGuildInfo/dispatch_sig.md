# dispatch_sig

`_ZN26Inter_MonitorCallGuildInfo12dispatch_sigEP5CUserPci`

`Inter_MonitorCallGuildInfo::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_MonitorCallGuildInfo` | `0x084cc006` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084cc006  _ZN26Inter_MonitorCallGuildInfo12dispatch_sigEP5CUserPci
#           Inter_MonitorCallGuildInfo::dispatch_sig(CUser*, char*, int)
# range [0x084cc006, 0x084cc23b]
084cc006 +0x000:  push   %ebp
084cc007 +0x001:  mov    %esp,%ebp
084cc009 +0x003:  push   %esi
084cc00a +0x004:  push   %ebx
084cc00b +0x005:  sub    $0x40,%esp
084cc00e +0x008:  mov    0xc(%ebp),%eax
084cc011 +0x00b:  mov    %eax,(%esp)
084cc014 +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084cc019 +0x013:  test   %eax,%eax
084cc01b +0x015:  sete   %al
084cc01e +0x018:  test   %al,%al
084cc020 +0x01a:  je     084cc02c <+0x26>
084cc022 +0x01c:  mov    $0x0,%ebx
084cc027 +0x021:  jmp    084cc233 <+0x22d>
084cc02c +0x026:  mov    0x10(%ebp),%eax
084cc02f +0x029:  mov    %eax,-0x14(%ebp)
084cc032 +0x02c:  movl   $0xffffffff,0x4(%esp)
084cc03a +0x034:  mov    0xc(%ebp),%eax
084cc03d +0x037:  mov    %eax,(%esp)
084cc040 +0x03a:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084cc045 +0x03f:  mov    %eax,%edx
084cc047 +0x041:  mov    -0x14(%ebp),%eax
084cc04a +0x044:  mov    0xe(%eax),%eax
084cc04d +0x047:  cmp    %eax,%edx
084cc04f +0x049:  setne  %al
084cc052 +0x04c:  test   %al,%al
084cc054 +0x04e:  je     084cc0ad <+0xa7>
084cc056 +0x050:  mov    -0x14(%ebp),%eax
084cc059 +0x053:  mov    0xe(%eax),%ebx
084cc05c +0x056:  movl   $0xffffffff,0x4(%esp)
084cc064 +0x05e:  mov    0xc(%ebp),%eax
084cc067 +0x061:  mov    %eax,(%esp)
084cc06a +0x064:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084cc06f +0x069:  mov    %ebx,0x18(%esp)
084cc073 +0x06d:  mov    %eax,0x14(%esp)
084cc077 +0x071:  movl   $"Inter_MonitorCallGuildInfo::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)",0x10(%esp)
084cc07f +0x079:  movl   $0x26e4,0xc(%esp)
084cc087 +0x081:  movl   $&_ZZN26Inter_MonitorCallGuildInfo12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
084cc08f +0x089:  movl   $"InterDispatcher.cpp",0x4(%esp)
084cc097 +0x091:  movl   $0x1,(%esp)
084cc09e +0x098:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084cc0a3 +0x09d:  mov    $0x0,%ebx
084cc0a8 +0x0a2:  jmp    084cc233 <+0x22d>
084cc0ad +0x0a7:  lea    -0x20(%ebp),%eax
084cc0b0 +0x0aa:  mov    %eax,(%esp)
084cc0b3 +0x0ad:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084cc0b8 +0x0b2:  movl   $0x4d,0x8(%esp)
084cc0c0 +0x0ba:  movl   $0x1,0x4(%esp)
084cc0c8 +0x0c2:  lea    -0x20(%ebp),%eax
084cc0cb +0x0c5:  mov    %eax,(%esp)
084cc0ce +0x0c8:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084cc0d3 +0x0cd:  movl   $0x1,0x4(%esp)
084cc0db +0x0d5:  lea    -0x20(%ebp),%eax
084cc0de +0x0d8:  mov    %eax,(%esp)
084cc0e1 +0x0db:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084cc0e6 +0x0e0:  mov    -0x14(%ebp),%eax
084cc0e9 +0x0e3:  movzbl 0x12(%eax),%eax
084cc0ed +0x0e7:  movzbl %al,%eax
084cc0f0 +0x0ea:  mov    %eax,0x4(%esp)
084cc0f4 +0x0ee:  lea    -0x20(%ebp),%eax
084cc0f7 +0x0f1:  mov    %eax,(%esp)
084cc0fa +0x0f4:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084cc0ff +0x0f9:  movl   $0x0,-0x10(%ebp)
084cc106 +0x100:  jmp    084cc1c9 <+0x1c3>
084cc10b +0x105:  mov    -0x10(%ebp),%eax
084cc10e +0x108:  mov    -0x14(%ebp),%edx
084cc111 +0x10b:  imul   $0x1d,%eax,%eax
084cc114 +0x10e:  lea    (%edx,%eax,1),%eax
084cc117 +0x111:  add    $0x10,%eax
084cc11a +0x114:  mov    0x3(%eax),%eax
084cc11d +0x117:  mov    %eax,0x4(%esp)
084cc121 +0x11b:  lea    -0x20(%ebp),%eax
084cc124 +0x11e:  mov    %eax,(%esp)
084cc127 +0x121:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084cc12c +0x126:  mov    -0x10(%ebp),%eax
084cc12f +0x129:  mov    -0x14(%ebp),%edx
084cc132 +0x12c:  imul   $0x1d,%eax,%eax
084cc135 +0x12f:  lea    (%edx,%eax,1),%eax
084cc138 +0x132:  add    $0x17,%eax
084cc13b +0x135:  movzbl (%eax),%eax
084cc13e +0x138:  movzbl %al,%eax
084cc141 +0x13b:  mov    %eax,0x4(%esp)
084cc145 +0x13f:  lea    -0x20(%ebp),%eax
084cc148 +0x142:  mov    %eax,(%esp)
084cc14b +0x145:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084cc150 +0x14a:  mov    -0x10(%ebp),%eax
084cc153 +0x14d:  mov    -0x14(%ebp),%edx
084cc156 +0x150:  imul   $0x1d,%eax,%eax
084cc159 +0x153:  lea    (%edx,%eax,1),%eax
084cc15c +0x156:  add    $0x18,%eax
084cc15f +0x159:  movzbl (%eax),%eax
084cc162 +0x15c:  movzbl %al,%eax
084cc165 +0x15f:  mov    %eax,0x4(%esp)
084cc169 +0x163:  lea    -0x20(%ebp),%eax
084cc16c +0x166:  mov    %eax,(%esp)
084cc16f +0x169:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084cc174 +0x16e:  mov    -0x10(%ebp),%eax
084cc177 +0x171:  imul   $0x1d,%eax,%eax
084cc17a +0x174:  add    $0x10,%eax
084cc17d +0x177:  add    -0x14(%ebp),%eax
084cc180 +0x17a:  add    $0x9,%eax
084cc183 +0x17d:  mov    %eax,(%esp)
084cc186 +0x180:  call   0807e3b0 <_init+0xca8>
084cc18b +0x185:  mov    %eax,-0xc(%ebp)
084cc18e +0x188:  mov    -0xc(%ebp),%eax
084cc191 +0x18b:  mov    %eax,0x4(%esp)
084cc195 +0x18f:  lea    -0x20(%ebp),%eax
084cc198 +0x192:  mov    %eax,(%esp)
084cc19b +0x195:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084cc1a0 +0x19a:  mov    -0x10(%ebp),%eax
084cc1a3 +0x19d:  imul   $0x1d,%eax,%eax
084cc1a6 +0x1a0:  add    $0x10,%eax
084cc1a9 +0x1a3:  add    -0x14(%ebp),%eax
084cc1ac +0x1a6:  lea    0x9(%eax),%edx
084cc1af +0x1a9:  mov    -0xc(%ebp),%eax
084cc1b2 +0x1ac:  mov    %eax,0x8(%esp)
084cc1b6 +0x1b0:  mov    %edx,0x4(%esp)
084cc1ba +0x1b4:  lea    -0x20(%ebp),%eax
084cc1bd +0x1b7:  mov    %eax,(%esp)
084cc1c0 +0x1ba:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084cc1c5 +0x1bf:  addl   $0x1,-0x10(%ebp)
084cc1c9 +0x1c3:  mov    -0x14(%ebp),%eax
084cc1cc +0x1c6:  movzbl 0x12(%eax),%eax
084cc1d0 +0x1ca:  movzbl %al,%eax
084cc1d3 +0x1cd:  cmp    -0x10(%ebp),%eax
084cc1d6 +0x1d0:  setg   %al
084cc1d9 +0x1d3:  test   %al,%al
084cc1db +0x1d5:  jne    084cc10b <+0x105>
084cc1e1 +0x1db:  movl   $0x1,0x4(%esp)
084cc1e9 +0x1e3:  lea    -0x20(%ebp),%eax
084cc1ec +0x1e6:  mov    %eax,(%esp)
084cc1ef +0x1e9:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084cc1f4 +0x1ee:  lea    -0x20(%ebp),%eax
084cc1f7 +0x1f1:  mov    %eax,0x4(%esp)
084cc1fb +0x1f5:  mov    0xc(%ebp),%eax
084cc1fe +0x1f8:  mov    %eax,(%esp)
084cc201 +0x1fb:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084cc206 +0x200:  mov    $0x0,%ebx
084cc20b +0x205:  lea    -0x20(%ebp),%eax
084cc20e +0x208:  mov    %eax,(%esp)
084cc211 +0x20b:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084cc216 +0x210:  jmp    084cc233 <+0x22d>
084cc218 +0x212:  mov    %edx,%ebx
084cc21a +0x214:  mov    %eax,%esi
084cc21c +0x216:  lea    -0x20(%ebp),%eax
084cc21f +0x219:  mov    %eax,(%esp)
084cc222 +0x21c:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084cc227 +0x221:  mov    %esi,%eax
084cc229 +0x223:  mov    %ebx,%edx
084cc22b +0x225:  mov    %eax,(%esp)
084cc22e +0x228:  call   08ae3750 <_Unwind_Resume>
084cc233 +0x22d:  mov    %ebx,%eax
084cc235 +0x22f:  add    $0x40,%esp
084cc238 +0x232:  pop    %ebx
084cc239 +0x233:  pop    %esi
084cc23a +0x234:  pop    %ebp
084cc23b +0x235:  ret
```

## 反编译 C

```c
// Inter_MonitorCallGuildInfo::dispatch_sig @ 0x84cc006

/* Inter_MonitorCallGuildInfo::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_MonitorCallGuildInfo::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  PacketGuard local_24 [12];
  int local_18;
  int local_14;
  size_t local_10;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (iVar2 != 0) {
    local_18 = param_3;
    iVar2 = CUser::get_charac_no((CUser *)param_2,-1);
    if (iVar2 == *(int *)(local_18 + 0xe)) {
      PacketGuard::PacketGuard(local_24);
                    /* try { // try from 084cc0ce to 084cc205 has its CatchHandler @ 084cc218 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,1,0x4d);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,1);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,(uint)*(byte *)(local_18 + 0x12));
      for (local_14 = 0; local_14 < (int)(uint)*(byte *)(local_18 + 0x12); local_14 = local_14 + 1)
      {
        InterfacePacketBuf::put_int
                  ((InterfacePacketBuf *)local_24,*(int *)(local_18 + local_14 * 0x1d + 0x13));
        InterfacePacketBuf::put_byte
                  ((InterfacePacketBuf *)local_24,(uint)*(byte *)(local_18 + local_14 * 0x1d + 0x17)
                  );
        InterfacePacketBuf::put_byte
                  ((InterfacePacketBuf *)local_24,(uint)*(byte *)(local_18 + local_14 * 0x1d + 0x18)
                  );
        local_10 = strlen((char *)(local_14 * 0x1d + local_18 + 0x19));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,local_10);
        InterfacePacketBuf::put_str
                  ((InterfacePacketBuf *)local_24,(char *)(local_14 * 0x1d + local_18 + 0x19),
                   local_10);
      }
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
      CUser::Send((CUser *)param_2,local_24);
      PacketGuard::~PacketGuard(local_24);
    }
    else {
      uVar1 = *(undefined4 *)(local_18 + 0xe);
      uVar3 = CUser::get_charac_no((CUser *)param_2,-1);
      LogManager::logFormat
                (1,"InterDispatcher.cpp",
                 "virtual int Inter_MonitorCallGuildInfo::dispatch_sig(CUser*, char*, int)",0x26e4,
                 "Inter_MonitorCallGuildInfo::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)"
                 ,uVar3,uVar1);
    }
  }
  return 0;
}
```

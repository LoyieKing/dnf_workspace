# dispatch_sig

`_ZN40Inter_MonitorNoticeGuildChatMsgHyperLink12dispatch_sigEP5CUserPci`

`Inter_MonitorNoticeGuildChatMsgHyperLink::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_MonitorNoticeGuildChatMsgHyperLink` | `0x084e503c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e503c  _ZN40Inter_MonitorNoticeGuildChatMsgHyperLink12dispatch_sigEP5CUserPci
#           Inter_MonitorNoticeGuildChatMsgHyperLink::dispatch_sig(CUser*, char*, int)
# range [0x084e503c, 0x084e5281]
084e503c +0x000:  push   %ebp
084e503d +0x001:  mov    %esp,%ebp
084e503f +0x003:  push   %esi
084e5040 +0x004:  push   %ebx
084e5041 +0x005:  sub    $0x40,%esp
084e5044 +0x008:  mov    0xc(%ebp),%eax
084e5047 +0x00b:  mov    %eax,(%esp)
084e504a +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084e504f +0x013:  test   %eax,%eax
084e5051 +0x015:  sete   %al
084e5054 +0x018:  test   %al,%al
084e5056 +0x01a:  je     084e5062 <+0x26>
084e5058 +0x01c:  mov    $0x0,%ebx
084e505d +0x021:  jmp    084e5278 <+0x23c>
084e5062 +0x026:  mov    0x10(%ebp),%eax
084e5065 +0x029:  mov    %eax,-0x14(%ebp)
084e5068 +0x02c:  movl   $0xffffffff,0x4(%esp)
084e5070 +0x034:  mov    0xc(%ebp),%eax
084e5073 +0x037:  mov    %eax,(%esp)
084e5076 +0x03a:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084e507b +0x03f:  mov    %eax,%edx
084e507d +0x041:  mov    -0x14(%ebp),%eax
084e5080 +0x044:  mov    0xe(%eax),%eax
084e5083 +0x047:  cmp    %eax,%edx
084e5085 +0x049:  setne  %al
084e5088 +0x04c:  test   %al,%al
084e508a +0x04e:  je     084e50e3 <+0xa7>
084e508c +0x050:  mov    -0x14(%ebp),%eax
084e508f +0x053:  mov    0xe(%eax),%ebx
084e5092 +0x056:  movl   $0xffffffff,0x4(%esp)
084e509a +0x05e:  mov    0xc(%ebp),%eax
084e509d +0x061:  mov    %eax,(%esp)
084e50a0 +0x064:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084e50a5 +0x069:  mov    %ebx,0x18(%esp)
084e50a9 +0x06d:  mov    %eax,0x14(%esp)
084e50ad +0x071:  movl   $"Inter_MonitorNoticeGuildChatMsgHyperLink::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)",0x10(%esp)
084e50b5 +0x079:  movl   $0x63e4,0xc(%esp)
084e50bd +0x081:  movl   $&_ZZN40Inter_MonitorNoticeGuildChatMsgHyperLink12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
084e50c5 +0x089:  movl   $"InterDispatcher.cpp",0x4(%esp)
084e50cd +0x091:  movl   $0x1,(%esp)
084e50d4 +0x098:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084e50d9 +0x09d:  mov    $0x0,%ebx
084e50de +0x0a2:  jmp    084e5278 <+0x23c>
084e50e3 +0x0a7:  lea    -0x20(%ebp),%eax
084e50e6 +0x0aa:  mov    %eax,(%esp)
084e50e9 +0x0ad:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084e50ee +0x0b2:  movl   $0x173,0x8(%esp)
084e50f6 +0x0ba:  movl   $0x0,0x4(%esp)
084e50fe +0x0c2:  lea    -0x20(%ebp),%eax
084e5101 +0x0c5:  mov    %eax,(%esp)
084e5104 +0x0c8:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084e5109 +0x0cd:  movl   $0x6,0x4(%esp)
084e5111 +0x0d5:  lea    -0x20(%ebp),%eax
084e5114 +0x0d8:  mov    %eax,(%esp)
084e5117 +0x0db:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084e511c +0x0e0:  movl   $0x0,0x4(%esp)
084e5124 +0x0e8:  lea    -0x20(%ebp),%eax
084e5127 +0x0eb:  mov    %eax,(%esp)
084e512a +0x0ee:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084e512f +0x0f3:  mov    -0x14(%ebp),%eax
084e5132 +0x0f6:  add    $0x12,%eax
084e5135 +0x0f9:  mov    %eax,(%esp)
084e5138 +0x0fc:  call   0807e3b0 <_init+0xca8>
084e513d +0x101:  mov    %eax,-0x10(%ebp)
084e5140 +0x104:  mov    -0x10(%ebp),%eax
084e5143 +0x107:  mov    %eax,0x4(%esp)
084e5147 +0x10b:  lea    -0x20(%ebp),%eax
084e514a +0x10e:  mov    %eax,(%esp)
084e514d +0x111:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084e5152 +0x116:  mov    -0x14(%ebp),%eax
084e5155 +0x119:  lea    0x12(%eax),%edx
084e5158 +0x11c:  mov    -0x10(%ebp),%eax
084e515b +0x11f:  mov    %eax,0x8(%esp)
084e515f +0x123:  mov    %edx,0x4(%esp)
084e5163 +0x127:  lea    -0x20(%ebp),%eax
084e5166 +0x12a:  mov    %eax,(%esp)
084e5169 +0x12d:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084e516e +0x132:  movl   $0x0,0x4(%esp)
084e5176 +0x13a:  lea    -0x20(%ebp),%eax
084e5179 +0x13d:  mov    %eax,(%esp)
084e517c +0x140:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084e5181 +0x145:  mov    -0x14(%ebp),%eax
084e5184 +0x148:  movzbl 0x169(%eax),%eax
084e518b +0x14f:  movzbl %al,%eax
084e518e +0x152:  mov    %eax,0x4(%esp)
084e5192 +0x156:  lea    -0x20(%ebp),%eax
084e5195 +0x159:  mov    %eax,(%esp)
084e5198 +0x15c:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084e519d +0x161:  mov    -0x14(%ebp),%eax
084e51a0 +0x164:  movzbl 0x169(%eax),%eax
084e51a7 +0x16b:  movzbl %al,%eax
084e51aa +0x16e:  mov    -0x14(%ebp),%edx
084e51ad +0x171:  add    $0x16a,%edx
084e51b3 +0x177:  mov    %eax,0x8(%esp)
084e51b7 +0x17b:  mov    %edx,0x4(%esp)
084e51bb +0x17f:  lea    -0x20(%ebp),%eax
084e51be +0x182:  mov    %eax,(%esp)
084e51c1 +0x185:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084e51c6 +0x18a:  mov    -0x14(%ebp),%eax
084e51c9 +0x18d:  movzbl 0x30(%eax),%eax
084e51cd +0x191:  movzbl %al,%eax
084e51d0 +0x194:  mov    %eax,0x4(%esp)
084e51d4 +0x198:  lea    -0x20(%ebp),%eax
084e51d7 +0x19b:  mov    %eax,(%esp)
084e51da +0x19e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084e51df +0x1a3:  movl   $0x0,-0xc(%ebp)
084e51e6 +0x1aa:  jmp    084e5212 <+0x1d6>
084e51e8 +0x1ac:  mov    -0xc(%ebp),%eax
084e51eb +0x1af:  imul   $0x68,%eax,%eax
084e51ee +0x1b2:  add    $0x30,%eax
084e51f1 +0x1b5:  add    -0x14(%ebp),%eax
084e51f4 +0x1b8:  add    $0x1,%eax
084e51f7 +0x1bb:  movl   $0x68,0x8(%esp)
084e51ff +0x1c3:  mov    %eax,0x4(%esp)
084e5203 +0x1c7:  lea    -0x20(%ebp),%eax
084e5206 +0x1ca:  mov    %eax,(%esp)
084e5209 +0x1cd:  call   0811df08 <_GLOBAL__I__ZN15CItemDictionaryC2Ev+0x48>  ; global constructors keyed to CItemDictionary::CItemDictionary()+0x48
084e520e +0x1d2:  addl   $0x1,-0xc(%ebp)
084e5212 +0x1d6:  mov    -0x14(%ebp),%eax
084e5215 +0x1d9:  movzbl 0x30(%eax),%eax
084e5219 +0x1dd:  movzbl %al,%eax
084e521c +0x1e0:  cmp    -0xc(%ebp),%eax
084e521f +0x1e3:  setg   %al
084e5222 +0x1e6:  test   %al,%al
084e5224 +0x1e8:  jne    084e51e8 <+0x1ac>
084e5226 +0x1ea:  movl   $0x1,0x4(%esp)
084e522e +0x1f2:  lea    -0x20(%ebp),%eax
084e5231 +0x1f5:  mov    %eax,(%esp)
084e5234 +0x1f8:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084e5239 +0x1fd:  lea    -0x20(%ebp),%eax
084e523c +0x200:  mov    %eax,0x4(%esp)
084e5240 +0x204:  mov    0xc(%ebp),%eax
084e5243 +0x207:  mov    %eax,(%esp)
084e5246 +0x20a:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084e524b +0x20f:  mov    $0x0,%ebx
084e5250 +0x214:  lea    -0x20(%ebp),%eax
084e5253 +0x217:  mov    %eax,(%esp)
084e5256 +0x21a:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e525b +0x21f:  jmp    084e5278 <+0x23c>
084e525d +0x221:  mov    %edx,%ebx
084e525f +0x223:  mov    %eax,%esi
084e5261 +0x225:  lea    -0x20(%ebp),%eax
084e5264 +0x228:  mov    %eax,(%esp)
084e5267 +0x22b:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e526c +0x230:  mov    %esi,%eax
084e526e +0x232:  mov    %ebx,%edx
084e5270 +0x234:  mov    %eax,(%esp)
084e5273 +0x237:  call   08ae3750 <_Unwind_Resume>
084e5278 +0x23c:  mov    %ebx,%eax
084e527a +0x23e:  add    $0x40,%esp
084e527d +0x241:  pop    %ebx
084e527e +0x242:  pop    %esi
084e527f +0x243:  pop    %ebp
084e5280 +0x244:  ret
084e5281 +0x245:  nop
```

## 反编译 C

```c
// Inter_MonitorNoticeGuildChatMsgHyperLink::dispatch_sig @ 0x84e503c

/* Inter_MonitorNoticeGuildChatMsgHyperLink::dispatch_sig(CUser*, char*, int) */

undefined4
Inter_MonitorNoticeGuildChatMsgHyperLink::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  PacketGuard local_24 [12];
  int local_18;
  size_t local_14;
  int local_10;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (iVar2 != 0) {
    local_18 = param_3;
    iVar2 = CUser::get_charac_no((CUser *)param_2,-1);
    if (iVar2 == *(int *)(local_18 + 0xe)) {
      PacketGuard::PacketGuard(local_24);
                    /* try { // try from 084e5104 to 084e524a has its CatchHandler @ 084e525d */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,0,0x173);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,6);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,0);
      local_14 = strlen((char *)(local_18 + 0x12));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,local_14);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_24,(char *)(local_18 + 0x12),local_14)
      ;
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,0);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,(uint)*(byte *)(local_18 + 0x169));
      InterfacePacketBuf::put_str
                ((InterfacePacketBuf *)local_24,(char *)(local_18 + 0x16a),
                 (uint)*(byte *)(local_18 + 0x169));
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,(uint)*(byte *)(local_18 + 0x30));
      for (local_10 = 0; local_10 < (int)(uint)*(byte *)(local_18 + 0x30); local_10 = local_10 + 1)
      {
        InterfacePacketBuf::put_binary
                  ((InterfacePacketBuf *)local_24,(char *)(local_10 * 0x68 + local_18 + 0x31),0x68);
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
                 "virtual int Inter_MonitorNoticeGuildChatMsgHyperLink::dispatch_sig(CUser*, char*, int)"
                 ,0x63e4,
                 "Inter_MonitorNoticeGuildChatMsgHyperLink::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)"
                 ,uVar3,uVar1);
    }
  }
  return 0;
}
```

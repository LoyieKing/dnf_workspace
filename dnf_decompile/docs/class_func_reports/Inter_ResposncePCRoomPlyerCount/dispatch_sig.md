# dispatch_sig

`_ZN31Inter_ResposncePCRoomPlyerCount12dispatch_sigEP5CUserPci`

`Inter_ResposncePCRoomPlyerCount::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_ResposncePCRoomPlyerCount` | `0x084da0aa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084da0aa  _ZN31Inter_ResposncePCRoomPlyerCount12dispatch_sigEP5CUserPci
#           Inter_ResposncePCRoomPlyerCount::dispatch_sig(CUser*, char*, int)
# range [0x084da0aa, 0x084da1f9]
084da0aa +0x000:  push   %ebp
084da0ab +0x001:  mov    %esp,%ebp
084da0ad +0x003:  push   %esi
084da0ae +0x004:  push   %ebx
084da0af +0x005:  sub    $0x30,%esp
084da0b2 +0x008:  mov    0xc(%ebp),%eax
084da0b5 +0x00b:  mov    %eax,(%esp)
084da0b8 +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084da0bd +0x013:  test   %eax,%eax
084da0bf +0x015:  sete   %al
084da0c2 +0x018:  test   %al,%al
084da0c4 +0x01a:  je     084da0d0 <+0x26>
084da0c6 +0x01c:  mov    $0x0,%ebx
084da0cb +0x021:  jmp    084da1f1 <+0x147>
084da0d0 +0x026:  mov    0x10(%ebp),%eax
084da0d3 +0x029:  mov    %eax,-0xc(%ebp)
084da0d6 +0x02c:  movl   $0xffffffff,0x4(%esp)
084da0de +0x034:  mov    0xc(%ebp),%eax
084da0e1 +0x037:  mov    %eax,(%esp)
084da0e4 +0x03a:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084da0e9 +0x03f:  mov    %eax,%edx
084da0eb +0x041:  mov    -0xc(%ebp),%eax
084da0ee +0x044:  mov    0xe(%eax),%eax
084da0f1 +0x047:  cmp    %eax,%edx
084da0f3 +0x049:  setne  %al
084da0f6 +0x04c:  test   %al,%al
084da0f8 +0x04e:  je     084da151 <+0xa7>
084da0fa +0x050:  mov    -0xc(%ebp),%eax
084da0fd +0x053:  mov    0xe(%eax),%ebx
084da100 +0x056:  movl   $0xffffffff,0x4(%esp)
084da108 +0x05e:  mov    0xc(%ebp),%eax
084da10b +0x061:  mov    %eax,(%esp)
084da10e +0x064:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084da113 +0x069:  mov    %ebx,0x18(%esp)
084da117 +0x06d:  mov    %eax,0x14(%esp)
084da11b +0x071:  movl   $"Inter_ResponsePCRoomPlayerCount::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)",0x10(%esp)
084da123 +0x079:  movl   $0x41cc,0xc(%esp)
084da12b +0x081:  movl   $&_ZZN31Inter_ResposncePCRoomPlyerCount12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
084da133 +0x089:  movl   $"InterDispatcher.cpp",0x4(%esp)
084da13b +0x091:  movl   $0x1,(%esp)
084da142 +0x098:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084da147 +0x09d:  mov    $0x0,%ebx
084da14c +0x0a2:  jmp    084da1f1 <+0x147>
084da151 +0x0a7:  lea    -0x18(%ebp),%eax
084da154 +0x0aa:  mov    %eax,(%esp)
084da157 +0x0ad:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084da15c +0x0b2:  movl   $0xd9,0x8(%esp)
084da164 +0x0ba:  movl   $0x1,0x4(%esp)
084da16c +0x0c2:  lea    -0x18(%ebp),%eax
084da16f +0x0c5:  mov    %eax,(%esp)
084da172 +0x0c8:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084da177 +0x0cd:  movl   $0x1,0x4(%esp)
084da17f +0x0d5:  lea    -0x18(%ebp),%eax
084da182 +0x0d8:  mov    %eax,(%esp)
084da185 +0x0db:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084da18a +0x0e0:  mov    -0xc(%ebp),%eax
084da18d +0x0e3:  mov    0x12(%eax),%eax
084da190 +0x0e6:  mov    %eax,0x4(%esp)
084da194 +0x0ea:  lea    -0x18(%ebp),%eax
084da197 +0x0ed:  mov    %eax,(%esp)
084da19a +0x0f0:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084da19f +0x0f5:  movl   $0x1,0x4(%esp)
084da1a7 +0x0fd:  lea    -0x18(%ebp),%eax
084da1aa +0x100:  mov    %eax,(%esp)
084da1ad +0x103:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084da1b2 +0x108:  lea    -0x18(%ebp),%eax
084da1b5 +0x10b:  mov    %eax,0x4(%esp)
084da1b9 +0x10f:  mov    0xc(%ebp),%eax
084da1bc +0x112:  mov    %eax,(%esp)
084da1bf +0x115:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084da1c4 +0x11a:  mov    $0x0,%ebx
084da1c9 +0x11f:  lea    -0x18(%ebp),%eax
084da1cc +0x122:  mov    %eax,(%esp)
084da1cf +0x125:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084da1d4 +0x12a:  jmp    084da1f1 <+0x147>
084da1d6 +0x12c:  mov    %edx,%ebx
084da1d8 +0x12e:  mov    %eax,%esi
084da1da +0x130:  lea    -0x18(%ebp),%eax
084da1dd +0x133:  mov    %eax,(%esp)
084da1e0 +0x136:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084da1e5 +0x13b:  mov    %esi,%eax
084da1e7 +0x13d:  mov    %ebx,%edx
084da1e9 +0x13f:  mov    %eax,(%esp)
084da1ec +0x142:  call   08ae3750 <_Unwind_Resume>
084da1f1 +0x147:  mov    %ebx,%eax
084da1f3 +0x149:  add    $0x30,%esp
084da1f6 +0x14c:  pop    %ebx
084da1f7 +0x14d:  pop    %esi
084da1f8 +0x14e:  pop    %ebp
084da1f9 +0x14f:  ret
```

## 反编译 C

```c
// Inter_ResposncePCRoomPlyerCount::dispatch_sig @ 0x84da0aa

/* Inter_ResposncePCRoomPlyerCount::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_ResposncePCRoomPlyerCount::dispatch_sig(CUser *param_1,char *param_2,int param_3)

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
    if (iVar2 == *(int *)(local_10 + 0xe)) {
      PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084da172 to 084da1c3 has its CatchHandler @ 084da1d6 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0xd9);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0x12));
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
      CUser::Send((CUser *)param_2,local_1c);
      PacketGuard::~PacketGuard(local_1c);
    }
    else {
      uVar1 = *(undefined4 *)(local_10 + 0xe);
      uVar3 = CUser::get_charac_no((CUser *)param_2,-1);
      LogManager::logFormat
                (1,"InterDispatcher.cpp",
                 "virtual int Inter_ResposncePCRoomPlyerCount::dispatch_sig(CUser*, char*, int)",
                 0x41cc,
                 "Inter_ResponsePCRoomPlayerCount::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)"
                 ,uVar3,uVar1);
    }
  }
  return 0;
}
```

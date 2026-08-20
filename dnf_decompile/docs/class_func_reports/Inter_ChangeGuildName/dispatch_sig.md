# dispatch_sig

`_ZN21Inter_ChangeGuildName12dispatch_sigEP5CUserPci`

`Inter_ChangeGuildName::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_ChangeGuildName` | `0x084d5072` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084d5072  _ZN21Inter_ChangeGuildName12dispatch_sigEP5CUserPci
#           Inter_ChangeGuildName::dispatch_sig(CUser*, char*, int)
# range [0x084d5072, 0x084d51d7]
084d5072 +0x000:  push   %ebp
084d5073 +0x001:  mov    %esp,%ebp
084d5075 +0x003:  push   %esi
084d5076 +0x004:  push   %ebx
084d5077 +0x005:  sub    $0x30,%esp
084d507a +0x008:  mov    0x10(%ebp),%eax
084d507d +0x00b:  mov    %eax,-0x10(%ebp)
084d5080 +0x00e:  lea    -0x1c(%ebp),%eax
084d5083 +0x011:  mov    %eax,(%esp)
084d5086 +0x014:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084d508b +0x019:  movl   $0xb6,0x8(%esp)
084d5093 +0x021:  movl   $0x1,0x4(%esp)
084d509b +0x029:  lea    -0x1c(%ebp),%eax
084d509e +0x02c:  mov    %eax,(%esp)
084d50a1 +0x02f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084d50a6 +0x034:  mov    -0x10(%ebp),%eax
084d50a9 +0x037:  movzbl 0x16(%eax),%eax
084d50ad +0x03b:  test   %al,%al
084d50af +0x03d:  jne    084d5157 <+0xe5>
084d50b5 +0x043:  movl   $0x1,0x4(%esp)
084d50bd +0x04b:  lea    -0x1c(%ebp),%eax
084d50c0 +0x04e:  mov    %eax,(%esp)
084d50c3 +0x051:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d50c8 +0x056:  mov    -0x10(%ebp),%eax
084d50cb +0x059:  add    $0x17,%eax
084d50ce +0x05c:  mov    %eax,(%esp)
084d50d1 +0x05f:  call   0807e3b0 <_init+0xca8>
084d50d6 +0x064:  mov    %eax,-0xc(%ebp)
084d50d9 +0x067:  mov    -0xc(%ebp),%eax
084d50dc +0x06a:  mov    %eax,0x4(%esp)
084d50e0 +0x06e:  lea    -0x1c(%ebp),%eax
084d50e3 +0x071:  mov    %eax,(%esp)
084d50e6 +0x074:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084d50eb +0x079:  mov    -0x10(%ebp),%eax
084d50ee +0x07c:  lea    0x17(%eax),%edx
084d50f1 +0x07f:  mov    -0xc(%ebp),%eax
084d50f4 +0x082:  mov    %eax,0x8(%esp)
084d50f8 +0x086:  mov    %edx,0x4(%esp)
084d50fc +0x08a:  lea    -0x1c(%ebp),%eax
084d50ff +0x08d:  mov    %eax,(%esp)
084d5102 +0x090:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084d5107 +0x095:  mov    -0x10(%ebp),%eax
084d510a +0x098:  add    $0x17,%eax
084d510d +0x09b:  mov    %eax,0x4(%esp)
084d5111 +0x09f:  mov    0xc(%ebp),%eax
084d5114 +0x0a2:  mov    %eax,(%esp)
084d5117 +0x0a5:  call   084ece64 <_GLOBAL__I__Z7getUserj+0x3e16>  ; global constructors keyed to getUser(unsigned int)+0x3e16
084d511c +0x0aa:  mov    -0x10(%ebp),%eax
084d511f +0x0ad:  lea    0x17(%eax),%esi
084d5122 +0x0b0:  mov    -0x10(%ebp),%eax
084d5125 +0x0b3:  mov    0xe(%eax),%ebx
084d5128 +0x0b6:  mov    0xc(%ebp),%eax
084d512b +0x0b9:  mov    %eax,(%esp)
084d512e +0x0bc:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
084d5133 +0x0c1:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%edx
084d5139 +0x0c7:  mov    %eax,0x4(%esp)
084d513d +0x0cb:  mov    %edx,(%esp)
084d5140 +0x0ce:  call   0811d3b8 <_GLOBAL__I__ZN14CGuildWarEventC2Ev+0x1c>  ; global constructors keyed to CGuildWarEvent::CGuildWarEvent()+0x1c
084d5145 +0x0d3:  mov    %esi,0x8(%esp)
084d5149 +0x0d7:  mov    %ebx,0x4(%esp)
084d514d +0x0db:  mov    %eax,(%esp)
084d5150 +0x0de:  call   0846ea3e <_ZN17CGuildServerProxy22ChangeGuildNameInProxyEjPc>  ; CGuildServerProxy::ChangeGuildNameInProxy(unsigned int, char*)
084d5155 +0x0e3:  jmp    084d5183 <+0x111>
084d5157 +0x0e5:  movl   $0x0,0x4(%esp)
084d515f +0x0ed:  lea    -0x1c(%ebp),%eax
084d5162 +0x0f0:  mov    %eax,(%esp)
084d5165 +0x0f3:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d516a +0x0f8:  mov    -0x10(%ebp),%eax
084d516d +0x0fb:  movzbl 0x16(%eax),%eax
084d5171 +0x0ff:  movzbl %al,%eax
084d5174 +0x102:  mov    %eax,0x4(%esp)
084d5178 +0x106:  lea    -0x1c(%ebp),%eax
084d517b +0x109:  mov    %eax,(%esp)
084d517e +0x10c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d5183 +0x111:  movl   $0x1,0x4(%esp)
084d518b +0x119:  lea    -0x1c(%ebp),%eax
084d518e +0x11c:  mov    %eax,(%esp)
084d5191 +0x11f:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084d5196 +0x124:  lea    -0x1c(%ebp),%eax
084d5199 +0x127:  mov    %eax,0x4(%esp)
084d519d +0x12b:  mov    0xc(%ebp),%eax
084d51a0 +0x12e:  mov    %eax,(%esp)
084d51a3 +0x131:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084d51a8 +0x136:  mov    $0x0,%ebx
084d51ad +0x13b:  lea    -0x1c(%ebp),%eax
084d51b0 +0x13e:  mov    %eax,(%esp)
084d51b3 +0x141:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d51b8 +0x146:  mov    %ebx,%eax
084d51ba +0x148:  add    $0x30,%esp
084d51bd +0x14b:  pop    %ebx
084d51be +0x14c:  pop    %esi
084d51bf +0x14d:  pop    %ebp
084d51c0 +0x14e:  ret
084d51c1 +0x14f:  mov    %edx,%ebx
084d51c3 +0x151:  mov    %eax,%esi
084d51c5 +0x153:  lea    -0x1c(%ebp),%eax
084d51c8 +0x156:  mov    %eax,(%esp)
084d51cb +0x159:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d51d0 +0x15e:  mov    %esi,%eax
084d51d2 +0x160:  mov    %ebx,%edx
084d51d4 +0x162:  mov    %eax,(%esp)
084d51d7 +0x165:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// Inter_ChangeGuildName::dispatch_sig @ 0x84d5072

/* Inter_ChangeGuildName::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_ChangeGuildName::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  char *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  CGuildServerProxy *this;
  PacketGuard local_20 [12];
  int local_14;
  size_t local_10;
  
  local_14 = param_3;
  PacketGuard::PacketGuard(local_20);
                    /* try { // try from 084d50a1 to 084d51a7 has its CatchHandler @ 084d51c1 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,1,0xb6);
  if (*(char *)(local_14 + 0x16) == '\0') {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,1);
    local_10 = strlen((char *)(local_14 + 0x17));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,local_10);
    InterfacePacketBuf::put_str((InterfacePacketBuf *)local_20,(char *)(local_14 + 0x17),local_10);
    CUser::ChangeGuildName((CUser *)param_2,(char *)(local_14 + 0x17));
    pcVar1 = (char *)(local_14 + 0x17);
    uVar2 = *(uint *)(local_14 + 0xe);
    uVar3 = CUser::GetServerGroup((CUser *)param_2);
    this = (CGuildServerProxy *)
           CServerProxyMgr<CGuildServerProxy>::GetServerProxy(GlobalData::s_guild_proxy_mgr,uVar3);
    CGuildServerProxy::ChangeGuildNameInProxy(this,uVar2,pcVar1);
  }
  else {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(uint)*(byte *)(local_14 + 0x16));
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
  CUser::Send((CUser *)param_2,local_20);
  PacketGuard::~PacketGuard(local_20);
  return 0;
}
```

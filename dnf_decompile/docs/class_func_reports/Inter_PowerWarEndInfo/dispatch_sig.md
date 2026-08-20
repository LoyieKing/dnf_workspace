# dispatch_sig

`_ZN21Inter_PowerWarEndInfo12dispatch_sigEP5CUserPci`

`Inter_PowerWarEndInfo::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_PowerWarEndInfo` | `0x084db070` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084db070  _ZN21Inter_PowerWarEndInfo12dispatch_sigEP5CUserPci
#           Inter_PowerWarEndInfo::dispatch_sig(CUser*, char*, int)
# range [0x084db070, 0x084db1ff]
084db070 +0x000:  push   %ebp
084db071 +0x001:  mov    %esp,%ebp
084db073 +0x003:  push   %esi
084db074 +0x004:  push   %ebx
084db075 +0x005:  sub    $0x20,%esp
084db078 +0x008:  mov    0x10(%ebp),%eax
084db07b +0x00b:  mov    %eax,-0xc(%ebp)
084db07e +0x00e:  mov    -0xc(%ebp),%eax
084db081 +0x011:  mov    0xe(%eax),%ebx
084db084 +0x014:  movl   $0xffffffff,0x4(%esp)
084db08c +0x01c:  mov    0xc(%ebp),%eax
084db08f +0x01f:  mov    %eax,(%esp)
084db092 +0x022:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084db097 +0x027:  cmp    %eax,%ebx
084db099 +0x029:  setne  %al
084db09c +0x02c:  test   %al,%al
084db09e +0x02e:  je     084db0aa <+0x3a>
084db0a0 +0x030:  mov    $0x0,%ebx
084db0a5 +0x035:  jmp    084db1f6 <+0x186>
084db0aa +0x03a:  lea    -0x18(%ebp),%eax
084db0ad +0x03d:  mov    %eax,(%esp)
084db0b0 +0x040:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084db0b5 +0x045:  movl   $0xdf,0x8(%esp)
084db0bd +0x04d:  movl   $0x0,0x4(%esp)
084db0c5 +0x055:  lea    -0x18(%ebp),%eax
084db0c8 +0x058:  mov    %eax,(%esp)
084db0cb +0x05b:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084db0d0 +0x060:  mov    -0xc(%ebp),%eax
084db0d3 +0x063:  movzbl 0x12(%eax),%eax
084db0d7 +0x067:  movzbl %al,%eax
084db0da +0x06a:  mov    %eax,0x4(%esp)
084db0de +0x06e:  lea    -0x18(%ebp),%eax
084db0e1 +0x071:  mov    %eax,(%esp)
084db0e4 +0x074:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084db0e9 +0x079:  mov    -0xc(%ebp),%eax
084db0ec +0x07c:  mov    0x13(%eax),%eax
084db0ef +0x07f:  mov    %eax,0x4(%esp)
084db0f3 +0x083:  lea    -0x18(%ebp),%eax
084db0f6 +0x086:  mov    %eax,(%esp)
084db0f9 +0x089:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084db0fe +0x08e:  mov    -0xc(%ebp),%eax
084db101 +0x091:  mov    0x17(%eax),%eax
084db104 +0x094:  mov    %eax,0x4(%esp)
084db108 +0x098:  lea    -0x18(%ebp),%eax
084db10b +0x09b:  mov    %eax,(%esp)
084db10e +0x09e:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084db113 +0x0a3:  mov    -0xc(%ebp),%eax
084db116 +0x0a6:  mov    0x1b(%eax),%eax
084db119 +0x0a9:  mov    %eax,0x4(%esp)
084db11d +0x0ad:  lea    -0x18(%ebp),%eax
084db120 +0x0b0:  mov    %eax,(%esp)
084db123 +0x0b3:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084db128 +0x0b8:  mov    -0xc(%ebp),%eax
084db12b +0x0bb:  mov    0x1f(%eax),%eax
084db12e +0x0be:  mov    %eax,0x4(%esp)
084db132 +0x0c2:  lea    -0x18(%ebp),%eax
084db135 +0x0c5:  mov    %eax,(%esp)
084db138 +0x0c8:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084db13d +0x0cd:  mov    -0xc(%ebp),%eax
084db140 +0x0d0:  mov    0x23(%eax),%eax
084db143 +0x0d3:  mov    %eax,0x4(%esp)
084db147 +0x0d7:  lea    -0x18(%ebp),%eax
084db14a +0x0da:  mov    %eax,(%esp)
084db14d +0x0dd:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084db152 +0x0e2:  mov    &_ZN10GlobalData15s_power_managerE,%eax
084db157 +0x0e7:  mov    %eax,(%esp)
084db15a +0x0ea:  call   0837501a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xefe6>  ; global constructors keyed to CServerEvent::m_nExpRate+0xefe6
084db15f +0x0ef:  mov    %eax,%ebx
084db161 +0x0f1:  mov    0xc(%ebp),%eax
084db164 +0x0f4:  mov    %eax,(%esp)
084db167 +0x0f7:  call   0822fcc6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5370>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5370
084db16c +0x0fc:  cmp    %al,%bl
084db16e +0x0fe:  sete   %al
084db171 +0x101:  test   %al,%al
084db173 +0x103:  je     084db191 <+0x121>
084db175 +0x105:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084db17a +0x10a:  mov    0xa6a4(%eax),%eax
084db180 +0x110:  mov    %eax,0x4(%esp)
084db184 +0x114:  lea    -0x18(%ebp),%eax
084db187 +0x117:  mov    %eax,(%esp)
084db18a +0x11a:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084db18f +0x11f:  jmp    084db1a4 <+0x134>
084db191 +0x121:  movl   $0x0,0x4(%esp)
084db199 +0x129:  lea    -0x18(%ebp),%eax
084db19c +0x12c:  mov    %eax,(%esp)
084db19f +0x12f:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084db1a4 +0x134:  movl   $0x1,0x4(%esp)
084db1ac +0x13c:  lea    -0x18(%ebp),%eax
084db1af +0x13f:  mov    %eax,(%esp)
084db1b2 +0x142:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084db1b7 +0x147:  lea    -0x18(%ebp),%eax
084db1ba +0x14a:  mov    %eax,0x4(%esp)
084db1be +0x14e:  mov    0xc(%ebp),%eax
084db1c1 +0x151:  mov    %eax,(%esp)
084db1c4 +0x154:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084db1c9 +0x159:  mov    $0x0,%ebx
084db1ce +0x15e:  lea    -0x18(%ebp),%eax
084db1d1 +0x161:  mov    %eax,(%esp)
084db1d4 +0x164:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084db1d9 +0x169:  jmp    084db1f6 <+0x186>
084db1db +0x16b:  mov    %edx,%ebx
084db1dd +0x16d:  mov    %eax,%esi
084db1df +0x16f:  lea    -0x18(%ebp),%eax
084db1e2 +0x172:  mov    %eax,(%esp)
084db1e5 +0x175:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084db1ea +0x17a:  mov    %esi,%eax
084db1ec +0x17c:  mov    %ebx,%edx
084db1ee +0x17e:  mov    %eax,(%esp)
084db1f1 +0x181:  call   08ae3750 <_Unwind_Resume>
084db1f6 +0x186:  mov    %ebx,%eax
084db1f8 +0x188:  add    $0x20,%esp
084db1fb +0x18b:  pop    %ebx
084db1fc +0x18c:  pop    %esi
084db1fd +0x18d:  pop    %ebp
084db1fe +0x18e:  ret
084db1ff +0x18f:  nop
```

## 反编译 C

```c
// Inter_PowerWarEndInfo::dispatch_sig @ 0x84db070

/* Inter_PowerWarEndInfo::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_PowerWarEndInfo::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  PacketGuard local_1c [12];
  int local_10;
  
  local_10 = param_3;
  iVar4 = *(int *)(param_3 + 0xe);
  iVar3 = CUser::get_charac_no((CUser *)param_2,-1);
  if (iVar4 == iVar3) {
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084db0cb to 084db1c8 has its CatchHandler @ 084db1db */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0xdf);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(uint)*(byte *)(local_10 + 0x12));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0x13));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0x17));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0x1b));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0x1f));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0x23));
    cVar1 = CPowerManager::GetWinnerSide(GlobalData::s_power_manager);
    cVar2 = CUser::getPowerSide((CUser *)param_2);
    if (cVar1 == cVar2) {
      iVar4 = G_CDataManager();
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(iVar4 + 0xa6a4));
    }
    else {
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,0);
    }
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send((CUser *)param_2,local_1c);
    PacketGuard::~PacketGuard(local_1c);
  }
  return 0;
}
```

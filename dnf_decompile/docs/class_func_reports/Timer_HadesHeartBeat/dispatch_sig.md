# dispatch_sig

`_ZN20Timer_HadesHeartBeat12dispatch_sigEiij`

`Timer_HadesHeartBeat::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `Timer_HadesHeartBeat` | `0x0863a760` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0863a760  _ZN20Timer_HadesHeartBeat12dispatch_sigEiij
#           Timer_HadesHeartBeat::dispatch_sig(int, int, unsigned int)
# range [0x0863a760, 0x0863a7c1]
0863a760 +0x00:  push   %ebp
0863a761 +0x01:  mov    %esp,%ebp
0863a763 +0x03:  push   %ebx
0863a764 +0x04:  sub    $0x14,%esp
0863a767 +0x07:  mov    &_ZN10GlobalData13s_hades_proxyE,%eax
0863a76c +0x0c:  mov    %eax,(%esp)
0863a76f +0x0f:  call   0847092c <_GLOBAL__I__ZN17CHadesServerProxyC2EPcii+0x65>  ; global constructors keyed to CHadesServerProxy::CHadesServerProxy(char*, int, int)+0x65
0863a774 +0x14:  test   %eax,%eax
0863a776 +0x16:  sete   %al
0863a779 +0x19:  test   %al,%al
0863a77b +0x1b:  je     0863a7b6 <+0x56>
0863a77d +0x1d:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0863a782 +0x22:  mov    %eax,(%esp)
0863a785 +0x25:  call   0814aaca <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x869>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x869
0863a78a +0x2a:  mov    %eax,%ebx
0863a78c +0x2c:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0863a791 +0x31:  mov    %eax,(%esp)
0863a794 +0x34:  call   082a6d6a <_GLOBAL__I__ZN4CLog5this_E+0x3191>  ; global constructors keyed to CLog::this_+0x3191
0863a799 +0x39:  movzwl %ax,%edx
0863a79c +0x3c:  mov    &_ZN10GlobalData13s_hades_proxyE,%eax
0863a7a1 +0x41:  mov    %ebx,0x8(%esp)
0863a7a5 +0x45:  mov    %edx,0x4(%esp)
0863a7a9 +0x49:  mov    %eax,(%esp)
0863a7ac +0x4c:  call   08470682 <_ZN17CHadesServerProxy19SendHeartBeatPacketEti>  ; CHadesServerProxy::SendHeartBeatPacket(unsigned short, int)
0863a7b1 +0x51:  call   0863a7c2 <_ZN20Timer_HadesHeartBeat15registNextTimerEv>  ; Timer_HadesHeartBeat::registNextTimer()
0863a7b6 +0x56:  mov    $0x1,%eax
0863a7bb +0x5b:  add    $0x14,%esp
0863a7be +0x5e:  pop    %ebx
0863a7bf +0x5f:  pop    %ebp
0863a7c0 +0x60:  ret
0863a7c1 +0x61:  nop
```

## 反编译 C

```c
// Timer_HadesHeartBeat::dispatch_sig @ 0x863a760

/* Timer_HadesHeartBeat::dispatch_sig(int, int, unsigned int) */

undefined4 Timer_HadesHeartBeat::dispatch_sig(int param_1,int param_2,uint param_3)

{
  ushort uVar1;
  int iVar2;
  CEnvironment *pCVar3;
  
  iVar2 = BaseServerProxy::GetSocketState(GlobalData::s_hades_proxy);
  if (iVar2 == 0) {
    pCVar3 = (CEnvironment *)G_CEnvironment();
    iVar2 = CEnvironment::get_channel_no(pCVar3);
    pCVar3 = (CEnvironment *)G_CEnvironment();
    uVar1 = CEnvironment::get_udp_port(pCVar3);
    CHadesServerProxy::SendHeartBeatPacket
              ((CHadesServerProxy *)GlobalData::s_hades_proxy,uVar1,iVar2);
    registNextTimer();
  }
  return 1;
}
```

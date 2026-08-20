# dispatch_sig

`_ZN31Dispatcher_Request_PvpExpOfWeek12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_Request_PvpExpOfWeek::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Request_PvpExpOfWeek` | `0x081fecaa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081fecaa  _ZN31Dispatcher_Request_PvpExpOfWeek12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_Request_PvpExpOfWeek::dispatch_sig(CUser*, PacketBuf&)
# range [0x081fecaa, 0x081fed4b]
081fecaa +0x00:  push   %ebp
081fecab +0x01:  mov    %esp,%ebp
081fecad +0x03:  push   %esi
081fecae +0x04:  push   %ebx
081fecaf +0x05:  sub    $0x20,%esp
081fecb2 +0x08:  lea    -0x14(%ebp),%eax
081fecb5 +0x0b:  mov    %eax,(%esp)
081fecb8 +0x0e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081fecbd +0x13:  movl   $0x39,0x8(%esp)
081fecc5 +0x1b:  movl   $0x0,0x4(%esp)
081feccd +0x23:  lea    -0x14(%ebp),%eax
081fecd0 +0x26:  mov    %eax,(%esp)
081fecd3 +0x29:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081fecd8 +0x2e:  mov    0xc(%ebp),%eax
081fecdb +0x31:  mov    %eax,(%esp)
081fecde +0x34:  call   08230100 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x57aa>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x57aa
081fece3 +0x39:  mov    %eax,0x4(%esp)
081fece7 +0x3d:  lea    -0x14(%ebp),%eax
081fecea +0x40:  mov    %eax,(%esp)
081feced +0x43:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081fecf2 +0x48:  movl   $0x1,0x4(%esp)
081fecfa +0x50:  lea    -0x14(%ebp),%eax
081fecfd +0x53:  mov    %eax,(%esp)
081fed00 +0x56:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081fed05 +0x5b:  lea    -0x14(%ebp),%eax
081fed08 +0x5e:  mov    %eax,0x4(%esp)
081fed0c +0x62:  mov    0xc(%ebp),%eax
081fed0f +0x65:  mov    %eax,(%esp)
081fed12 +0x68:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081fed17 +0x6d:  mov    $0x0,%ebx
081fed1c +0x72:  lea    -0x14(%ebp),%eax
081fed1f +0x75:  mov    %eax,(%esp)
081fed22 +0x78:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081fed27 +0x7d:  mov    %ebx,%eax
081fed29 +0x7f:  add    $0x20,%esp
081fed2c +0x82:  pop    %ebx
081fed2d +0x83:  pop    %esi
081fed2e +0x84:  pop    %ebp
081fed2f +0x85:  ret
081fed30 +0x86:  mov    %edx,%ebx
081fed32 +0x88:  mov    %eax,%esi
081fed34 +0x8a:  lea    -0x14(%ebp),%eax
081fed37 +0x8d:  mov    %eax,(%esp)
081fed3a +0x90:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081fed3f +0x95:  mov    %esi,%eax
081fed41 +0x97:  mov    %ebx,%edx
081fed43 +0x99:  mov    %eax,(%esp)
081fed46 +0x9c:  call   08ae3750 <_Unwind_Resume>
081fed4b +0xa1:  nop
```

## 反编译 C

```c
// Dispatcher_Request_PvpExpOfWeek::dispatch_sig @ 0x81fecaa

/* Dispatcher_Request_PvpExpOfWeek::dispatch_sig(CUser*, PacketBuf&) */

undefined4 Dispatcher_Request_PvpExpOfWeek::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  int iVar1;
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 081fecd3 to 081fed16 has its CatchHandler @ 081fed30 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x39);
  iVar1 = CUser::get_pvp_exp_of_week((CUser *)param_2);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,iVar1);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  CUser::Send((CUser *)param_2,local_18);
  PacketGuard::~PacketGuard(local_18);
  return 0;
}
```

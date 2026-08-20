# SendResult

`_ZN24DisPatcher_SetPlayResult10SendResultEP6CPartyR13GameResultSeti`

`DisPatcher_SetPlayResult::SendResult(CParty*, GameResultSet&, int)`

| 类 | 地址 |
|---|---|
| `DisPatcher_SetPlayResult` | `0x081f5db6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081f5db6  _ZN24DisPatcher_SetPlayResult10SendResultEP6CPartyR13GameResultSeti
#           DisPatcher_SetPlayResult::SendResult(CParty*, GameResultSet&, int)
# range [0x081f5db6, 0x081f5eb9]
081f5db6 +0x000:  push   %ebp
081f5db7 +0x001:  mov    %esp,%ebp
081f5db9 +0x003:  push   %esi
081f5dba +0x004:  push   %ebx
081f5dbb +0x005:  sub    $0x20,%esp
081f5dbe +0x008:  lea    -0x14(%ebp),%eax
081f5dc1 +0x00b:  mov    %eax,(%esp)
081f5dc4 +0x00e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081f5dc9 +0x013:  movl   $0x22,0x8(%esp)
081f5dd1 +0x01b:  movl   $0x0,0x4(%esp)
081f5dd9 +0x023:  lea    -0x14(%ebp),%eax
081f5ddc +0x026:  mov    %eax,(%esp)
081f5ddf +0x029:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081f5de4 +0x02e:  mov    0xc(%ebp),%eax
081f5de7 +0x031:  movzwl 0x48(%eax),%eax
081f5deb +0x035:  movzwl %ax,%eax
081f5dee +0x038:  mov    %eax,0x4(%esp)
081f5df2 +0x03c:  lea    -0x14(%ebp),%eax
081f5df5 +0x03f:  mov    %eax,(%esp)
081f5df8 +0x042:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f5dfd +0x047:  mov    0xc(%ebp),%eax
081f5e00 +0x04a:  mov    0xc(%eax),%eax
081f5e03 +0x04d:  mov    %eax,0x4(%esp)
081f5e07 +0x051:  lea    -0x14(%ebp),%eax
081f5e0a +0x054:  mov    %eax,(%esp)
081f5e0d +0x057:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081f5e12 +0x05c:  mov    0xc(%ebp),%eax
081f5e15 +0x05f:  movzbl 0x10(%eax),%eax
081f5e19 +0x063:  movsbl %al,%eax
081f5e1c +0x066:  mov    %eax,0x4(%esp)
081f5e20 +0x06a:  lea    -0x14(%ebp),%eax
081f5e23 +0x06d:  mov    %eax,(%esp)
081f5e26 +0x070:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f5e2b +0x075:  mov    0xc(%ebp),%eax
081f5e2e +0x078:  movzbl 0x9(%eax),%eax
081f5e32 +0x07c:  movsbl %al,%eax
081f5e35 +0x07f:  mov    %eax,0x4(%esp)
081f5e39 +0x083:  lea    -0x14(%ebp),%eax
081f5e3c +0x086:  mov    %eax,(%esp)
081f5e3f +0x089:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f5e44 +0x08e:  mov    0xc(%ebp),%eax
081f5e47 +0x091:  mov    0xc(%eax),%eax
081f5e4a +0x094:  mov    %eax,0x8(%esp)
081f5e4e +0x098:  lea    -0x14(%ebp),%eax
081f5e51 +0x09b:  mov    %eax,0x4(%esp)
081f5e55 +0x09f:  mov    0x8(%ebp),%eax
081f5e58 +0x0a2:  mov    %eax,(%esp)
081f5e5b +0x0a5:  call   085be1f8 <_ZN6CParty23makeBestClearTimePacketER11PacketGuardi>  ; CParty::makeBestClearTimePacket(PacketGuard&, int)
081f5e60 +0x0aa:  movl   $0x1,0x4(%esp)
081f5e68 +0x0b2:  lea    -0x14(%ebp),%eax
081f5e6b +0x0b5:  mov    %eax,(%esp)
081f5e6e +0x0b8:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081f5e73 +0x0bd:  lea    -0x14(%ebp),%eax
081f5e76 +0x0c0:  mov    %eax,0x4(%esp)
081f5e7a +0x0c4:  mov    0x8(%ebp),%eax
081f5e7d +0x0c7:  mov    %eax,(%esp)
081f5e80 +0x0ca:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
081f5e85 +0x0cf:  mov    $0x1,%ebx
081f5e8a +0x0d4:  lea    -0x14(%ebp),%eax
081f5e8d +0x0d7:  mov    %eax,(%esp)
081f5e90 +0x0da:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081f5e95 +0x0df:  mov    %ebx,%eax
081f5e97 +0x0e1:  add    $0x20,%esp
081f5e9a +0x0e4:  pop    %ebx
081f5e9b +0x0e5:  pop    %esi
081f5e9c +0x0e6:  pop    %ebp
081f5e9d +0x0e7:  ret
081f5e9e +0x0e8:  mov    %edx,%ebx
081f5ea0 +0x0ea:  mov    %eax,%esi
081f5ea2 +0x0ec:  lea    -0x14(%ebp),%eax
081f5ea5 +0x0ef:  mov    %eax,(%esp)
081f5ea8 +0x0f2:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081f5ead +0x0f7:  mov    %esi,%eax
081f5eaf +0x0f9:  mov    %ebx,%edx
081f5eb1 +0x0fb:  mov    %eax,(%esp)
081f5eb4 +0x0fe:  call   08ae3750 <_Unwind_Resume>
081f5eb9 +0x103:  nop
```

## 反编译 C

```c
// DisPatcher_SetPlayResult::SendResult @ 0x81f5db6

/* DisPatcher_SetPlayResult::SendResult(CParty*, GameResultSet&, int) */

undefined4 DisPatcher_SetPlayResult::SendResult(CParty *param_1,GameResultSet *param_2,int param_3)

{
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 081f5ddf to 081f5e84 has its CatchHandler @ 081f5e9e */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x22);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,(uint)*(ushort *)(param_2 + 0x48));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,*(int *)(param_2 + 0xc));
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,(int)(char)param_2[0x10]);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,(int)(char)param_2[9]);
  CParty::makeBestClearTimePacket(param_1,local_18,*(int *)(param_2 + 0xc));
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  CParty::send_to_party(param_1,local_18);
  PacketGuard::~PacketGuard(local_18);
  return 1;
}
```

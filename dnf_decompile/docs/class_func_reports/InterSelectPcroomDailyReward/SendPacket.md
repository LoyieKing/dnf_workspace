# SendPacket

`_ZN28InterSelectPcroomDailyReward10SendPacketEP5CUser`

`InterSelectPcroomDailyReward::SendPacket(CUser*)`

| 类 | 地址 |
|---|---|
| `InterSelectPcroomDailyReward` | `0x081618a6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081618a6  _ZN28InterSelectPcroomDailyReward10SendPacketEP5CUser
#           InterSelectPcroomDailyReward::SendPacket(CUser*)
# range [0x081618a6, 0x08161951]
081618a6 +0x00:  push   %ebp
081618a7 +0x01:  mov    %esp,%ebp
081618a9 +0x03:  push   %esi
081618aa +0x04:  push   %ebx
081618ab +0x05:  sub    $0x20,%esp
081618ae +0x08:  cmpl   $0x0,0x8(%ebp)
081618b2 +0x0c:  je     08161949 <+0xa3>
081618b8 +0x12:  lea    -0x14(%ebp),%eax
081618bb +0x15:  mov    %eax,(%esp)
081618be +0x18:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081618c3 +0x1d:  movl   $0x22e,0x8(%esp)
081618cb +0x25:  movl   $0x0,0x4(%esp)
081618d3 +0x2d:  lea    -0x14(%ebp),%eax
081618d6 +0x30:  mov    %eax,(%esp)
081618d9 +0x33:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081618de +0x38:  mov    0x8(%ebp),%eax
081618e1 +0x3b:  movzbl 0x8ec32(%eax),%eax
081618e8 +0x42:  movsbl %al,%eax
081618eb +0x45:  mov    %eax,0x4(%esp)
081618ef +0x49:  lea    -0x14(%ebp),%eax
081618f2 +0x4c:  mov    %eax,(%esp)
081618f5 +0x4f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081618fa +0x54:  movl   $0x1,0x4(%esp)
08161902 +0x5c:  lea    -0x14(%ebp),%eax
08161905 +0x5f:  mov    %eax,(%esp)
08161908 +0x62:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0816190d +0x67:  lea    -0x14(%ebp),%eax
08161910 +0x6a:  mov    %eax,0x4(%esp)
08161914 +0x6e:  mov    0x8(%ebp),%eax
08161917 +0x71:  mov    %eax,(%esp)
0816191a +0x74:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0816191f +0x79:  jmp    0816193c <+0x96>
08161921 +0x7b:  mov    %edx,%ebx
08161923 +0x7d:  mov    %eax,%esi
08161925 +0x7f:  lea    -0x14(%ebp),%eax
08161928 +0x82:  mov    %eax,(%esp)
0816192b +0x85:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08161930 +0x8a:  mov    %esi,%eax
08161932 +0x8c:  mov    %ebx,%edx
08161934 +0x8e:  mov    %eax,(%esp)
08161937 +0x91:  call   08ae3750 <_Unwind_Resume>
0816193c +0x96:  lea    -0x14(%ebp),%eax
0816193f +0x99:  mov    %eax,(%esp)
08161942 +0x9c:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08161947 +0xa1:  jmp    0816194a <+0xa4>
08161949 +0xa3:  nop
0816194a +0xa4:  add    $0x20,%esp
0816194d +0xa7:  pop    %ebx
0816194e +0xa8:  pop    %esi
0816194f +0xa9:  pop    %ebp
08161950 +0xaa:  ret
08161951 +0xab:  nop
```

## 反编译 C

```c
// InterSelectPcroomDailyReward::SendPacket @ 0x81618a6

/* InterSelectPcroomDailyReward::SendPacket(CUser*) */

void InterSelectPcroomDailyReward::SendPacket(CUser *param_1)

{
  PacketGuard local_18 [12];
  
  if (param_1 != (CUser *)0x0) {
    PacketGuard::PacketGuard(local_18);
                    /* try { // try from 081618d9 to 0816191e has its CatchHandler @ 08161921 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x22e);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,(int)(char)param_1[0x8ec32]);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
    CUser::Send(param_1,local_18);
    PacketGuard::~PacketGuard(local_18);
  }
  return;
}
```

# SendRequestFight

`_ZN15CRelayBattleMgr16SendRequestFightEi`

`CRelayBattleMgr::SendRequestFight(int)`

| 类 | 地址 |
|---|---|
| `CRelayBattleMgr` | `0x085decd8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085decd8  _ZN15CRelayBattleMgr16SendRequestFightEi
#           CRelayBattleMgr::SendRequestFight(int)
# range [0x085decd8, 0x085ded6f]
085decd8 +0x00:  push   %ebp
085decd9 +0x01:  mov    %esp,%ebp
085decdb +0x03:  push   %esi
085decdc +0x04:  push   %ebx
085decdd +0x05:  sub    $0x20,%esp
085dece0 +0x08:  lea    -0x14(%ebp),%eax
085dece3 +0x0b:  mov    %eax,(%esp)
085dece6 +0x0e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
085deceb +0x13:  movl   $0x71,0x8(%esp)
085decf3 +0x1b:  movl   $0x0,0x4(%esp)
085decfb +0x23:  lea    -0x14(%ebp),%eax
085decfe +0x26:  mov    %eax,(%esp)
085ded01 +0x29:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085ded06 +0x2e:  mov    0xc(%ebp),%eax
085ded09 +0x31:  mov    %eax,0x4(%esp)
085ded0d +0x35:  lea    -0x14(%ebp),%eax
085ded10 +0x38:  mov    %eax,(%esp)
085ded13 +0x3b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085ded18 +0x40:  movl   $0x1,0x4(%esp)
085ded20 +0x48:  lea    -0x14(%ebp),%eax
085ded23 +0x4b:  mov    %eax,(%esp)
085ded26 +0x4e:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085ded2b +0x53:  mov    0x8(%ebp),%eax
085ded2e +0x56:  mov    0x6c(%eax),%eax
085ded31 +0x59:  lea    -0x14(%ebp),%edx
085ded34 +0x5c:  mov    %edx,0x4(%esp)
085ded38 +0x60:  mov    %eax,(%esp)
085ded3b +0x63:  call   085dbe18 <_ZN8PvP_Room11send_to_pvpER11PacketGuard>  ; PvP_Room::send_to_pvp(PacketGuard&)
085ded40 +0x68:  mov    $0x1,%ebx
085ded45 +0x6d:  lea    -0x14(%ebp),%eax
085ded48 +0x70:  mov    %eax,(%esp)
085ded4b +0x73:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085ded50 +0x78:  mov    %ebx,%eax
085ded52 +0x7a:  add    $0x20,%esp
085ded55 +0x7d:  pop    %ebx
085ded56 +0x7e:  pop    %esi
085ded57 +0x7f:  pop    %ebp
085ded58 +0x80:  ret
085ded59 +0x81:  mov    %edx,%ebx
085ded5b +0x83:  mov    %eax,%esi
085ded5d +0x85:  lea    -0x14(%ebp),%eax
085ded60 +0x88:  mov    %eax,(%esp)
085ded63 +0x8b:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085ded68 +0x90:  mov    %esi,%eax
085ded6a +0x92:  mov    %ebx,%edx
085ded6c +0x94:  mov    %eax,(%esp)
085ded6f +0x97:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// CRelayBattleMgr::SendRequestFight @ 0x85decd8

/* CRelayBattleMgr::SendRequestFight(int) */

undefined4 __thiscall CRelayBattleMgr::SendRequestFight(CRelayBattleMgr *this,int param_1)

{
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 085ded01 to 085ded3f has its CatchHandler @ 085ded59 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x71);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,param_1);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  PvP_Room::send_to_pvp(*(PvP_Room **)(this + 0x6c),local_18);
  PacketGuard::~PacketGuard(local_18);
  return 1;
}
```

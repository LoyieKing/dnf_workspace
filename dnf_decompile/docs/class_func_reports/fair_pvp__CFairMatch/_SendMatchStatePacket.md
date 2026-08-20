# _SendMatchStatePacket

`_ZN8fair_pvp10CFairMatch21_SendMatchStatePacketEii`

`fair_pvp::CFairMatch::_SendMatchStatePacket(int, int)`

| 类 | 地址 |
|---|---|
| `fair_pvp::CFairMatch` | `0x085651a6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085651a6  _ZN8fair_pvp10CFairMatch21_SendMatchStatePacketEii
#           fair_pvp::CFairMatch::_SendMatchStatePacket(int, int)
# range [0x085651a6, 0x085652c7]
085651a6 +0x000:  push   %ebp
085651a7 +0x001:  mov    %esp,%ebp
085651a9 +0x003:  push   %esi
085651aa +0x004:  push   %ebx
085651ab +0x005:  sub    $0x30,%esp
085651ae +0x008:  lea    -0x20(%ebp),%eax
085651b1 +0x00b:  mov    %eax,(%esp)
085651b4 +0x00e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
085651b9 +0x013:  movl   $0xaf,0x8(%esp)
085651c1 +0x01b:  movl   $0x0,0x4(%esp)
085651c9 +0x023:  lea    -0x20(%ebp),%eax
085651cc +0x026:  mov    %eax,(%esp)
085651cf +0x029:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085651d4 +0x02e:  mov    0xc(%ebp),%eax
085651d7 +0x031:  mov    %eax,0x4(%esp)
085651db +0x035:  lea    -0x20(%ebp),%eax
085651de +0x038:  mov    %eax,(%esp)
085651e1 +0x03b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085651e6 +0x040:  movl   $0x1,0x4(%esp)
085651ee +0x048:  lea    -0x20(%ebp),%eax
085651f1 +0x04b:  mov    %eax,(%esp)
085651f4 +0x04e:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085651f9 +0x053:  movl   $0x0,-0x14(%ebp)
08565200 +0x05a:  jmp    08565288 <+0xe2>
08565205 +0x05f:  movl   $0x0,-0x10(%ebp)
0856520c +0x066:  jmp    08565279 <+0xd3>
0856520e +0x068:  mov    -0x14(%ebp),%edx
08565211 +0x06b:  mov    -0x10(%ebp),%eax
08565214 +0x06e:  mov    0x8(%ebp),%ecx
08565217 +0x071:  mov    %eax,%ebx
08565219 +0x073:  shl    $0x4,%ebx
0856521c +0x076:  mov    %edx,%eax
0856521e +0x078:  shl    $0x3,%eax
08565221 +0x07b:  add    %edx,%eax
08565223 +0x07d:  shl    $0x3,%eax
08565226 +0x080:  lea    (%ebx,%eax,1),%eax
08565229 +0x083:  lea    (%ecx,%eax,1),%eax
0856522c +0x086:  add    $0x24,%eax
0856522f +0x089:  mov    (%eax),%eax
08565231 +0x08b:  mov    %eax,-0xc(%ebp)
08565234 +0x08e:  mov    -0x14(%ebp),%edx
08565237 +0x091:  mov    -0x10(%ebp),%eax
0856523a +0x094:  mov    0x8(%ebp),%ecx
0856523d +0x097:  mov    %eax,%ebx
0856523f +0x099:  shl    $0x4,%ebx
08565242 +0x09c:  mov    %edx,%eax
08565244 +0x09e:  shl    $0x3,%eax
08565247 +0x0a1:  add    %edx,%eax
08565249 +0x0a3:  shl    $0x3,%eax
0856524c +0x0a6:  lea    (%ebx,%eax,1),%eax
0856524f +0x0a9:  lea    (%ecx,%eax,1),%eax
08565252 +0x0ac:  add    $0x10,%eax
08565255 +0x0af:  movzbl 0x18(%eax),%eax
08565259 +0x0b3:  test   %al,%al
0856525b +0x0b5:  je     08565275 <+0xcf>
0856525d +0x0b7:  cmpl   $0x0,-0xc(%ebp)
08565261 +0x0bb:  je     08565275 <+0xcf>
08565263 +0x0bd:  lea    -0x20(%ebp),%eax
08565266 +0x0c0:  mov    %eax,0x4(%esp)
0856526a +0x0c4:  mov    -0xc(%ebp),%eax
0856526d +0x0c7:  mov    %eax,(%esp)
08565270 +0x0ca:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08565275 +0x0cf:  addl   $0x1,-0x10(%ebp)
08565279 +0x0d3:  cmpl   $0x3,-0x10(%ebp)
0856527d +0x0d7:  setle  %al
08565280 +0x0da:  test   %al,%al
08565282 +0x0dc:  jne    0856520e <+0x68>
08565284 +0x0de:  addl   $0x1,-0x14(%ebp)
08565288 +0x0e2:  mov    -0x14(%ebp),%eax
0856528b +0x0e5:  cmp    0x10(%ebp),%eax
0856528e +0x0e8:  setl   %al
08565291 +0x0eb:  test   %al,%al
08565293 +0x0ed:  jne    08565205 <+0x5f>
08565299 +0x0f3:  jmp    085652b6 <+0x110>
0856529b +0x0f5:  mov    %edx,%ebx
0856529d +0x0f7:  mov    %eax,%esi
0856529f +0x0f9:  lea    -0x20(%ebp),%eax
085652a2 +0x0fc:  mov    %eax,(%esp)
085652a5 +0x0ff:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085652aa +0x104:  mov    %esi,%eax
085652ac +0x106:  mov    %ebx,%edx
085652ae +0x108:  mov    %eax,(%esp)
085652b1 +0x10b:  call   08ae3750 <_Unwind_Resume>
085652b6 +0x110:  lea    -0x20(%ebp),%eax
085652b9 +0x113:  mov    %eax,(%esp)
085652bc +0x116:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085652c1 +0x11b:  add    $0x30,%esp
085652c4 +0x11e:  pop    %ebx
085652c5 +0x11f:  pop    %esi
085652c6 +0x120:  pop    %ebp
085652c7 +0x121:  ret
```

## 反编译 C

```c
// fair_pvp::CFairMatch::_SendMatchStatePacket @ 0x85651a6

/* fair_pvp::CFairMatch::_SendMatchStatePacket(int, int) */

void __thiscall
fair_pvp::CFairMatch::_SendMatchStatePacket(CFairMatch *this,int param_1,int param_2)

{
  PacketGuard local_24 [12];
  int local_18;
  int local_14;
  CUser *local_10;
  
  PacketGuard::PacketGuard(local_24);
                    /* try { // try from 085651cf to 08565274 has its CatchHandler @ 0856529b */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,0,0xaf);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,param_1);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
  for (local_18 = 0; local_18 < param_2; local_18 = local_18 + 1) {
    for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
      local_10 = *(CUser **)(this + local_14 * 0x10 + local_18 * 0x48 + 0x24);
      if ((this[local_14 * 0x10 + local_18 * 0x48 + 0x28] != (CFairMatch)0x0) &&
         (local_10 != (CUser *)0x0)) {
        CUser::Send(local_10,local_24);
      }
    }
  }
  PacketGuard::~PacketGuard(local_24);
  return;
}
```

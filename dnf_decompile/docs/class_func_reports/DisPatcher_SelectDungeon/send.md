# send

`_ZN24DisPatcher_SelectDungeon4sendEP5CUserR9ParamBase`

`DisPatcher_SelectDungeon::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_SelectDungeon` | `0x081c8e9c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c8e9c  _ZN24DisPatcher_SelectDungeon4sendEP5CUserR9ParamBase
#           DisPatcher_SelectDungeon::send(CUser*, ParamBase&)
# range [0x081c8e9c, 0x081c9171]
081c8e9c +0x000:  push   %ebp
081c8e9d +0x001:  mov    %esp,%ebp
081c8e9f +0x003:  push   %esi
081c8ea0 +0x004:  push   %ebx
081c8ea1 +0x005:  sub    $0x40,%esp
081c8ea4 +0x008:  mov    0x10(%ebp),%eax
081c8ea7 +0x00b:  mov    %eax,-0x10(%ebp)
081c8eaa +0x00e:  mov    -0x10(%ebp),%eax
081c8ead +0x011:  mov    0x4(%eax),%eax
081c8eb0 +0x014:  cmp    $0x7fffffff,%eax
081c8eb5 +0x019:  je     081c9164 <+0x2c8>
081c8ebb +0x01f:  mov    -0x10(%ebp),%eax
081c8ebe +0x022:  mov    0x4(%eax),%eax
081c8ec1 +0x025:  test   %eax,%eax
081c8ec3 +0x027:  je     081c8ee5 <+0x49>
081c8ec5 +0x029:  mov    -0x10(%ebp),%eax
081c8ec8 +0x02c:  mov    0x4(%eax),%eax
081c8ecb +0x02f:  movzbl %al,%eax
081c8ece +0x032:  mov    %eax,0x8(%esp)
081c8ed2 +0x036:  movl   $0x10,0x4(%esp)
081c8eda +0x03e:  mov    0xc(%ebp),%eax
081c8edd +0x041:  mov    %eax,(%esp)
081c8ee0 +0x044:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081c8ee5 +0x049:  mov    -0x10(%ebp),%eax
081c8ee8 +0x04c:  mov    0xc(%eax),%eax
081c8eeb +0x04f:  test   %eax,%eax
081c8eed +0x051:  jne    081c8efd <+0x61>
081c8eef +0x053:  mov    -0x10(%ebp),%eax
081c8ef2 +0x056:  mov    0x8(%eax),%eax
081c8ef5 +0x059:  test   %eax,%eax
081c8ef7 +0x05b:  je     081c9167 <+0x2cb>
081c8efd +0x061:  mov    0xc(%ebp),%eax
081c8f00 +0x064:  mov    %eax,(%esp)
081c8f03 +0x067:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
081c8f08 +0x06c:  mov    %eax,-0xc(%ebp)
081c8f0b +0x06f:  cmpl   $0x0,-0xc(%ebp)
081c8f0f +0x073:  je     081c916a <+0x2ce>
081c8f15 +0x079:  mov    -0x10(%ebp),%eax
081c8f18 +0x07c:  mov    0x8(%eax),%edx
081c8f1b +0x07f:  mov    -0x10(%ebp),%eax
081c8f1e +0x082:  mov    0xc(%eax),%eax
081c8f21 +0x085:  cmp    %eax,%edx
081c8f23 +0x087:  jne    081c8fe9 <+0x14d>
081c8f29 +0x08d:  lea    -0x1c(%ebp),%eax
081c8f2c +0x090:  mov    %eax,(%esp)
081c8f2f +0x093:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081c8f34 +0x098:  movl   $0x10,0x8(%esp)
081c8f3c +0x0a0:  movl   $0x1,0x4(%esp)
081c8f44 +0x0a8:  lea    -0x1c(%ebp),%eax
081c8f47 +0x0ab:  mov    %eax,(%esp)
081c8f4a +0x0ae:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081c8f4f +0x0b3:  movl   $0x0,0x4(%esp)
081c8f57 +0x0bb:  lea    -0x1c(%ebp),%eax
081c8f5a +0x0be:  mov    %eax,(%esp)
081c8f5d +0x0c1:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081c8f62 +0x0c6:  mov    -0x10(%ebp),%eax
081c8f65 +0x0c9:  mov    0x8(%eax),%eax
081c8f68 +0x0cc:  mov    %eax,0x4(%esp)
081c8f6c +0x0d0:  lea    -0x1c(%ebp),%eax
081c8f6f +0x0d3:  mov    %eax,(%esp)
081c8f72 +0x0d6:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081c8f77 +0x0db:  mov    -0x10(%ebp),%eax
081c8f7a +0x0de:  mov    0x8(%eax),%eax
081c8f7d +0x0e1:  cmp    $0x16,%eax
081c8f80 +0x0e4:  jne    081c8f97 <+0xfb>
081c8f82 +0x0e6:  mov    -0x10(%ebp),%eax
081c8f85 +0x0e9:  mov    0x14(%eax),%eax
081c8f88 +0x0ec:  mov    %eax,0x4(%esp)
081c8f8c +0x0f0:  lea    -0x1c(%ebp),%eax
081c8f8f +0x0f3:  mov    %eax,(%esp)
081c8f92 +0x0f6:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081c8f97 +0x0fb:  movl   $0x1,0x4(%esp)
081c8f9f +0x103:  lea    -0x1c(%ebp),%eax
081c8fa2 +0x106:  mov    %eax,(%esp)
081c8fa5 +0x109:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081c8faa +0x10e:  lea    -0x1c(%ebp),%eax
081c8fad +0x111:  mov    %eax,0x4(%esp)
081c8fb1 +0x115:  mov    -0xc(%ebp),%eax
081c8fb4 +0x118:  mov    %eax,(%esp)
081c8fb7 +0x11b:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
081c8fbc +0x120:  jmp    081c8fd9 <+0x13d>
081c8fbe +0x122:  mov    %edx,%ebx
081c8fc0 +0x124:  mov    %eax,%esi
081c8fc2 +0x126:  lea    -0x1c(%ebp),%eax
081c8fc5 +0x129:  mov    %eax,(%esp)
081c8fc8 +0x12c:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081c8fcd +0x131:  mov    %esi,%eax
081c8fcf +0x133:  mov    %ebx,%edx
081c8fd1 +0x135:  mov    %eax,(%esp)
081c8fd4 +0x138:  call   08ae3750 <_Unwind_Resume>
081c8fd9 +0x13d:  lea    -0x1c(%ebp),%eax
081c8fdc +0x140:  mov    %eax,(%esp)
081c8fdf +0x143:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081c8fe4 +0x148:  jmp    081c916b <+0x2cf>
081c8fe9 +0x14d:  mov    -0x10(%ebp),%eax
081c8fec +0x150:  mov    0x8(%eax),%eax
081c8fef +0x153:  test   %eax,%eax
081c8ff1 +0x155:  je     081c9097 <+0x1fb>
081c8ff7 +0x15b:  lea    -0x28(%ebp),%eax
081c8ffa +0x15e:  mov    %eax,(%esp)
081c8ffd +0x161:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081c9002 +0x166:  movl   $0x10,0x8(%esp)
081c900a +0x16e:  movl   $0x1,0x4(%esp)
081c9012 +0x176:  lea    -0x28(%ebp),%eax
081c9015 +0x179:  mov    %eax,(%esp)
081c9018 +0x17c:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081c901d +0x181:  movl   $0x0,0x4(%esp)
081c9025 +0x189:  lea    -0x28(%ebp),%eax
081c9028 +0x18c:  mov    %eax,(%esp)
081c902b +0x18f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081c9030 +0x194:  mov    -0x10(%ebp),%eax
081c9033 +0x197:  mov    0x8(%eax),%eax
081c9036 +0x19a:  mov    %eax,0x4(%esp)
081c903a +0x19e:  lea    -0x28(%ebp),%eax
081c903d +0x1a1:  mov    %eax,(%esp)
081c9040 +0x1a4:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081c9045 +0x1a9:  movl   $0x1,0x4(%esp)
081c904d +0x1b1:  lea    -0x28(%ebp),%eax
081c9050 +0x1b4:  mov    %eax,(%esp)
081c9053 +0x1b7:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081c9058 +0x1bc:  lea    -0x28(%ebp),%eax
081c905b +0x1bf:  mov    %eax,0x4(%esp)
081c905f +0x1c3:  mov    0xc(%ebp),%eax
081c9062 +0x1c6:  mov    %eax,(%esp)
081c9065 +0x1c9:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081c906a +0x1ce:  jmp    081c9087 <+0x1eb>
081c906c +0x1d0:  mov    %edx,%ebx
081c906e +0x1d2:  mov    %eax,%esi
081c9070 +0x1d4:  lea    -0x28(%ebp),%eax
081c9073 +0x1d7:  mov    %eax,(%esp)
081c9076 +0x1da:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081c907b +0x1df:  mov    %esi,%eax
081c907d +0x1e1:  mov    %ebx,%edx
081c907f +0x1e3:  mov    %eax,(%esp)
081c9082 +0x1e6:  call   08ae3750 <_Unwind_Resume>
081c9087 +0x1eb:  lea    -0x28(%ebp),%eax
081c908a +0x1ee:  mov    %eax,(%esp)
081c908d +0x1f1:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081c9092 +0x1f6:  jmp    081c916b <+0x2cf>
081c9097 +0x1fb:  mov    -0x10(%ebp),%eax
081c909a +0x1fe:  mov    0xc(%eax),%eax
081c909d +0x201:  test   %eax,%eax
081c909f +0x203:  je     081c916b <+0x2cf>
081c90a5 +0x209:  lea    -0x34(%ebp),%eax
081c90a8 +0x20c:  mov    %eax,(%esp)
081c90ab +0x20f:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081c90b0 +0x214:  movl   $0x10,0x8(%esp)
081c90b8 +0x21c:  movl   $0x1,0x4(%esp)
081c90c0 +0x224:  lea    -0x34(%ebp),%eax
081c90c3 +0x227:  mov    %eax,(%esp)
081c90c6 +0x22a:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081c90cb +0x22f:  movl   $0x0,0x4(%esp)
081c90d3 +0x237:  lea    -0x34(%ebp),%eax
081c90d6 +0x23a:  mov    %eax,(%esp)
081c90d9 +0x23d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081c90de +0x242:  mov    -0x10(%ebp),%eax
081c90e1 +0x245:  mov    0x8(%eax),%eax
081c90e4 +0x248:  mov    %eax,0x4(%esp)
081c90e8 +0x24c:  lea    -0x34(%ebp),%eax
081c90eb +0x24f:  mov    %eax,(%esp)
081c90ee +0x252:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081c90f3 +0x257:  mov    -0x10(%ebp),%eax
081c90f6 +0x25a:  mov    0xc(%eax),%eax
081c90f9 +0x25d:  cmp    $0xad,%eax
081c90fe +0x262:  jne    081c9115 <+0x279>
081c9100 +0x264:  mov    -0x10(%ebp),%eax
081c9103 +0x267:  mov    0x14(%eax),%eax
081c9106 +0x26a:  mov    %eax,0x4(%esp)
081c910a +0x26e:  lea    -0x34(%ebp),%eax
081c910d +0x271:  mov    %eax,(%esp)
081c9110 +0x274:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081c9115 +0x279:  movl   $0x1,0x4(%esp)
081c911d +0x281:  lea    -0x34(%ebp),%eax
081c9120 +0x284:  mov    %eax,(%esp)
081c9123 +0x287:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081c9128 +0x28c:  lea    -0x34(%ebp),%eax
081c912b +0x28f:  mov    %eax,0x4(%esp)
081c912f +0x293:  mov    -0xc(%ebp),%eax
081c9132 +0x296:  mov    %eax,(%esp)
081c9135 +0x299:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
081c913a +0x29e:  jmp    081c9157 <+0x2bb>
081c913c +0x2a0:  mov    %edx,%ebx
081c913e +0x2a2:  mov    %eax,%esi
081c9140 +0x2a4:  lea    -0x34(%ebp),%eax
081c9143 +0x2a7:  mov    %eax,(%esp)
081c9146 +0x2aa:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081c914b +0x2af:  mov    %esi,%eax
081c914d +0x2b1:  mov    %ebx,%edx
081c914f +0x2b3:  mov    %eax,(%esp)
081c9152 +0x2b6:  call   08ae3750 <_Unwind_Resume>
081c9157 +0x2bb:  lea    -0x34(%ebp),%eax
081c915a +0x2be:  mov    %eax,(%esp)
081c915d +0x2c1:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081c9162 +0x2c6:  jmp    081c916b <+0x2cf>
081c9164 +0x2c8:  nop
081c9165 +0x2c9:  jmp    081c916b <+0x2cf>
081c9167 +0x2cb:  nop
081c9168 +0x2cc:  jmp    081c916b <+0x2cf>
081c916a +0x2ce:  nop
081c916b +0x2cf:  add    $0x40,%esp
081c916e +0x2d2:  pop    %ebx
081c916f +0x2d3:  pop    %esi
081c9170 +0x2d4:  pop    %ebp
081c9171 +0x2d5:  ret
```

## 反编译 C

```c
// DisPatcher_SelectDungeon::send @ 0x81c8e9c

/* DisPatcher_SelectDungeon::send(CUser*, ParamBase&) */

void __thiscall
DisPatcher_SelectDungeon::send(DisPatcher_SelectDungeon *this,CUser *param_1,ParamBase *param_2)

{
  PacketGuard local_38 [12];
  PacketGuard local_2c [12];
  PacketGuard local_20 [12];
  ParamBase *local_14;
  CParty *local_10;
  
  local_14 = param_2;
  if (*(int *)(param_2 + 4) != 0x7fffffff) {
    if (*(int *)(param_2 + 4) != 0) {
      CUser::SendCmdErrorPacket(param_1,0x10,*(uint *)(param_2 + 4) & 0xff);
    }
    if (((*(int *)(local_14 + 0xc) != 0) || (*(int *)(local_14 + 8) != 0)) &&
       (local_10 = (CParty *)CUser::GetParty(param_1), local_10 != (CParty *)0x0)) {
      if (*(int *)(local_14 + 8) == *(int *)(local_14 + 0xc)) {
        PacketGuard::PacketGuard(local_20);
                    /* try { // try from 081c8f4a to 081c8fbb has its CatchHandler @ 081c8fbe */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,1,0x10);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,0);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,*(int *)(local_14 + 8));
        if (*(int *)(local_14 + 8) == 0x16) {
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,*(int *)(local_14 + 0x14));
        }
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
        CParty::send_to_party(local_10,local_20);
        PacketGuard::~PacketGuard(local_20);
      }
      else if (*(int *)(local_14 + 8) == 0) {
        if (*(int *)(local_14 + 0xc) != 0) {
          PacketGuard::PacketGuard(local_38);
                    /* try { // try from 081c90c6 to 081c9139 has its CatchHandler @ 081c913c */
          InterfacePacketBuf::put_header((InterfacePacketBuf *)local_38,1,0x10);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_38,0);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_38,*(int *)(local_14 + 8));
          if (*(int *)(local_14 + 0xc) == 0xad) {
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_38,*(int *)(local_14 + 0x14));
          }
          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_38,true);
          CParty::send_to_party(local_10,local_38);
          PacketGuard::~PacketGuard(local_38);
        }
      }
      else {
        PacketGuard::PacketGuard(local_2c);
                    /* try { // try from 081c9018 to 081c9069 has its CatchHandler @ 081c906c */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_2c,1,0x10);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,0);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,*(int *)(local_14 + 8));
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_2c,true);
        CUser::Send(param_1,local_2c);
        PacketGuard::~PacketGuard(local_2c);
      }
    }
  }
  return;
}
```

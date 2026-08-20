# send

`_ZN33Dispatcher_ChangeAnotherSkillTree4sendEP5CUserR9ParamBase`

`Dispatcher_ChangeAnotherSkillTree::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_ChangeAnotherSkillTree` | `0x081d2134` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d2134  _ZN33Dispatcher_ChangeAnotherSkillTree4sendEP5CUserR9ParamBase
#           Dispatcher_ChangeAnotherSkillTree::send(CUser*, ParamBase&)
# range [0x081d2134, 0x081d2217]
081d2134 +0x00:  push   %ebp
081d2135 +0x01:  mov    %esp,%ebp
081d2137 +0x03:  push   %esi
081d2138 +0x04:  push   %ebx
081d2139 +0x05:  sub    $0x20,%esp
081d213c +0x08:  mov    0x10(%ebp),%eax
081d213f +0x0b:  mov    %eax,-0xc(%ebp)
081d2142 +0x0e:  mov    -0xc(%ebp),%eax
081d2145 +0x11:  mov    0x4(%eax),%eax
081d2148 +0x14:  test   %eax,%eax
081d214a +0x16:  jne    081d21f1 <+0xbd>
081d2150 +0x1c:  lea    -0x18(%ebp),%eax
081d2153 +0x1f:  mov    %eax,(%esp)
081d2156 +0x22:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081d215b +0x27:  movl   $0x108,0x8(%esp)
081d2163 +0x2f:  movl   $0x1,0x4(%esp)
081d216b +0x37:  lea    -0x18(%ebp),%eax
081d216e +0x3a:  mov    %eax,(%esp)
081d2171 +0x3d:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081d2176 +0x42:  movl   $0x1,0x4(%esp)
081d217e +0x4a:  lea    -0x18(%ebp),%eax
081d2181 +0x4d:  mov    %eax,(%esp)
081d2184 +0x50:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081d2189 +0x55:  mov    -0xc(%ebp),%eax
081d218c +0x58:  movzbl 0x8(%eax),%eax
081d2190 +0x5c:  movsbl %al,%eax
081d2193 +0x5f:  mov    %eax,0x4(%esp)
081d2197 +0x63:  lea    -0x18(%ebp),%eax
081d219a +0x66:  mov    %eax,(%esp)
081d219d +0x69:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081d21a2 +0x6e:  movl   $0x1,0x4(%esp)
081d21aa +0x76:  lea    -0x18(%ebp),%eax
081d21ad +0x79:  mov    %eax,(%esp)
081d21b0 +0x7c:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081d21b5 +0x81:  lea    -0x18(%ebp),%eax
081d21b8 +0x84:  mov    %eax,0x4(%esp)
081d21bc +0x88:  mov    0xc(%ebp),%eax
081d21bf +0x8b:  mov    %eax,(%esp)
081d21c2 +0x8e:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081d21c7 +0x93:  jmp    081d21e4 <+0xb0>
081d21c9 +0x95:  mov    %edx,%ebx
081d21cb +0x97:  mov    %eax,%esi
081d21cd +0x99:  lea    -0x18(%ebp),%eax
081d21d0 +0x9c:  mov    %eax,(%esp)
081d21d3 +0x9f:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081d21d8 +0xa4:  mov    %esi,%eax
081d21da +0xa6:  mov    %ebx,%edx
081d21dc +0xa8:  mov    %eax,(%esp)
081d21df +0xab:  call   08ae3750 <_Unwind_Resume>
081d21e4 +0xb0:  lea    -0x18(%ebp),%eax
081d21e7 +0xb3:  mov    %eax,(%esp)
081d21ea +0xb6:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081d21ef +0xbb:  jmp    081d2211 <+0xdd>
081d21f1 +0xbd:  mov    -0xc(%ebp),%eax
081d21f4 +0xc0:  mov    0x4(%eax),%eax
081d21f7 +0xc3:  movzbl %al,%eax
081d21fa +0xc6:  mov    %eax,0x8(%esp)
081d21fe +0xca:  movl   $0x108,0x4(%esp)
081d2206 +0xd2:  mov    0xc(%ebp),%eax
081d2209 +0xd5:  mov    %eax,(%esp)
081d220c +0xd8:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081d2211 +0xdd:  add    $0x20,%esp
081d2214 +0xe0:  pop    %ebx
081d2215 +0xe1:  pop    %esi
081d2216 +0xe2:  pop    %ebp
081d2217 +0xe3:  ret
```

## 反编译 C

```c
// Dispatcher_ChangeAnotherSkillTree::send @ 0x81d2134

/* Dispatcher_ChangeAnotherSkillTree::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_ChangeAnotherSkillTree::send
          (Dispatcher_ChangeAnotherSkillTree *this,CUser *param_1,ParamBase *param_2)

{
  PacketGuard local_1c [12];
  ParamBase *local_10;
  
  local_10 = param_2;
  if (*(int *)(param_2 + 4) == 0) {
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 081d2171 to 081d21c6 has its CatchHandler @ 081d21c9 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x108);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(int)(char)local_10[8]);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send(param_1,local_1c);
    PacketGuard::~PacketGuard(local_1c);
  }
  else {
    CUser::SendCmdErrorPacket(param_1,0x108,*(uint *)(param_2 + 4) & 0xff);
  }
  return;
}
```

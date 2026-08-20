# send

`_ZN22DisPatcher_ChangeSkill4sendEP5CUserR9ParamBase`

`DisPatcher_ChangeSkill::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_ChangeSkill` | `0x081c00ac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c00ac  _ZN22DisPatcher_ChangeSkill4sendEP5CUserR9ParamBase
#           DisPatcher_ChangeSkill::send(CUser*, ParamBase&)
# range [0x081c00ac, 0x081c0195]
081c00ac +0x00:  push   %ebp
081c00ad +0x01:  mov    %esp,%ebp
081c00af +0x03:  push   %esi
081c00b0 +0x04:  push   %ebx
081c00b1 +0x05:  sub    $0x20,%esp
081c00b4 +0x08:  mov    0x10(%ebp),%eax
081c00b7 +0x0b:  mov    %eax,-0xc(%ebp)
081c00ba +0x0e:  lea    -0x18(%ebp),%eax
081c00bd +0x11:  mov    %eax,(%esp)
081c00c0 +0x14:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081c00c5 +0x19:  movl   $0x1e,0x8(%esp)
081c00cd +0x21:  movl   $0x1,0x4(%esp)
081c00d5 +0x29:  lea    -0x18(%ebp),%eax
081c00d8 +0x2c:  mov    %eax,(%esp)
081c00db +0x2f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081c00e0 +0x34:  movl   $0x1,0x4(%esp)
081c00e8 +0x3c:  lea    -0x18(%ebp),%eax
081c00eb +0x3f:  mov    %eax,(%esp)
081c00ee +0x42:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081c00f3 +0x47:  mov    0xc(%ebp),%eax
081c00f6 +0x4a:  mov    %eax,(%esp)
081c00f9 +0x4d:  call   0822f33c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49e6
081c00fe +0x52:  movsbl %al,%eax
081c0101 +0x55:  mov    %eax,0x4(%esp)
081c0105 +0x59:  lea    -0x18(%ebp),%eax
081c0108 +0x5c:  mov    %eax,(%esp)
081c010b +0x5f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081c0110 +0x64:  mov    -0xc(%ebp),%eax
081c0113 +0x67:  movzbl 0x4(%eax),%eax
081c0117 +0x6b:  movsbl %al,%eax
081c011a +0x6e:  mov    %eax,0x4(%esp)
081c011e +0x72:  lea    -0x18(%ebp),%eax
081c0121 +0x75:  mov    %eax,(%esp)
081c0124 +0x78:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081c0129 +0x7d:  mov    -0xc(%ebp),%eax
081c012c +0x80:  movzbl 0x5(%eax),%eax
081c0130 +0x84:  movsbl %al,%eax
081c0133 +0x87:  mov    %eax,0x4(%esp)
081c0137 +0x8b:  lea    -0x18(%ebp),%eax
081c013a +0x8e:  mov    %eax,(%esp)
081c013d +0x91:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081c0142 +0x96:  movl   $0x1,0x4(%esp)
081c014a +0x9e:  lea    -0x18(%ebp),%eax
081c014d +0xa1:  mov    %eax,(%esp)
081c0150 +0xa4:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081c0155 +0xa9:  lea    -0x18(%ebp),%eax
081c0158 +0xac:  mov    %eax,0x4(%esp)
081c015c +0xb0:  mov    0xc(%ebp),%eax
081c015f +0xb3:  mov    %eax,(%esp)
081c0162 +0xb6:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081c0167 +0xbb:  jmp    081c0184 <+0xd8>
081c0169 +0xbd:  mov    %edx,%ebx
081c016b +0xbf:  mov    %eax,%esi
081c016d +0xc1:  lea    -0x18(%ebp),%eax
081c0170 +0xc4:  mov    %eax,(%esp)
081c0173 +0xc7:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081c0178 +0xcc:  mov    %esi,%eax
081c017a +0xce:  mov    %ebx,%edx
081c017c +0xd0:  mov    %eax,(%esp)
081c017f +0xd3:  call   08ae3750 <_Unwind_Resume>
081c0184 +0xd8:  lea    -0x18(%ebp),%eax
081c0187 +0xdb:  mov    %eax,(%esp)
081c018a +0xde:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081c018f +0xe3:  add    $0x20,%esp
081c0192 +0xe6:  pop    %ebx
081c0193 +0xe7:  pop    %esi
081c0194 +0xe8:  pop    %ebp
081c0195 +0xe9:  ret
```

## 反编译 C

```c
// DisPatcher_ChangeSkill::send @ 0x81c00ac

/* DisPatcher_ChangeSkill::send(CUser*, ParamBase&) */

void __thiscall
DisPatcher_ChangeSkill::send(DisPatcher_ChangeSkill *this,CUser *param_1,ParamBase *param_2)

{
  char cVar1;
  PacketGuard local_1c [12];
  ParamBase *local_10;
  
  local_10 = param_2;
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 081c00db to 081c0166 has its CatchHandler @ 081c0169 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x1e);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
  cVar1 = CUserCharacInfo::GetCurCharacSkillTreeIndex((CUserCharacInfo *)param_1);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(int)cVar1);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(int)(char)local_10[4]);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(int)(char)local_10[5]);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  CUser::Send(param_1,local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return;
}
```

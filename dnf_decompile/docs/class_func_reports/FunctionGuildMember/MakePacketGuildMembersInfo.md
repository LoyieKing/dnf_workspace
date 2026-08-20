# MakePacketGuildMembersInfo

`_ZN19FunctionGuildMember26MakePacketGuildMembersInfoER11PacketGuardiP17ST_Guild_Mem_Info`

`FunctionGuildMember::MakePacketGuildMembersInfo(PacketGuard&, int, ST_Guild_Mem_Info*)`

| 类 | 地址 |
|---|---|
| `FunctionGuildMember` | `0x084ca37a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084ca37a  _ZN19FunctionGuildMember26MakePacketGuildMembersInfoER11PacketGuardiP17ST_Guild_Mem_Info
#           FunctionGuildMember::MakePacketGuildMembersInfo(PacketGuard&, int, ST_Guild_Mem_Info*)
# range [0x084ca37a, 0x084ca559]
084ca37a +0x000:  push   %ebp
084ca37b +0x001:  mov    %esp,%ebp
084ca37d +0x003:  sub    $0x28,%esp
084ca380 +0x006:  mov    0x8(%ebp),%eax
084ca383 +0x009:  mov    0xc(%ebp),%edx
084ca386 +0x00c:  mov    %edx,0x4(%esp)
084ca38a +0x010:  mov    %eax,(%esp)
084ca38d +0x013:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084ca392 +0x018:  movl   $0x0,-0x18(%ebp)
084ca399 +0x01f:  movl   $0x0,-0x14(%ebp)
084ca3a0 +0x026:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
084ca3a7 +0x02d:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
084ca3ac +0x032:  mov    %eax,%edx
084ca3ae +0x034:  sar    $0x1f,%edx
084ca3b1 +0x037:  mov    %eax,-0x10(%ebp)
084ca3b4 +0x03a:  mov    %edx,-0xc(%ebp)
084ca3b7 +0x03d:  jmp    084ca545 <+0x1cb>
084ca3bc +0x042:  mov    0x10(%ebp),%eax
084ca3bf +0x045:  add    $0x4,%eax
084ca3c2 +0x048:  mov    %eax,(%esp)
084ca3c5 +0x04b:  call   0807e3b0 <_init+0xca8>
084ca3ca +0x050:  mov    %eax,-0x18(%ebp)
084ca3cd +0x053:  mov    0x8(%ebp),%eax
084ca3d0 +0x056:  mov    -0x18(%ebp),%edx
084ca3d3 +0x059:  mov    %edx,0x4(%esp)
084ca3d7 +0x05d:  mov    %eax,(%esp)
084ca3da +0x060:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084ca3df +0x065:  mov    0x10(%ebp),%eax
084ca3e2 +0x068:  lea    0x4(%eax),%ecx
084ca3e5 +0x06b:  mov    0x8(%ebp),%eax
084ca3e8 +0x06e:  mov    -0x18(%ebp),%edx
084ca3eb +0x071:  mov    %edx,0x8(%esp)
084ca3ef +0x075:  mov    %ecx,0x4(%esp)
084ca3f3 +0x079:  mov    %eax,(%esp)
084ca3f6 +0x07c:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084ca3fb +0x081:  mov    0x10(%ebp),%eax
084ca3fe +0x084:  add    $0x22,%eax
084ca401 +0x087:  mov    %eax,(%esp)
084ca404 +0x08a:  call   0807e3b0 <_init+0xca8>
084ca409 +0x08f:  mov    %eax,-0x14(%ebp)
084ca40c +0x092:  mov    0x8(%ebp),%eax
084ca40f +0x095:  mov    -0x14(%ebp),%edx
084ca412 +0x098:  mov    %edx,0x4(%esp)
084ca416 +0x09c:  mov    %eax,(%esp)
084ca419 +0x09f:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084ca41e +0x0a4:  mov    0x10(%ebp),%eax
084ca421 +0x0a7:  lea    0x22(%eax),%ecx
084ca424 +0x0aa:  mov    0x8(%ebp),%eax
084ca427 +0x0ad:  mov    -0x14(%ebp),%edx
084ca42a +0x0b0:  mov    %edx,0x8(%esp)
084ca42e +0x0b4:  mov    %ecx,0x4(%esp)
084ca432 +0x0b8:  mov    %eax,(%esp)
084ca435 +0x0bb:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084ca43a +0x0c0:  mov    0x10(%ebp),%eax
084ca43d +0x0c3:  movzwl 0x2(%eax),%eax
084ca441 +0x0c7:  movswl %ax,%edx
084ca444 +0x0ca:  mov    0x8(%ebp),%eax
084ca447 +0x0cd:  mov    %edx,0x4(%esp)
084ca44b +0x0d1:  mov    %eax,(%esp)
084ca44e +0x0d4:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084ca453 +0x0d9:  mov    0x10(%ebp),%eax
084ca456 +0x0dc:  movzbl (%eax),%eax
084ca459 +0x0df:  movsbl %al,%edx
084ca45c +0x0e2:  mov    0x8(%ebp),%eax
084ca45f +0x0e5:  mov    %edx,0x4(%esp)
084ca463 +0x0e9:  mov    %eax,(%esp)
084ca466 +0x0ec:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084ca46b +0x0f1:  mov    0x10(%ebp),%eax
084ca46e +0x0f4:  movzbl 0x1(%eax),%eax
084ca472 +0x0f8:  movsbl %al,%edx
084ca475 +0x0fb:  mov    0x8(%ebp),%eax
084ca478 +0x0fe:  mov    %edx,0x4(%esp)
084ca47c +0x102:  mov    %eax,(%esp)
084ca47f +0x105:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084ca484 +0x10a:  mov    0x10(%ebp),%eax
084ca487 +0x10d:  movzbl 0x37(%eax),%eax
084ca48b +0x111:  movzbl %al,%edx
084ca48e +0x114:  mov    0x8(%ebp),%eax
084ca491 +0x117:  mov    %edx,0x4(%esp)
084ca495 +0x11b:  mov    %eax,(%esp)
084ca498 +0x11e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084ca49d +0x123:  mov    0x10(%ebp),%eax
084ca4a0 +0x126:  movzbl 0x38(%eax),%eax
084ca4a4 +0x12a:  movsbl %al,%edx
084ca4a7 +0x12d:  mov    0x8(%ebp),%eax
084ca4aa +0x130:  mov    %edx,0x4(%esp)
084ca4ae +0x134:  mov    %eax,(%esp)
084ca4b1 +0x137:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084ca4b6 +0x13c:  mov    0x10(%ebp),%eax
084ca4b9 +0x13f:  movzbl 0x39(%eax),%eax
084ca4bd +0x143:  movsbl %al,%edx
084ca4c0 +0x146:  mov    0x8(%ebp),%eax
084ca4c3 +0x149:  mov    %edx,0x4(%esp)
084ca4c7 +0x14d:  mov    %eax,(%esp)
084ca4ca +0x150:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084ca4cf +0x155:  mov    0x10(%ebp),%eax
084ca4d2 +0x158:  movzbl 0x3a(%eax),%eax
084ca4d6 +0x15c:  movzbl %al,%edx
084ca4d9 +0x15f:  mov    0x8(%ebp),%eax
084ca4dc +0x162:  mov    %edx,0x4(%esp)
084ca4e0 +0x166:  mov    %eax,(%esp)
084ca4e3 +0x169:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084ca4e8 +0x16e:  mov    0x10(%ebp),%eax
084ca4eb +0x171:  mov    0x3b(%eax),%eax
084ca4ee +0x174:  test   %eax,%eax
084ca4f0 +0x176:  je     084ca50c <+0x192>
084ca4f2 +0x178:  mov    0x10(%ebp),%eax
084ca4f5 +0x17b:  mov    0x3b(%eax),%eax
084ca4f8 +0x17e:  mov    $0x0,%edx
084ca4fd +0x183:  cmp    -0xc(%ebp),%edx
084ca500 +0x186:  jl     084ca521 <+0x1a7>
084ca502 +0x188:  cmp    -0xc(%ebp),%edx
084ca505 +0x18b:  jg     084ca50c <+0x192>
084ca507 +0x18d:  cmp    -0x10(%ebp),%eax
084ca50a +0x190:  jbe    084ca521 <+0x1a7>
084ca50c +0x192:  mov    0x8(%ebp),%eax
084ca50f +0x195:  movl   $0x0,0x4(%esp)
084ca517 +0x19d:  mov    %eax,(%esp)
084ca51a +0x1a0:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084ca51f +0x1a5:  jmp    084ca541 <+0x1c7>
084ca521 +0x1a7:  mov    -0x10(%ebp),%edx
084ca524 +0x1aa:  mov    0x10(%ebp),%eax
084ca527 +0x1ad:  mov    0x3b(%eax),%eax
084ca52a +0x1b0:  mov    %edx,%ecx
084ca52c +0x1b2:  sub    %eax,%ecx
084ca52e +0x1b4:  mov    %ecx,%eax
084ca530 +0x1b6:  mov    %eax,%edx
084ca532 +0x1b8:  mov    0x8(%ebp),%eax
084ca535 +0x1bb:  mov    %edx,0x4(%esp)
084ca539 +0x1bf:  mov    %eax,(%esp)
084ca53c +0x1c2:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084ca541 +0x1c7:  addl   $0x3f,0x10(%ebp)
084ca545 +0x1cb:  cmpl   $0x0,0xc(%ebp)
084ca549 +0x1cf:  setne  %al
084ca54c +0x1d2:  subl   $0x1,0xc(%ebp)
084ca550 +0x1d6:  test   %al,%al
084ca552 +0x1d8:  jne    084ca3bc <+0x42>
084ca558 +0x1de:  leave
084ca559 +0x1df:  ret
```

## 反编译 C

```c
// FunctionGuildMember::MakePacketGuildMembersInfo @ 0x84ca37a

/* FunctionGuildMember::MakePacketGuildMembersInfo(PacketGuard&, int, ST_Guild_Mem_Info*) */

void FunctionGuildMember::MakePacketGuildMembersInfo
               (PacketGuard *param_1,int param_2,ST_Guild_Mem_Info *param_3)

{
  uint uVar1;
  size_t sVar2;
  bool bVar3;
  
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,param_2);
  uVar1 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  while (bVar3 = param_2 != 0, param_2 = param_2 + -1, bVar3) {
    sVar2 = strlen((char *)(param_3 + 4));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,sVar2);
    InterfacePacketBuf::put_str((InterfacePacketBuf *)param_1,(char *)(param_3 + 4),sVar2);
    sVar2 = strlen((char *)(param_3 + 0x22));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,sVar2);
    InterfacePacketBuf::put_str((InterfacePacketBuf *)param_1,(char *)(param_3 + 0x22),sVar2);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,(int)*(short *)(param_3 + 2));
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,(int)(char)*param_3);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,(int)(char)param_3[1]);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,(uint)(byte)param_3[0x37]);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,(int)(char)param_3[0x38]);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,(int)(char)param_3[0x39]);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,(uint)(byte)param_3[0x3a]);
    if ((*(int *)(param_3 + 0x3b) == 0) ||
       (((int)uVar1 >> 0x1f < 1 &&
        ((0x7fffffff < (uint)((int)uVar1 >> 0x1f) || (uVar1 < *(uint *)(param_3 + 0x3b))))))) {
      InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,0);
    }
    else {
      InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,uVar1 - *(int *)(param_3 + 0x3b));
    }
    param_3 = param_3 + 0x3f;
  }
  return;
}
```

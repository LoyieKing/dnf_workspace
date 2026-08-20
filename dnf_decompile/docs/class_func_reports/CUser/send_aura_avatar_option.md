# send_aura_avatar_option

`_ZN5CUser23send_aura_avatar_optionEv`

`CUser::send_aura_avatar_option()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868dea4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868dea4  _ZN5CUser23send_aura_avatar_optionEv
#           CUser::send_aura_avatar_option()
# range [0x0868dea4, 0x0868dff7]
0868dea4 +0x000:  push   %ebp
0868dea5 +0x001:  mov    %esp,%ebp
0868dea7 +0x003:  push   %esi
0868dea8 +0x004:  push   %ebx
0868dea9 +0x005:  sub    $0x30,%esp
0868deac +0x008:  mov    0x8(%ebp),%eax
0868deaf +0x00b:  mov    %eax,(%esp)
0868deb2 +0x00e:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0868deb7 +0x013:  test   %eax,%eax
0868deb9 +0x015:  sete   %al
0868debc +0x018:  test   %al,%al
0868debe +0x01a:  jne    0868dff0 <+0x14c>
0868dec4 +0x020:  lea    -0x1c(%ebp),%eax
0868dec7 +0x023:  mov    %eax,(%esp)
0868deca +0x026:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0868decf +0x02b:  movl   $0x17a,0x8(%esp)
0868ded7 +0x033:  movl   $0x0,0x4(%esp)
0868dedf +0x03b:  lea    -0x1c(%ebp),%eax
0868dee2 +0x03e:  mov    %eax,(%esp)
0868dee5 +0x041:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0868deea +0x046:  movl   $0x3,0x4(%esp)
0868def2 +0x04e:  lea    -0x1c(%ebp),%eax
0868def5 +0x051:  mov    %eax,(%esp)
0868def8 +0x054:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0868defd +0x059:  movl   $0x0,-0x10(%ebp)
0868df04 +0x060:  jmp    0868df92 <+0xee>
0868df09 +0x065:  mov    -0x10(%ebp),%eax
0868df0c +0x068:  movsbl %al,%eax
0868df0f +0x06b:  mov    %eax,0x4(%esp)
0868df13 +0x06f:  lea    -0x1c(%ebp),%eax
0868df16 +0x072:  mov    %eax,(%esp)
0868df19 +0x075:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0868df1e +0x07a:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0868df25 +0x081:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0868df2a +0x086:  mov    %eax,-0xc(%ebp)
0868df2d +0x089:  mov    0x8(%ebp),%eax
0868df30 +0x08c:  mov    %eax,(%esp)
0868df33 +0x08f:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0868df38 +0x094:  mov    -0x10(%ebp),%edx
0868df3b +0x097:  add    $0x4a0,%edx
0868df41 +0x09d:  mov    0x1(%eax,%edx,4),%eax
0868df45 +0x0a1:  cmp    -0xc(%ebp),%eax
0868df48 +0x0a4:  setg   %al
0868df4b +0x0a7:  test   %al,%al
0868df4d +0x0a9:  je     0868df7b <+0xd7>
0868df4f +0x0ab:  mov    0x8(%ebp),%eax
0868df52 +0x0ae:  mov    %eax,(%esp)
0868df55 +0x0b1:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0868df5a +0x0b6:  mov    -0x10(%ebp),%edx
0868df5d +0x0b9:  add    $0x4a0,%edx
0868df63 +0x0bf:  mov    0x1(%eax,%edx,4),%eax
0868df67 +0x0c3:  sub    -0xc(%ebp),%eax
0868df6a +0x0c6:  mov    %eax,0x4(%esp)
0868df6e +0x0ca:  lea    -0x1c(%ebp),%eax
0868df71 +0x0cd:  mov    %eax,(%esp)
0868df74 +0x0d0:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0868df79 +0x0d5:  jmp    0868df8e <+0xea>
0868df7b +0x0d7:  movl   $0x0,0x4(%esp)
0868df83 +0x0df:  lea    -0x1c(%ebp),%eax
0868df86 +0x0e2:  mov    %eax,(%esp)
0868df89 +0x0e5:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0868df8e +0x0ea:  addl   $0x1,-0x10(%ebp)
0868df92 +0x0ee:  cmpl   $0x2,-0x10(%ebp)
0868df96 +0x0f2:  setle  %al
0868df99 +0x0f5:  test   %al,%al
0868df9b +0x0f7:  jne    0868df09 <+0x65>
0868dfa1 +0x0fd:  movl   $0x1,0x4(%esp)
0868dfa9 +0x105:  lea    -0x1c(%ebp),%eax
0868dfac +0x108:  mov    %eax,(%esp)
0868dfaf +0x10b:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0868dfb4 +0x110:  lea    -0x1c(%ebp),%eax
0868dfb7 +0x113:  mov    %eax,0x4(%esp)
0868dfbb +0x117:  mov    0x8(%ebp),%eax
0868dfbe +0x11a:  mov    %eax,(%esp)
0868dfc1 +0x11d:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0868dfc6 +0x122:  jmp    0868dfe3 <+0x13f>
0868dfc8 +0x124:  mov    %edx,%ebx
0868dfca +0x126:  mov    %eax,%esi
0868dfcc +0x128:  lea    -0x1c(%ebp),%eax
0868dfcf +0x12b:  mov    %eax,(%esp)
0868dfd2 +0x12e:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0868dfd7 +0x133:  mov    %esi,%eax
0868dfd9 +0x135:  mov    %ebx,%edx
0868dfdb +0x137:  mov    %eax,(%esp)
0868dfde +0x13a:  call   08ae3750 <_Unwind_Resume>
0868dfe3 +0x13f:  lea    -0x1c(%ebp),%eax
0868dfe6 +0x142:  mov    %eax,(%esp)
0868dfe9 +0x145:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0868dfee +0x14a:  jmp    0868dff1 <+0x14d>
0868dff0 +0x14c:  nop
0868dff1 +0x14d:  add    $0x30,%esp
0868dff4 +0x150:  pop    %ebx
0868dff5 +0x151:  pop    %esi
0868dff6 +0x152:  pop    %ebp
0868dff7 +0x153:  ret
```

## 反编译 C

```c
// CUser::send_aura_avatar_option @ 0x868dea4

/* CUser::send_aura_avatar_option() */

void __thiscall CUser::send_aura_avatar_option(CUser *this)

{
  int iVar1;
  PacketGuard local_20 [12];
  int local_14;
  int local_10;
  
  iVar1 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
  if (iVar1 != 0) {
    PacketGuard::PacketGuard(local_20);
                    /* try { // try from 0868dee5 to 0868dfc5 has its CatchHandler @ 0868dfc8 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0x17a);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,3);
    for (local_14 = 0; local_14 < 3; local_14 = local_14 + 1) {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(int)(char)local_14);
      local_10 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      iVar1 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
      if (local_10 < *(int *)(iVar1 + 1 + (local_14 + 0x4a0) * 4)) {
        iVar1 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
        InterfacePacketBuf::put_int
                  ((InterfacePacketBuf *)local_20,
                   *(int *)(iVar1 + 1 + (local_14 + 0x4a0) * 4) - local_10);
      }
      else {
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,0);
      }
    }
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
    Send(this,local_20);
    PacketGuard::~PacketGuard(local_20);
  }
  return;
}
```

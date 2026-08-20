# makeNotiPacketCurMood

`_ZNK15CNPCDynamicInfo21makeNotiPacketCurMoodER11PacketGuard`

`CNPCDynamicInfo::makeNotiPacketCurMood(PacketGuard&) const`

| 类 | 地址 |
|---|---|
| `CNPCDynamicInfo` | `0x08580624` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08580624  _ZNK15CNPCDynamicInfo21makeNotiPacketCurMoodER11PacketGuard
#           CNPCDynamicInfo::makeNotiPacketCurMood(PacketGuard&) const
# range [0x08580624, 0x08580667]
08580624 +0x00:  push   %ebp
08580625 +0x01:  mov    %esp,%ebp
08580627 +0x03:  sub    $0x18,%esp
0858062a +0x06:  mov    0x8(%ebp),%eax
0858062d +0x09:  mov    (%eax),%eax
0858062f +0x0b:  mov    %eax,(%esp)
08580632 +0x0e:  call   085819ac <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x13e>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x13e
08580637 +0x13:  mov    %eax,%edx
08580639 +0x15:  mov    0xc(%ebp),%eax
0858063c +0x18:  mov    %edx,0x4(%esp)
08580640 +0x1c:  mov    %eax,(%esp)
08580643 +0x1f:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08580648 +0x24:  mov    0x8(%ebp),%eax
0858064b +0x27:  mov    %eax,(%esp)
0858064e +0x2a:  call   08581910 <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0xa2>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0xa2
08580653 +0x2f:  movsbl %al,%edx
08580656 +0x32:  mov    0xc(%ebp),%eax
08580659 +0x35:  mov    %edx,0x4(%esp)
0858065d +0x39:  mov    %eax,(%esp)
08580660 +0x3c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08580665 +0x41:  leave
08580666 +0x42:  ret
08580667 +0x43:  nop
```

## 反编译 C

```c
// CNPCDynamicInfo::makeNotiPacketCurMood @ 0x8580624

/* CNPCDynamicInfo::makeNotiPacketCurMood(PacketGuard&) const */

void __thiscall CNPCDynamicInfo::makeNotiPacketCurMood(CNPCDynamicInfo *this,PacketGuard *param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = CNPCScript::getIndex(*(CNPCScript **)this);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,iVar2);
  cVar1 = getMood(this);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,(int)cVar1);
  return;
}
```

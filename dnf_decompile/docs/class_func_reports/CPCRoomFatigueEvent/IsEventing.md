# IsEventing

`_ZNK19CPCRoomFatigueEvent10IsEventingEP5CUser`

`CPCRoomFatigueEvent::IsEventing(CUser*) const`

| 类 | 地址 |
|---|---|
| `CPCRoomFatigueEvent` | `0x08267720` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08267720  _ZNK19CPCRoomFatigueEvent10IsEventingEP5CUser
#           CPCRoomFatigueEvent::IsEventing(CUser*) const
# range [0x08267720, 0x08267784]
08267720 +0x00:  push   %ebp
08267721 +0x01:  mov    %esp,%ebp
08267723 +0x03:  sub    $0x18,%esp
08267726 +0x06:  mov    0x8(%ebp),%eax
08267729 +0x09:  movl   $0x0,0x4(%esp)
08267731 +0x11:  mov    %eax,(%esp)
08267734 +0x14:  call   080c84fa <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x52>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x52
08267739 +0x19:  xor    $0x1,%eax
0826773c +0x1c:  test   %al,%al
0826773e +0x1e:  jne    08267746 <+0x26>
08267740 +0x20:  cmpl   $0x0,0xc(%ebp)
08267744 +0x24:  jne    0826774d <+0x2d>
08267746 +0x26:  mov    $0x1,%eax
0826774b +0x2b:  jmp    08267752 <+0x32>
0826774d +0x2d:  mov    $0x0,%eax
08267752 +0x32:  test   %al,%al
08267754 +0x34:  je     0826775d <+0x3d>
08267756 +0x36:  mov    $0x0,%eax
0826775b +0x3b:  jmp    08267783 <+0x63>
0826775d +0x3d:  movl   $0xc,0x4(%esp)
08267765 +0x45:  mov    0xc(%ebp),%eax
08267768 +0x48:  mov    %eax,(%esp)
0826776b +0x4b:  call   080e600e <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x144>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x144
08267770 +0x50:  xor    $0x1,%eax
08267773 +0x53:  test   %al,%al
08267775 +0x55:  je     0826777e <+0x5e>
08267777 +0x57:  mov    $0x0,%eax
0826777c +0x5c:  jmp    08267783 <+0x63>
0826777e +0x5e:  mov    $0x1,%eax
08267783 +0x63:  leave
08267784 +0x64:  ret
```

## 反编译 C

```c
// CPCRoomFatigueEvent::IsEventing @ 0x8267720

/* CPCRoomFatigueEvent::IsEventing(CUser*) const */

undefined4 __thiscall CPCRoomFatigueEvent::IsEventing(CPCRoomFatigueEvent *this,CUser *param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  
  cVar2 = CEventBase::IsEventing((CUser *)this);
  if ((cVar2 == '\x01') && (param_1 != (CUser *)0x0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    uVar3 = 0;
  }
  else {
    cVar2 = CUser::isAffectedPremium(param_1,0xc);
    if (cVar2 == '\x01') {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}
```

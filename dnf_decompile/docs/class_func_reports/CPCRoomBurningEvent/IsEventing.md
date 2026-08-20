# IsEventing

`_ZNK19CPCRoomBurningEvent10IsEventingEP5CUser`

`CPCRoomBurningEvent::IsEventing(CUser*) const`

| 类 | 地址 |
|---|---|
| `CPCRoomBurningEvent` | `0x08267366` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08267366  _ZNK19CPCRoomBurningEvent10IsEventingEP5CUser
#           CPCRoomBurningEvent::IsEventing(CUser*) const
# range [0x08267366, 0x082673ca]
08267366 +0x00:  push   %ebp
08267367 +0x01:  mov    %esp,%ebp
08267369 +0x03:  sub    $0x18,%esp
0826736c +0x06:  mov    0x8(%ebp),%eax
0826736f +0x09:  movl   $0x0,0x4(%esp)
08267377 +0x11:  mov    %eax,(%esp)
0826737a +0x14:  call   080c84fa <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x52>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x52
0826737f +0x19:  xor    $0x1,%eax
08267382 +0x1c:  test   %al,%al
08267384 +0x1e:  jne    0826738c <+0x26>
08267386 +0x20:  cmpl   $0x0,0xc(%ebp)
0826738a +0x24:  jne    08267393 <+0x2d>
0826738c +0x26:  mov    $0x1,%eax
08267391 +0x2b:  jmp    08267398 <+0x32>
08267393 +0x2d:  mov    $0x0,%eax
08267398 +0x32:  test   %al,%al
0826739a +0x34:  je     082673a3 <+0x3d>
0826739c +0x36:  mov    $0x0,%eax
082673a1 +0x3b:  jmp    082673c9 <+0x63>
082673a3 +0x3d:  movl   $0xc,0x4(%esp)
082673ab +0x45:  mov    0xc(%ebp),%eax
082673ae +0x48:  mov    %eax,(%esp)
082673b1 +0x4b:  call   080e600e <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x144>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x144
082673b6 +0x50:  xor    $0x1,%eax
082673b9 +0x53:  test   %al,%al
082673bb +0x55:  je     082673c4 <+0x5e>
082673bd +0x57:  mov    $0x0,%eax
082673c2 +0x5c:  jmp    082673c9 <+0x63>
082673c4 +0x5e:  mov    $0x1,%eax
082673c9 +0x63:  leave
082673ca +0x64:  ret
```

## 反编译 C

```c
// CPCRoomBurningEvent::IsEventing @ 0x8267366

/* CPCRoomBurningEvent::IsEventing(CUser*) const */

undefined4 __thiscall CPCRoomBurningEvent::IsEventing(CPCRoomBurningEvent *this,CUser *param_1)

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

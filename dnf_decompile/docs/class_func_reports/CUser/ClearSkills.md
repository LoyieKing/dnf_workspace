# ClearSkills

`_ZN5CUser11ClearSkillsEv`

`CUser::ClearSkills()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0867b4c4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0867b4c4  _ZN5CUser11ClearSkillsEv
#           CUser::ClearSkills()
# range [0x0867b4c4, 0x0867b51b]
0867b4c4 +0x00:  push   %ebp
0867b4c5 +0x01:  mov    %esp,%ebp
0867b4c7 +0x03:  sub    $0x18,%esp
0867b4ca +0x06:  mov    0x8(%ebp),%eax
0867b4cd +0x09:  movzbl 0x711d8(%eax),%eax
0867b4d4 +0x10:  xor    $0x1,%eax
0867b4d7 +0x13:  test   %al,%al
0867b4d9 +0x15:  jne    0867b4ea <+0x26>
0867b4db +0x17:  mov    0x8(%ebp),%eax
0867b4de +0x1a:  mov    %eax,(%esp)
0867b4e1 +0x1d:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0867b4e6 +0x22:  test   %eax,%eax
0867b4e8 +0x24:  jne    0867b4f1 <+0x2d>
0867b4ea +0x26:  mov    $0x1,%eax
0867b4ef +0x2b:  jmp    0867b4f6 <+0x32>
0867b4f1 +0x2d:  mov    $0x0,%eax
0867b4f6 +0x32:  test   %al,%al
0867b4f8 +0x34:  je     0867b501 <+0x3d>
0867b4fa +0x36:  mov    $0x0,%eax
0867b4ff +0x3b:  jmp    0867b519 <+0x55>
0867b501 +0x3d:  mov    0x8(%ebp),%eax
0867b504 +0x40:  mov    %eax,(%esp)
0867b507 +0x43:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
0867b50c +0x48:  mov    %eax,(%esp)
0867b50f +0x4b:  call   0860523e <_ZN9SkillSlot22debugCommandResetSkillEv>  ; SkillSlot::debugCommandResetSkill()
0867b514 +0x50:  mov    $0x1,%eax
0867b519 +0x55:  leave
0867b51a +0x56:  ret
0867b51b +0x57:  nop
```

## 反编译 C

```c
// CUser::ClearSkills @ 0x867b4c4

/* CUser::ClearSkills() */

bool __thiscall CUser::ClearSkills(CUser *this)

{
  bool bVar1;
  int iVar2;
  SkillSlot *this_00;
  
  if ((this[0x711d8] == (CUser)0x1) &&
     (iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this), iVar2 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    this_00 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)this);
    SkillSlot::debugCommandResetSkill(this_00);
  }
  return !bVar1;
}
```

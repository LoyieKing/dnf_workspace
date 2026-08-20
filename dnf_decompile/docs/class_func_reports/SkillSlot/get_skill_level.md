# get_skill_level

`_ZNK9SkillSlot15get_skill_levelEi`

`SkillSlot::get_skill_level(int) const`

| 类 | 地址 |
|---|---|
| `SkillSlot` | `0x086068e6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086068e6  _ZNK9SkillSlot15get_skill_levelEi
#           SkillSlot::get_skill_level(int) const
# range [0x086068e6, 0x08606957]
086068e6 +0x00:  push   %ebp
086068e7 +0x01:  mov    %esp,%ebp
086068e9 +0x03:  sub    $0x18,%esp
086068ec +0x06:  mov    0x8(%ebp),%eax
086068ef +0x09:  mov    (%eax),%eax
086068f1 +0x0b:  test   %eax,%eax
086068f3 +0x0d:  jne    086068fc <+0x16>
086068f5 +0x0f:  mov    $0xffffffff,%eax
086068fa +0x14:  jmp    08606956 <+0x70>
086068fc +0x16:  mov    0x8(%ebp),%eax
086068ff +0x19:  mov    (%eax),%eax
08606901 +0x1b:  mov    %eax,(%esp)
08606904 +0x1e:  call   0822f33c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49e6
08606909 +0x23:  cmp    $0xffffffff,%eax
0860690c +0x26:  je     0860691f <+0x39>
0860690e +0x28:  mov    0x8(%ebp),%eax
08606911 +0x2b:  mov    (%eax),%eax
08606913 +0x2d:  mov    %eax,(%esp)
08606916 +0x30:  call   0822f33c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49e6
0860691b +0x35:  test   %eax,%eax
0860691d +0x37:  jne    08606926 <+0x40>
0860691f +0x39:  mov    $0x1,%eax
08606924 +0x3e:  jmp    0860692b <+0x45>
08606926 +0x40:  mov    $0x0,%eax
0860692b +0x45:  test   %al,%al
0860692d +0x47:  je     08606942 <+0x5c>
0860692f +0x49:  mov    0xc(%ebp),%edx
08606932 +0x4c:  mov    0x8(%ebp),%eax
08606935 +0x4f:  add    $0x20,%edx
08606938 +0x52:  movzbl 0x7(%eax,%edx,2),%eax
0860693d +0x57:  movsbl %al,%eax
08606940 +0x5a:  jmp    08606956 <+0x70>
08606942 +0x5c:  mov    0xc(%ebp),%edx
08606945 +0x5f:  mov    0x8(%ebp),%eax
08606948 +0x62:  add    $0xe8,%edx
0860694e +0x68:  movzbl 0xf(%eax,%edx,2),%eax
08606953 +0x6d:  movsbl %al,%eax
08606956 +0x70:  leave
08606957 +0x71:  ret
```

## 反编译 C

```c
// SkillSlot::get_skill_level @ 0x86068e6

/* SkillSlot::get_skill_level(int) const */

int __thiscall SkillSlot::get_skill_level(SkillSlot *this,int param_1)

{
  SkillSlot SVar1;
  bool bVar2;
  int iVar3;
  
  if (*(int *)this != 0) {
    iVar3 = CUserCharacInfo::GetCurCharacSkillTreeIndex(*(CUserCharacInfo **)this);
    if ((iVar3 == -1) ||
       (iVar3 = CUserCharacInfo::GetCurCharacSkillTreeIndex(*(CUserCharacInfo **)this), iVar3 == 0))
    {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      SVar1 = this[(param_1 + 0x20) * 2 + 7];
    }
    else {
      SVar1 = this[(param_1 + 0xe8) * 2 + 0xf];
    }
    return (int)(char)SVar1;
  }
  return -1;
}
```

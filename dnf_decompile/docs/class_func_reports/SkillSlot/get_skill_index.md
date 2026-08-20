# get_skill_index

`_ZNK9SkillSlot15get_skill_indexEi`

`SkillSlot::get_skill_index(int) const`

| 类 | 地址 |
|---|---|
| `SkillSlot` | `0x08606874` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08606874  _ZNK9SkillSlot15get_skill_indexEi
#           SkillSlot::get_skill_index(int) const
# range [0x08606874, 0x086068e5]
08606874 +0x00:  push   %ebp
08606875 +0x01:  mov    %esp,%ebp
08606877 +0x03:  sub    $0x18,%esp
0860687a +0x06:  mov    0x8(%ebp),%eax
0860687d +0x09:  mov    (%eax),%eax
0860687f +0x0b:  test   %eax,%eax
08606881 +0x0d:  jne    0860688a <+0x16>
08606883 +0x0f:  mov    $0xffffffff,%eax
08606888 +0x14:  jmp    086068e4 <+0x70>
0860688a +0x16:  mov    0x8(%ebp),%eax
0860688d +0x19:  mov    (%eax),%eax
0860688f +0x1b:  mov    %eax,(%esp)
08606892 +0x1e:  call   0822f33c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49e6
08606897 +0x23:  cmp    $0xffffffff,%eax
0860689a +0x26:  je     086068ad <+0x39>
0860689c +0x28:  mov    0x8(%ebp),%eax
0860689f +0x2b:  mov    (%eax),%eax
086068a1 +0x2d:  mov    %eax,(%esp)
086068a4 +0x30:  call   0822f33c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49e6
086068a9 +0x35:  test   %eax,%eax
086068ab +0x37:  jne    086068b4 <+0x40>
086068ad +0x39:  mov    $0x1,%eax
086068b2 +0x3e:  jmp    086068b9 <+0x45>
086068b4 +0x40:  mov    $0x0,%eax
086068b9 +0x45:  test   %al,%al
086068bb +0x47:  je     086068d0 <+0x5c>
086068bd +0x49:  mov    0xc(%ebp),%edx
086068c0 +0x4c:  mov    0x8(%ebp),%eax
086068c3 +0x4f:  add    $0x20,%edx
086068c6 +0x52:  movzbl 0x6(%eax,%edx,2),%eax
086068cb +0x57:  movzbl %al,%eax
086068ce +0x5a:  jmp    086068e4 <+0x70>
086068d0 +0x5c:  mov    0xc(%ebp),%edx
086068d3 +0x5f:  mov    0x8(%ebp),%eax
086068d6 +0x62:  add    $0xe8,%edx
086068dc +0x68:  movzbl 0xe(%eax,%edx,2),%eax
086068e1 +0x6d:  movzbl %al,%eax
086068e4 +0x70:  leave
086068e5 +0x71:  ret
```

## 反编译 C

```c
// SkillSlot::get_skill_index @ 0x8606874

/* SkillSlot::get_skill_index(int) const */

uint __thiscall SkillSlot::get_skill_index(SkillSlot *this,int param_1)

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
      SVar1 = this[(param_1 + 0x20) * 2 + 6];
    }
    else {
      SVar1 = this[(param_1 + 0xe8) * 2 + 0xe];
    }
    return (uint)(byte)SVar1;
  }
  return 0xffffffff;
}
```

# get_skill_count

`_ZNK9SkillSlot15get_skill_countEv`

`SkillSlot::get_skill_count() const`

| 类 | 地址 |
|---|---|
| `SkillSlot` | `0x08603652` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08603652  _ZNK9SkillSlot15get_skill_countEv
#           SkillSlot::get_skill_count() const
# range [0x08603652, 0x086036cd]
08603652 +0x00:  push   %ebp
08603653 +0x01:  mov    %esp,%ebp
08603655 +0x03:  sub    $0x28,%esp
08603658 +0x06:  mov    0x8(%ebp),%eax
0860365b +0x09:  mov    (%eax),%eax
0860365d +0x0b:  test   %eax,%eax
0860365f +0x0d:  jne    08603668 <+0x16>
08603661 +0x0f:  mov    $0x0,%eax
08603666 +0x14:  jmp    086036cc <+0x7a>
08603668 +0x16:  mov    0x8(%ebp),%eax
0860366b +0x19:  mov    (%eax),%eax
0860366d +0x1b:  mov    %eax,(%esp)
08603670 +0x1e:  call   0822f33c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49e6
08603675 +0x23:  mov    %eax,0x4(%esp)
08603679 +0x27:  mov    0x8(%ebp),%eax
0860367c +0x2a:  mov    %eax,(%esp)
0860367f +0x2d:  call   086067de <_ZNK9SkillSlot17get_skillslot_bufE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::get_skillslot_buf(ENUM_SKILL_TREE_KIND) const
08603684 +0x32:  mov    %eax,-0x14(%ebp)
08603687 +0x35:  cmpl   $0x0,-0x14(%ebp)
0860368b +0x39:  jne    08603694 <+0x42>
0860368d +0x3b:  mov    $0x0,%eax
08603692 +0x40:  jmp    086036cc <+0x7a>
08603694 +0x42:  movl   $0x0,-0x10(%ebp)
0860369b +0x49:  movl   $0x0,-0xc(%ebp)
086036a2 +0x50:  jmp    086036bb <+0x69>
086036a4 +0x52:  mov    -0xc(%ebp),%eax
086036a7 +0x55:  add    %eax,%eax
086036a9 +0x57:  add    -0x14(%ebp),%eax
086036ac +0x5a:  movzbl (%eax),%eax
086036af +0x5d:  test   %al,%al
086036b1 +0x5f:  je     086036b7 <+0x65>
086036b3 +0x61:  addl   $0x1,-0x10(%ebp)
086036b7 +0x65:  addl   $0x1,-0xc(%ebp)
086036bb +0x69:  cmpl   $0xcb,-0xc(%ebp)
086036c2 +0x70:  setle  %al
086036c5 +0x73:  test   %al,%al
086036c7 +0x75:  jne    086036a4 <+0x52>
086036c9 +0x77:  mov    -0x10(%ebp),%eax
086036cc +0x7a:  leave
086036cd +0x7b:  ret
```

## 反编译 C

```c
// SkillSlot::get_skill_count @ 0x8603652

/* SkillSlot::get_skill_count() const */

int __thiscall SkillSlot::get_skill_count(SkillSlot *this)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_14;
  undefined4 local_10;
  
  if (*(int *)this == 0) {
    local_14 = 0;
  }
  else {
    uVar1 = CUserCharacInfo::GetCurCharacSkillTreeIndex(*(CUserCharacInfo **)this);
    iVar2 = get_skillslot_buf(this,uVar1);
    if (iVar2 == 0) {
      local_14 = 0;
    }
    else {
      local_14 = 0;
      for (local_10 = 0; local_10 < 0xcc; local_10 = local_10 + 1) {
        if (*(char *)(local_10 * 2 + iVar2) != '\0') {
          local_14 = local_14 + 1;
        }
      }
    }
  }
  return local_14;
}
```

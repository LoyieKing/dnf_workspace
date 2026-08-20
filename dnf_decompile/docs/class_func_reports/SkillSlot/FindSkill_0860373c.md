# FindSkill

`_ZNK9SkillSlot9FindSkillEi`

`SkillSlot::FindSkill(int) const`

| 类 | 地址 |
|---|---|
| `SkillSlot` | `0x0860373c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860373c  _ZNK9SkillSlot9FindSkillEi
#           SkillSlot::FindSkill(int) const
# range [0x0860373c, 0x086037c5]
0860373c +0x00:  push   %ebp
0860373d +0x01:  mov    %esp,%ebp
0860373f +0x03:  sub    $0x28,%esp
08603742 +0x06:  mov    0x8(%ebp),%eax
08603745 +0x09:  mov    (%eax),%eax
08603747 +0x0b:  test   %eax,%eax
08603749 +0x0d:  jne    08603752 <+0x16>
0860374b +0x0f:  mov    $0x0,%eax
08603750 +0x14:  jmp    086037c4 <+0x88>
08603752 +0x16:  mov    0x8(%ebp),%eax
08603755 +0x19:  mov    (%eax),%eax
08603757 +0x1b:  mov    %eax,(%esp)
0860375a +0x1e:  call   0822f33c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49e6
0860375f +0x23:  mov    %eax,0x4(%esp)
08603763 +0x27:  mov    0x8(%ebp),%eax
08603766 +0x2a:  mov    %eax,(%esp)
08603769 +0x2d:  call   086067de <_ZNK9SkillSlot17get_skillslot_bufE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::get_skillslot_buf(ENUM_SKILL_TREE_KIND) const
0860376e +0x32:  mov    %eax,-0x10(%ebp)
08603771 +0x35:  cmpl   $0x0,-0x10(%ebp)
08603775 +0x39:  jne    0860377e <+0x42>
08603777 +0x3b:  mov    $0x0,%eax
0860377c +0x40:  jmp    086037c4 <+0x88>
0860377e +0x42:  movl   $0x0,-0xc(%ebp)
08603785 +0x49:  jmp    086037b1 <+0x75>
08603787 +0x4b:  mov    -0xc(%ebp),%eax
0860378a +0x4e:  add    %eax,%eax
0860378c +0x50:  add    -0x10(%ebp),%eax
0860378f +0x53:  movzbl (%eax),%eax
08603792 +0x56:  movzbl %al,%eax
08603795 +0x59:  cmp    0xc(%ebp),%eax
08603798 +0x5c:  jne    086037ad <+0x71>
0860379a +0x5e:  mov    -0xc(%ebp),%edx
0860379d +0x61:  mov    0x8(%ebp),%eax
086037a0 +0x64:  add    $0x20,%edx
086037a3 +0x67:  movzbl 0x7(%eax,%edx,2),%eax
086037a8 +0x6c:  movsbl %al,%eax
086037ab +0x6f:  jmp    086037c4 <+0x88>
086037ad +0x71:  addl   $0x1,-0xc(%ebp)
086037b1 +0x75:  cmpl   $0xcb,-0xc(%ebp)
086037b8 +0x7c:  setle  %al
086037bb +0x7f:  test   %al,%al
086037bd +0x81:  jne    08603787 <+0x4b>
086037bf +0x83:  mov    $0x0,%eax
086037c4 +0x88:  leave
086037c5 +0x89:  ret
```

## 反编译 C

```c
// SkillSlot::FindSkill @ 0x860373c

/* SkillSlot::FindSkill(int) const */

int __thiscall SkillSlot::FindSkill(SkillSlot *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int local_10;
  
  if (*(int *)this != 0) {
    uVar1 = CUserCharacInfo::GetCurCharacSkillTreeIndex(*(CUserCharacInfo **)this);
    iVar2 = get_skillslot_buf(this,uVar1);
    if (iVar2 != 0) {
      for (local_10 = 0; local_10 < 0xcc; local_10 = local_10 + 1) {
        if ((uint)*(byte *)(local_10 * 2 + iVar2) == param_1) {
          return (int)(char)this[(local_10 + 0x20) * 2 + 7];
        }
      }
    }
  }
  return 0;
}
```

# check_skill_mastered

`_ZNK9SkillSlot20check_skill_masteredEiii`

`SkillSlot::check_skill_mastered(int, int, int) const`

| 类 | 地址 |
|---|---|
| `SkillSlot` | `0x08604898` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08604898  _ZNK9SkillSlot20check_skill_masteredEiii
#           SkillSlot::check_skill_mastered(int, int, int) const
# range [0x08604898, 0x08604953]
08604898 +0x00:  push   %ebp
08604899 +0x01:  mov    %esp,%ebp
0860489b +0x03:  sub    $0x38,%esp
0860489e +0x06:  mov    0x8(%ebp),%eax
086048a1 +0x09:  mov    (%eax),%eax
086048a3 +0x0b:  test   %eax,%eax
086048a5 +0x0d:  jne    086048b1 <+0x19>
086048a7 +0x0f:  mov    $0x0,%eax
086048ac +0x14:  jmp    08604952 <+0xba>
086048b1 +0x19:  mov    0x8(%ebp),%eax
086048b4 +0x1c:  mov    (%eax),%eax
086048b6 +0x1e:  mov    %eax,(%esp)
086048b9 +0x21:  call   0822f33c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49e6
086048be +0x26:  mov    %eax,0x4(%esp)
086048c2 +0x2a:  mov    0x8(%ebp),%eax
086048c5 +0x2d:  mov    %eax,(%esp)
086048c8 +0x30:  call   086067de <_ZNK9SkillSlot17get_skillslot_bufE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::get_skillslot_buf(ENUM_SKILL_TREE_KIND) const
086048cd +0x35:  mov    %eax,-0x10(%ebp)
086048d0 +0x38:  cmpl   $0x0,-0x10(%ebp)
086048d4 +0x3c:  jne    086048dd <+0x45>
086048d6 +0x3e:  mov    $0x0,%eax
086048db +0x43:  jmp    08604952 <+0xba>
086048dd +0x45:  mov    0x8(%ebp),%eax
086048e0 +0x48:  mov    (%eax),%eax
086048e2 +0x4a:  mov    %eax,(%esp)
086048e5 +0x4d:  call   0822f33c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49e6
086048ea +0x52:  movl   $0x1,0x10(%esp)
086048f2 +0x5a:  mov    %eax,0xc(%esp)
086048f6 +0x5e:  mov    0x14(%ebp),%eax
086048f9 +0x61:  mov    %eax,0x8(%esp)
086048fd +0x65:  mov    0xc(%ebp),%eax
08604900 +0x68:  mov    %eax,0x4(%esp)
08604904 +0x6c:  mov    0x8(%ebp),%eax
08604907 +0x6f:  mov    %eax,(%esp)
0860490a +0x72:  call   08604a86 <_ZNK9SkillSlot16get_skillslot_noEii20ENUM_SKILL_TREE_KINDb>  ; SkillSlot::get_skillslot_no(int, int, ENUM_SKILL_TREE_KIND, bool) const
0860490f +0x77:  mov    %eax,-0xc(%ebp)
08604912 +0x7a:  cmpl   $0x0,-0xc(%ebp)
08604916 +0x7e:  jns    0860491f <+0x87>
08604918 +0x80:  mov    $0x0,%eax
0860491d +0x85:  jmp    08604952 <+0xba>
0860491f +0x87:  mov    -0xc(%ebp),%eax
08604922 +0x8a:  add    %eax,%eax
08604924 +0x8c:  add    -0x10(%ebp),%eax
08604927 +0x8f:  movzbl (%eax),%eax
0860492a +0x92:  movzbl %al,%eax
0860492d +0x95:  cmp    0xc(%ebp),%eax
08604930 +0x98:  jne    0860494d <+0xb5>
08604932 +0x9a:  mov    -0xc(%ebp),%eax
08604935 +0x9d:  add    %eax,%eax
08604937 +0x9f:  add    -0x10(%ebp),%eax
0860493a +0xa2:  movzbl 0x1(%eax),%eax
0860493e +0xa6:  movsbl %al,%eax
08604941 +0xa9:  cmp    0x10(%ebp),%eax
08604944 +0xac:  jl     0860494d <+0xb5>
08604946 +0xae:  mov    $0x1,%eax
0860494b +0xb3:  jmp    08604952 <+0xba>
0860494d +0xb5:  mov    $0x0,%eax
08604952 +0xba:  leave
08604953 +0xbb:  ret
```

## 反编译 C

```c
// SkillSlot::check_skill_mastered @ 0x8604898

/* SkillSlot::check_skill_mastered(int, int, int) const */

undefined4 __thiscall
SkillSlot::check_skill_mastered(SkillSlot *this,int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)this == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = CUserCharacInfo::GetCurCharacSkillTreeIndex(*(CUserCharacInfo **)this);
    iVar2 = get_skillslot_buf(this,uVar1);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = CUserCharacInfo::GetCurCharacSkillTreeIndex(*(CUserCharacInfo **)this);
      iVar3 = get_skillslot_no(this,param_1,param_3,uVar1,1);
      if (iVar3 < 0) {
        uVar1 = 0;
      }
      else if (((uint)*(byte *)(iVar3 * 2 + iVar2) == param_1) &&
              (param_2 <= *(char *)(iVar3 * 2 + iVar2 + 1))) {
        uVar1 = 1;
      }
      else {
        uVar1 = 0;
      }
    }
  }
  return uVar1;
}
```

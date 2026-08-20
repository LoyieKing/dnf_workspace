# makeCheckSum

`_ZNK9SkillSlot12makeCheckSumEi`

`SkillSlot::makeCheckSum(int) const`

| 类 | 地址 |
|---|---|
| `SkillSlot` | `0x086066f2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086066f2  _ZNK9SkillSlot12makeCheckSumEi
#           SkillSlot::makeCheckSum(int) const
# range [0x086066f2, 0x086067b7]
086066f2 +0x00:  push   %ebp
086066f3 +0x01:  mov    %esp,%ebp
086066f5 +0x03:  sub    $0x28,%esp
086066f8 +0x06:  mov    0x8(%ebp),%eax
086066fb +0x09:  mov    (%eax),%eax
086066fd +0x0b:  test   %eax,%eax
086066ff +0x0d:  jne    0860670b <+0x19>
08606701 +0x0f:  mov    $0x0,%eax
08606706 +0x14:  jmp    086067b5 <+0xc3>
0860670b +0x19:  mov    0x8(%ebp),%eax
0860670e +0x1c:  mov    (%eax),%eax
08606710 +0x1e:  mov    %eax,(%esp)
08606713 +0x21:  call   0822f33c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49e6
08606718 +0x26:  mov    %eax,0x4(%esp)
0860671c +0x2a:  mov    0x8(%ebp),%eax
0860671f +0x2d:  mov    %eax,(%esp)
08606722 +0x30:  call   086067de <_ZNK9SkillSlot17get_skillslot_bufE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::get_skillslot_buf(ENUM_SKILL_TREE_KIND) const
08606727 +0x35:  mov    %eax,-0x10(%ebp)
0860672a +0x38:  cmpl   $0x0,-0x10(%ebp)
0860672e +0x3c:  jne    08606737 <+0x45>
08606730 +0x3e:  mov    $0xffffffff,%eax
08606735 +0x43:  jmp    086067b5 <+0xc3>
08606737 +0x45:  movl   $0x0,-0x14(%ebp)
0860673e +0x4c:  movl   $0x0,-0xc(%ebp)
08606745 +0x53:  jmp    08606795 <+0xa3>
08606747 +0x55:  mov    -0xc(%ebp),%eax
0860674a +0x58:  add    %eax,%eax
0860674c +0x5a:  add    -0x10(%ebp),%eax
0860674f +0x5d:  movzbl (%eax),%eax
08606752 +0x60:  test   %al,%al
08606754 +0x62:  je     08606790 <+0x9e>
08606756 +0x64:  mov    -0xc(%ebp),%eax
08606759 +0x67:  add    %eax,%eax
0860675b +0x69:  add    -0x10(%ebp),%eax
0860675e +0x6c:  movzbl 0x1(%eax),%eax
08606762 +0x70:  movsbl %al,%edx
08606765 +0x73:  mov    -0xc(%ebp),%eax
08606768 +0x76:  add    %eax,%eax
0860676a +0x78:  add    -0x10(%ebp),%eax
0860676d +0x7b:  movzbl (%eax),%eax
08606770 +0x7e:  movzbl %al,%eax
08606773 +0x81:  mov    %edx,0x8(%esp)
08606777 +0x85:  mov    %eax,0x4(%esp)
0860677b +0x89:  mov    -0xc(%ebp),%eax
0860677e +0x8c:  mov    %eax,(%esp)
08606781 +0x8f:  call   088923f1 <_Z16getSkillChecksumiii>  ; getSkillChecksum(int, int, int)
08606786 +0x94:  mov    -0x14(%ebp),%edx
08606789 +0x97:  add    %edx,%eax
0860678b +0x99:  mov    %eax,-0x14(%ebp)
0860678e +0x9c:  jmp    08606791 <+0x9f>
08606790 +0x9e:  nop
08606791 +0x9f:  addl   $0x1,-0xc(%ebp)
08606795 +0xa3:  cmpl   $0xcb,-0xc(%ebp)
0860679c +0xaa:  setle  %al
0860679f +0xad:  test   %al,%al
086067a1 +0xaf:  jne    08606747 <+0x55>
086067a3 +0xb1:  mov    0xc(%ebp),%eax
086067a6 +0xb4:  mov    %eax,0x4(%esp)
086067aa +0xb8:  lea    -0x14(%ebp),%eax
086067ad +0xbb:  mov    %eax,(%esp)
086067b0 +0xbe:  call   08892445 <_Z19finishSkillChecksumPii>  ; finishSkillChecksum(int*, int)
086067b5 +0xc3:  leave
086067b6 +0xc4:  ret
086067b7 +0xc5:  nop
```

## 反编译 C

```c
// SkillSlot::makeCheckSum @ 0x86066f2

/* SkillSlot::makeCheckSum(int) const */

undefined4 __thiscall SkillSlot::makeCheckSum(SkillSlot *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int local_18;
  int local_14;
  int local_10;
  
  if (*(int *)this == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = CUserCharacInfo::GetCurCharacSkillTreeIndex(*(CUserCharacInfo **)this);
    local_14 = get_skillslot_buf(this,uVar1);
    if (local_14 == 0) {
      uVar1 = 0xffffffff;
    }
    else {
      local_18 = 0;
      for (local_10 = 0; local_10 < 0xcc; local_10 = local_10 + 1) {
        if (*(char *)(local_10 * 2 + local_14) != '\0') {
          iVar2 = getSkillChecksum(local_10,(uint)*(byte *)(local_10 * 2 + local_14),
                                   (int)*(char *)(local_10 * 2 + local_14 + 1));
          local_18 = iVar2 + local_18;
        }
      }
      uVar1 = finishSkillChecksum(&local_18,param_1);
    }
  }
  return uVar1;
}
```

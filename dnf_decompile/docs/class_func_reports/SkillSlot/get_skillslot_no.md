# get_skillslot_no

`_ZNK9SkillSlot16get_skillslot_noEii20ENUM_SKILL_TREE_KINDb`

`SkillSlot::get_skillslot_no(int, int, ENUM_SKILL_TREE_KIND, bool) const`

| 类 | 地址 |
|---|---|
| `SkillSlot` | `0x08604a86` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08604a86  _ZNK9SkillSlot16get_skillslot_noEii20ENUM_SKILL_TREE_KINDb
#           SkillSlot::get_skillslot_no(int, int, ENUM_SKILL_TREE_KIND, bool) const
# range [0x08604a86, 0x08604c01]
08604a86 +0x000:  push   %ebp
08604a87 +0x001:  mov    %esp,%ebp
08604a89 +0x003:  sub    $0x48,%esp
08604a8c +0x006:  mov    0x18(%ebp),%eax
08604a8f +0x009:  mov    %al,-0x2c(%ebp)
08604a92 +0x00c:  mov    0x8(%ebp),%eax
08604a95 +0x00f:  mov    (%eax),%eax
08604a97 +0x011:  test   %eax,%eax
08604a99 +0x013:  jne    08604aa5 <+0x1f>
08604a9b +0x015:  mov    $0xffffffff,%eax
08604aa0 +0x01a:  jmp    08604c00 <+0x17a>
08604aa5 +0x01f:  mov    0x14(%ebp),%eax
08604aa8 +0x022:  mov    %eax,0x4(%esp)
08604aac +0x026:  mov    0x8(%ebp),%eax
08604aaf +0x029:  mov    %eax,(%esp)
08604ab2 +0x02c:  call   086067de <_ZNK9SkillSlot17get_skillslot_bufE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::get_skillslot_buf(ENUM_SKILL_TREE_KIND) const
08604ab7 +0x031:  mov    %eax,-0x20(%ebp)
08604aba +0x034:  cmpl   $0x0,-0x20(%ebp)
08604abe +0x038:  jne    08604aca <+0x44>
08604ac0 +0x03a:  mov    $0xffffffff,%eax
08604ac5 +0x03f:  jmp    08604c00 <+0x17a>
08604aca +0x044:  cmpb   $0x0,-0x2c(%ebp)
08604ace +0x048:  je     08604aed <+0x67>
08604ad0 +0x04a:  mov    0xc(%ebp),%eax
08604ad3 +0x04d:  mov    %eax,0x4(%esp)
08604ad7 +0x051:  mov    0x8(%ebp),%eax
08604ada +0x054:  mov    %eax,(%esp)
08604add +0x057:  call   08608d58 <_ZNK9SkillSlot30checkComboSkillInsertQuickSlotEi>  ; SkillSlot::checkComboSkillInsertQuickSlot(int) const
08604ae2 +0x05c:  test   %al,%al
08604ae4 +0x05e:  je     08604aed <+0x67>
08604ae6 +0x060:  mov    $0x1,%eax
08604aeb +0x065:  jmp    08604af2 <+0x6c>
08604aed +0x067:  mov    $0x0,%eax
08604af2 +0x06c:  test   %al,%al
08604af4 +0x06e:  je     08604b5f <+0xd9>
08604af6 +0x070:  movl   $0x0,-0x14(%ebp)
08604afd +0x077:  jmp    08604b1e <+0x98>
08604aff +0x079:  mov    -0x14(%ebp),%eax
08604b02 +0x07c:  add    %eax,%eax
08604b04 +0x07e:  add    -0x20(%ebp),%eax
08604b07 +0x081:  movzbl (%eax),%eax
08604b0a +0x084:  movzbl %al,%eax
08604b0d +0x087:  cmp    0xc(%ebp),%eax
08604b10 +0x08a:  jne    08604b1a <+0x94>
08604b12 +0x08c:  mov    -0x14(%ebp),%eax
08604b15 +0x08f:  jmp    08604c00 <+0x17a>
08604b1a +0x094:  addl   $0x1,-0x14(%ebp)
08604b1e +0x098:  cmpl   $0x5,-0x14(%ebp)
08604b22 +0x09c:  setle  %al
08604b25 +0x09f:  test   %al,%al
08604b27 +0x0a1:  jne    08604aff <+0x79>
08604b29 +0x0a3:  movl   $0xc6,-0x10(%ebp)
08604b30 +0x0aa:  jmp    08604b51 <+0xcb>
08604b32 +0x0ac:  mov    -0x10(%ebp),%eax
08604b35 +0x0af:  add    %eax,%eax
08604b37 +0x0b1:  add    -0x20(%ebp),%eax
08604b3a +0x0b4:  movzbl (%eax),%eax
08604b3d +0x0b7:  movzbl %al,%eax
08604b40 +0x0ba:  cmp    0xc(%ebp),%eax
08604b43 +0x0bd:  jne    08604b4d <+0xc7>
08604b45 +0x0bf:  mov    -0x10(%ebp),%eax
08604b48 +0x0c2:  jmp    08604c00 <+0x17a>
08604b4d +0x0c7:  addl   $0x1,-0x10(%ebp)
08604b51 +0x0cb:  cmpl   $0xcb,-0x10(%ebp)
08604b58 +0x0d2:  setle  %al
08604b5b +0x0d5:  test   %al,%al
08604b5d +0x0d7:  jne    08604b32 <+0xac>
08604b5f +0x0d9:  movl   $0x0,-0x1c(%ebp)
08604b66 +0x0e0:  movl   $0x0,-0x18(%ebp)
08604b6d +0x0e7:  mov    0x10(%ebp),%eax
08604b70 +0x0ea:  cmp    $0x1,%eax
08604b73 +0x0ed:  je     08604b9c <+0x116>
08604b75 +0x0ef:  cmp    $0x1,%eax
08604b78 +0x0f2:  jg     08604b80 <+0xfa>
08604b7a +0x0f4:  test   %eax,%eax
08604b7c +0x0f6:  je     08604b8c <+0x106>
08604b7e +0x0f8:  jmp    08604bca <+0x144>
08604b80 +0x0fa:  cmp    $0x2,%eax
08604b83 +0x0fd:  je     08604bac <+0x126>
08604b85 +0x0ff:  cmp    $0x3,%eax
08604b88 +0x102:  je     08604bbc <+0x136>
08604b8a +0x104:  jmp    08604bca <+0x144>
08604b8c +0x106:  movl   $0x6,-0x1c(%ebp)
08604b93 +0x10d:  movl   $0x36,-0x18(%ebp)
08604b9a +0x114:  jmp    08604bca <+0x144>
08604b9c +0x116:  movl   $0x36,-0x1c(%ebp)
08604ba3 +0x11d:  movl   $0x66,-0x18(%ebp)
08604baa +0x124:  jmp    08604bca <+0x144>
08604bac +0x126:  movl   $0x66,-0x1c(%ebp)
08604bb3 +0x12d:  movl   $0x96,-0x18(%ebp)
08604bba +0x134:  jmp    08604bca <+0x144>
08604bbc +0x136:  movl   $0x96,-0x1c(%ebp)
08604bc3 +0x13d:  movl   $0xc6,-0x18(%ebp)
08604bca +0x144:  mov    -0x1c(%ebp),%eax
08604bcd +0x147:  mov    %eax,-0xc(%ebp)
08604bd0 +0x14a:  jmp    08604bee <+0x168>
08604bd2 +0x14c:  mov    -0xc(%ebp),%eax
08604bd5 +0x14f:  add    %eax,%eax
08604bd7 +0x151:  add    -0x20(%ebp),%eax
08604bda +0x154:  movzbl (%eax),%eax
08604bdd +0x157:  movzbl %al,%eax
08604be0 +0x15a:  cmp    0xc(%ebp),%eax
08604be3 +0x15d:  jne    08604bea <+0x164>
08604be5 +0x15f:  mov    -0xc(%ebp),%eax
08604be8 +0x162:  jmp    08604c00 <+0x17a>
08604bea +0x164:  addl   $0x1,-0xc(%ebp)
08604bee +0x168:  mov    -0xc(%ebp),%eax
08604bf1 +0x16b:  cmp    -0x18(%ebp),%eax
08604bf4 +0x16e:  setl   %al
08604bf7 +0x171:  test   %al,%al
08604bf9 +0x173:  jne    08604bd2 <+0x14c>
08604bfb +0x175:  mov    $0xffffffff,%eax
08604c00 +0x17a:  leave
08604c01 +0x17b:  ret
```

## 反编译 C

```c
// SkillSlot::get_skillslot_no @ 0x8604a86

/* SkillSlot::get_skillslot_no(int, int, ENUM_SKILL_TREE_KIND, bool) const */

int __thiscall
SkillSlot::get_skillslot_no
          (SkillSlot *this,uint param_1,int param_2,undefined4 param_4,char param_5)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  if ((*(int *)this != 0) && (iVar3 = get_skillslot_buf(this,param_4), iVar3 != 0)) {
    if ((param_5 == '\0') || (cVar2 = checkComboSkillInsertQuickSlot(this,param_1), cVar2 == '\0'))
    {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      for (local_18 = 0; local_18 < 6; local_18 = local_18 + 1) {
        if (*(byte *)(local_18 * 2 + iVar3) == param_1) {
          return local_18;
        }
      }
      for (local_14 = 0xc6; local_14 < 0xcc; local_14 = local_14 + 1) {
        if (*(byte *)(local_14 * 2 + iVar3) == param_1) {
          return local_14;
        }
      }
    }
    local_20 = 0;
    local_1c = 0;
    if (param_2 == 1) {
      local_20 = 0x36;
      local_1c = 0x66;
    }
    else if (param_2 < 2) {
      if (param_2 == 0) {
        local_20 = 6;
        local_1c = 0x36;
      }
    }
    else if (param_2 == 2) {
      local_20 = 0x66;
      local_1c = 0x96;
    }
    else if (param_2 == 3) {
      local_20 = 0x96;
      local_1c = 0xc6;
    }
    for (local_10 = local_20; local_10 < local_1c; local_10 = local_10 + 1) {
      if (*(byte *)(local_10 * 2 + iVar3) == param_1) {
        return local_10;
      }
    }
  }
  return -1;
}
```

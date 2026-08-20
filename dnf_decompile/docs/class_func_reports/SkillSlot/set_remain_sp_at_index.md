# set_remain_sp_at_index

`_ZN9SkillSlot22set_remain_sp_at_indexEi20ENUM_SKILL_TREE_KIND`

`SkillSlot::set_remain_sp_at_index(int, ENUM_SKILL_TREE_KIND)`

| 类 | 地址 |
|---|---|
| `SkillSlot` | `0x086034f8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086034f8  _ZN9SkillSlot22set_remain_sp_at_indexEi20ENUM_SKILL_TREE_KIND
#           SkillSlot::set_remain_sp_at_index(int, ENUM_SKILL_TREE_KIND)
# range [0x086034f8, 0x08603527]
086034f8 +0x00:  push   %ebp
086034f9 +0x01:  mov    %esp,%ebp
086034fb +0x03:  mov    0x10(%ebp),%eax
086034fe +0x06:  cmp    $0xffffffff,%eax
08603501 +0x09:  je     0860350a <+0x12>
08603503 +0x0b:  mov    0x10(%ebp),%eax
08603506 +0x0e:  test   %eax,%eax
08603508 +0x10:  jne    08603515 <+0x1d>
0860350a +0x12:  mov    0x8(%ebp),%eax
0860350d +0x15:  mov    0xc(%ebp),%edx
08603510 +0x18:  mov    %edx,0x4(%eax)
08603513 +0x1b:  jmp    08603526 <+0x2e>
08603515 +0x1d:  mov    0x10(%ebp),%eax
08603518 +0x20:  cmp    $0x1,%eax
0860351b +0x23:  jne    08603526 <+0x2e>
0860351d +0x25:  mov    0x8(%ebp),%eax
08603520 +0x28:  mov    0xc(%ebp),%edx
08603523 +0x2b:  mov    %edx,0xc(%eax)
08603526 +0x2e:  pop    %ebp
08603527 +0x2f:  ret
```

## 反编译 C

```c
// SkillSlot::set_remain_sp_at_index @ 0x86034f8

/* SkillSlot::set_remain_sp_at_index(int, ENUM_SKILL_TREE_KIND) */

void __thiscall SkillSlot::set_remain_sp_at_index(SkillSlot *this,undefined4 param_1,int param_3)

{
  if ((param_3 == -1) || (param_3 == 0)) {
    *(undefined4 *)(this + 4) = param_1;
  }
  else if (param_3 == 1) {
    *(undefined4 *)(this + 0xc) = param_1;
  }
  return;
}
```

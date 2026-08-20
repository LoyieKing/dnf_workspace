# check_skill_mastered

`_ZNK9SkillSlot20check_skill_masteredEP15_Mastered_skilliii`

`SkillSlot::check_skill_mastered(_Mastered_skill*, int, int, int) const`

| 类 | 地址 |
|---|---|
| `SkillSlot` | `0x08608014` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08608014  _ZNK9SkillSlot20check_skill_masteredEP15_Mastered_skilliii
#           SkillSlot::check_skill_mastered(_Mastered_skill*, int, int, int) const
# range [0x08608014, 0x086080a3]
08608014 +0x00:  push   %ebp
08608015 +0x01:  mov    %esp,%ebp
08608017 +0x03:  sub    $0x24,%esp
0860801a +0x06:  mov    0x8(%ebp),%eax
0860801d +0x09:  mov    (%eax),%eax
0860801f +0x0b:  test   %eax,%eax
08608021 +0x0d:  jne    0860802a <+0x16>
08608023 +0x0f:  mov    $0x0,%eax
08608028 +0x14:  jmp    086080a2 <+0x8e>
0860802a +0x16:  cmpl   $0x0,0xc(%ebp)
0860802e +0x1a:  jne    08608037 <+0x23>
08608030 +0x1c:  mov    $0x0,%eax
08608035 +0x21:  jmp    086080a2 <+0x8e>
08608037 +0x23:  movl   $0x1,0x10(%esp)
0860803f +0x2b:  mov    0x18(%ebp),%eax
08608042 +0x2e:  mov    %eax,0xc(%esp)
08608046 +0x32:  mov    0x10(%ebp),%eax
08608049 +0x35:  mov    %eax,0x8(%esp)
0860804d +0x39:  mov    0xc(%ebp),%eax
08608050 +0x3c:  mov    %eax,0x4(%esp)
08608054 +0x40:  mov    0x8(%ebp),%eax
08608057 +0x43:  mov    %eax,(%esp)
0860805a +0x46:  call   08607dba <_ZNK9SkillSlot16get_skillslot_noEP15_Mastered_skilliib>  ; SkillSlot::get_skillslot_no(_Mastered_skill*, int, int, bool) const
0860805f +0x4b:  mov    %eax,-0x4(%ebp)
08608062 +0x4e:  cmpl   $0x0,-0x4(%ebp)
08608066 +0x52:  jns    0860806f <+0x5b>
08608068 +0x54:  mov    $0x0,%eax
0860806d +0x59:  jmp    086080a2 <+0x8e>
0860806f +0x5b:  mov    -0x4(%ebp),%eax
08608072 +0x5e:  add    %eax,%eax
08608074 +0x60:  add    0xc(%ebp),%eax
08608077 +0x63:  movzbl (%eax),%eax
0860807a +0x66:  movzbl %al,%eax
0860807d +0x69:  cmp    0x10(%ebp),%eax
08608080 +0x6c:  jne    0860809d <+0x89>
08608082 +0x6e:  mov    -0x4(%ebp),%eax
08608085 +0x71:  add    %eax,%eax
08608087 +0x73:  add    0xc(%ebp),%eax
0860808a +0x76:  movzbl 0x1(%eax),%eax
0860808e +0x7a:  movsbl %al,%eax
08608091 +0x7d:  cmp    0x14(%ebp),%eax
08608094 +0x80:  jl     0860809d <+0x89>
08608096 +0x82:  mov    $0x1,%eax
0860809b +0x87:  jmp    086080a2 <+0x8e>
0860809d +0x89:  mov    $0x0,%eax
086080a2 +0x8e:  leave
086080a3 +0x8f:  ret
```

## 反编译 C

```c
// SkillSlot::check_skill_mastered @ 0x8608014

/* SkillSlot::check_skill_mastered(_Mastered_skill*, int, int, int) const */

undefined4 __thiscall
SkillSlot::check_skill_mastered
          (SkillSlot *this,_Mastered_skill *param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)this == 0) {
    uVar1 = 0;
  }
  else if (param_1 == (_Mastered_skill *)0x0) {
    uVar1 = 0;
  }
  else {
    iVar2 = get_skillslot_no(this,param_1,param_2,param_4,true);
    if (iVar2 < 0) {
      uVar1 = 0;
    }
    else if (((uint)(byte)param_1[iVar2 * 2] == param_2) &&
            (param_3 <= (char)param_1[iVar2 * 2 + 1])) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}
```

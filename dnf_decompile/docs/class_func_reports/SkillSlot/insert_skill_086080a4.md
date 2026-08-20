# insert_skill

`_ZN9SkillSlot12insert_skillEP15_Mastered_skilliibi`

`SkillSlot::insert_skill(_Mastered_skill*, int, int, bool, int)`

| 类 | 地址 |
|---|---|
| `SkillSlot` | `0x086080a4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086080a4  _ZN9SkillSlot12insert_skillEP15_Mastered_skilliibi
#           SkillSlot::insert_skill(_Mastered_skill*, int, int, bool, int)
# range [0x086080a4, 0x0860811f]
086080a4 +0x00:  push   %ebp
086080a5 +0x01:  mov    %esp,%ebp
086080a7 +0x03:  sub    $0x28,%esp
086080aa +0x06:  mov    0x18(%ebp),%eax
086080ad +0x09:  mov    %al,-0x14(%ebp)
086080b0 +0x0c:  mov    0x8(%ebp),%eax
086080b3 +0x0f:  mov    (%eax),%eax
086080b5 +0x11:  test   %eax,%eax
086080b7 +0x13:  jne    086080c0 <+0x1c>
086080b9 +0x15:  mov    $0xffffffff,%eax
086080be +0x1a:  jmp    0860811d <+0x79>
086080c0 +0x1c:  cmpl   $0x0,0xc(%ebp)
086080c4 +0x20:  jne    086080cd <+0x29>
086080c6 +0x22:  mov    $0xffffffff,%eax
086080cb +0x27:  jmp    0860811d <+0x79>
086080cd +0x29:  movzbl -0x14(%ebp),%eax
086080d1 +0x2d:  mov    %eax,0x10(%esp)
086080d5 +0x31:  mov    0x14(%ebp),%eax
086080d8 +0x34:  mov    %eax,0xc(%esp)
086080dc +0x38:  movl   $0x0,0x8(%esp)
086080e4 +0x40:  mov    0xc(%ebp),%eax
086080e7 +0x43:  mov    %eax,0x4(%esp)
086080eb +0x47:  mov    0x8(%ebp),%eax
086080ee +0x4a:  mov    %eax,(%esp)
086080f1 +0x4d:  call   08607dba <_ZNK9SkillSlot16get_skillslot_noEP15_Mastered_skilliib>  ; SkillSlot::get_skillslot_no(_Mastered_skill*, int, int, bool) const
086080f6 +0x52:  mov    %eax,-0x4(%ebp)
086080f9 +0x55:  cmpl   $0xffffffff,-0x4(%ebp)
086080fd +0x59:  je     0860811a <+0x76>
086080ff +0x5b:  mov    -0x4(%ebp),%eax
08608102 +0x5e:  add    %eax,%eax
08608104 +0x60:  add    0xc(%ebp),%eax
08608107 +0x63:  mov    0x10(%ebp),%edx
0860810a +0x66:  mov    %dl,(%eax)
0860810c +0x68:  mov    -0x4(%ebp),%eax
0860810f +0x6b:  add    %eax,%eax
08608111 +0x6d:  add    0xc(%ebp),%eax
08608114 +0x70:  mov    0x1c(%ebp),%edx
08608117 +0x73:  mov    %dl,0x1(%eax)
0860811a +0x76:  mov    -0x4(%ebp),%eax
0860811d +0x79:  leave
0860811e +0x7a:  ret
0860811f +0x7b:  nop
```

## 反编译 C

```c
// SkillSlot::insert_skill @ 0x86080a4

/* SkillSlot::insert_skill(_Mastered_skill*, int, int, bool, int) */

int __thiscall
SkillSlot::insert_skill
          (SkillSlot *this,_Mastered_skill *param_1,int param_2,int param_3,bool param_4,int param_5
          )

{
  int iVar1;
  
  if (*(int *)this == 0) {
    iVar1 = -1;
  }
  else if (param_1 == (_Mastered_skill *)0x0) {
    iVar1 = -1;
  }
  else {
    iVar1 = get_skillslot_no(this,param_1,0,param_3,param_4);
    if (iVar1 != -1) {
      param_1[iVar1 * 2] = SUB41(param_2,0);
      param_1[iVar1 * 2 + 1] = SUB41(param_5,0);
    }
  }
  return iVar1;
}
```

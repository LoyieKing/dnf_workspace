# _TryEnchant

`_ZN10expert_job10CEnchanter11_TryEnchantEP5CUserP11stItemPos_t21ENUM_TRY_ENCHANT_TYPE`

`expert_job::CEnchanter::_TryEnchant(CUser*, stItemPos_t*, ENUM_TRY_ENCHANT_TYPE)`

| 类 | 地址 |
|---|---|
| `expert_job::CEnchanter` | `0x0849dcc4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0849dcc4  _ZN10expert_job10CEnchanter11_TryEnchantEP5CUserP11stItemPos_t21ENUM_TRY_ENCHANT_TYPE
#           expert_job::CEnchanter::_TryEnchant(CUser*, stItemPos_t*, ENUM_TRY_ENCHANT_TYPE)
# range [0x0849dcc4, 0x0849dd93]
0849dcc4 +0x00:  push   %ebp
0849dcc5 +0x01:  mov    %esp,%ebp
0849dcc7 +0x03:  sub    $0x28,%esp
0849dcca +0x06:  movl   $0x0,-0xc(%ebp)
0849dcd1 +0x0d:  mov    0x14(%ebp),%eax
0849dcd4 +0x10:  cmp    $0x1,%eax
0849dcd7 +0x13:  je     0849dd29 <+0x65>
0849dcd9 +0x15:  cmp    $0x2,%eax
0849dcdc +0x18:  je     0849dd6a <+0xa6>
0849dce2 +0x1e:  test   %eax,%eax
0849dce4 +0x20:  jne    0849dd8e <+0xca>
0849dcea +0x26:  mov    0x10(%ebp),%eax
0849dced +0x29:  mov    %eax,0x8(%esp)
0849dcf1 +0x2d:  mov    0xc(%ebp),%eax
0849dcf4 +0x30:  mov    %eax,0x4(%esp)
0849dcf8 +0x34:  mov    0x8(%ebp),%eax
0849dcfb +0x37:  mov    %eax,(%esp)
0849dcfe +0x3a:  call   0849d7b6 <_ZN10expert_job10CEnchanter15_TryEnchantMineEP5CUserP11stItemPos_t>  ; expert_job::CEnchanter::_TryEnchantMine(CUser*, stItemPos_t*)
0849dd03 +0x3f:  mov    %eax,-0xc(%ebp)
0849dd06 +0x42:  mov    0x8(%ebp),%eax
0849dd09 +0x45:  mov    (%eax),%eax
0849dd0b +0x47:  add    $0x4,%eax
0849dd0e +0x4a:  mov    (%eax),%edx
0849dd10 +0x4c:  movl   $0x0,0x8(%esp)
0849dd18 +0x54:  mov    0xc(%ebp),%eax
0849dd1b +0x57:  mov    %eax,0x4(%esp)
0849dd1f +0x5b:  mov    0x8(%ebp),%eax
0849dd22 +0x5e:  mov    %eax,(%esp)
0849dd25 +0x61:  call   *%edx
0849dd27 +0x63:  jmp    0849dd8e <+0xca>
0849dd29 +0x65:  mov    0x10(%ebp),%eax
0849dd2c +0x68:  mov    %eax,0x8(%esp)
0849dd30 +0x6c:  mov    0xc(%ebp),%eax
0849dd33 +0x6f:  mov    %eax,0x4(%esp)
0849dd37 +0x73:  mov    0x8(%ebp),%eax
0849dd3a +0x76:  mov    %eax,(%esp)
0849dd3d +0x79:  call   0849da3e <_ZN10expert_job10CEnchanter16_TryEnchantOtherEP5CUserP11stItemPos_t>  ; expert_job::CEnchanter::_TryEnchantOther(CUser*, stItemPos_t*)
0849dd42 +0x7e:  mov    %eax,-0xc(%ebp)
0849dd45 +0x81:  cmpl   $0x0,-0xc(%ebp)
0849dd49 +0x85:  setne  %al
0849dd4c +0x88:  test   %al,%al
0849dd4e +0x8a:  je     0849dd8d <+0xc9>
0849dd50 +0x8c:  mov    0x8(%ebp),%eax
0849dd53 +0x8f:  add    $0x18,%eax
0849dd56 +0x92:  mov    %eax,(%esp)
0849dd59 +0x95:  call   0849f252 <_GLOBAL__I__ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri+0x83>  ; global constructors keyed to expert_job::CExpertJob::IncreaseExpertJobExp(CUser*, int)+0x83
0849dd5e +0x9a:  mov    0x8(%ebp),%eax
0849dd61 +0x9d:  movl   $0x0,0x40(%eax)
0849dd68 +0xa4:  jmp    0849dd8e <+0xca>
0849dd6a +0xa6:  mov    0x8(%ebp),%eax
0849dd6d +0xa9:  mov    (%eax),%eax
0849dd6f +0xab:  add    $0x4,%eax
0849dd72 +0xae:  mov    (%eax),%edx
0849dd74 +0xb0:  movl   $0x2,0x8(%esp)
0849dd7c +0xb8:  mov    0xc(%ebp),%eax
0849dd7f +0xbb:  mov    %eax,0x4(%esp)
0849dd83 +0xbf:  mov    0x8(%ebp),%eax
0849dd86 +0xc2:  mov    %eax,(%esp)
0849dd89 +0xc5:  call   *%edx
0849dd8b +0xc7:  jmp    0849dd8e <+0xca>
0849dd8d +0xc9:  nop
0849dd8e +0xca:  mov    -0xc(%ebp),%eax
0849dd91 +0xcd:  leave
0849dd92 +0xce:  ret
0849dd93 +0xcf:  nop
```

## 反编译 C

```c
// expert_job::CEnchanter::_TryEnchant @ 0x849dcc4

/* expert_job::CEnchanter::_TryEnchant(CUser*, stItemPos_t*, ENUM_TRY_ENCHANT_TYPE) */

int __thiscall
expert_job::CEnchanter::_TryEnchant
          (CEnchanter *this,CUser *param_1,stItemPos_t *param_2,int param_4)

{
  int local_10;
  
  local_10 = 0;
  if (param_4 == 1) {
    local_10 = _TryEnchantOther((CUser *)this,(stItemPos_t *)param_1);
    if (local_10 != 0) {
      ExpertJobMaterial::Reset((ExpertJobMaterial *)(this + 0x18));
      *(undefined4 *)(this + 0x40) = 0;
    }
  }
  else if (param_4 == 2) {
    (**(code **)(*(int *)this + 4))(this,param_1,2);
  }
  else if (param_4 == 0) {
    local_10 = _TryEnchantMine(this,param_1,param_2);
    (**(code **)(*(int *)this + 4))(this,param_1,0);
  }
  return local_10;
}
```

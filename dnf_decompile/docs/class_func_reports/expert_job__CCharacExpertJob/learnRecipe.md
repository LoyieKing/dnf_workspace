# learnRecipe

`_ZN10expert_job16CCharacExpertJob11learnRecipeEmP17STExpertJobScripti`

`expert_job::CCharacExpertJob::learnRecipe(unsigned long, STExpertJobScript*, int)`

| 类 | 地址 |
|---|---|
| `expert_job::CCharacExpertJob` | `0x0832b3c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0832b3c0  _ZN10expert_job16CCharacExpertJob11learnRecipeEmP17STExpertJobScripti
#           expert_job::CCharacExpertJob::learnRecipe(unsigned long, STExpertJobScript*, int)
# range [0x0832b3c0, 0x0832b453]
0832b3c0 +0x00:  push   %ebp
0832b3c1 +0x01:  mov    %esp,%ebp
0832b3c3 +0x03:  sub    $0x28,%esp
0832b3c6 +0x06:  movl   $0xffffffff,-0x10(%ebp)
0832b3cd +0x0d:  mov    0xc(%ebp),%eax
0832b3d0 +0x10:  mov    %eax,0x4(%esp)
0832b3d4 +0x14:  mov    0x10(%ebp),%eax
0832b3d7 +0x17:  mov    %eax,(%esp)
0832b3da +0x1a:  call   0832b726 <_GLOBAL__I__ZN10expert_job16CCharacExpertJob6_resetEv+0x8c>  ; global constructors keyed to expert_job::CCharacExpertJob::_reset()+0x8c
0832b3df +0x1f:  mov    %eax,-0x10(%ebp)
0832b3e2 +0x22:  mov    -0x10(%ebp),%eax
0832b3e5 +0x25:  shr    $0x1f,%eax
0832b3e8 +0x28:  test   %al,%al
0832b3ea +0x2a:  je     0832b3f3 <+0x33>
0832b3ec +0x2c:  mov    $0x0,%eax
0832b3f1 +0x31:  jmp    0832b452 <+0x92>
0832b3f3 +0x33:  mov    -0x10(%ebp),%eax
0832b3f6 +0x36:  mov    %eax,0x4(%esp)
0832b3fa +0x3a:  mov    0x10(%ebp),%eax
0832b3fd +0x3d:  mov    %eax,(%esp)
0832b400 +0x40:  call   0832b6b6 <_GLOBAL__I__ZN10expert_job16CCharacExpertJob6_resetEv+0x1c>  ; global constructors keyed to expert_job::CCharacExpertJob::_reset()+0x1c
0832b405 +0x45:  mov    %eax,-0xc(%ebp)
0832b408 +0x48:  cmpl   $0x0,-0xc(%ebp)
0832b40c +0x4c:  jne    0832b415 <+0x55>
0832b40e +0x4e:  mov    $0x0,%eax
0832b413 +0x53:  jmp    0832b452 <+0x92>
0832b415 +0x55:  mov    -0xc(%ebp),%eax
0832b418 +0x58:  movzwl 0x8(%eax),%eax
0832b41c +0x5c:  movzwl %ax,%eax
0832b41f +0x5f:  mov    0x14(%ebp),%edx
0832b422 +0x62:  add    $0x2,%edx
0832b425 +0x65:  cmp    %edx,%eax
0832b427 +0x67:  jle    0832b430 <+0x70>
0832b429 +0x69:  mov    $0x0,%eax
0832b42e +0x6e:  jmp    0832b452 <+0x92>
0832b430 +0x70:  mov    -0x10(%ebp),%eax
0832b433 +0x73:  mov    %eax,0x4(%esp)
0832b437 +0x77:  mov    0x8(%ebp),%eax
0832b43a +0x7a:  mov    %eax,(%esp)
0832b43d +0x7d:  call   0832b264 <_ZN10expert_job16CCharacExpertJob10set_recipeEi>  ; expert_job::CCharacExpertJob::set_recipe(int)
0832b442 +0x82:  mov    0x8(%ebp),%eax
0832b445 +0x85:  mov    %eax,(%esp)
0832b448 +0x88:  call   080c8bc4 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x1c>  ; global constructors keyed to BestClearTime::BestClearTime()+0x1c
0832b44d +0x8d:  mov    $0x1,%eax
0832b452 +0x92:  leave
0832b453 +0x93:  ret
```

## 反编译 C

```c
// expert_job::CCharacExpertJob::learnRecipe @ 0x832b3c0

/* expert_job::CCharacExpertJob::learnRecipe(unsigned long, STExpertJobScript*, int) */

undefined4 __thiscall
expert_job::CCharacExpertJob::learnRecipe
          (CCharacExpertJob *this,ulong param_1,STExpertJobScript *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = STExpertJobScript::GetRecipeInfoIndex((ulong)param_2);
  if (iVar1 < 0) {
    uVar2 = 0;
  }
  else {
    iVar3 = STExpertJobScript::GetRecipeInfo((int)param_2);
    if (iVar3 == 0) {
      uVar2 = 0;
    }
    else if (param_3 + 2 < (int)(uint)*(ushort *)(iVar3 + 8)) {
      uVar2 = 0;
    }
    else {
      set_recipe(this,iVar1);
      charac_expand::CData::alter((CData *)this);
      uVar2 = 1;
    }
  }
  return uVar2;
}
```

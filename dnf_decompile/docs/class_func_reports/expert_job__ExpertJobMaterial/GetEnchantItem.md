# GetEnchantItem

`_ZN10expert_job17ExpertJobMaterial14GetEnchantItemEv`

`expert_job::ExpertJobMaterial::GetEnchantItem()`

| 类 | 地址 |
|---|---|
| `expert_job::ExpertJobMaterial` | `0x0849c6ca` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0849c6ca  _ZN10expert_job17ExpertJobMaterial14GetEnchantItemEv
#           expert_job::ExpertJobMaterial::GetEnchantItem()
# range [0x0849c6ca, 0x0849c71d]
0849c6ca +0x00:  push   %ebp
0849c6cb +0x01:  mov    %esp,%ebp
0849c6cd +0x03:  sub    $0x18,%esp
0849c6d0 +0x06:  mov    0x8(%ebp),%eax
0849c6d3 +0x09:  mov    %eax,(%esp)
0849c6d6 +0x0c:  call   0849f286 <_GLOBAL__I__ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri+0xb7>  ; global constructors keyed to expert_job::CExpertJob::IncreaseExpertJobExp(CUser*, int)+0xb7
0849c6db +0x11:  test   %al,%al
0849c6dd +0x13:  je     0849c6e6 <+0x1c>
0849c6df +0x15:  mov    $0x0,%eax
0849c6e4 +0x1a:  jmp    0849c71b <+0x51>
0849c6e6 +0x1c:  mov    0x8(%ebp),%eax
0849c6e9 +0x1f:  mov    %eax,(%esp)
0849c6ec +0x22:  call   0849c114 <_ZN10expert_job17ExpertJobMaterial8IsRecipeEv>  ; expert_job::ExpertJobMaterial::IsRecipe()
0849c6f1 +0x27:  test   %eax,%eax
0849c6f3 +0x29:  setne  %al
0849c6f6 +0x2c:  test   %al,%al
0849c6f8 +0x2e:  je     0849c701 <+0x37>
0849c6fa +0x30:  mov    $0x0,%eax
0849c6ff +0x35:  jmp    0849c71b <+0x51>
0849c701 +0x37:  mov    0x8(%ebp),%eax
0849c704 +0x3a:  mov    0x4(%eax),%eax
0849c707 +0x3d:  add    $0x174,%eax
0849c70c +0x42:  mov    %eax,0x4(%esp)
0849c710 +0x46:  mov    0x8(%ebp),%eax
0849c713 +0x49:  mov    %eax,(%esp)
0849c716 +0x4c:  call   0849c612 <_ZN10expert_job17ExpertJobMaterial15FindMonsterCardERKSt6vectorISt4pairIiiESaIS3_EE>  ; expert_job::ExpertJobMaterial::FindMonsterCard(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&)
0849c71b +0x51:  leave
0849c71c +0x52:  ret
0849c71d +0x53:  nop
```

## 反编译 C

```c
// expert_job::ExpertJobMaterial::GetEnchantItem @ 0x849c6ca

/* expert_job::ExpertJobMaterial::GetEnchantItem() */

undefined4 __thiscall expert_job::ExpertJobMaterial::GetEnchantItem(ExpertJobMaterial *this)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  cVar1 = Empty(this);
  if (cVar1 == '\0') {
    iVar3 = IsRecipe(this);
    if (iVar3 == 0) {
      uVar2 = FindMonsterCard((vector *)this);
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```

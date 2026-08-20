# IsRecipe

`_ZN10expert_job17ExpertJobMaterial8IsRecipeEv`

`expert_job::ExpertJobMaterial::IsRecipe()`

| 类 | 地址 |
|---|---|
| `expert_job::ExpertJobMaterial` | `0x0849c114` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0849c114  _ZN10expert_job17ExpertJobMaterial8IsRecipeEv
#           expert_job::ExpertJobMaterial::IsRecipe()
# range [0x0849c114, 0x0849c165]
0849c114 +0x00:  push   %ebp
0849c115 +0x01:  mov    %esp,%ebp
0849c117 +0x03:  sub    $0x18,%esp
0849c11a +0x06:  mov    0x8(%ebp),%eax
0849c11d +0x09:  mov    0x4(%eax),%eax
0849c120 +0x0c:  mov    %eax,(%esp)
0849c123 +0x0f:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
0849c128 +0x14:  xor    $0x1,%eax
0849c12b +0x17:  test   %al,%al
0849c12d +0x19:  je     0849c136 <+0x22>
0849c12f +0x1b:  mov    $0x17,%eax
0849c134 +0x20:  jmp    0849c164 <+0x50>
0849c136 +0x22:  mov    0x8(%ebp),%eax
0849c139 +0x25:  mov    0x4(%eax),%eax
0849c13c +0x28:  mov    (%eax),%eax
0849c13e +0x2a:  add    $0xc,%eax
0849c141 +0x2d:  mov    (%eax),%edx
0849c143 +0x2f:  mov    0x8(%ebp),%eax
0849c146 +0x32:  mov    0x4(%eax),%eax
0849c149 +0x35:  mov    %eax,(%esp)
0849c14c +0x38:  call   *%edx
0849c14e +0x3a:  cmp    $0x3,%eax
0849c151 +0x3d:  setne  %al
0849c154 +0x40:  test   %al,%al
0849c156 +0x42:  je     0849c15f <+0x4b>
0849c158 +0x44:  mov    $0x17,%eax
0849c15d +0x49:  jmp    0849c164 <+0x50>
0849c15f +0x4b:  mov    $0x0,%eax
0849c164 +0x50:  leave
0849c165 +0x51:  ret
```

## 反编译 C

```c
// expert_job::ExpertJobMaterial::IsRecipe @ 0x849c114

/* expert_job::ExpertJobMaterial::IsRecipe() */

undefined4 __thiscall expert_job::ExpertJobMaterial::IsRecipe(ExpertJobMaterial *this)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  cVar1 = CItem::is_stackable(*(CItem **)(this + 4));
  if (cVar1 == '\x01') {
    iVar3 = (**(code **)(**(int **)(this + 4) + 0xc))(*(undefined4 *)(this + 4));
    if (iVar3 == 3) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0x17;
    }
  }
  else {
    uVar2 = 0x17;
  }
  return uVar2;
}
```

# yyensure_buffer_stack

`_ZN23__dnf_script__FlexLexer21yyensure_buffer_stackEv`

`__dnf_script__FlexLexer::yyensure_buffer_stack()`

| 类 | 地址 |
|---|---|
| `__dnf_script__FlexLexer` | `0x08ad2350` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad2350  _ZN23__dnf_script__FlexLexer21yyensure_buffer_stackEv
#           __dnf_script__FlexLexer::yyensure_buffer_stack()
# range [0x08ad2350, 0x08ad241a]
08ad2350 +0x00:  push   %ebp
08ad2351 +0x01:  mov    %esp,%ebp
08ad2353 +0x03:  sub    $0x18,%esp
08ad2356 +0x06:  mov    %ebx,-0x8(%ebp)
08ad2359 +0x09:  mov    0x8(%ebp),%ebx
08ad235c +0x0c:  mov    %esi,-0x4(%ebp)
08ad235f +0x0f:  mov    0x48(%ebx),%eax
08ad2362 +0x12:  test   %eax,%eax
08ad2364 +0x14:  je     08ad23c0 <+0x70>
08ad2366 +0x16:  mov    0x44(%ebx),%esi
08ad2369 +0x19:  lea    -0x1(%esi),%edx
08ad236c +0x1c:  cmp    %edx,0x40(%ebx)
08ad236f +0x1f:  jae    08ad2380 <+0x30>
08ad2371 +0x21:  mov    -0x8(%ebp),%ebx
08ad2374 +0x24:  mov    -0x4(%ebp),%esi
08ad2377 +0x27:  mov    %ebp,%esp
08ad2379 +0x29:  pop    %ebp
08ad237a +0x2a:  ret
08ad237b +0x2b:  nop
08ad237c +0x2c:  lea    0x0(%esi,%eiz,1),%esi
08ad2380 +0x30:  add    $0x8,%esi
08ad2383 +0x33:  lea    0x0(,%esi,4),%edx
08ad238a +0x3a:  mov    %edx,0x4(%esp)
08ad238e +0x3e:  mov    %eax,(%esp)
08ad2391 +0x41:  call   0807e220 <_init+0xb18>
08ad2396 +0x46:  test   %eax,%eax
08ad2398 +0x48:  mov    %eax,0x48(%ebx)
08ad239b +0x4b:  je     08ad23f0 <+0xa0>
08ad239d +0x4d:  mov    0x44(%ebx),%edx
08ad23a0 +0x50:  lea    (%eax,%edx,4),%edx
08ad23a3 +0x53:  xor    %eax,%eax
08ad23a5 +0x55:  movl   $0x0,(%edx,%eax,1)
08ad23ac +0x5c:  add    $0x4,%eax
08ad23af +0x5f:  cmp    $0x20,%eax
08ad23b2 +0x62:  jb     08ad23a5 <+0x55>
08ad23b4 +0x64:  mov    %esi,0x44(%ebx)
08ad23b7 +0x67:  jmp    08ad2371 <+0x21>
08ad23b9 +0x69:  lea    0x0(%esi,%eiz,1),%esi
08ad23c0 +0x70:  movl   $0x4,(%esp)
08ad23c7 +0x77:  call   0807df80 <_init+0x878>
08ad23cc +0x7c:  test   %eax,%eax
08ad23ce +0x7e:  mov    %eax,0x48(%ebx)
08ad23d1 +0x81:  je     08ad2405 <+0xb5>
08ad23d3 +0x83:  movl   $0x0,(%eax)
08ad23d9 +0x89:  movl   $0x1,0x44(%ebx)
08ad23e0 +0x90:  movl   $0x0,0x40(%ebx)
08ad23e7 +0x97:  jmp    08ad2371 <+0x21>
08ad23e9 +0x99:  lea    0x0(%esi,%eiz,1),%esi
08ad23f0 +0xa0:  mov    (%ebx),%eax
08ad23f2 +0xa2:  movl   $"out of dynamic memory in yyensure_buffer_stack()",0x4(%esp)
08ad23fa +0xaa:  mov    %ebx,(%esp)
08ad23fd +0xad:  call   *0x2c(%eax)
08ad2400 +0xb0:  mov    0x48(%ebx),%eax
08ad2403 +0xb3:  jmp    08ad239d <+0x4d>
08ad2405 +0xb5:  mov    (%ebx),%eax
08ad2407 +0xb7:  movl   $"out of dynamic memory in yyensure_buffer_stack()",0x4(%esp)
08ad240f +0xbf:  mov    %ebx,(%esp)
08ad2412 +0xc2:  call   *0x2c(%eax)
08ad2415 +0xc5:  mov    0x48(%ebx),%eax
08ad2418 +0xc8:  jmp    08ad23d3 <+0x83>
08ad241a +0xca:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// __dnf_script__FlexLexer::yyensure_buffer_stack @ 0x8ad2350

/* DWARF original prototype: void yyensure_buffer_stack(__dnf_script__FlexLexer * this) */

void __thiscall __dnf_script__FlexLexer::yyensure_buffer_stack(__dnf_script__FlexLexer *this)

{
  size_t sVar1;
  yy_buffer_state **ppyVar2;
  uint uVar3;
  size_t sVar4;
  
                    /* Unresolved local var: int num_to_alloc@[???] */
  if (this->yy_buffer_stack == (yy_buffer_state **)0x0) {
    ppyVar2 = malloc(4);
    this->yy_buffer_stack = ppyVar2;
    if (ppyVar2 == (yy_buffer_state **)0x0) {
      (*(this->super_FlexLexer)._vptr_FlexLexer[0xb])
                (this,"out of dynamic memory in yyensure_buffer_stack()");
      ppyVar2 = this->yy_buffer_stack;
    }
    *ppyVar2 = (yy_buffer_state *)0x0;
    this->yy_buffer_stack_max = 1;
    this->yy_buffer_stack_top = 0;
  }
  else if (this->yy_buffer_stack_max - 1 <= this->yy_buffer_stack_top) {
                    /* Unresolved local var: int grow_size@[???] */
    sVar4 = this->yy_buffer_stack_max + 8;
    ppyVar2 = realloc(this->yy_buffer_stack,sVar4 * 4);
    this->yy_buffer_stack = ppyVar2;
    if (ppyVar2 == (yy_buffer_state **)0x0) {
      (*(this->super_FlexLexer)._vptr_FlexLexer[0xb])
                (this,"out of dynamic memory in yyensure_buffer_stack()");
      ppyVar2 = this->yy_buffer_stack;
    }
    sVar1 = this->yy_buffer_stack_max;
    uVar3 = 0;
    do {
      *(undefined4 *)((int)ppyVar2 + uVar3 + sVar1 * 4) = 0;
      uVar3 = uVar3 + 4;
    } while (uVar3 < 0x20);
    this->yy_buffer_stack_max = sVar4;
  }
  return;
}
```

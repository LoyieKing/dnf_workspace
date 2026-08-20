# yy_push_state

`_ZN23__dnf_script__FlexLexer13yy_push_stateEi`

`__dnf_script__FlexLexer::yy_push_state(int)`

| 类 | 地址 |
|---|---|
| `__dnf_script__FlexLexer` | `0x08ad22b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad22b0  _ZN23__dnf_script__FlexLexer13yy_push_stateEi
#           __dnf_script__FlexLexer::yy_push_state(int)
# range [0x08ad22b0, 0x08ad2349]
08ad22b0 +0x00:  push   %ebp
08ad22b1 +0x01:  mov    %esp,%ebp
08ad22b3 +0x03:  push   %esi
08ad22b4 +0x04:  push   %ebx
08ad22b5 +0x05:  sub    $0x10,%esp
08ad22b8 +0x08:  mov    0x8(%ebp),%ebx
08ad22bb +0x0b:  mov    0x14(%ebx),%edx
08ad22be +0x0e:  mov    0x18(%ebx),%eax
08ad22c1 +0x11:  cmp    %eax,%edx
08ad22c3 +0x13:  jl     08ad2318 <+0x68>
08ad22c5 +0x15:  mov    0x1c(%ebx),%edx
08ad22c8 +0x18:  add    $0x19,%eax
08ad22cb +0x1b:  mov    %eax,0x18(%ebx)
08ad22ce +0x1e:  shl    $0x2,%eax
08ad22d1 +0x21:  test   %edx,%edx
08ad22d3 +0x23:  je     08ad2320 <+0x70>
08ad22d5 +0x25:  mov    %eax,0x4(%esp)
08ad22d9 +0x29:  mov    %edx,(%esp)
08ad22dc +0x2c:  call   0807e220 <_init+0xb18>
08ad22e1 +0x31:  mov    %eax,0x1c(%ebx)
08ad22e4 +0x34:  test   %eax,%eax
08ad22e6 +0x36:  je     08ad2330 <+0x80>
08ad22e8 +0x38:  mov    0x14(%ebx),%edx
08ad22eb +0x3b:  mov    0x38(%ebx),%ecx
08ad22ee +0x3e:  sub    $0x1,%ecx
08ad22f1 +0x41:  mov    %ecx,%esi
08ad22f3 +0x43:  shr    $0x1f,%esi
08ad22f6 +0x46:  lea    (%esi,%ecx,1),%ecx
08ad22f9 +0x49:  sar    %ecx
08ad22fb +0x4b:  mov    %ecx,(%eax,%edx,4)
08ad22fe +0x4e:  mov    0xc(%ebp),%eax
08ad2301 +0x51:  add    $0x1,%edx
08ad2304 +0x54:  mov    %edx,0x14(%ebx)
08ad2307 +0x57:  lea    0x1(%eax,%eax,1),%eax
08ad230b +0x5b:  mov    %eax,0x38(%ebx)
08ad230e +0x5e:  add    $0x10,%esp
08ad2311 +0x61:  pop    %ebx
08ad2312 +0x62:  pop    %esi
08ad2313 +0x63:  pop    %ebp
08ad2314 +0x64:  ret
08ad2315 +0x65:  lea    0x0(%esi),%esi
08ad2318 +0x68:  mov    0x1c(%ebx),%eax
08ad231b +0x6b:  jmp    08ad22eb <+0x3b>
08ad231d +0x6d:  lea    0x0(%esi),%esi
08ad2320 +0x70:  mov    %eax,(%esp)
08ad2323 +0x73:  call   0807df80 <_init+0x878>
08ad2328 +0x78:  mov    %eax,0x1c(%ebx)
08ad232b +0x7b:  jmp    08ad22e4 <+0x34>
08ad232d +0x7d:  lea    0x0(%esi),%esi
08ad2330 +0x80:  mov    (%ebx),%eax
08ad2332 +0x82:  movl   $"out of memory expanding start-condition stack",0x4(%esp)
08ad233a +0x8a:  mov    %ebx,(%esp)
08ad233d +0x8d:  call   *0x2c(%eax)
08ad2340 +0x90:  mov    0x1c(%ebx),%eax
08ad2343 +0x93:  jmp    08ad22e8 <+0x38>
08ad2345 +0x95:  nop
08ad2346 +0x96:  lea    0x0(%esi),%esi
08ad2349 +0x99:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// __dnf_script__FlexLexer::yy_push_state @ 0x8ad22b0

/* DWARF original prototype: void yy_push_state(__dnf_script__FlexLexer * this, int new_state) */

void __thiscall __dnf_script__FlexLexer::yy_push_state(__dnf_script__FlexLexer *this,int new_state)

{
  int iVar1;
  size_t __size;
  int *piVar2;
  
  iVar1 = this->yy_start_stack_ptr;
  if (iVar1 < this->yy_start_stack_depth) {
    piVar2 = this->yy_start_stack;
  }
  else {
                    /* Unresolved local var: yy_size_t new_size@[???] */
    iVar1 = this->yy_start_stack_depth + 0x19;
    this->yy_start_stack_depth = iVar1;
    __size = iVar1 * 4;
    if (this->yy_start_stack == (int *)0x0) {
      piVar2 = malloc(__size);
      this->yy_start_stack = piVar2;
    }
    else {
      piVar2 = realloc(this->yy_start_stack,__size);
      this->yy_start_stack = piVar2;
    }
    if (piVar2 == (int *)0x0) {
      (*(this->super_FlexLexer)._vptr_FlexLexer[0xb])
                (this,"out of memory expanding start-condition stack");
      piVar2 = this->yy_start_stack;
    }
    iVar1 = this->yy_start_stack_ptr;
  }
  piVar2[iVar1] = (this->yy_start + -1) / 2;
  this->yy_start_stack_ptr = iVar1 + 1;
  this->yy_start = new_state * 2 + 1;
  return;
}
```

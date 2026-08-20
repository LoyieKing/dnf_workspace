# yypush_buffer_state

`_ZN23__dnf_script__FlexLexer19yypush_buffer_stateEP15yy_buffer_state`

`__dnf_script__FlexLexer::yypush_buffer_state(yy_buffer_state*)`

| 类 | 地址 |
|---|---|
| `__dnf_script__FlexLexer` | `0x08ad2420` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad2420  _ZN23__dnf_script__FlexLexer19yypush_buffer_stateEP15yy_buffer_state
#           __dnf_script__FlexLexer::yypush_buffer_state(yy_buffer_state*)
# range [0x08ad2420, 0x08ad24fa]
08ad2420 +0x00:  push   %ebp
08ad2421 +0x01:  mov    %esp,%ebp
08ad2423 +0x03:  sub    $0x28,%esp
08ad2426 +0x06:  mov    %esi,-0x8(%ebp)
08ad2429 +0x09:  mov    0xc(%ebp),%esi
08ad242c +0x0c:  mov    %ebx,-0xc(%ebp)
08ad242f +0x0f:  mov    0x8(%ebp),%ebx
08ad2432 +0x12:  mov    %edi,-0x4(%ebp)
08ad2435 +0x15:  test   %esi,%esi
08ad2437 +0x17:  je     08ad24ce <+0xae>
08ad243d +0x1d:  mov    %ebx,(%esp)
08ad2440 +0x20:  call   08ad2350 <_ZN23__dnf_script__FlexLexer21yyensure_buffer_stackEv>  ; __dnf_script__FlexLexer::yyensure_buffer_stack()
08ad2445 +0x25:  mov    0x48(%ebx),%eax
08ad2448 +0x28:  test   %eax,%eax
08ad244a +0x2a:  je     08ad24e0 <+0xc0>
08ad2450 +0x30:  mov    0x40(%ebx),%edx
08ad2453 +0x33:  mov    (%eax,%edx,4),%edi
08ad2456 +0x36:  lea    0x0(,%edx,4),%ecx
08ad245d +0x3d:  test   %edi,%edi
08ad245f +0x3f:  je     08ad24f0 <+0xd0>
08ad2465 +0x45:  movzbl 0x28(%ebx),%edx
08ad2469 +0x49:  mov    0x30(%ebx),%eax
08ad246c +0x4c:  mov    %dl,(%eax)
08ad246e +0x4e:  mov    0x40(%ebx),%edx
08ad2471 +0x51:  mov    0x48(%ebx),%eax
08ad2474 +0x54:  mov    0x30(%ebx),%ecx
08ad2477 +0x57:  mov    (%eax,%edx,4),%edx
08ad247a +0x5a:  test   %eax,%eax
08ad247c +0x5c:  mov    %ecx,0x8(%edx)
08ad247f +0x5f:  mov    0x2c(%ebx),%ecx
08ad2482 +0x62:  mov    %ecx,0x10(%edx)
08ad2485 +0x65:  je     08ad24e0 <+0xc0>
08ad2487 +0x67:  mov    0x40(%ebx),%edx
08ad248a +0x6a:  mov    (%eax,%edx,4),%edi
08ad248d +0x6d:  lea    0x0(,%edx,4),%ecx
08ad2494 +0x74:  test   %edi,%edi
08ad2496 +0x76:  je     08ad24f0 <+0xd0>
08ad2498 +0x78:  add    $0x1,%edx
08ad249b +0x7b:  mov    %eax,%edi
08ad249d +0x7d:  mov    %edx,0x40(%ebx)
08ad24a0 +0x80:  lea    0x0(,%edx,4),%ecx
08ad24a7 +0x87:  mov    %esi,(%edi,%ecx,1)
08ad24aa +0x8a:  mov    (%eax,%edx,4),%edx
08ad24ad +0x8d:  mov    0x10(%edx),%eax
08ad24b0 +0x90:  mov    %eax,0x2c(%ebx)
08ad24b3 +0x93:  mov    0x8(%edx),%eax
08ad24b6 +0x96:  mov    (%edx),%edx
08ad24b8 +0x98:  mov    %eax,0x30(%ebx)
08ad24bb +0x9b:  mov    %eax,0x4(%ebx)
08ad24be +0x9e:  mov    %edx,0x20(%ebx)
08ad24c1 +0xa1:  movzbl (%eax),%eax
08ad24c4 +0xa4:  movl   $0x1,0x3c(%ebx)
08ad24cb +0xab:  mov    %al,0x28(%ebx)
08ad24ce +0xae:  mov    -0xc(%ebp),%ebx
08ad24d1 +0xb1:  mov    -0x8(%ebp),%esi
08ad24d4 +0xb4:  mov    -0x4(%ebp),%edi
08ad24d7 +0xb7:  mov    %ebp,%esp
08ad24d9 +0xb9:  pop    %ebp
08ad24da +0xba:  ret
08ad24db +0xbb:  nop
08ad24dc +0xbc:  lea    0x0(%esi,%eiz,1),%esi
08ad24e0 +0xc0:  mov    0x40(%ebx),%edx
08ad24e3 +0xc3:  xor    %edi,%edi
08ad24e5 +0xc5:  lea    0x0(,%edx,4),%ecx
08ad24ec +0xcc:  jmp    08ad24a7 <+0x87>
08ad24ee +0xce:  xchg   %ax,%ax
08ad24f0 +0xd0:  mov    %eax,%edi
08ad24f2 +0xd2:  jmp    08ad24a7 <+0x87>
08ad24f4 +0xd4:  lea    0x0(%esi),%esi
08ad24fa +0xda:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// __dnf_script__FlexLexer::yypush_buffer_state @ 0x8ad2420

/* DWARF original prototype: void yypush_buffer_state(__dnf_script__FlexLexer * this,
   YY_BUFFER_STATE new_buffer) */

void __thiscall
__dnf_script__FlexLexer::yypush_buffer_state
          (__dnf_script__FlexLexer *this,YY_BUFFER_STATE new_buffer)

{
  char cVar1;
  yy_buffer_state *pyVar2;
  char *pcVar3;
  istream *piVar4;
  yy_buffer_state **ppyVar5;
  int iVar6;
  size_t sVar7;
  yy_buffer_state **ppyVar8;
  
  if (new_buffer == (YY_BUFFER_STATE)0x0) {
    return;
  }
  yyensure_buffer_stack(this);
  ppyVar5 = this->yy_buffer_stack;
  if (ppyVar5 == (yy_buffer_state **)0x0) {
LAB_08ad24e0:
    sVar7 = this->yy_buffer_stack_top;
    ppyVar8 = (yy_buffer_state **)0x0;
    iVar6 = sVar7 * 4;
  }
  else {
    sVar7 = this->yy_buffer_stack_top;
    if (ppyVar5[sVar7] != (yy_buffer_state *)0x0) {
      *this->yy_c_buf_p = this->yy_hold_char;
      ppyVar5 = this->yy_buffer_stack;
      pyVar2 = ppyVar5[this->yy_buffer_stack_top];
      pyVar2->yy_buf_pos = this->yy_c_buf_p;
      pyVar2->yy_n_chars = this->yy_n_chars;
      if (ppyVar5 == (yy_buffer_state **)0x0) goto LAB_08ad24e0;
      sVar7 = this->yy_buffer_stack_top;
      if (ppyVar5[sVar7] != (yy_buffer_state *)0x0) {
        sVar7 = sVar7 + 1;
        this->yy_buffer_stack_top = sVar7;
        iVar6 = sVar7 * 4;
        ppyVar8 = ppyVar5;
        goto LAB_08ad24a7;
      }
    }
    iVar6 = sVar7 * 4;
    ppyVar8 = ppyVar5;
  }
LAB_08ad24a7:
  *(YY_BUFFER_STATE *)((int)ppyVar8 + iVar6) = new_buffer;
  pyVar2 = ppyVar5[sVar7];
  this->yy_n_chars = pyVar2->yy_n_chars;
  pcVar3 = pyVar2->yy_buf_pos;
  piVar4 = pyVar2->yy_input_file;
  this->yy_c_buf_p = pcVar3;
  (this->super_FlexLexer).yytext = pcVar3;
  this->yyin = piVar4;
  cVar1 = *pcVar3;
  this->yy_did_buffer_switch_on_eof = 1;
  this->yy_hold_char = cVar1;
  return;
}
```

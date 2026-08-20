# yyinput

`_ZN23__dnf_script__FlexLexer7yyinputEv`

`__dnf_script__FlexLexer::yyinput()`

| 类 | 地址 |
|---|---|
| `__dnf_script__FlexLexer` | `0x08ad21c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad21c0  _ZN23__dnf_script__FlexLexer7yyinputEv
#           __dnf_script__FlexLexer::yyinput()
# range [0x08ad21c0, 0x08ad229f]
08ad21c0 +0x00:  push   %ebp
08ad21c1 +0x01:  mov    %esp,%ebp
08ad21c3 +0x03:  push   %esi
08ad21c4 +0x04:  push   %ebx
08ad21c5 +0x05:  sub    $0x10,%esp
08ad21c8 +0x08:  mov    0x8(%ebp),%ebx
08ad21cb +0x0b:  movzbl 0x28(%ebx),%edx
08ad21cf +0x0f:  mov    0x30(%ebx),%eax
08ad21d2 +0x12:  mov    %dl,(%eax)
08ad21d4 +0x14:  mov    0x30(%ebx),%edx
08ad21d7 +0x17:  cmpb   $0x0,(%edx)
08ad21da +0x1a:  jne    08ad221c <+0x5c>
08ad21dc +0x1c:  mov    0x40(%ebx),%ecx
08ad21df +0x1f:  mov    0x48(%ebx),%eax
08ad21e2 +0x22:  mov    (%eax,%ecx,4),%eax
08ad21e5 +0x25:  mov    0x4(%eax),%eax
08ad21e8 +0x28:  add    0x2c(%ebx),%eax
08ad21eb +0x2b:  cmp    %eax,%edx
08ad21ed +0x2d:  jb     08ad2290 <+0xd0>
08ad21f3 +0x33:  mov    %edx,%esi
08ad21f5 +0x35:  add    $0x1,%edx
08ad21f8 +0x38:  mov    %edx,0x30(%ebx)
08ad21fb +0x3b:  sub    0x4(%ebx),%esi
08ad21fe +0x3e:  mov    %ebx,(%esp)
08ad2201 +0x41:  call   08ad1ea0 <_ZN23__dnf_script__FlexLexer18yy_get_next_bufferEv>  ; __dnf_script__FlexLexer::yy_get_next_buffer()
08ad2206 +0x46:  cmp    $0x1,%eax
08ad2209 +0x49:  je     08ad2257 <+0x97>
08ad220b +0x4b:  cmp    $0x2,%eax
08ad220e +0x4e:  je     08ad2248 <+0x88>
08ad2210 +0x50:  test   %eax,%eax
08ad2212 +0x52:  jne    08ad2288 <+0xc8>
08ad2214 +0x54:  mov    0x4(%ebx),%edx
08ad2217 +0x57:  add    %esi,%edx
08ad2219 +0x59:  mov    %edx,0x30(%ebx)
08ad221c +0x5c:  movzbl (%edx),%eax
08ad221f +0x5f:  movb   $0x0,(%edx)
08ad2222 +0x62:  mov    0x30(%ebx),%edx
08ad2225 +0x65:  cmp    $0xa,%eax
08ad2228 +0x68:  lea    0x1(%edx),%ecx
08ad222b +0x6b:  mov    %ecx,0x30(%ebx)
08ad222e +0x6e:  movzbl 0x1(%edx),%edx
08ad2232 +0x72:  mov    %dl,0x28(%ebx)
08ad2235 +0x75:  jne    08ad223b <+0x7b>
08ad2237 +0x77:  addl   $0x1,0xc(%ebx)
08ad223b +0x7b:  add    $0x10,%esp
08ad223e +0x7e:  pop    %ebx
08ad223f +0x7f:  pop    %esi
08ad2240 +0x80:  pop    %ebp
08ad2241 +0x81:  ret
08ad2242 +0x82:  lea    0x0(%esi),%esi
08ad2248 +0x88:  mov    (%ebx),%eax
08ad224a +0x8a:  mov    0x20(%ebx),%edx
08ad224d +0x8d:  mov    %ebx,(%esp)
08ad2250 +0x90:  mov    %edx,0x4(%esp)
08ad2254 +0x94:  call   *0x14(%eax)
08ad2257 +0x97:  mov    (%ebx),%eax
08ad2259 +0x99:  mov    %ebx,(%esp)
08ad225c +0x9c:  call   *0x20(%eax)
08ad225f +0x9f:  test   %eax,%eax
08ad2261 +0xa1:  jne    08ad2298 <+0xd8>
08ad2263 +0xa3:  mov    0x3c(%ebx),%eax
08ad2266 +0xa6:  test   %eax,%eax
08ad2268 +0xa8:  jne    08ad21cb <+0xb>
08ad226e +0xae:  mov    (%ebx),%eax
08ad2270 +0xb0:  mov    0x20(%ebx),%edx
08ad2273 +0xb3:  mov    %ebx,(%esp)
08ad2276 +0xb6:  mov    %edx,0x4(%esp)
08ad227a +0xba:  call   *0x14(%eax)
08ad227d +0xbd:  jmp    08ad21cb <+0xb>
08ad2282 +0xc2:  lea    0x0(%esi),%esi
08ad2288 +0xc8:  mov    0x30(%ebx),%edx
08ad228b +0xcb:  jmp    08ad221c <+0x5c>
08ad228d +0xcd:  lea    0x0(%esi),%esi
08ad2290 +0xd0:  movb   $0x0,(%edx)
08ad2293 +0xd3:  mov    0x30(%ebx),%edx
08ad2296 +0xd6:  jmp    08ad221c <+0x5c>
08ad2298 +0xd8:  mov    $0xffffffff,%eax
08ad229d +0xdd:  jmp    08ad223b <+0x7b>
08ad229f +0xdf:  nop
```

## 反编译 C

```c
// __dnf_script__FlexLexer::yyinput @ 0x8ad21c0

/* DWARF original prototype: int yyinput(__dnf_script__FlexLexer * this) */

int __thiscall __dnf_script__FlexLexer::yyinput(__dnf_script__FlexLexer *this)

{
  int *piVar1;
  byte bVar2;
  char *pcVar3;
  int iVar4;
  byte *pbVar5;
  
  do {
                    /* Unresolved local var: int c@[???] */
    *this->yy_c_buf_p = this->yy_hold_char;
    pbVar5 = (byte *)this->yy_c_buf_p;
    if (*pbVar5 != 0) {
LAB_08ad221c:
      bVar2 = *pbVar5;
      *pbVar5 = 0;
      pcVar3 = this->yy_c_buf_p;
      this->yy_c_buf_p = pcVar3 + 1;
      this->yy_hold_char = pcVar3[1];
      if (bVar2 == 10) {
        piVar1 = &(this->super_FlexLexer).yylineno;
        *piVar1 = *piVar1 + 1;
      }
      return (uint)bVar2;
    }
    if (pbVar5 < this->yy_buffer_stack[this->yy_buffer_stack_top]->yy_ch_buf + this->yy_n_chars) {
      *pbVar5 = 0;
      pbVar5 = (byte *)this->yy_c_buf_p;
      goto LAB_08ad221c;
    }
                    /* Unresolved local var: int offset@[???] */
    this->yy_c_buf_p = (char *)(pbVar5 + 1);
    pcVar3 = (this->super_FlexLexer).yytext;
    iVar4 = yy_get_next_buffer(this);
    if (iVar4 != 1) {
      if (iVar4 != 2) {
        if (iVar4 == 0) {
          pbVar5 = (byte *)((this->super_FlexLexer).yytext + ((int)pbVar5 - (int)pcVar3));
          this->yy_c_buf_p = (char *)pbVar5;
        }
        else {
          pbVar5 = (byte *)this->yy_c_buf_p;
        }
        goto LAB_08ad221c;
      }
      (*(this->super_FlexLexer)._vptr_FlexLexer[5])(this,this->yyin);
    }
    iVar4 = (*(this->super_FlexLexer)._vptr_FlexLexer[8])(this);
    if (iVar4 != 0) {
      return -1;
    }
    if (this->yy_did_buffer_switch_on_eof == 0) {
      (*(this->super_FlexLexer)._vptr_FlexLexer[5])(this,this->yyin);
    }
  } while( true );
}
```

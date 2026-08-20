# LexerInput

`_ZN23__dnf_script__FlexLexer10LexerInputEPci`

`__dnf_script__FlexLexer::LexerInput(char*, int)`

| 类 | 地址 |
|---|---|
| `__dnf_script__FlexLexer` | `0x08ad2780` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad2780  _ZN23__dnf_script__FlexLexer10LexerInputEPci
#           __dnf_script__FlexLexer::LexerInput(char*, int)
# range [0x08ad2780, 0x08ad27d9]
08ad2780 +0x00:  push   %ebp
08ad2781 +0x01:  mov    %esp,%ebp
08ad2783 +0x03:  push   %ebx
08ad2784 +0x04:  sub    $0x14,%esp
08ad2787 +0x07:  mov    0x8(%ebp),%ebx
08ad278a +0x0a:  mov    0x20(%ebx),%eax
08ad278d +0x0d:  mov    (%eax),%edx
08ad278f +0x0f:  mov    -0xc(%edx),%edx
08ad2792 +0x12:  mov    0x14(%eax,%edx,1),%edx
08ad2796 +0x16:  test   $0x2,%dl
08ad2799 +0x19:  jne    08ad27a0 <+0x20>
08ad279b +0x1b:  and    $0x5,%edx
08ad279e +0x1e:  je     08ad27a8 <+0x28>
08ad27a0 +0x20:  xor    %eax,%eax
08ad27a2 +0x22:  add    $0x14,%esp
08ad27a5 +0x25:  pop    %ebx
08ad27a6 +0x26:  pop    %ebp
08ad27a7 +0x27:  ret
08ad27a8 +0x28:  mov    0x10(%ebp),%edx
08ad27ab +0x2b:  mov    %eax,(%esp)
08ad27ae +0x2e:  mov    %edx,0x8(%esp)
08ad27b2 +0x32:  mov    0xc(%ebp),%edx
08ad27b5 +0x35:  mov    %edx,0x4(%esp)
08ad27b9 +0x39:  call   086e5bf0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x5b50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x5b50
08ad27be +0x3e:  mov    0x20(%ebx),%edx
08ad27c1 +0x41:  mov    (%edx),%eax
08ad27c3 +0x43:  mov    -0xc(%eax),%ecx
08ad27c6 +0x46:  mov    $0xffffffff,%eax
08ad27cb +0x4b:  testb  $0x1,0x14(%edx,%ecx,1)
08ad27d0 +0x50:  jne    08ad27a2 <+0x22>
08ad27d2 +0x52:  mov    0x4(%edx),%eax
08ad27d5 +0x55:  jmp    08ad27a2 <+0x22>
08ad27d7 +0x57:  nop
08ad27d8 +0x58:  nop
08ad27d9 +0x59:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// __dnf_script__FlexLexer::LexerInput @ 0x8ad2780

/* DWARF original prototype: int LexerInput(__dnf_script__FlexLexer * this, char * buf, int
   max_size) */

int __thiscall
__dnf_script__FlexLexer::LexerInput(__dnf_script__FlexLexer *this,char *buf,int max_size)

{
  istream *this_00;
  istream *piVar1;
  int iVar2;
  
  this_00 = (istream *)this->yyin;
  if (((*(uint *)(this_00 + *(int *)(*(int *)this_00 + -0xc) + 0x14) & 2) == 0) &&
     ((*(uint *)(this_00 + *(int *)(*(int *)this_00 + -0xc) + 0x14) & 5) == 0)) {
    std::istream::read(this_00,buf,max_size);
    piVar1 = this->yyin;
    iVar2 = -1;
    if (((byte)piVar1[*(int *)(*(int *)piVar1 + -0xc) + 0x14] & 1) == 0) {
      iVar2 = *(int *)(piVar1 + 4);
    }
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}
```

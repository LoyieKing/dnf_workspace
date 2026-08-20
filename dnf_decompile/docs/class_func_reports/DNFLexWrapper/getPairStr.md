# getPairStr

`_ZN13DNFLexWrapper10getPairStrEv`

`DNFLexWrapper::getPairStr()`

| 类 | 地址 |
|---|---|
| `DNFLexWrapper` | `0x08ace5a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ace5a0  _ZN13DNFLexWrapper10getPairStrEv
#           DNFLexWrapper::getPairStr()
# range [0x08ace5a0, 0x08ace629]
08ace5a0 +0x00:  push   %ebp
08ace5a1 +0x01:  mov    %esp,%ebp
08ace5a3 +0x03:  sub    $0x18,%esp
08ace5a6 +0x06:  mov    0x8(%ebp),%edx
08ace5a9 +0x09:  mov    0x14(%edx),%ecx
08ace5ac +0x0c:  test   %ecx,%ecx
08ace5ae +0x0e:  jne    08ace610 <+0x70>
08ace5b0 +0x10:  movl   $0x100,0x8(%esp)
08ace5b8 +0x18:  mov    0x1c(%edx),%eax
08ace5bb +0x1b:  movl   $&_ZZN13DNFLexWrapper10getPairStrEvE6buffer,(%esp)
08ace5c2 +0x22:  add    $0x1,%eax
08ace5c5 +0x25:  mov    %eax,0x4(%esp)
08ace5c9 +0x29:  call   0807d8d0 <_init+0x1c8>
08ace5ce +0x2e:  mov    $&_ZZN13DNFLexWrapper10getPairStrEvE6buffer,%edx
08ace5d3 +0x33:  mov    (%edx),%ecx
08ace5d5 +0x35:  add    $0x4,%edx
08ace5d8 +0x38:  lea    -0x1010101(%ecx),%eax
08ace5de +0x3e:  not    %ecx
08ace5e0 +0x40:  and    %ecx,%eax
08ace5e2 +0x42:  and    $0x80808080,%eax
08ace5e7 +0x47:  je     08ace5d3 <+0x33>
08ace5e9 +0x49:  test   $0x8080,%eax
08ace5ee +0x4e:  je     08ace620 <+0x80>
08ace5f0 +0x50:  add    %al,%al
08ace5f2 +0x52:  mov    $&_ZZN13DNFLexWrapper10getPairStrEvE6buffer,%eax
08ace5f7 +0x57:  sbb    $0x3,%edx
08ace5fa +0x5a:  sub    $&_ZZN13DNFLexWrapper10getPairStrEvE6buffer,%edx
08ace600 +0x60:  movb   $0x0,&.bss+0x10c23f(%edx)
08ace607 +0x67:  leave
08ace608 +0x68:  ret
08ace609 +0x69:  lea    0x0(%esi,%eiz,1),%esi
08ace610 +0x70:  xor    %eax,%eax
08ace612 +0x72:  cmp    $0x1,%ecx
08ace615 +0x75:  jne    08ace607 <+0x67>
08ace617 +0x77:  mov    0x10(%edx),%eax
08ace61a +0x7a:  leave
08ace61b +0x7b:  ret
08ace61c +0x7c:  lea    0x0(%esi,%eiz,1),%esi
08ace620 +0x80:  shr    $0x10,%eax
08ace623 +0x83:  add    $0x2,%edx
08ace626 +0x86:  jmp    08ace5f0 <+0x50>
08ace628 +0x88:  nop
08ace629 +0x89:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// DNFLexWrapper::getPairStr @ 0x8ace5a0

/* DWARF original prototype: char * getPairStr(DNFLexWrapper * this) */

char * __thiscall DNFLexWrapper::getPairStr(DNFLexWrapper *this)

{
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  uint *puVar4;
  uint *puVar5;
  
  if (this->lexType_ == LEX_TYPE_NORMAL) {
    strncpy(getPairStr::lexical_block_0::buffer,
            (this->dnfLex_).super___dnf_script__FlexLexer.super_FlexLexer.yytext + 1,0x100);
    puVar5 = (uint *)getPairStr::lexical_block_0::buffer;
    do {
      puVar4 = puVar5;
      puVar5 = puVar4 + 1;
      uVar1 = *puVar4 + 0xfefefeff & ~*puVar4;
      uVar2 = uVar1 & 0x80808080;
    } while (uVar2 == 0);
    if ((uVar1 & 0x8080) == 0) {
      uVar2 = uVar2 >> 0x10;
      puVar5 = (uint *)((int)puVar4 + 6);
    }
    pcVar3 = getPairStr::lexical_block_0::buffer;
    *(undefined1 *)((int)puVar5 + (-4 - (uint)CARRY1((byte)uVar2,(byte)uVar2))) = 0;
  }
  else {
    pcVar3 = (char *)0x0;
    if (this->lexType_ == LEX_TYPE_COMPILED) {
      return this->lastStringValue_;
    }
  }
  return pcVar3;
}
```

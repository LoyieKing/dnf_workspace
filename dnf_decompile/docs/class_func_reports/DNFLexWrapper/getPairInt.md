# getPairInt

`_ZN13DNFLexWrapper10getPairIntEv`

`DNFLexWrapper::getPairInt()`

| 类 | 地址 |
|---|---|
| `DNFLexWrapper` | `0x08ace630` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ace630  _ZN13DNFLexWrapper10getPairIntEv
#           DNFLexWrapper::getPairInt()
# range [0x08ace630, 0x08ace6e9]
08ace630 +0x00:  push   %ebp
08ace631 +0x01:  mov    %esp,%ebp
08ace633 +0x03:  push   %ebx
08ace634 +0x04:  sub    $0x114,%esp
08ace63a +0x0a:  mov    0x8(%ebp),%ecx
08ace63d +0x0d:  mov    0x14(%ecx),%edx
08ace640 +0x10:  test   %edx,%edx
08ace642 +0x12:  je     08ace668 <+0x38>
08ace644 +0x14:  xor    %eax,%eax
08ace646 +0x16:  cmp    $0x1,%edx
08ace649 +0x19:  je     08ace658 <+0x28>
08ace64b +0x1b:  add    $0x114,%esp
08ace651 +0x21:  pop    %ebx
08ace652 +0x22:  pop    %ebp
08ace653 +0x23:  ret
08ace654 +0x24:  lea    0x0(%esi,%eiz,1),%esi
08ace658 +0x28:  mov    0x8(%ecx),%eax
08ace65b +0x2b:  add    $0x114,%esp
08ace661 +0x31:  pop    %ebx
08ace662 +0x32:  pop    %ebp
08ace663 +0x33:  ret
08ace664 +0x34:  lea    0x0(%esi,%eiz,1),%esi
08ace668 +0x38:  movl   $0x100,0x8(%esp)
08ace670 +0x40:  mov    0x1c(%ecx),%eax
08ace673 +0x43:  lea    -0x108(%ebp),%ebx
08ace679 +0x49:  mov    %ebx,(%esp)
08ace67c +0x4c:  add    $0x1,%eax
08ace67f +0x4f:  mov    %eax,0x4(%esp)
08ace683 +0x53:  call   0807d8d0 <_init+0x1c8>
08ace688 +0x58:  mov    %ebx,%edx
08ace68a +0x5a:  mov    (%edx),%ecx
08ace68c +0x5c:  add    $0x4,%edx
08ace68f +0x5f:  lea    -0x1010101(%ecx),%eax
08ace695 +0x65:  not    %ecx
08ace697 +0x67:  and    %ecx,%eax
08ace699 +0x69:  and    $0x80808080,%eax
08ace69e +0x6e:  je     08ace68a <+0x5a>
08ace6a0 +0x70:  test   $0x8080,%eax
08ace6a5 +0x75:  jne    08ace6ad <+0x7d>
08ace6a7 +0x77:  shr    $0x10,%eax
08ace6aa +0x7a:  add    $0x2,%edx
08ace6ad +0x7d:  add    %al,%al
08ace6af +0x7f:  sbb    $0x3,%edx
08ace6b2 +0x82:  sub    %ebx,%edx
08ace6b4 +0x84:  mov    %ebx,(%esp)
08ace6b7 +0x87:  movb   $0x0,-0x109(%ebp,%edx,1)
08ace6bf +0x8f:  movl   $0x0,0xc(%esp)
08ace6c7 +0x97:  movl   $0xa,0x8(%esp)
08ace6cf +0x9f:  movl   $0x0,0x4(%esp)
08ace6d7 +0xa7:  call   0807e0c0 <_init+0x9b8>
08ace6dc +0xac:  add    $0x114,%esp
08ace6e2 +0xb2:  pop    %ebx
08ace6e3 +0xb3:  pop    %ebp
08ace6e4 +0xb4:  ret
08ace6e5 +0xb5:  nop
08ace6e6 +0xb6:  lea    0x0(%esi),%esi
08ace6e9 +0xb9:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// DNFLexWrapper::getPairInt @ 0x8ace630

/* DWARF original prototype: int getPairInt(DNFLexWrapper * this) */

int __thiscall DNFLexWrapper::getPairInt(DNFLexWrapper *this)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  uint *__dest;
  char local_110 [4];
  uint local_10c [65];
  
  if (this->lexType_ == LEX_TYPE_NORMAL) {
                    /* Unresolved local var: char[256] buffer@[???] */
    __dest = local_10c;
    strncpy((char *)__dest,(this->dnfLex_).super___dnf_script__FlexLexer.super_FlexLexer.yytext + 1,
            0x100);
    puVar5 = __dest;
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
    *(char *)((int)puVar5 +
             (int)local_10c + (-(int)__dest - (uint)CARRY1((byte)uVar2,(byte)uVar2)) + -4) = '\0';
    local_110[0] = '\0';
    local_110[1] = '\0';
    local_110[2] = '\0';
    local_110[3] = '\0';
    iVar3 = __strtol_internal(__dest,0,10);
    return iVar3;
  }
  if (this->lexType_ != LEX_TYPE_COMPILED) {
    return 0;
  }
  return this->lastIntValue_;
}
```

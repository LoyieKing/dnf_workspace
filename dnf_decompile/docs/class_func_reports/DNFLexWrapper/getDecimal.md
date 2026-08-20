# getDecimal

`_ZN13DNFLexWrapper10getDecimalEv`

`DNFLexWrapper::getDecimal()`

| 类 | 地址 |
|---|---|
| `DNFLexWrapper` | `0x08ace2f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ace2f0  _ZN13DNFLexWrapper10getDecimalEv
#           DNFLexWrapper::getDecimal()
# range [0x08ace2f0, 0x08ace38e]
08ace2f0 +0x00:  push   %ebp
08ace2f1 +0x01:  mov    %esp,%ebp
08ace2f3 +0x03:  mov    0x8(%ebp),%eax
08ace2f6 +0x06:  push   %ebx
08ace2f7 +0x07:  mov    0x14(%eax),%edx
08ace2fa +0x0a:  test   %edx,%edx
08ace2fc +0x0c:  jne    08ace328 <+0x38>
08ace2fe +0x0e:  mov    0x1c(%eax),%edx
08ace301 +0x11:  movzbl (%edx),%ecx
08ace304 +0x14:  test   %cl,%cl
08ace306 +0x16:  je     08ace31e <+0x2e>
08ace308 +0x18:  lea    -0x30(%ecx),%eax
08ace30b +0x1b:  cmp    $0x9,%al
08ace30d +0x1d:  jbe    08ace38a <+0x9a>
08ace30f +0x1f:  cmp    $0x20,%cl
08ace312 +0x22:  je     08ace338 <+0x48>
08ace314 +0x24:  cmp    $0x2b,%cl
08ace317 +0x27:  je     08ace380 <+0x90>
08ace319 +0x29:  cmp    $0x2d,%cl
08ace31c +0x2c:  je     08ace348 <+0x58>
08ace31e +0x2e:  xor    %eax,%eax
08ace320 +0x30:  pop    %ebx
08ace321 +0x31:  pop    %ebp
08ace322 +0x32:  ret
08ace323 +0x33:  nop
08ace324 +0x34:  lea    0x0(%esi,%eiz,1),%esi
08ace328 +0x38:  cmp    $0x1,%edx
08ace32b +0x3b:  jne    08ace31e <+0x2e>
08ace32d +0x3d:  mov    0x8(%eax),%eax
08ace330 +0x40:  pop    %ebx
08ace331 +0x41:  pop    %ebp
08ace332 +0x42:  ret
08ace333 +0x43:  nop
08ace334 +0x44:  lea    0x0(%esi,%eiz,1),%esi
08ace338 +0x48:  add    $0x1,%edx
08ace33b +0x4b:  movzbl (%edx),%ecx
08ace33e +0x4e:  test   %cl,%cl
08ace340 +0x50:  jne    08ace308 <+0x18>
08ace342 +0x52:  jmp    08ace31e <+0x2e>
08ace344 +0x54:  lea    0x0(%esi,%eiz,1),%esi
08ace348 +0x58:  add    $0x1,%edx
08ace34b +0x5b:  mov    $0x1,%ebx
08ace350 +0x60:  movzbl (%edx),%ecx
08ace353 +0x63:  movsbl %cl,%ecx
08ace356 +0x66:  xor    %eax,%eax
08ace358 +0x68:  sub    $0x30,%ecx
08ace35b +0x6b:  cmp    $0x9,%ecx
08ace35e +0x6e:  ja     08ace374 <+0x84>
08ace360 +0x70:  add    $0x1,%edx
08ace363 +0x73:  lea    (%eax,%eax,4),%eax
08ace366 +0x76:  lea    (%ecx,%eax,2),%eax
08ace369 +0x79:  movsbl (%edx),%ecx
08ace36c +0x7c:  sub    $0x30,%ecx
08ace36f +0x7f:  cmp    $0x9,%ecx
08ace372 +0x82:  jbe    08ace360 <+0x70>
08ace374 +0x84:  test   %bl,%bl
08ace376 +0x86:  je     08ace320 <+0x30>
08ace378 +0x88:  neg    %eax
08ace37a +0x8a:  pop    %ebx
08ace37b +0x8b:  pop    %ebp
08ace37c +0x8c:  ret
08ace37d +0x8d:  lea    0x0(%esi),%esi
08ace380 +0x90:  add    $0x1,%edx
08ace383 +0x93:  xor    %ebx,%ebx
08ace385 +0x95:  movzbl (%edx),%ecx
08ace388 +0x98:  jmp    08ace353 <+0x63>
08ace38a +0x9a:  xor    %ebx,%ebx
08ace38c +0x9c:  jmp    08ace353 <+0x63>
08ace38e +0x9e:  xchg   %ax,%ax
```

## 反编译 C

```c
// DNFLexWrapper::getDecimal @ 0x8ace2f0

/* WARNING: Type propagation algorithm not settling */
/* DWARF original prototype: int getDecimal(DNFLexWrapper * this) */

int __thiscall DNFLexWrapper::getDecimal(DNFLexWrapper *this)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  char *pcVar4;
  
  if (this->lexType_ == LEX_TYPE_NORMAL) {
    pcVar4 = (this->dnfLex_).super___dnf_script__FlexLexer.super_FlexLexer.yytext;
                    /* Unresolved local var: bool neg@[???]
                       Unresolved local var: char * c@[???]
                       Unresolved local var: int ret@[???] */
    cVar3 = *pcVar4;
    if (cVar3 != '\0') {
      do {
        if ((byte)(cVar3 - 0x30U) < 10) {
          bVar1 = false;
LAB_08ace353:
          iVar2 = 0;
                    /* Unresolved local var: uint v@[???] */
          while ((int)cVar3 - 0x30U < 10) {
            pcVar4 = pcVar4 + 1;
            iVar2 = ((int)cVar3 - 0x30U) + iVar2 * 10;
            cVar3 = *pcVar4;
          }
          if (bVar1) {
            return -iVar2;
          }
          return iVar2;
        }
        if (cVar3 != ' ') {
          if (cVar3 == '+') {
            pcVar4 = pcVar4 + 1;
            bVar1 = false;
            cVar3 = *pcVar4;
          }
          else {
            if (cVar3 != '-') {
              return 0;
            }
            pcVar4 = pcVar4 + 1;
            bVar1 = true;
            cVar3 = *pcVar4;
          }
          goto LAB_08ace353;
        }
        pcVar4 = pcVar4 + 1;
        cVar3 = *pcVar4;
        if (cVar3 == '\0') {
          return 0;
        }
      } while( true );
    }
  }
  else if (this->lexType_ == LEX_TYPE_COMPILED) {
    return this->lastIntValue_;
  }
  return 0;
}
```

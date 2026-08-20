# startsWith

`_ZNK10CharString10startsWithEPKcb`

`CharString::startsWith(char const*, bool) const`

| 类 | 地址 |
|---|---|
| `CharString` | `0x08ad6d70` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad6d70  _ZNK10CharString10startsWithEPKcb
#           CharString::startsWith(char const*, bool) const
# range [0x08ad6d70, 0x08ad6e01]
08ad6d70 +0x00:  push   %ebp
08ad6d71 +0x01:  mov    %esp,%ebp
08ad6d73 +0x03:  push   %ebx
08ad6d74 +0x04:  sub    $0x34,%esp
08ad6d77 +0x07:  mov    0x10(%ebp),%eax
08ad6d7a +0x0a:  mov    %al,-0x1c(%ebp)
08ad6d7d +0x0d:  mov    0xc(%ebp),%eax
08ad6d80 +0x10:  mov    %eax,(%esp)
08ad6d83 +0x13:  call   0807e3b0 <_init+0xca8>
08ad6d88 +0x18:  mov    %eax,-0xc(%ebp)
08ad6d8b +0x1b:  mov    0x8(%ebp),%eax
08ad6d8e +0x1e:  mov    %eax,(%esp)
08ad6d91 +0x21:  call   08ad5530 <_ZN3app6getStrEi+0x64>  ; app::getStr(int)+0x64
08ad6d96 +0x26:  cmp    -0xc(%ebp),%eax
08ad6d99 +0x29:  setl   %al
08ad6d9c +0x2c:  test   %al,%al
08ad6d9e +0x2e:  je     08ad6da7 <+0x37>
08ad6da0 +0x30:  mov    $0x0,%eax
08ad6da5 +0x35:  jmp    08ad6dfb <+0x8b>
08ad6da7 +0x37:  cmpb   $0x0,-0x1c(%ebp)
08ad6dab +0x3b:  je     08ad6dd5 <+0x65>
08ad6dad +0x3d:  mov    -0xc(%ebp),%ebx
08ad6db0 +0x40:  mov    0x8(%ebp),%eax
08ad6db3 +0x43:  mov    %eax,(%esp)
08ad6db6 +0x46:  call   0807fffc <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x22>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x22
08ad6dbb +0x4b:  mov    %ebx,0x8(%esp)
08ad6dbf +0x4f:  mov    0xc(%ebp),%edx
08ad6dc2 +0x52:  mov    %edx,0x4(%esp)
08ad6dc6 +0x56:  mov    %eax,(%esp)
08ad6dc9 +0x59:  call   0807e120 <_init+0xa18>
08ad6dce +0x5e:  test   %eax,%eax
08ad6dd0 +0x60:  sete   %al
08ad6dd3 +0x63:  jmp    08ad6dfb <+0x8b>
08ad6dd5 +0x65:  mov    -0xc(%ebp),%ebx
08ad6dd8 +0x68:  mov    0x8(%ebp),%eax
08ad6ddb +0x6b:  mov    %eax,(%esp)
08ad6dde +0x6e:  call   0807fffc <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x22>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x22
08ad6de3 +0x73:  mov    %ebx,0x8(%esp)
08ad6de7 +0x77:  mov    0xc(%ebp),%edx
08ad6dea +0x7a:  mov    %edx,0x4(%esp)
08ad6dee +0x7e:  mov    %eax,(%esp)
08ad6df1 +0x81:  call   0807e8c0 <_init+0x11b8>
08ad6df6 +0x86:  test   %eax,%eax
08ad6df8 +0x88:  sete   %al
08ad6dfb +0x8b:  add    $0x34,%esp
08ad6dfe +0x8e:  pop    %ebx
08ad6dff +0x8f:  pop    %ebp
08ad6e00 +0x90:  ret
08ad6e01 +0x91:  nop
```

## 反编译 C

```c
// CharString::startsWith @ 0x8ad6d70

/* DWARF original prototype: bool startsWith(CharString * this, char * pat, bool isIgnoreCase) */

bool __thiscall CharString::startsWith(CharString *this,char *pat,bool isIgnoreCase)

{
  size_t __n;
  int32 iVar1;
  char *pcVar2;
  int iVar3;
  bool bVar4;
  
                    /* Unresolved local var: int32 patLength@[???] */
  __n = strlen(pat);
  iVar1 = length(this);
  if (iVar1 < (int)__n) {
    bVar4 = false;
  }
  else if (isIgnoreCase) {
    pcVar2 = c_str(this);
    iVar3 = strncasecmp(pcVar2,pat,__n);
    bVar4 = iVar3 == 0;
  }
  else {
    pcVar2 = c_str(this);
    iVar3 = strncmp(pcVar2,pat,__n);
    bVar4 = iVar3 == 0;
  }
  return bVar4;
}
```

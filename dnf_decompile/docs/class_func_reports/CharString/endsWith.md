# endsWith

`_ZNK10CharString8endsWithEPKcb`

`CharString::endsWith(char const*, bool) const`

| 类 | 地址 |
|---|---|
| `CharString` | `0x08ad6e02` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad6e02  _ZNK10CharString8endsWithEPKcb
#           CharString::endsWith(char const*, bool) const
# range [0x08ad6e02, 0x08ad6ecd]
08ad6e02 +0x00:  push   %ebp
08ad6e03 +0x01:  mov    %esp,%ebp
08ad6e05 +0x03:  push   %esi
08ad6e06 +0x04:  push   %ebx
08ad6e07 +0x05:  sub    $0x30,%esp
08ad6e0a +0x08:  mov    0x10(%ebp),%eax
08ad6e0d +0x0b:  mov    %al,-0x1c(%ebp)
08ad6e10 +0x0e:  mov    0xc(%ebp),%eax
08ad6e13 +0x11:  mov    %eax,(%esp)
08ad6e16 +0x14:  call   0807e3b0 <_init+0xca8>
08ad6e1b +0x19:  mov    %eax,-0xc(%ebp)
08ad6e1e +0x1c:  mov    0x8(%ebp),%eax
08ad6e21 +0x1f:  mov    %eax,(%esp)
08ad6e24 +0x22:  call   08ad5530 <_ZN3app6getStrEi+0x64>  ; app::getStr(int)+0x64
08ad6e29 +0x27:  cmp    -0xc(%ebp),%eax
08ad6e2c +0x2a:  setl   %al
08ad6e2f +0x2d:  test   %al,%al
08ad6e31 +0x2f:  je     08ad6e3d <+0x3b>
08ad6e33 +0x31:  mov    $0x0,%eax
08ad6e38 +0x36:  jmp    08ad6ec7 <+0xc5>
08ad6e3d +0x3b:  cmpb   $0x0,-0x1c(%ebp)
08ad6e41 +0x3f:  je     08ad6e86 <+0x84>
08ad6e43 +0x41:  mov    -0xc(%ebp),%ebx
08ad6e46 +0x44:  mov    0x8(%ebp),%eax
08ad6e49 +0x47:  mov    %eax,(%esp)
08ad6e4c +0x4a:  call   0807fffc <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x22>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x22
08ad6e51 +0x4f:  mov    %eax,%esi
08ad6e53 +0x51:  mov    0x8(%ebp),%eax
08ad6e56 +0x54:  mov    %eax,(%esp)
08ad6e59 +0x57:  call   08ad5530 <_ZN3app6getStrEi+0x64>  ; app::getStr(int)+0x64
08ad6e5e +0x5c:  mov    %eax,%edx
08ad6e60 +0x5e:  mov    -0xc(%ebp),%eax
08ad6e63 +0x61:  mov    %edx,%ecx
08ad6e65 +0x63:  sub    %eax,%ecx
08ad6e67 +0x65:  mov    %ecx,%eax
08ad6e69 +0x67:  lea    (%esi,%eax,1),%edx
08ad6e6c +0x6a:  mov    %ebx,0x8(%esp)
08ad6e70 +0x6e:  mov    0xc(%ebp),%eax
08ad6e73 +0x71:  mov    %eax,0x4(%esp)
08ad6e77 +0x75:  mov    %edx,(%esp)
08ad6e7a +0x78:  call   0807e120 <_init+0xa18>
08ad6e7f +0x7d:  test   %eax,%eax
08ad6e81 +0x7f:  sete   %al
08ad6e84 +0x82:  jmp    08ad6ec7 <+0xc5>
08ad6e86 +0x84:  mov    -0xc(%ebp),%ebx
08ad6e89 +0x87:  mov    0x8(%ebp),%eax
08ad6e8c +0x8a:  mov    %eax,(%esp)
08ad6e8f +0x8d:  call   0807fffc <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x22>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x22
08ad6e94 +0x92:  mov    %eax,%esi
08ad6e96 +0x94:  mov    0x8(%ebp),%eax
08ad6e99 +0x97:  mov    %eax,(%esp)
08ad6e9c +0x9a:  call   08ad5530 <_ZN3app6getStrEi+0x64>  ; app::getStr(int)+0x64
08ad6ea1 +0x9f:  mov    %eax,%edx
08ad6ea3 +0xa1:  mov    -0xc(%ebp),%eax
08ad6ea6 +0xa4:  mov    %edx,%ecx
08ad6ea8 +0xa6:  sub    %eax,%ecx
08ad6eaa +0xa8:  mov    %ecx,%eax
08ad6eac +0xaa:  lea    (%esi,%eax,1),%edx
08ad6eaf +0xad:  mov    %ebx,0x8(%esp)
08ad6eb3 +0xb1:  mov    0xc(%ebp),%eax
08ad6eb6 +0xb4:  mov    %eax,0x4(%esp)
08ad6eba +0xb8:  mov    %edx,(%esp)
08ad6ebd +0xbb:  call   0807e8c0 <_init+0x11b8>
08ad6ec2 +0xc0:  test   %eax,%eax
08ad6ec4 +0xc2:  sete   %al
08ad6ec7 +0xc5:  add    $0x30,%esp
08ad6eca +0xc8:  pop    %ebx
08ad6ecb +0xc9:  pop    %esi
08ad6ecc +0xca:  pop    %ebp
08ad6ecd +0xcb:  ret
```

## 反编译 C

```c
// CharString::endsWith @ 0x8ad6e02

/* DWARF original prototype: bool endsWith(CharString * this, char * pat, bool isIgnoreCase) */

bool __thiscall CharString::endsWith(CharString *this,char *pat,bool isIgnoreCase)

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
    iVar1 = length(this);
    iVar3 = strncasecmp(pcVar2 + (iVar1 - __n),pat,__n);
    bVar4 = iVar3 == 0;
  }
  else {
    pcVar2 = c_str(this);
    iVar1 = length(this);
    iVar3 = strncmp(pcVar2 + (iVar1 - __n),pat,__n);
    bVar4 = iVar3 == 0;
  }
  return bVar4;
}
```

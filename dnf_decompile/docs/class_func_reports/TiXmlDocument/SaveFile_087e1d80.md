# SaveFile

`_ZNK13TiXmlDocument8SaveFileEPKc`

`TiXmlDocument::SaveFile(char const*) const`

| 类 | 地址 |
|---|---|
| `TiXmlDocument` | `0x087e1d80` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e1d80  _ZNK13TiXmlDocument8SaveFileEPKc
#           TiXmlDocument::SaveFile(char const*) const
# range [0x087e1d80, 0x087e1e29]
087e1d80 +0x00:  push   %ebp
087e1d81 +0x01:  mov    %esp,%ebp
087e1d83 +0x03:  sub    $0x28,%esp
087e1d86 +0x06:  mov    0xc(%ebp),%eax
087e1d89 +0x09:  mov    %ebx,-0xc(%ebp)
087e1d8c +0x0c:  mov    %esi,-0x8(%ebp)
087e1d8f +0x0f:  mov    0x8(%ebp),%esi
087e1d92 +0x12:  mov    %edi,-0x4(%ebp)
087e1d95 +0x15:  xor    %edi,%edi
087e1d97 +0x17:  movl   $"w",0x4(%esp)
087e1d9f +0x1f:  mov    %eax,(%esp)
087e1da2 +0x22:  call   0807e770 <_init+0x1068>
087e1da7 +0x27:  test   %eax,%eax
087e1da9 +0x29:  mov    %eax,%ebx
087e1dab +0x2b:  je     087e1dde <+0x5e>
087e1dad +0x2d:  cmpb   $0x0,0x44(%esi)
087e1db1 +0x31:  jne    087e1df0 <+0x70>
087e1db3 +0x33:  mov    (%esi),%eax
087e1db5 +0x35:  movl   $0x0,0x8(%esp)
087e1dbd +0x3d:  mov    %ebx,0x4(%esp)
087e1dc1 +0x41:  mov    %esi,(%esp)
087e1dc4 +0x44:  call   *0x8(%eax)
087e1dc7 +0x47:  mov    %ebx,(%esp)
087e1dca +0x4a:  call   0807e6c0 <_init+0xfb8>
087e1dcf +0x4f:  mov    %ebx,(%esp)
087e1dd2 +0x52:  test   %eax,%eax
087e1dd4 +0x54:  sete   %al
087e1dd7 +0x57:  mov    %eax,%edi
087e1dd9 +0x59:  call   0807dea0 <_init+0x798>
087e1dde +0x5e:  mov    %edi,%eax
087e1de0 +0x60:  mov    -0xc(%ebp),%ebx
087e1de3 +0x63:  mov    -0x8(%ebp),%esi
087e1de6 +0x66:  mov    -0x4(%ebp),%edi
087e1de9 +0x69:  mov    %ebp,%esp
087e1deb +0x6b:  pop    %ebp
087e1dec +0x6c:  ret
087e1ded +0x6d:  lea    0x0(%esi),%esi
087e1df0 +0x70:  mov    %eax,0x4(%esp)
087e1df4 +0x74:  movl   $0xef,(%esp)
087e1dfb +0x7b:  call   0807e4c0 <_init+0xdb8>
087e1e00 +0x80:  mov    %ebx,0x4(%esp)
087e1e04 +0x84:  movl   $0xbb,(%esp)
087e1e0b +0x8b:  call   0807e4c0 <_init+0xdb8>
087e1e10 +0x90:  mov    %ebx,0x4(%esp)
087e1e14 +0x94:  movl   $0xbf,(%esp)
087e1e1b +0x9b:  call   0807e4c0 <_init+0xdb8>
087e1e20 +0xa0:  jmp    087e1db3 <+0x33>
087e1e22 +0xa2:  lea    0x0(%esi,%eiz,1),%esi
087e1e29 +0xa9:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TiXmlDocument::SaveFile @ 0x87e1d80

/* TiXmlDocument::SaveFile(char const*) const */

bool __thiscall TiXmlDocument::SaveFile(TiXmlDocument *this,char *param_1)

{
  FILE *__stream;
  int iVar1;
  bool bVar2;
  
  bVar2 = false;
  __stream = fopen(param_1,"w");
  if (__stream != (FILE *)0x0) {
    if (this[0x44] != (TiXmlDocument)0x0) {
      fputc(0xef,__stream);
      fputc(0xbb,__stream);
      fputc(0xbf,__stream);
    }
    (**(code **)(*(int *)this + 8))(this,__stream,0);
    iVar1 = ferror(__stream);
    bVar2 = iVar1 == 0;
    fclose(__stream);
  }
  return bVar2;
}
```

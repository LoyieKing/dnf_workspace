# SaveFile

`_ZNK13TiXmlDocument8SaveFileEv`

`TiXmlDocument::SaveFile() const`

| 类 | 地址 |
|---|---|
| `TiXmlDocument` | `0x087e23e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e23e0  _ZNK13TiXmlDocument8SaveFileEv
#           TiXmlDocument::SaveFile() const
# range [0x087e23e0, 0x087e2489]
087e23e0 +0x00:  push   %ebp
087e23e1 +0x01:  mov    %esp,%ebp
087e23e3 +0x03:  sub    $0x28,%esp
087e23e6 +0x06:  mov    %esi,-0x8(%ebp)
087e23e9 +0x09:  mov    0x8(%ebp),%esi
087e23ec +0x0c:  mov    %ebx,-0xc(%ebp)
087e23ef +0x0f:  mov    %edi,-0x4(%ebp)
087e23f2 +0x12:  xor    %edi,%edi
087e23f4 +0x14:  movl   $"w",0x4(%esp)
087e23fc +0x1c:  mov    0x20(%esi),%eax
087e23ff +0x1f:  mov    %eax,(%esp)
087e2402 +0x22:  call   0807e770 <_init+0x1068>
087e2407 +0x27:  test   %eax,%eax
087e2409 +0x29:  mov    %eax,%ebx
087e240b +0x2b:  je     087e243e <+0x5e>
087e240d +0x2d:  cmpb   $0x0,0x44(%esi)
087e2411 +0x31:  jne    087e2450 <+0x70>
087e2413 +0x33:  mov    (%esi),%eax
087e2415 +0x35:  movl   $0x0,0x8(%esp)
087e241d +0x3d:  mov    %ebx,0x4(%esp)
087e2421 +0x41:  mov    %esi,(%esp)
087e2424 +0x44:  call   *0x8(%eax)
087e2427 +0x47:  mov    %ebx,(%esp)
087e242a +0x4a:  call   0807e6c0 <_init+0xfb8>
087e242f +0x4f:  mov    %ebx,(%esp)
087e2432 +0x52:  test   %eax,%eax
087e2434 +0x54:  sete   %al
087e2437 +0x57:  mov    %eax,%edi
087e2439 +0x59:  call   0807dea0 <_init+0x798>
087e243e +0x5e:  mov    %edi,%eax
087e2440 +0x60:  mov    -0xc(%ebp),%ebx
087e2443 +0x63:  mov    -0x8(%ebp),%esi
087e2446 +0x66:  mov    -0x4(%ebp),%edi
087e2449 +0x69:  mov    %ebp,%esp
087e244b +0x6b:  pop    %ebp
087e244c +0x6c:  ret
087e244d +0x6d:  lea    0x0(%esi),%esi
087e2450 +0x70:  mov    %eax,0x4(%esp)
087e2454 +0x74:  movl   $0xef,(%esp)
087e245b +0x7b:  call   0807e4c0 <_init+0xdb8>
087e2460 +0x80:  mov    %ebx,0x4(%esp)
087e2464 +0x84:  movl   $0xbb,(%esp)
087e246b +0x8b:  call   0807e4c0 <_init+0xdb8>
087e2470 +0x90:  mov    %ebx,0x4(%esp)
087e2474 +0x94:  movl   $0xbf,(%esp)
087e247b +0x9b:  call   0807e4c0 <_init+0xdb8>
087e2480 +0xa0:  jmp    087e2413 <+0x33>
087e2482 +0xa2:  lea    0x0(%esi,%eiz,1),%esi
087e2489 +0xa9:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TiXmlDocument::SaveFile @ 0x87e23e0

/* TiXmlDocument::SaveFile() const */

bool __thiscall TiXmlDocument::SaveFile(TiXmlDocument *this)

{
  FILE *__stream;
  int iVar1;
  bool bVar2;
  
  bVar2 = false;
  __stream = fopen(*(char **)(this + 0x20),"w");
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

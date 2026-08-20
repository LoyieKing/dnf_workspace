# loadFromFile

`_ZN14StringResource12loadFromFileEPKcP10CharString`

`StringResource::loadFromFile(char const*, CharString*)`

| 类 | 地址 |
|---|---|
| `StringResource` | `0x08ad4ce4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad4ce4  _ZN14StringResource12loadFromFileEPKcP10CharString
#           StringResource::loadFromFile(char const*, CharString*)
# range [0x08ad4ce4, 0x08ad4df9]
08ad4ce4 +0x000:  push   %ebp
08ad4ce5 +0x001:  mov    %esp,%ebp
08ad4ce7 +0x003:  sub    $0x28,%esp
08ad4cea +0x006:  movl   $"rb",0x4(%esp)
08ad4cf2 +0x00e:  mov    0xc(%ebp),%eax
08ad4cf5 +0x011:  mov    %eax,(%esp)
08ad4cf8 +0x014:  call   0807e770 <_init+0x1068>
08ad4cfd +0x019:  mov    %eax,-0x18(%ebp)
08ad4d00 +0x01c:  cmpl   $0x0,-0x18(%ebp)
08ad4d04 +0x020:  jne    08ad4d29 <+0x45>
08ad4d06 +0x022:  cmpl   $0x0,0x10(%ebp)
08ad4d0a +0x026:  je     08ad4d29 <+0x45>
08ad4d0c +0x028:  movl   $"Cannot open file",0x4(%esp)
08ad4d14 +0x030:  mov    0x10(%ebp),%eax
08ad4d17 +0x033:  mov    %eax,(%esp)
08ad4d1a +0x036:  call   08ad70c0 <_ZN10CharStringaSEPKc>  ; CharString::operator=(char const*)
08ad4d1f +0x03b:  mov    $0x0,%eax
08ad4d24 +0x040:  jmp    08ad4df7 <+0x113>
08ad4d29 +0x045:  movl   $0x2,0x8(%esp)
08ad4d31 +0x04d:  movl   $0x0,0x4(%esp)
08ad4d39 +0x055:  mov    -0x18(%ebp),%eax
08ad4d3c +0x058:  mov    %eax,(%esp)
08ad4d3f +0x05b:  call   0807e0b0 <_init+0x9a8>
08ad4d44 +0x060:  mov    -0x18(%ebp),%eax
08ad4d47 +0x063:  mov    %eax,(%esp)
08ad4d4a +0x066:  call   0807d9d0 <_init+0x2c8>
08ad4d4f +0x06b:  mov    %eax,-0x14(%ebp)
08ad4d52 +0x06e:  movl   $0x0,0x8(%esp)
08ad4d5a +0x076:  movl   $0x0,0x4(%esp)
08ad4d62 +0x07e:  mov    -0x18(%ebp),%eax
08ad4d65 +0x081:  mov    %eax,(%esp)
08ad4d68 +0x084:  call   0807e0b0 <_init+0x9a8>
08ad4d6d +0x089:  cmpl   $0x0,-0x14(%ebp)
08ad4d71 +0x08d:  jns    08ad4d85 <+0xa1>
08ad4d73 +0x08f:  mov    -0x18(%ebp),%eax
08ad4d76 +0x092:  mov    %eax,(%esp)
08ad4d79 +0x095:  call   0807dea0 <_init+0x798>
08ad4d7e +0x09a:  mov    $0x0,%eax
08ad4d83 +0x09f:  jmp    08ad4df7 <+0x113>
08ad4d85 +0x0a1:  mov    -0x14(%ebp),%eax
08ad4d88 +0x0a4:  mov    %eax,(%esp)
08ad4d8b +0x0a7:  call   08722dc0 <_Znaj>  ; operator new[](unsigned int)
08ad4d90 +0x0ac:  mov    %eax,-0x10(%ebp)
08ad4d93 +0x0af:  mov    -0x14(%ebp),%eax
08ad4d96 +0x0b2:  mov    -0x18(%ebp),%edx
08ad4d99 +0x0b5:  mov    %edx,0xc(%esp)
08ad4d9d +0x0b9:  mov    %eax,0x8(%esp)
08ad4da1 +0x0bd:  movl   $0x1,0x4(%esp)
08ad4da9 +0x0c5:  mov    -0x10(%ebp),%eax
08ad4dac +0x0c8:  mov    %eax,(%esp)
08ad4daf +0x0cb:  call   0807dd50 <_init+0x648>
08ad4db4 +0x0d0:  mov    -0x18(%ebp),%eax
08ad4db7 +0x0d3:  mov    %eax,(%esp)
08ad4dba +0x0d6:  call   0807dea0 <_init+0x798>
08ad4dbf +0x0db:  mov    0x10(%ebp),%eax
08ad4dc2 +0x0de:  mov    %eax,0xc(%esp)
08ad4dc6 +0x0e2:  mov    -0x14(%ebp),%eax
08ad4dc9 +0x0e5:  mov    %eax,0x8(%esp)
08ad4dcd +0x0e9:  mov    -0x10(%ebp),%eax
08ad4dd0 +0x0ec:  mov    %eax,0x4(%esp)
08ad4dd4 +0x0f0:  mov    0x8(%ebp),%eax
08ad4dd7 +0x0f3:  mov    %eax,(%esp)
08ad4dda +0x0f6:  call   08ad4e04 <_ZN14StringResource14loadFromBinaryEPKhiP10CharString>  ; StringResource::loadFromBinary(unsigned char const*, int, CharString*)
08ad4ddf +0x0fb:  mov    %al,-0x9(%ebp)
08ad4de2 +0x0fe:  cmpl   $0x0,-0x10(%ebp)
08ad4de6 +0x102:  je     08ad4df3 <+0x10f>
08ad4de8 +0x104:  mov    -0x10(%ebp),%eax
08ad4deb +0x107:  mov    %eax,(%esp)
08ad4dee +0x10a:  call   08724bb0 <_ZdaPv>  ; operator delete[](void*)
08ad4df3 +0x10f:  movzbl -0x9(%ebp),%eax
08ad4df7 +0x113:  leave
08ad4df8 +0x114:  ret
08ad4df9 +0x115:  nop
```

## 反编译 C

```c
// StringResource::loadFromFile @ 0x8ad4ce4

/* StringResource::loadFromFile(char const*, CharString*) */

undefined1 __thiscall
StringResource::loadFromFile(StringResource *this,char *param_1,CharString *param_2)

{
  undefined1 uVar1;
  FILE *__stream;
  uint __n;
  uchar *__ptr;
  
  __stream = fopen(param_1,"rb");
  if ((__stream == (FILE *)0x0) && (param_2 != (CharString *)0x0)) {
    CharString::operator=((CharString *)param_2,"Cannot open file");
    uVar1 = 0;
  }
  else {
    fseek(__stream,0,2);
    __n = ftell(__stream);
    fseek(__stream,0,0);
    if ((int)__n < 0) {
      fclose(__stream);
      uVar1 = 0;
    }
    else {
      __ptr = operator_new__(__n);
      fread(__ptr,1,__n,__stream);
      fclose(__stream);
      uVar1 = loadFromBinary(this,__ptr,__n,param_2);
      if (__ptr != (uchar *)0x0) {
        operator_delete__(__ptr);
      }
    }
  }
  return uVar1;
}
```

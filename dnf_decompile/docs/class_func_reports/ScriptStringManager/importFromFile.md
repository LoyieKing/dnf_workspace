# importFromFile

`_ZN19ScriptStringManager14importFromFileEPKc`

`ScriptStringManager::importFromFile(char const*)`

| 类 | 地址 |
|---|---|
| `ScriptStringManager` | `0x08acfd00` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08acfd00  _ZN19ScriptStringManager14importFromFileEPKc
#           ScriptStringManager::importFromFile(char const*)
# range [0x08acfd00, 0x08acfdef]
08acfd00 +0x00:  push   %ebp
08acfd01 +0x01:  mov    %esp,%ebp
08acfd03 +0x03:  sub    $0x28,%esp
08acfd06 +0x06:  mov    0xc(%ebp),%eax
08acfd09 +0x09:  mov    %ebx,-0xc(%ebp)
08acfd0c +0x0c:  mov    %esi,-0x8(%ebp)
08acfd0f +0x0f:  mov    %edi,-0x4(%ebp)
08acfd12 +0x12:  movl   $"rb",0x4(%esp)
08acfd1a +0x1a:  mov    %eax,(%esp)
08acfd1d +0x1d:  call   0807e770 <_init+0x1068>
08acfd22 +0x22:  mov    %eax,%ebx
08acfd24 +0x24:  xor    %eax,%eax
08acfd26 +0x26:  test   %ebx,%ebx
08acfd28 +0x28:  je     08acfde2 <+0xe2>
08acfd2e +0x2e:  movl   $0x2,0x8(%esp)
08acfd36 +0x36:  movl   $0x0,0x4(%esp)
08acfd3e +0x3e:  mov    %ebx,(%esp)
08acfd41 +0x41:  call   0807e0b0 <_init+0x9a8>
08acfd46 +0x46:  test   %eax,%eax
08acfd48 +0x48:  jne    08acfdd8 <+0xd8>
08acfd4e +0x4e:  mov    %ebx,(%esp)
08acfd51 +0x51:  call   0807d9d0 <_init+0x2c8>
08acfd56 +0x56:  test   %eax,%eax
08acfd58 +0x58:  mov    %eax,%esi
08acfd5a +0x5a:  js     08acfdd8 <+0xd8>
08acfd5c +0x5c:  movl   $0x0,0x8(%esp)
08acfd64 +0x64:  movl   $0x0,0x4(%esp)
08acfd6c +0x6c:  mov    %ebx,(%esp)
08acfd6f +0x6f:  call   0807e0b0 <_init+0x9a8>
08acfd74 +0x74:  test   %eax,%eax
08acfd76 +0x76:  jne    08acfdd8 <+0xd8>
08acfd78 +0x78:  mov    %esi,(%esp)
08acfd7b +0x7b:  call   08722dc0 <_Znaj>  ; operator new[](unsigned int)
08acfd80 +0x80:  test   %eax,%eax
08acfd82 +0x82:  mov    %eax,%edi
08acfd84 +0x84:  je     08acfdd8 <+0xd8>
08acfd86 +0x86:  mov    %ebx,0xc(%esp)
08acfd8a +0x8a:  mov    %esi,0x4(%esp)
08acfd8e +0x8e:  movl   $0x1,0x8(%esp)
08acfd96 +0x96:  mov    %eax,(%esp)
08acfd99 +0x99:  call   0807dd50 <_init+0x648>
08acfd9e +0x9e:  mov    %ebx,(%esp)
08acfda1 +0xa1:  call   0807dea0 <_init+0x798>
08acfda6 +0xa6:  mov    0x8(%ebp),%eax
08acfda9 +0xa9:  mov    %esi,0x8(%esp)
08acfdad +0xad:  mov    %edi,0x4(%esp)
08acfdb1 +0xb1:  mov    %eax,(%esp)
08acfdb4 +0xb4:  call   08acf970 <_ZN19ScriptStringManager16importFromBufferEPKhi>  ; ScriptStringManager::importFromBuffer(unsigned char const*, int)
08acfdb9 +0xb9:  mov    %edi,(%esp)
08acfdbc +0xbc:  call   08724bb0 <_ZdaPv>  ; operator delete[](void*)
08acfdc1 +0xc1:  mov    -0xc(%ebp),%ebx
08acfdc4 +0xc4:  mov    $0x1,%eax
08acfdc9 +0xc9:  mov    -0x8(%ebp),%esi
08acfdcc +0xcc:  mov    -0x4(%ebp),%edi
08acfdcf +0xcf:  mov    %ebp,%esp
08acfdd1 +0xd1:  pop    %ebp
08acfdd2 +0xd2:  ret
08acfdd3 +0xd3:  nop
08acfdd4 +0xd4:  lea    0x0(%esi,%eiz,1),%esi
08acfdd8 +0xd8:  mov    %ebx,(%esp)
08acfddb +0xdb:  call   0807dea0 <_init+0x798>
08acfde0 +0xe0:  xor    %eax,%eax
08acfde2 +0xe2:  mov    -0xc(%ebp),%ebx
08acfde5 +0xe5:  mov    -0x8(%ebp),%esi
08acfde8 +0xe8:  mov    -0x4(%ebp),%edi
08acfdeb +0xeb:  mov    %ebp,%esp
08acfded +0xed:  pop    %ebp
08acfdee +0xee:  ret
08acfdef +0xef:  nop
```

## 反编译 C

```c
// ScriptStringManager::importFromFile @ 0x8acfd00

/* DWARF original prototype: bool importFromFile(ScriptStringManager * this, TCHAR * fileName) */

bool __thiscall ScriptStringManager::importFromFile(ScriptStringManager *this,TCHAR *fileName)

{
  FILE *__stream;
  int iVar1;
  uint __size;
  uchar *buffer;
  
                    /* Unresolved local var: FILE * file@[???]
                       Unresolved local var: int size@[???]
                       Unresolved local var: uchar * buffer@[???] */
  __stream = fopen(fileName,"rb");
  if (__stream != (FILE *)0x0) {
    iVar1 = fseek(__stream,0,2);
    if (iVar1 == 0) {
      __size = ftell(__stream);
      if (-1 < (int)__size) {
        iVar1 = fseek(__stream,0,0);
        if (iVar1 == 0) {
          buffer = operator_new__(__size);
          if (buffer != (uchar *)0x0) {
            fread(buffer,__size,1,__stream);
            fclose(__stream);
            importFromBuffer(this,buffer,__size);
            operator_delete__(buffer);
            return true;
          }
        }
      }
    }
    fclose(__stream);
  }
  return false;
}
```

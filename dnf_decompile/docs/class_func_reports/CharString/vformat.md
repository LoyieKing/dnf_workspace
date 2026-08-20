# vformat

`_ZN10CharString7vformatEPKcPc`

`CharString::vformat(char const*, char*)`

| 类 | 地址 |
|---|---|
| `CharString` | `0x08ad8b9e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad8b9e  _ZN10CharString7vformatEPKcPc
#           CharString::vformat(char const*, char*)
# range [0x08ad8b9e, 0x08ad8c39]
08ad8b9e +0x00:  push   %ebp
08ad8b9f +0x01:  mov    %esp,%ebp
08ad8ba1 +0x03:  push   %esi
08ad8ba2 +0x04:  push   %ebx
08ad8ba3 +0x05:  sub    $0x20,%esp
08ad8ba6 +0x08:  mov    0x8(%ebp),%ebx
08ad8ba9 +0x0b:  mov    0x10(%ebp),%eax
08ad8bac +0x0e:  mov    %eax,0xc(%esp)
08ad8bb0 +0x12:  mov    0xc(%ebp),%eax
08ad8bb3 +0x15:  mov    %eax,0x8(%esp)
08ad8bb7 +0x19:  movl   $0x0,0x4(%esp)
08ad8bbf +0x21:  movl   $0x0,(%esp)
08ad8bc6 +0x28:  call   0807e5f0 <_init+0xee8>
08ad8bcb +0x2d:  mov    %eax,-0x10(%ebp)
08ad8bce +0x30:  cmpl   $0x0,-0x10(%ebp)
08ad8bd2 +0x34:  jne    08ad8be0 <+0x42>
08ad8bd4 +0x36:  mov    %ebx,%eax
08ad8bd6 +0x38:  mov    %eax,(%esp)
08ad8bd9 +0x3b:  call   08ad69aa <_ZN10CharStringC1Ev>  ; CharString::CharString()
08ad8bde +0x40:  jmp    08ad8c2c <+0x8e>
08ad8be0 +0x42:  mov    -0x10(%ebp),%eax
08ad8be3 +0x45:  mov    %eax,(%esp)
08ad8be6 +0x48:  call   08ad694e <_ZN14CharStringData6createEi>  ; CharStringData::create(int)
08ad8beb +0x4d:  mov    %eax,-0xc(%ebp)
08ad8bee +0x50:  mov    -0x10(%ebp),%eax
08ad8bf1 +0x53:  add    $0x1,%eax
08ad8bf4 +0x56:  mov    %eax,%esi
08ad8bf6 +0x58:  mov    -0xc(%ebp),%eax
08ad8bf9 +0x5b:  mov    %eax,(%esp)
08ad8bfc +0x5e:  call   08ad6942 <_ZN14CharStringData9getBufferEv>  ; CharStringData::getBuffer()
08ad8c01 +0x63:  mov    0x10(%ebp),%edx
08ad8c04 +0x66:  mov    %edx,0xc(%esp)
08ad8c08 +0x6a:  mov    0xc(%ebp),%edx
08ad8c0b +0x6d:  mov    %edx,0x8(%esp)
08ad8c0f +0x71:  mov    %esi,0x4(%esp)
08ad8c13 +0x75:  mov    %eax,(%esp)
08ad8c16 +0x78:  call   08ad457c <_Z11ss_vsprintfPcjPKcS_>  ; ss_vsprintf(char*, unsigned int, char const*, char*)
08ad8c1b +0x7d:  mov    %ebx,%eax
08ad8c1d +0x7f:  mov    -0xc(%ebp),%edx
08ad8c20 +0x82:  mov    %edx,0x4(%esp)
08ad8c24 +0x86:  mov    %eax,(%esp)
08ad8c27 +0x89:  call   08ad6ba0 <_ZN10CharStringC1EP14CharStringData>  ; CharString::CharString(CharStringData*)
08ad8c2c +0x8e:  mov    %ebx,%eax
08ad8c2e +0x90:  mov    %ebx,%eax
08ad8c30 +0x92:  add    $0x20,%esp
08ad8c33 +0x95:  pop    %ebx
08ad8c34 +0x96:  pop    %esi
08ad8c35 +0x97:  pop    %ebp
08ad8c36 +0x98:  ret    $0x4
08ad8c39 +0x9b:  nop
```

## 反编译 C

```c
// CharString::vformat @ 0x8ad8b9e

CharString * CharString::vformat(CharString *__return_storage_ptr__,char *formatStr,va_list argList)

{
  int length;
  CharStringData *this;
  char *buffer;
  
                    /* Unresolved local var: int32 length@[???]
                       Unresolved local var: CharStringData * newData@[???] */
  length = vsnprintf((char *)0x0,0,formatStr,argList);
  if (length == 0) {
    CharString(__return_storage_ptr__);
  }
  else {
    this = CharStringData::create(length);
    buffer = CharStringData::getBuffer(this);
    ss_vsprintf(buffer,length + 1,formatStr,argList);
    CharString(__return_storage_ptr__,this);
  }
  return __return_storage_ptr__;
}
```

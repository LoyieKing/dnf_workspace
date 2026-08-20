# format

`_ZN10CharString6formatEPKcz`

`CharString::format(char const*, ...)`

| 类 | 地址 |
|---|---|
| `CharString` | `0x08ad8afa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad8afa  _ZN10CharString6formatEPKcz
#           CharString::format(char const*, ...)
# range [0x08ad8afa, 0x08ad8b9d]
08ad8afa +0x00:  push   %ebp
08ad8afb +0x01:  mov    %esp,%ebp
08ad8afd +0x03:  push   %edi
08ad8afe +0x04:  push   %esi
08ad8aff +0x05:  push   %ebx
08ad8b00 +0x06:  sub    $0x2c,%esp
08ad8b03 +0x09:  mov    0x8(%ebp),%ebx
08ad8b06 +0x0c:  lea    0x10(%ebp),%eax
08ad8b09 +0x0f:  mov    %eax,-0x24(%ebp)
08ad8b0c +0x12:  mov    -0x24(%ebp),%eax
08ad8b0f +0x15:  mov    %eax,0xc(%esp)
08ad8b13 +0x19:  mov    0xc(%ebp),%eax
08ad8b16 +0x1c:  mov    %eax,0x8(%esp)
08ad8b1a +0x20:  movl   $0x0,0x4(%esp)
08ad8b22 +0x28:  movl   $0x0,(%esp)
08ad8b29 +0x2f:  call   0807e5f0 <_init+0xee8>
08ad8b2e +0x34:  mov    %eax,-0x20(%ebp)
08ad8b31 +0x37:  cmpl   $0x0,-0x20(%ebp)
08ad8b35 +0x3b:  jne    08ad8b43 <+0x49>
08ad8b37 +0x3d:  mov    %ebx,%eax
08ad8b39 +0x3f:  mov    %eax,(%esp)
08ad8b3c +0x42:  call   08ad69aa <_ZN10CharStringC1Ev>  ; CharString::CharString()
08ad8b41 +0x47:  jmp    08ad8b8f <+0x95>
08ad8b43 +0x49:  mov    -0x20(%ebp),%eax
08ad8b46 +0x4c:  mov    %eax,(%esp)
08ad8b49 +0x4f:  call   08ad694e <_ZN14CharStringData6createEi>  ; CharStringData::create(int)
08ad8b4e +0x54:  mov    %eax,-0x1c(%ebp)
08ad8b51 +0x57:  mov    -0x24(%ebp),%edi
08ad8b54 +0x5a:  mov    -0x20(%ebp),%eax
08ad8b57 +0x5d:  add    $0x1,%eax
08ad8b5a +0x60:  mov    %eax,%esi
08ad8b5c +0x62:  mov    -0x1c(%ebp),%eax
08ad8b5f +0x65:  mov    %eax,(%esp)
08ad8b62 +0x68:  call   08ad6942 <_ZN14CharStringData9getBufferEv>  ; CharStringData::getBuffer()
08ad8b67 +0x6d:  mov    %edi,0xc(%esp)
08ad8b6b +0x71:  mov    0xc(%ebp),%edx
08ad8b6e +0x74:  mov    %edx,0x8(%esp)
08ad8b72 +0x78:  mov    %esi,0x4(%esp)
08ad8b76 +0x7c:  mov    %eax,(%esp)
08ad8b79 +0x7f:  call   08ad457c <_Z11ss_vsprintfPcjPKcS_>  ; ss_vsprintf(char*, unsigned int, char const*, char*)
08ad8b7e +0x84:  mov    %ebx,%eax
08ad8b80 +0x86:  mov    -0x1c(%ebp),%edx
08ad8b83 +0x89:  mov    %edx,0x4(%esp)
08ad8b87 +0x8d:  mov    %eax,(%esp)
08ad8b8a +0x90:  call   08ad6ba0 <_ZN10CharStringC1EP14CharStringData>  ; CharString::CharString(CharStringData*)
08ad8b8f +0x95:  mov    %ebx,%eax
08ad8b91 +0x97:  mov    %ebx,%eax
08ad8b93 +0x99:  add    $0x2c,%esp
08ad8b96 +0x9c:  pop    %ebx
08ad8b97 +0x9d:  pop    %esi
08ad8b98 +0x9e:  pop    %edi
08ad8b99 +0x9f:  pop    %ebp
08ad8b9a +0xa0:  ret    $0x4
08ad8b9d +0xa3:  nop
```

## 反编译 C

```c
// CharString::format @ 0x8ad8afa

CharString * CharString::format(CharString *__return_storage_ptr__,char *formatStr,...)

{
  int length;
  CharStringData *this;
  char *buffer;
  
                    /* Unresolved local var: va_list argList@[???]
                       Unresolved local var: int32 length@[???]
                       Unresolved local var: CharStringData * newData@[???] */
  length = vsnprintf((char *)0x0,0,formatStr,&stack0x0000000c);
  if (length == 0) {
    CharString(__return_storage_ptr__);
  }
  else {
    this = CharStringData::create(length);
    buffer = CharStringData::getBuffer(this);
    ss_vsprintf(buffer,length + 1,formatStr,&stack0x0000000c);
    CharString(__return_storage_ptr__,this);
  }
  return __return_storage_ptr__;
}
```

# pattern

`_ZN10CharString7patternEPKci`

`CharString::pattern(char const*, int)`

| 类 | 地址 |
|---|---|
| `CharString` | `0x08ad8a54` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad8a54  _ZN10CharString7patternEPKci
#           CharString::pattern(char const*, int)
# range [0x08ad8a54, 0x08ad8af7]
08ad8a54 +0x00:  push   %ebp
08ad8a55 +0x01:  mov    %esp,%ebp
08ad8a57 +0x03:  push   %ebx
08ad8a58 +0x04:  sub    $0x24,%esp
08ad8a5b +0x07:  mov    0x8(%ebp),%ebx
08ad8a5e +0x0a:  mov    0xc(%ebp),%eax
08ad8a61 +0x0d:  mov    %eax,(%esp)
08ad8a64 +0x10:  call   0807e3b0 <_init+0xca8>
08ad8a69 +0x15:  mov    %eax,-0x18(%ebp)
08ad8a6c +0x18:  cmpl   $0x0,-0x18(%ebp)
08ad8a70 +0x1c:  je     08ad8a78 <+0x24>
08ad8a72 +0x1e:  cmpl   $0x0,0x10(%ebp)
08ad8a76 +0x22:  jg     08ad8a84 <+0x30>
08ad8a78 +0x24:  mov    %ebx,%eax
08ad8a7a +0x26:  mov    %eax,(%esp)
08ad8a7d +0x29:  call   08ad69aa <_ZN10CharStringC1Ev>  ; CharString::CharString()
08ad8a82 +0x2e:  jmp    08ad8aee <+0x9a>
08ad8a84 +0x30:  mov    -0x18(%ebp),%eax
08ad8a87 +0x33:  imul   0x10(%ebp),%eax
08ad8a8b +0x37:  mov    %eax,(%esp)
08ad8a8e +0x3a:  call   08ad697e <_ZN14CharStringData16createTerminatedEi>  ; CharStringData::createTerminated(int)
08ad8a93 +0x3f:  mov    %eax,-0x14(%ebp)
08ad8a96 +0x42:  mov    -0x14(%ebp),%eax
08ad8a99 +0x45:  mov    %eax,(%esp)
08ad8a9c +0x48:  call   08ad6942 <_ZN14CharStringData9getBufferEv>  ; CharStringData::getBuffer()
08ad8aa1 +0x4d:  mov    %eax,-0x10(%ebp)
08ad8aa4 +0x50:  movl   $0x0,-0xc(%ebp)
08ad8aab +0x57:  jmp    08ad8ad0 <+0x7c>
08ad8aad +0x59:  mov    -0x18(%ebp),%eax
08ad8ab0 +0x5c:  mov    %eax,0x8(%esp)
08ad8ab4 +0x60:  mov    0xc(%ebp),%eax
08ad8ab7 +0x63:  mov    %eax,0x4(%esp)
08ad8abb +0x67:  mov    -0x10(%ebp),%eax
08ad8abe +0x6a:  mov    %eax,(%esp)
08ad8ac1 +0x6d:  call   0807d8a0 <_init+0x198>
08ad8ac6 +0x72:  mov    -0x18(%ebp),%eax
08ad8ac9 +0x75:  add    %eax,-0x10(%ebp)
08ad8acc +0x78:  addl   $0x1,-0xc(%ebp)
08ad8ad0 +0x7c:  mov    -0xc(%ebp),%eax
08ad8ad3 +0x7f:  cmp    0x10(%ebp),%eax
08ad8ad6 +0x82:  setl   %al
08ad8ad9 +0x85:  test   %al,%al
08ad8adb +0x87:  jne    08ad8aad <+0x59>
08ad8add +0x89:  mov    %ebx,%eax
08ad8adf +0x8b:  mov    -0x14(%ebp),%edx
08ad8ae2 +0x8e:  mov    %edx,0x4(%esp)
08ad8ae6 +0x92:  mov    %eax,(%esp)
08ad8ae9 +0x95:  call   08ad6ba0 <_ZN10CharStringC1EP14CharStringData>  ; CharString::CharString(CharStringData*)
08ad8aee +0x9a:  mov    %ebx,%eax
08ad8af0 +0x9c:  mov    %ebx,%eax
08ad8af2 +0x9e:  add    $0x24,%esp
08ad8af5 +0xa1:  pop    %ebx
08ad8af6 +0xa2:  pop    %ebp
08ad8af7 +0xa3:  ret    $0x4
```

## 反编译 C

```c
// CharString::pattern @ 0x8ad8a54

CharString * CharString::pattern(CharString *__return_storage_ptr__,char *pattern,int32 count)

{
  size_t __n;
  CharStringData *this;
  char *local_14;
  int local_10;
  
                    /* Unresolved local var: int32 patternLen@[???]
                       Unresolved local var: CharStringData * newData@[???]
                       Unresolved local var: char * buffer@[???] */
  __n = strlen(pattern);
  if ((__n == 0) || (count < 1)) {
    CharString(__return_storage_ptr__);
  }
  else {
    this = CharStringData::createTerminated(__n * count);
    local_14 = CharStringData::getBuffer(this);
                    /* Unresolved local var: int32 i@[???] */
    for (local_10 = 0; local_10 < count; local_10 = local_10 + 1) {
      memcpy(local_14,pattern,__n);
      local_14 = local_14 + __n;
    }
    CharString(__return_storage_ptr__,this);
  }
  return __return_storage_ptr__;
}
```

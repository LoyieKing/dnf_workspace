# concat

`_ZN10CharString6concatEPKcRKS_`

`CharString::concat(char const*, CharString const&)`

| 类 | 地址 |
|---|---|
| `CharString` | `0x08ad8896` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad8896  _ZN10CharString6concatEPKcRKS_
#           CharString::concat(char const*, CharString const&)
# range [0x08ad8896, 0x08ad88db]
08ad8896 +0x00:  push   %ebp
08ad8897 +0x01:  mov    %esp,%ebp
08ad8899 +0x03:  push   %esi
08ad889a +0x04:  push   %ebx
08ad889b +0x05:  sub    $0x10,%esp
08ad889e +0x08:  mov    0x8(%ebp),%ebx
08ad88a1 +0x0b:  mov    %ebx,%esi
08ad88a3 +0x0d:  mov    0xc(%ebp),%eax
08ad88a6 +0x10:  mov    %eax,(%esp)
08ad88a9 +0x13:  call   0807e3b0 <_init+0xca8>
08ad88ae +0x18:  mov    0x10(%ebp),%edx
08ad88b1 +0x1b:  mov    %edx,0xc(%esp)
08ad88b5 +0x1f:  mov    %eax,0x8(%esp)
08ad88b9 +0x23:  mov    0xc(%ebp),%eax
08ad88bc +0x26:  mov    %eax,0x4(%esp)
08ad88c0 +0x2a:  mov    %esi,(%esp)
08ad88c3 +0x2d:  call   08ad88dc <_ZN10CharString6concatEPKciRKS_>  ; CharString::concat(char const*, int, CharString const&)
08ad88c8 +0x32:  sub    $0x4,%esp
08ad88cb +0x35:  mov    %ebx,%eax
08ad88cd +0x37:  mov    %ebx,%eax
08ad88cf +0x39:  lea    -0x8(%ebp),%esp
08ad88d2 +0x3c:  add    $0x0,%esp
08ad88d5 +0x3f:  pop    %ebx
08ad88d6 +0x40:  pop    %esi
08ad88d7 +0x41:  pop    %ebp
08ad88d8 +0x42:  ret    $0x4
08ad88db +0x45:  nop
```

## 反编译 C

```c
// CharString::concat @ 0x8ad8896

CharString * CharString::concat(CharString *__return_storage_ptr__,char *src1,CharString *src2)

{
  size_t len1;
  
  len1 = strlen(src1);
  concat(__return_storage_ptr__,src1,len1,src2);
  return __return_storage_ptr__;
}
```

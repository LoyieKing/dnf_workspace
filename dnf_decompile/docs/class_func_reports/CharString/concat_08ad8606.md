# concat

`_ZN10CharString6concatERKS_PKc`

`CharString::concat(CharString const&, char const*)`

| 类 | 地址 |
|---|---|
| `CharString` | `0x08ad8606` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad8606  _ZN10CharString6concatERKS_PKc
#           CharString::concat(CharString const&, char const*)
# range [0x08ad8606, 0x08ad864b]
08ad8606 +0x00:  push   %ebp
08ad8607 +0x01:  mov    %esp,%ebp
08ad8609 +0x03:  push   %esi
08ad860a +0x04:  push   %ebx
08ad860b +0x05:  sub    $0x10,%esp
08ad860e +0x08:  mov    0x8(%ebp),%ebx
08ad8611 +0x0b:  mov    %ebx,%esi
08ad8613 +0x0d:  mov    0x10(%ebp),%eax
08ad8616 +0x10:  mov    %eax,(%esp)
08ad8619 +0x13:  call   0807e3b0 <_init+0xca8>
08ad861e +0x18:  mov    %eax,0xc(%esp)
08ad8622 +0x1c:  mov    0x10(%ebp),%eax
08ad8625 +0x1f:  mov    %eax,0x8(%esp)
08ad8629 +0x23:  mov    0xc(%ebp),%eax
08ad862c +0x26:  mov    %eax,0x4(%esp)
08ad8630 +0x2a:  mov    %esi,(%esp)
08ad8633 +0x2d:  call   08ad864c <_ZN10CharString6concatERKS_PKci>  ; CharString::concat(CharString const&, char const*, int)
08ad8638 +0x32:  sub    $0x4,%esp
08ad863b +0x35:  mov    %ebx,%eax
08ad863d +0x37:  mov    %ebx,%eax
08ad863f +0x39:  lea    -0x8(%ebp),%esp
08ad8642 +0x3c:  add    $0x0,%esp
08ad8645 +0x3f:  pop    %ebx
08ad8646 +0x40:  pop    %esi
08ad8647 +0x41:  pop    %ebp
08ad8648 +0x42:  ret    $0x4
08ad864b +0x45:  nop
```

## 反编译 C

```c
// CharString::concat @ 0x8ad8606

CharString * CharString::concat(CharString *__return_storage_ptr__,CharString *src1,char *src2)

{
  size_t len2;
  
  len2 = strlen(src2);
  concat(__return_storage_ptr__,src1,src2,len2);
  return __return_storage_ptr__;
}
```

# concat

`_ZN10WideString6concatERKS_PKw`

`WideString::concat(WideString const&, wchar_t const*)`

| 类 | 地址 |
|---|---|
| `WideString` | `0x08adb6ee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08adb6ee  _ZN10WideString6concatERKS_PKw
#           WideString::concat(WideString const&, wchar_t const*)
# range [0x08adb6ee, 0x08adb733]
08adb6ee +0x00:  push   %ebp
08adb6ef +0x01:  mov    %esp,%ebp
08adb6f1 +0x03:  push   %esi
08adb6f2 +0x04:  push   %ebx
08adb6f3 +0x05:  sub    $0x10,%esp
08adb6f6 +0x08:  mov    0x8(%ebp),%ebx
08adb6f9 +0x0b:  mov    %ebx,%esi
08adb6fb +0x0d:  mov    0x10(%ebp),%eax
08adb6fe +0x10:  mov    %eax,(%esp)
08adb701 +0x13:  call   0807e130 <_init+0xa28>
08adb706 +0x18:  mov    %eax,0xc(%esp)
08adb70a +0x1c:  mov    0x10(%ebp),%eax
08adb70d +0x1f:  mov    %eax,0x8(%esp)
08adb711 +0x23:  mov    0xc(%ebp),%eax
08adb714 +0x26:  mov    %eax,0x4(%esp)
08adb718 +0x2a:  mov    %esi,(%esp)
08adb71b +0x2d:  call   08adb734 <_ZN10WideString6concatERKS_PKwi>  ; WideString::concat(WideString const&, wchar_t const*, int)
08adb720 +0x32:  sub    $0x4,%esp
08adb723 +0x35:  mov    %ebx,%eax
08adb725 +0x37:  mov    %ebx,%eax
08adb727 +0x39:  lea    -0x8(%ebp),%esp
08adb72a +0x3c:  add    $0x0,%esp
08adb72d +0x3f:  pop    %ebx
08adb72e +0x40:  pop    %esi
08adb72f +0x41:  pop    %ebp
08adb730 +0x42:  ret    $0x4
08adb733 +0x45:  nop
```

## 反编译 C

```c
// WideString::concat @ 0x8adb6ee

WideString * WideString::concat(WideString *__return_storage_ptr__,WideString *src1,wchar *src2)

{
  size_t len2;
  
  len2 = wcslen(src2);
  concat(__return_storage_ptr__,src1,src2,len2);
  return __return_storage_ptr__;
}
```

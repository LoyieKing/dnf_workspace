# concat

`_ZN10CharString6concatEPKcS1_`

`CharString::concat(char const*, char const*)`

| 类 | 地址 |
|---|---|
| `CharString` | `0x08ad8510` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad8510  _ZN10CharString6concatEPKcS1_
#           CharString::concat(char const*, char const*)
# range [0x08ad8510, 0x08ad8565]
08ad8510 +0x00:  push   %ebp
08ad8511 +0x01:  mov    %esp,%ebp
08ad8513 +0x03:  push   %edi
08ad8514 +0x04:  push   %esi
08ad8515 +0x05:  push   %ebx
08ad8516 +0x06:  sub    $0x2c,%esp
08ad8519 +0x09:  mov    0x8(%ebp),%ebx
08ad851c +0x0c:  mov    %ebx,%esi
08ad851e +0x0e:  mov    0x10(%ebp),%eax
08ad8521 +0x11:  mov    %eax,(%esp)
08ad8524 +0x14:  call   0807e3b0 <_init+0xca8>
08ad8529 +0x19:  mov    %eax,%edi
08ad852b +0x1b:  mov    0xc(%ebp),%eax
08ad852e +0x1e:  mov    %eax,(%esp)
08ad8531 +0x21:  call   0807e3b0 <_init+0xca8>
08ad8536 +0x26:  mov    %edi,0x10(%esp)
08ad853a +0x2a:  mov    0x10(%ebp),%edx
08ad853d +0x2d:  mov    %edx,0xc(%esp)
08ad8541 +0x31:  mov    %eax,0x8(%esp)
08ad8545 +0x35:  mov    0xc(%ebp),%eax
08ad8548 +0x38:  mov    %eax,0x4(%esp)
08ad854c +0x3c:  mov    %esi,(%esp)
08ad854f +0x3f:  call   08ad8568 <_ZN10CharString6concatEPKciS1_i>  ; CharString::concat(char const*, int, char const*, int)
08ad8554 +0x44:  sub    $0x4,%esp
08ad8557 +0x47:  mov    %ebx,%eax
08ad8559 +0x49:  mov    %ebx,%eax
08ad855b +0x4b:  lea    -0xc(%ebp),%esp
08ad855e +0x4e:  add    $0x0,%esp
08ad8561 +0x51:  pop    %ebx
08ad8562 +0x52:  pop    %esi
08ad8563 +0x53:  pop    %edi
08ad8564 +0x54:  pop    %ebp
08ad8565 +0x55:  ret    $0x4
```

## 反编译 C

```c
// CharString::concat @ 0x8ad8510

CharString * CharString::concat(CharString *__return_storage_ptr__,char *src1,char *src2)

{
  size_t len2;
  size_t len1;
  
  len2 = strlen(src2);
  len1 = strlen(src1);
  concat(__return_storage_ptr__,src1,len1,src2,len2);
  return __return_storage_ptr__;
}
```

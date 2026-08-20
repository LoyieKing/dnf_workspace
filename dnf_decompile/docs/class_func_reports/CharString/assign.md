# assign

`_ZN10CharString6assignEPKc`

`CharString::assign(char const*)`

| 类 | 地址 |
|---|---|
| `CharString` | `0x08ad6f42` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad6f42  _ZN10CharString6assignEPKc
#           CharString::assign(char const*)
# range [0x08ad6f42, 0x08ad6f6b]
08ad6f42 +0x00:  push   %ebp
08ad6f43 +0x01:  mov    %esp,%ebp
08ad6f45 +0x03:  sub    $0x18,%esp
08ad6f48 +0x06:  mov    0xc(%ebp),%eax
08ad6f4b +0x09:  mov    %eax,(%esp)
08ad6f4e +0x0c:  call   0807e3b0 <_init+0xca8>
08ad6f53 +0x11:  mov    %eax,0x8(%esp)
08ad6f57 +0x15:  mov    0xc(%ebp),%eax
08ad6f5a +0x18:  mov    %eax,0x4(%esp)
08ad6f5e +0x1c:  mov    0x8(%ebp),%eax
08ad6f61 +0x1f:  mov    %eax,(%esp)
08ad6f64 +0x22:  call   08ad6f6c <_ZN10CharString6assignEPKci>  ; CharString::assign(char const*, int)
08ad6f69 +0x27:  leave
08ad6f6a +0x28:  ret
08ad6f6b +0x29:  nop
```

## 反编译 C

```c
// CharString::assign @ 0x8ad6f42

/* DWARF original prototype: void assign(CharString * this, char * src) */

void __thiscall CharString::assign(CharString *this,char *src)

{
  size_t srcLength;
  
  srcLength = strlen(src);
  assign(this,src,srcLength);
  return;
}
```

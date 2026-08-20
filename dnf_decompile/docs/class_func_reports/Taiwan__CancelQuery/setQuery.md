# setQuery

`_ZN6Taiwan11CancelQuery8setQueryER5MySQL`

`Taiwan::CancelQuery::setQuery(MySQL&)`

| 类 | 地址 |
|---|---|
| `Taiwan::CancelQuery` | `0x08174d08` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08174d08  _ZN6Taiwan11CancelQuery8setQueryER5MySQL
#           Taiwan::CancelQuery::setQuery(MySQL&)
# range [0x08174d08, 0x08174d43]
08174d08 +0x00:  push   %ebp
08174d09 +0x01:  mov    %esp,%ebp
08174d0b +0x03:  sub    $0x18,%esp
08174d0e +0x06:  mov    0x8(%ebp),%eax
08174d11 +0x09:  mov    0xc(%eax),%edx
08174d14 +0x0c:  mov    0x8(%eax),%eax
08174d17 +0x0f:  movl   $0x0,0x8(%esp)
08174d1f +0x17:  mov    %eax,(%esp)
08174d22 +0x1a:  mov    %edx,0x4(%esp)
08174d26 +0x1e:  call   08109098 <_Z14NumberToStringyi>  ; NumberToString(unsigned long long, int)
08174d2b +0x23:  mov    %eax,0x8(%esp)
08174d2f +0x27:  movl   $"call usp_cancel(%s, @out_code)",0x4(%esp)
08174d37 +0x2f:  mov    0xc(%ebp),%eax
08174d3a +0x32:  mov    %eax,(%esp)
08174d3d +0x35:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08174d42 +0x3a:  leave
08174d43 +0x3b:  ret
```

## 反编译 C

```c
// Taiwan::CancelQuery::setQuery @ 0x8174d08

/* Taiwan::CancelQuery::setQuery(MySQL&) */

void __thiscall Taiwan::CancelQuery::setQuery(CancelQuery *this,MySQL *param_1)

{
  undefined4 uVar1;
  
  uVar1 = NumberToString(*(ulonglong *)(this + 8),0);
  MySQL::set_query(param_1,"call usp_cancel(%s, @out_code)",uVar1);
  return;
}
```

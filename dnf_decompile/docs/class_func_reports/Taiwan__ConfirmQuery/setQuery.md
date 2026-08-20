# setQuery

`_ZN6Taiwan12ConfirmQuery8setQueryER5MySQL`

`Taiwan::ConfirmQuery::setQuery(MySQL&)`

| 类 | 地址 |
|---|---|
| `Taiwan::ConfirmQuery` | `0x08174aec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08174aec  _ZN6Taiwan12ConfirmQuery8setQueryER5MySQL
#           Taiwan::ConfirmQuery::setQuery(MySQL&)
# range [0x08174aec, 0x08174b27]
08174aec +0x00:  push   %ebp
08174aed +0x01:  mov    %esp,%ebp
08174aef +0x03:  sub    $0x18,%esp
08174af2 +0x06:  mov    0x8(%ebp),%eax
08174af5 +0x09:  mov    0xc(%eax),%edx
08174af8 +0x0c:  mov    0x8(%eax),%eax
08174afb +0x0f:  movl   $0x0,0x8(%esp)
08174b03 +0x17:  mov    %eax,(%esp)
08174b06 +0x1a:  mov    %edx,0x4(%esp)
08174b0a +0x1e:  call   08109098 <_Z14NumberToStringyi>  ; NumberToString(unsigned long long, int)
08174b0f +0x23:  mov    %eax,0x8(%esp)
08174b13 +0x27:  movl   $"call usp_confirm(%s, @out_code)",0x4(%esp)
08174b1b +0x2f:  mov    0xc(%ebp),%eax
08174b1e +0x32:  mov    %eax,(%esp)
08174b21 +0x35:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08174b26 +0x3a:  leave
08174b27 +0x3b:  ret
```

## 反编译 C

```c
// Taiwan::ConfirmQuery::setQuery @ 0x8174aec

/* Taiwan::ConfirmQuery::setQuery(MySQL&) */

void __thiscall Taiwan::ConfirmQuery::setQuery(ConfirmQuery *this,MySQL *param_1)

{
  undefined4 uVar1;
  
  uVar1 = NumberToString(*(ulonglong *)(this + 8),0);
  MySQL::set_query(param_1,"call usp_confirm(%s, @out_code)",uVar1);
  return;
}
```

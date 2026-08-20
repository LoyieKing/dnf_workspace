# setQuery

`_ZN6Taiwan9GiftQuery8setQueryER5MySQL`

`Taiwan::GiftQuery::setQuery(MySQL&)`

| 类 | 地址 |
|---|---|
| `Taiwan::GiftQuery` | `0x08174866` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08174866  _ZN6Taiwan9GiftQuery8setQueryER5MySQL
#           Taiwan::GiftQuery::setQuery(MySQL&)
# range [0x08174866, 0x081748b9]
08174866 +0x00:  push   %ebp
08174867 +0x01:  mov    %esp,%ebp
08174869 +0x03:  push   %esi
0817486a +0x04:  push   %ebx
0817486b +0x05:  sub    $0x20,%esp
0817486e +0x08:  mov    0x8(%ebp),%eax
08174871 +0x0b:  mov    0x18(%eax),%esi
08174874 +0x0e:  mov    0x8(%ebp),%eax
08174877 +0x11:  mov    0x14(%eax),%ebx
0817487a +0x14:  mov    0x8(%ebp),%eax
0817487d +0x17:  mov    0x8(%eax),%ecx
08174880 +0x1a:  mov    0x8(%ebp),%eax
08174883 +0x1d:  mov    0x4(%eax),%edx
08174886 +0x20:  mov    0x8(%ebp),%eax
08174889 +0x23:  mov    (%eax),%eax
0817488b +0x25:  mov    %esi,0x18(%esp)
0817488f +0x29:  mov    %ebx,0x14(%esp)
08174893 +0x2d:  mov    %ecx,0x10(%esp)
08174897 +0x31:  mov    %edx,0xc(%esp)
0817489b +0x35:  mov    %eax,0x8(%esp)
0817489f +0x39:  movl   $"call usp_gift('%s', '%s', '%s', %u, %u, @out_tran, @out_code)",0x4(%esp)
081748a7 +0x41:  mov    0xc(%ebp),%eax
081748aa +0x44:  mov    %eax,(%esp)
081748ad +0x47:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
081748b2 +0x4c:  add    $0x20,%esp
081748b5 +0x4f:  pop    %ebx
081748b6 +0x50:  pop    %esi
081748b7 +0x51:  pop    %ebp
081748b8 +0x52:  ret
081748b9 +0x53:  nop
```

## 反编译 C

```c
// Taiwan::GiftQuery::setQuery @ 0x8174866

/* Taiwan::GiftQuery::setQuery(MySQL&) */

void __thiscall Taiwan::GiftQuery::setQuery(GiftQuery *this,MySQL *param_1)

{
  MySQL::set_query(param_1,"call usp_gift(\'%s\', \'%s\', \'%s\', %u, %u, @out_tran, @out_code)",
                   *(undefined4 *)this,*(undefined4 *)(this + 4),*(undefined4 *)(this + 8),
                   *(undefined4 *)(this + 0x14),*(undefined4 *)(this + 0x18));
  return;
}
```

# setQuery

`_ZN6Taiwan13PurchaseQuery8setQueryER5MySQL`

`Taiwan::PurchaseQuery::setQuery(MySQL&)`

| 类 | 地址 |
|---|---|
| `Taiwan::PurchaseQuery` | `0x081745aa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081745aa  _ZN6Taiwan13PurchaseQuery8setQueryER5MySQL
#           Taiwan::PurchaseQuery::setQuery(MySQL&)
# range [0x081745aa, 0x081745f1]
081745aa +0x00:  push   %ebp
081745ab +0x01:  mov    %esp,%ebp
081745ad +0x03:  push   %ebx
081745ae +0x04:  sub    $0x24,%esp
081745b1 +0x07:  mov    0x8(%ebp),%eax
081745b4 +0x0a:  mov    0x14(%eax),%ebx
081745b7 +0x0d:  mov    0x8(%ebp),%eax
081745ba +0x10:  mov    0x8(%eax),%ecx
081745bd +0x13:  mov    0x8(%ebp),%eax
081745c0 +0x16:  mov    0x4(%eax),%edx
081745c3 +0x19:  mov    0x8(%ebp),%eax
081745c6 +0x1c:  mov    (%eax),%eax
081745c8 +0x1e:  mov    %ebx,0x14(%esp)
081745cc +0x22:  mov    %ecx,0x10(%esp)
081745d0 +0x26:  mov    %edx,0xc(%esp)
081745d4 +0x2a:  mov    %eax,0x8(%esp)
081745d8 +0x2e:  movl   $"call usp_purchase('%s', '%s', %u, %u, @out_tran, @out_code)",0x4(%esp)
081745e0 +0x36:  mov    0xc(%ebp),%eax
081745e3 +0x39:  mov    %eax,(%esp)
081745e6 +0x3c:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
081745eb +0x41:  add    $0x24,%esp
081745ee +0x44:  pop    %ebx
081745ef +0x45:  pop    %ebp
081745f0 +0x46:  ret
081745f1 +0x47:  nop
```

## 反编译 C

```c
// Taiwan::PurchaseQuery::setQuery @ 0x81745aa

/* Taiwan::PurchaseQuery::setQuery(MySQL&) */

void __thiscall Taiwan::PurchaseQuery::setQuery(PurchaseQuery *this,MySQL *param_1)

{
  MySQL::set_query(param_1,"call usp_purchase(\'%s\', \'%s\', %u, %u, @out_tran, @out_code)",
                   *(undefined4 *)this,*(undefined4 *)(this + 4),*(undefined4 *)(this + 8),
                   *(undefined4 *)(this + 0x14));
  return;
}
```

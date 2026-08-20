# setQuery

`_ZN6Taiwan11ChargeQuery8setQueryER5MySQL`

`Taiwan::ChargeQuery::setQuery(MySQL&)`

| 类 | 地址 |
|---|---|
| `Taiwan::ChargeQuery` | `0x08174f52` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08174f52  _ZN6Taiwan11ChargeQuery8setQueryER5MySQL
#           Taiwan::ChargeQuery::setQuery(MySQL&)
# range [0x08174f52, 0x08174fa9]
08174f52 +0x00:  push   %ebp
08174f53 +0x01:  mov    %esp,%ebp
08174f55 +0x03:  push   %esi
08174f56 +0x04:  push   %ebx
08174f57 +0x05:  sub    $0x20,%esp
08174f5a +0x08:  mov    0x8(%ebp),%eax
08174f5d +0x0b:  movzbl 0x10(%eax),%eax
08174f61 +0x0f:  movsbl %al,%esi
08174f64 +0x12:  mov    0x8(%ebp),%eax
08174f67 +0x15:  mov    0xc(%eax),%ebx
08174f6a +0x18:  mov    0x8(%ebp),%eax
08174f6d +0x1b:  mov    0x8(%eax),%ecx
08174f70 +0x1e:  mov    0x8(%ebp),%eax
08174f73 +0x21:  mov    0x4(%eax),%edx
08174f76 +0x24:  mov    0x8(%ebp),%eax
08174f79 +0x27:  mov    (%eax),%eax
08174f7b +0x29:  mov    %esi,0x18(%esp)
08174f7f +0x2d:  mov    %ebx,0x14(%esp)
08174f83 +0x31:  mov    %ecx,0x10(%esp)
08174f87 +0x35:  mov    %edx,0xc(%esp)
08174f8b +0x39:  mov    %eax,0x8(%esp)
08174f8f +0x3d:  movl   $"call usp_recharge('%s', '%s', '%s', %u, %d, @out_tran, @out_code)",0x4(%esp)
08174f97 +0x45:  mov    0xc(%ebp),%eax
08174f9a +0x48:  mov    %eax,(%esp)
08174f9d +0x4b:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08174fa2 +0x50:  add    $0x20,%esp
08174fa5 +0x53:  pop    %ebx
08174fa6 +0x54:  pop    %esi
08174fa7 +0x55:  pop    %ebp
08174fa8 +0x56:  ret
08174fa9 +0x57:  nop
```

## 反编译 C

```c
// Taiwan::ChargeQuery::setQuery @ 0x8174f52

/* Taiwan::ChargeQuery::setQuery(MySQL&) */

void __thiscall Taiwan::ChargeQuery::setQuery(ChargeQuery *this,MySQL *param_1)

{
  MySQL::set_query(param_1,"call usp_recharge(\'%s\', \'%s\', \'%s\', %u, %d, @out_tran, @out_code)"
                   ,*(undefined4 *)this,*(undefined4 *)(this + 4),*(undefined4 *)(this + 8),
                   *(undefined4 *)(this + 0xc),(int)(char)this[0x10]);
  return;
}
```

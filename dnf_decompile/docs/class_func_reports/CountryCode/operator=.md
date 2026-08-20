# operator=

`_ZN11CountryCodeaSEPKc`

`CountryCode::operator=(char const*)`

| 类 | 地址 |
|---|---|
| `CountryCode` | `0x08ad32e2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad32e2  _ZN11CountryCodeaSEPKc
#           CountryCode::operator=(char const*)
# range [0x08ad32e2, 0x08ad3307]
08ad32e2 +0x00:  push   %ebp
08ad32e3 +0x01:  mov    %esp,%ebp
08ad32e5 +0x03:  sub    $0x18,%esp
08ad32e8 +0x06:  mov    0xc(%ebp),%eax
08ad32eb +0x09:  mov    %eax,0x4(%esp)
08ad32ef +0x0d:  lea    -0x1(%ebp),%eax
08ad32f2 +0x10:  mov    %eax,(%esp)
08ad32f5 +0x13:  call   08ad2fb0 <_ZN11CountryCodeC1EPKc>  ; CountryCode::CountryCode(char const*)
08ad32fa +0x18:  mov    0x8(%ebp),%eax
08ad32fd +0x1b:  movzbl -0x1(%ebp),%edx
08ad3301 +0x1f:  mov    %dl,(%eax)
08ad3303 +0x21:  mov    0x8(%ebp),%eax
08ad3306 +0x24:  leave
08ad3307 +0x25:  ret
```

## 反编译 C

```c
// CountryCode::operator= @ 0x8ad32e2

/* DWARF original prototype: CountryCode * operator=(CountryCode * this, char * a2Code) */

CountryCode * __thiscall CountryCode::operator=(CountryCode *this,char *a2Code)

{
  CountryCode local_5;
  
  CountryCode(&local_5,a2Code);
  this->idx_ = (byte)local_5;
  return this;
}
```

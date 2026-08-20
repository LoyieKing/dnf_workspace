# CountryCode

`_ZN11CountryCodeC1EPKw`

`CountryCode::CountryCode(wchar_t const*)`

| 类 | 地址 |
|---|---|
| `CountryCode` | `0x08ad309a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad309a  _ZN11CountryCodeC1EPKw
#           CountryCode::CountryCode(wchar_t const*)
# range [0x08ad309a, 0x08ad3171]
08ad309a +0x00:  push   %ebp
08ad309b +0x01:  mov    %esp,%ebp
08ad309d +0x03:  sub    $0x10,%esp
08ad30a0 +0x06:  mov    0xc(%ebp),%eax
08ad30a3 +0x09:  mov    (%eax),%eax
08ad30a5 +0x0b:  cmp    $0x60,%eax
08ad30a8 +0x0e:  jle    08ad30c6 <+0x2c>
08ad30aa +0x10:  mov    0xc(%ebp),%eax
08ad30ad +0x13:  mov    (%eax),%eax
08ad30af +0x15:  cmp    $0x7a,%eax
08ad30b2 +0x18:  jg     08ad30c6 <+0x2c>
08ad30b4 +0x1a:  mov    0xc(%ebp),%eax
08ad30b7 +0x1d:  mov    (%eax),%eax
08ad30b9 +0x1f:  imul   $0x1a,%eax,%eax
08ad30bc +0x22:  sub    $0x9da,%eax
08ad30c1 +0x27:  mov    %eax,-0x4(%ebp)
08ad30c4 +0x2a:  jmp    08ad30f4 <+0x5a>
08ad30c6 +0x2c:  mov    0xc(%ebp),%eax
08ad30c9 +0x2f:  mov    (%eax),%eax
08ad30cb +0x31:  cmp    $0x40,%eax
08ad30ce +0x34:  jle    08ad30ec <+0x52>
08ad30d0 +0x36:  mov    0xc(%ebp),%eax
08ad30d3 +0x39:  mov    (%eax),%eax
08ad30d5 +0x3b:  cmp    $0x5a,%eax
08ad30d8 +0x3e:  jg     08ad30ec <+0x52>
08ad30da +0x40:  mov    0xc(%ebp),%eax
08ad30dd +0x43:  mov    (%eax),%eax
08ad30df +0x45:  imul   $0x1a,%eax,%eax
08ad30e2 +0x48:  sub    $0x69a,%eax
08ad30e7 +0x4d:  mov    %eax,-0x4(%ebp)
08ad30ea +0x50:  jmp    08ad30f4 <+0x5a>
08ad30ec +0x52:  mov    0x8(%ebp),%eax
08ad30ef +0x55:  movb   $0x0,(%eax)
08ad30f2 +0x58:  jmp    08ad316f <+0xd5>
08ad30f4 +0x5a:  mov    0xc(%ebp),%eax
08ad30f7 +0x5d:  add    $0x4,%eax
08ad30fa +0x60:  mov    (%eax),%eax
08ad30fc +0x62:  cmp    $0x60,%eax
08ad30ff +0x65:  jle    08ad311e <+0x84>
08ad3101 +0x67:  mov    0xc(%ebp),%eax
08ad3104 +0x6a:  add    $0x4,%eax
08ad3107 +0x6d:  mov    (%eax),%eax
08ad3109 +0x6f:  cmp    $0x7a,%eax
08ad310c +0x72:  jg     08ad311e <+0x84>
08ad310e +0x74:  mov    0xc(%ebp),%eax
08ad3111 +0x77:  add    $0x4,%eax
08ad3114 +0x7a:  mov    (%eax),%eax
08ad3116 +0x7c:  sub    $0x61,%eax
08ad3119 +0x7f:  add    %eax,-0x4(%ebp)
08ad311c +0x82:  jmp    08ad3150 <+0xb6>
08ad311e +0x84:  mov    0xc(%ebp),%eax
08ad3121 +0x87:  add    $0x4,%eax
08ad3124 +0x8a:  mov    (%eax),%eax
08ad3126 +0x8c:  cmp    $0x40,%eax
08ad3129 +0x8f:  jle    08ad3148 <+0xae>
08ad312b +0x91:  mov    0xc(%ebp),%eax
08ad312e +0x94:  add    $0x4,%eax
08ad3131 +0x97:  mov    (%eax),%eax
08ad3133 +0x99:  cmp    $0x5a,%eax
08ad3136 +0x9c:  jg     08ad3148 <+0xae>
08ad3138 +0x9e:  mov    0xc(%ebp),%eax
08ad313b +0xa1:  add    $0x4,%eax
08ad313e +0xa4:  mov    (%eax),%eax
08ad3140 +0xa6:  sub    $0x41,%eax
08ad3143 +0xa9:  add    %eax,-0x4(%ebp)
08ad3146 +0xac:  jmp    08ad3150 <+0xb6>
08ad3148 +0xae:  mov    0x8(%ebp),%eax
08ad314b +0xb1:  movb   $0x0,(%eax)
08ad314e +0xb4:  jmp    08ad316f <+0xd5>
08ad3150 +0xb6:  mov    -0x4(%ebp),%eax
08ad3153 +0xb9:  movzbl &_ZL8ccTable2(%eax),%edx
08ad315a +0xc0:  mov    0x8(%ebp),%eax
08ad315d +0xc3:  mov    %dl,(%eax)
08ad315f +0xc5:  mov    0x8(%ebp),%eax
08ad3162 +0xc8:  movzbl (%eax),%eax
08ad3165 +0xcb:  cmp    $0xff,%al
08ad3167 +0xcd:  jne    08ad316f <+0xd5>
08ad3169 +0xcf:  mov    0x8(%ebp),%eax
08ad316c +0xd2:  movb   $0x0,(%eax)
08ad316f +0xd5:  leave
08ad3170 +0xd6:  ret
08ad3171 +0xd7:  nop
```

## 反编译 C

```c
// CountryCode::CountryCode @ 0x8ad309a

/* DWARF original prototype: void CountryCode(CountryCode * this, wchar * a2Code) */

void __thiscall CountryCode::CountryCode(CountryCode *this,wchar *a2Code)

{
  int iVar1;
  int local_8;
  
                    /* Unresolved local var: int32 idx@[???] */
  if ((*a2Code < 0x61) || (0x7a < *a2Code)) {
    if ((*a2Code < 0x41) || (0x5a < *a2Code)) {
      this->idx_ = '\0';
      return;
    }
    local_8 = *a2Code * 0x1a + -0x69a;
  }
  else {
    local_8 = *a2Code * 0x1a + -0x9da;
  }
  if ((a2Code[1] < 0x61) || (0x7a < a2Code[1])) {
    if ((a2Code[1] < 0x41) || (0x5a < a2Code[1])) {
      this->idx_ = '\0';
      return;
    }
    iVar1 = a2Code[1] + -0x41;
  }
  else {
    iVar1 = a2Code[1] + -0x61;
  }
  local_8 = local_8 + iVar1;
  this->idx_ = ""[local_8];
  if (this->idx_ == 0xff) {
    this->idx_ = '\0';
  }
  return;
}
```

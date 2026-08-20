# CountryCode

`_ZN11CountryCodeC1EPKc`

`CountryCode::CountryCode(char const*)`

| 类 | 地址 |
|---|---|
| `CountryCode` | `0x08ad2fb0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad2fb0  _ZN11CountryCodeC1EPKc
#           CountryCode::CountryCode(char const*)
# range [0x08ad2fb0, 0x08ad3099]
08ad2fb0 +0x00:  push   %ebp
08ad2fb1 +0x01:  mov    %esp,%ebp
08ad2fb3 +0x03:  sub    $0x10,%esp
08ad2fb6 +0x06:  mov    0xc(%ebp),%eax
08ad2fb9 +0x09:  movzbl (%eax),%eax
08ad2fbc +0x0c:  cmp    $0x60,%al
08ad2fbe +0x0e:  jle    08ad2fe0 <+0x30>
08ad2fc0 +0x10:  mov    0xc(%ebp),%eax
08ad2fc3 +0x13:  movzbl (%eax),%eax
08ad2fc6 +0x16:  cmp    $0x7a,%al
08ad2fc8 +0x18:  jg     08ad2fe0 <+0x30>
08ad2fca +0x1a:  mov    0xc(%ebp),%eax
08ad2fcd +0x1d:  movzbl (%eax),%eax
08ad2fd0 +0x20:  movsbl %al,%eax
08ad2fd3 +0x23:  imul   $0x1a,%eax,%eax
08ad2fd6 +0x26:  sub    $0x9da,%eax
08ad2fdb +0x2b:  mov    %eax,-0x4(%ebp)
08ad2fde +0x2e:  jmp    08ad3015 <+0x65>
08ad2fe0 +0x30:  mov    0xc(%ebp),%eax
08ad2fe3 +0x33:  movzbl (%eax),%eax
08ad2fe6 +0x36:  cmp    $0x40,%al
08ad2fe8 +0x38:  jle    08ad300a <+0x5a>
08ad2fea +0x3a:  mov    0xc(%ebp),%eax
08ad2fed +0x3d:  movzbl (%eax),%eax
08ad2ff0 +0x40:  cmp    $0x5a,%al
08ad2ff2 +0x42:  jg     08ad300a <+0x5a>
08ad2ff4 +0x44:  mov    0xc(%ebp),%eax
08ad2ff7 +0x47:  movzbl (%eax),%eax
08ad2ffa +0x4a:  movsbl %al,%eax
08ad2ffd +0x4d:  imul   $0x1a,%eax,%eax
08ad3000 +0x50:  sub    $0x69a,%eax
08ad3005 +0x55:  mov    %eax,-0x4(%ebp)
08ad3008 +0x58:  jmp    08ad3015 <+0x65>
08ad300a +0x5a:  mov    0x8(%ebp),%eax
08ad300d +0x5d:  movb   $0x0,(%eax)
08ad3010 +0x60:  jmp    08ad3098 <+0xe8>
08ad3015 +0x65:  mov    0xc(%ebp),%eax
08ad3018 +0x68:  add    $0x1,%eax
08ad301b +0x6b:  movzbl (%eax),%eax
08ad301e +0x6e:  cmp    $0x60,%al
08ad3020 +0x70:  jle    08ad3043 <+0x93>
08ad3022 +0x72:  mov    0xc(%ebp),%eax
08ad3025 +0x75:  add    $0x1,%eax
08ad3028 +0x78:  movzbl (%eax),%eax
08ad302b +0x7b:  cmp    $0x7a,%al
08ad302d +0x7d:  jg     08ad3043 <+0x93>
08ad302f +0x7f:  mov    0xc(%ebp),%eax
08ad3032 +0x82:  add    $0x1,%eax
08ad3035 +0x85:  movzbl (%eax),%eax
08ad3038 +0x88:  movsbl %al,%eax
08ad303b +0x8b:  sub    $0x61,%eax
08ad303e +0x8e:  add    %eax,-0x4(%ebp)
08ad3041 +0x91:  jmp    08ad3079 <+0xc9>
08ad3043 +0x93:  mov    0xc(%ebp),%eax
08ad3046 +0x96:  add    $0x1,%eax
08ad3049 +0x99:  movzbl (%eax),%eax
08ad304c +0x9c:  cmp    $0x40,%al
08ad304e +0x9e:  jle    08ad3071 <+0xc1>
08ad3050 +0xa0:  mov    0xc(%ebp),%eax
08ad3053 +0xa3:  add    $0x1,%eax
08ad3056 +0xa6:  movzbl (%eax),%eax
08ad3059 +0xa9:  cmp    $0x5a,%al
08ad305b +0xab:  jg     08ad3071 <+0xc1>
08ad305d +0xad:  mov    0xc(%ebp),%eax
08ad3060 +0xb0:  add    $0x1,%eax
08ad3063 +0xb3:  movzbl (%eax),%eax
08ad3066 +0xb6:  movsbl %al,%eax
08ad3069 +0xb9:  sub    $0x41,%eax
08ad306c +0xbc:  add    %eax,-0x4(%ebp)
08ad306f +0xbf:  jmp    08ad3079 <+0xc9>
08ad3071 +0xc1:  mov    0x8(%ebp),%eax
08ad3074 +0xc4:  movb   $0x0,(%eax)
08ad3077 +0xc7:  jmp    08ad3098 <+0xe8>
08ad3079 +0xc9:  mov    -0x4(%ebp),%eax
08ad307c +0xcc:  movzbl &_ZL8ccTable2(%eax),%edx
08ad3083 +0xd3:  mov    0x8(%ebp),%eax
08ad3086 +0xd6:  mov    %dl,(%eax)
08ad3088 +0xd8:  mov    0x8(%ebp),%eax
08ad308b +0xdb:  movzbl (%eax),%eax
08ad308e +0xde:  cmp    $0xff,%al
08ad3090 +0xe0:  jne    08ad3098 <+0xe8>
08ad3092 +0xe2:  mov    0x8(%ebp),%eax
08ad3095 +0xe5:  movb   $0x0,(%eax)
08ad3098 +0xe8:  leave
08ad3099 +0xe9:  ret
```

## 反编译 C

```c
// CountryCode::CountryCode @ 0x8ad2fb0

/* DWARF original prototype: void CountryCode(CountryCode * this, char * a2Code) */

void __thiscall CountryCode::CountryCode(CountryCode *this,char *a2Code)

{
  int iVar1;
  int local_8;
  
                    /* Unresolved local var: int32 idx@[???] */
  if ((*a2Code < 'a') || ('z' < *a2Code)) {
    if ((*a2Code < 'A') || ('Z' < *a2Code)) {
      this->idx_ = '\0';
      return;
    }
    local_8 = *a2Code * 0x1a + -0x69a;
  }
  else {
    local_8 = *a2Code * 0x1a + -0x9da;
  }
  if ((a2Code[1] < 'a') || ('z' < a2Code[1])) {
    if ((a2Code[1] < 'A') || ('Z' < a2Code[1])) {
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

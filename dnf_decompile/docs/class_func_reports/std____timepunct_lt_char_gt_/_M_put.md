# _M_put

`_ZNKSt11__timepunctIcE6_M_putEPcjPKcPK2tm`

`std::__timepunct<char>::_M_put(char*, unsigned int, char const*, tm const*) const`

| 类 | 地址 |
|---|---|
| `std::__timepunct<char>` | `0x08722520` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08722520  _ZNKSt11__timepunctIcE6_M_putEPcjPKcPK2tm
#           std::__timepunct<char>::_M_put(char*, unsigned int, char const*, tm const*) const
# range [0x08722520, 0x0872255f]
08722520 +0x00:  push   %ebp
08722521 +0x01:  mov    %esp,%ebp
08722523 +0x03:  push   %ebx
08722524 +0x04:  sub    $0x24,%esp
08722527 +0x07:  mov    0x8(%ebp),%eax
0872252a +0x0a:  mov    0xc(%ebp),%ebx
0872252d +0x0d:  mov    0xc(%eax),%eax
08722530 +0x10:  mov    %ebx,(%esp)
08722533 +0x13:  mov    %eax,0x10(%esp)
08722537 +0x17:  mov    0x18(%ebp),%eax
0872253a +0x1a:  mov    %eax,0xc(%esp)
0872253e +0x1e:  mov    0x14(%ebp),%eax
08722541 +0x21:  mov    %eax,0x8(%esp)
08722545 +0x25:  mov    0x10(%ebp),%eax
08722548 +0x28:  mov    %eax,0x4(%esp)
0872254c +0x2c:  call   0807dfb0 <_init+0x8a8>
08722551 +0x31:  test   %eax,%eax
08722553 +0x33:  jne    08722558 <+0x38>
08722555 +0x35:  movb   $0x0,(%ebx)
08722558 +0x38:  add    $0x24,%esp
0872255b +0x3b:  pop    %ebx
0872255c +0x3c:  pop    %ebp
0872255d +0x3d:  ret
0872255e +0x3e:  nop
0872255f +0x3f:  nop
```

## 反编译 C

```c
// std::__timepunct<char>::_M_put @ 0x8722520

/* std::__timepunct<char>::_M_put(char*, unsigned int, char const*, tm const*) const */

void __thiscall
std::__timepunct<char>::_M_put
          (__timepunct<char> *this,char *param_1,uint param_2,char *param_3,tm *param_4)

{
  int iVar1;
  
  iVar1 = __strftime_l(param_1,param_2,param_3,param_4,*(undefined4 *)(this + 0xc));
  if (iVar1 == 0) {
    *param_1 = '\0';
  }
  return;
}
```

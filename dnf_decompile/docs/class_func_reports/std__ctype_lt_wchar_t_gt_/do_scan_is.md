# do_scan_is

`_ZNKSt5ctypeIwE10do_scan_isEtPKwS2_`

`std::ctype<wchar_t>::do_scan_is(unsigned short, wchar_t const*, wchar_t const*) const`

| 类 | 地址 |
|---|---|
| `std::ctype<wchar_t>` | `0x0872eca0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0872eca0  _ZNKSt5ctypeIwE10do_scan_isEtPKwS2_
#           std::ctype<wchar_t>::do_scan_is(unsigned short, wchar_t const*, wchar_t const*) const
# range [0x0872eca0, 0x0872ecff]
0872eca0 +0x00:  push   %ebp
0872eca1 +0x01:  mov    %esp,%ebp
0872eca3 +0x03:  push   %edi
0872eca4 +0x04:  push   %esi
0872eca5 +0x05:  push   %ebx
0872eca6 +0x06:  sub    $0x2c,%esp
0872eca9 +0x09:  mov    0x10(%ebp),%ebx
0872ecac +0x0c:  mov    0x14(%ebp),%edi
0872ecaf +0x0f:  mov    0x8(%ebp),%esi
0872ecb2 +0x12:  movzwl 0xc(%ebp),%eax
0872ecb6 +0x16:  cmp    %edi,%ebx
0872ecb8 +0x18:  jb     0872ecc8 <+0x28>
0872ecba +0x1a:  add    $0x2c,%esp
0872ecbd +0x1d:  mov    %ebx,%eax
0872ecbf +0x1f:  pop    %ebx
0872ecc0 +0x20:  pop    %esi
0872ecc1 +0x21:  pop    %edi
0872ecc2 +0x22:  pop    %ebp
0872ecc3 +0x23:  ret
0872ecc4 +0x24:  lea    0x0(%esi,%eiz,1),%esi
0872ecc8 +0x28:  movzwl %ax,%eax
0872eccb +0x2b:  mov    %eax,-0x1c(%ebp)
0872ecce +0x2e:  mov    (%ebx),%edx
0872ecd0 +0x30:  mov    (%esi),%eax
0872ecd2 +0x32:  mov    %esi,(%esp)
0872ecd5 +0x35:  mov    %edx,0x8(%esp)
0872ecd9 +0x39:  mov    -0x1c(%ebp),%edx
0872ecdc +0x3c:  mov    %edx,0x4(%esp)
0872ece0 +0x40:  call   *0x8(%eax)
0872ece3 +0x43:  test   %al,%al
0872ece5 +0x45:  jne    0872ecba <+0x1a>
0872ece7 +0x47:  add    $0x4,%ebx
0872ecea +0x4a:  cmp    %ebx,%edi
0872ecec +0x4c:  ja     0872ecce <+0x2e>
0872ecee +0x4e:  add    $0x2c,%esp
0872ecf1 +0x51:  mov    %ebx,%eax
0872ecf3 +0x53:  pop    %ebx
0872ecf4 +0x54:  pop    %esi
0872ecf5 +0x55:  pop    %edi
0872ecf6 +0x56:  pop    %ebp
0872ecf7 +0x57:  ret
0872ecf8 +0x58:  nop
0872ecf9 +0x59:  nop
0872ecfa +0x5a:  nop
0872ecfb +0x5b:  nop
0872ecfc +0x5c:  nop
0872ecfd +0x5d:  nop
0872ecfe +0x5e:  nop
0872ecff +0x5f:  nop
```

## 反编译 C

```c
// std::ctype<wchar_t>::do_scan_is @ 0x872eca0

/* std::ctype<wchar_t>::do_scan_is(unsigned short, wchar_t const*, wchar_t const*) const */

wchar_t * __thiscall
std::ctype<wchar_t>::do_scan_is
          (ctype<wchar_t> *this,ushort param_1,wchar_t *param_2,wchar_t *param_3)

{
  char cVar1;
  
  if (param_2 < param_3) {
    while (cVar1 = (**(code **)(*(int *)this + 8))(this,param_1,*param_2), cVar1 == '\0') {
      param_2 = param_2 + 1;
      if (param_3 <= param_2) {
        return param_2;
      }
    }
  }
  return param_2;
}
```

# do_scan_not

`_ZNKSt5ctypeIwE11do_scan_notEtPKwS2_`

`std::ctype<wchar_t>::do_scan_not(unsigned short, wchar_t const*, wchar_t const*) const`

| 类 | 地址 |
|---|---|
| `std::ctype<wchar_t>` | `0x0872ed00` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0872ed00  _ZNKSt5ctypeIwE11do_scan_notEtPKwS2_
#           std::ctype<wchar_t>::do_scan_not(unsigned short, wchar_t const*, wchar_t const*) const
# range [0x0872ed00, 0x0872ed5f]
0872ed00 +0x00:  push   %ebp
0872ed01 +0x01:  mov    %esp,%ebp
0872ed03 +0x03:  push   %edi
0872ed04 +0x04:  push   %esi
0872ed05 +0x05:  push   %ebx
0872ed06 +0x06:  sub    $0x2c,%esp
0872ed09 +0x09:  mov    0x10(%ebp),%ebx
0872ed0c +0x0c:  mov    0x14(%ebp),%edi
0872ed0f +0x0f:  mov    0x8(%ebp),%esi
0872ed12 +0x12:  movzwl 0xc(%ebp),%eax
0872ed16 +0x16:  cmp    %edi,%ebx
0872ed18 +0x18:  jb     0872ed28 <+0x28>
0872ed1a +0x1a:  add    $0x2c,%esp
0872ed1d +0x1d:  mov    %ebx,%eax
0872ed1f +0x1f:  pop    %ebx
0872ed20 +0x20:  pop    %esi
0872ed21 +0x21:  pop    %edi
0872ed22 +0x22:  pop    %ebp
0872ed23 +0x23:  ret
0872ed24 +0x24:  lea    0x0(%esi,%eiz,1),%esi
0872ed28 +0x28:  movzwl %ax,%eax
0872ed2b +0x2b:  mov    %eax,-0x1c(%ebp)
0872ed2e +0x2e:  mov    (%ebx),%edx
0872ed30 +0x30:  mov    (%esi),%eax
0872ed32 +0x32:  mov    %esi,(%esp)
0872ed35 +0x35:  mov    %edx,0x8(%esp)
0872ed39 +0x39:  mov    -0x1c(%ebp),%edx
0872ed3c +0x3c:  mov    %edx,0x4(%esp)
0872ed40 +0x40:  call   *0x8(%eax)
0872ed43 +0x43:  test   %al,%al
0872ed45 +0x45:  je     0872ed1a <+0x1a>
0872ed47 +0x47:  add    $0x4,%ebx
0872ed4a +0x4a:  cmp    %ebx,%edi
0872ed4c +0x4c:  ja     0872ed2e <+0x2e>
0872ed4e +0x4e:  add    $0x2c,%esp
0872ed51 +0x51:  mov    %ebx,%eax
0872ed53 +0x53:  pop    %ebx
0872ed54 +0x54:  pop    %esi
0872ed55 +0x55:  pop    %edi
0872ed56 +0x56:  pop    %ebp
0872ed57 +0x57:  ret
0872ed58 +0x58:  nop
0872ed59 +0x59:  nop
0872ed5a +0x5a:  nop
0872ed5b +0x5b:  nop
0872ed5c +0x5c:  nop
0872ed5d +0x5d:  nop
0872ed5e +0x5e:  nop
0872ed5f +0x5f:  nop
```

## 反编译 C

```c
// std::ctype<wchar_t>::do_scan_not @ 0x872ed00

/* std::ctype<wchar_t>::do_scan_not(unsigned short, wchar_t const*, wchar_t const*) const */

wchar_t * __thiscall
std::ctype<wchar_t>::do_scan_not
          (ctype<wchar_t> *this,ushort param_1,wchar_t *param_2,wchar_t *param_3)

{
  char cVar1;
  
  if (param_2 < param_3) {
    while (cVar1 = (**(code **)(*(int *)this + 8))(this,param_1,*param_2), cVar1 != '\0') {
      param_2 = param_2 + 1;
      if (param_3 <= param_2) {
        return param_2;
      }
    }
  }
  return param_2;
}
```

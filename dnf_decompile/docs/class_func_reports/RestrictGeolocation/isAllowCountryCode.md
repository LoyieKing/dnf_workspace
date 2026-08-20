# isAllowCountryCode

`_ZN19RestrictGeolocation18isAllowCountryCodeESs`

`RestrictGeolocation::isAllowCountryCode(std::basic_string<char, std::char_traits<char>, std::allocator<char> >)`

| 类 | 地址 |
|---|---|
| `RestrictGeolocation` | `0x0817109a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0817109a  _ZN19RestrictGeolocation18isAllowCountryCodeESs
#           RestrictGeolocation::isAllowCountryCode(std::basic_string<char, std::char_traits<char>, std::allocator<char> >)
# range [0x0817109a, 0x081710fa]
0817109a +0x00:  push   %ebp
0817109b +0x01:  mov    %esp,%ebp
0817109d +0x03:  sub    $0x28,%esp
081710a0 +0x06:  mov    0x8(%ebp),%eax
081710a3 +0x09:  lea    0x4(%eax),%ecx
081710a6 +0x0c:  lea    -0x10(%ebp),%eax
081710a9 +0x0f:  mov    0xc(%ebp),%edx
081710ac +0x12:  mov    %edx,0x8(%esp)
081710b0 +0x16:  mov    %ecx,0x4(%esp)
081710b4 +0x1a:  mov    %eax,(%esp)
081710b7 +0x1d:  call   081714a6 <_GLOBAL__I__ZN19RestrictGeolocationC2Ev+0x36b>  ; global constructors keyed to RestrictGeolocation::RestrictGeolocation()+0x36b
081710bc +0x22:  sub    $0x4,%esp
081710bf +0x25:  mov    0x8(%ebp),%eax
081710c2 +0x28:  lea    0x4(%eax),%edx
081710c5 +0x2b:  lea    -0xc(%ebp),%eax
081710c8 +0x2e:  mov    %edx,0x4(%esp)
081710cc +0x32:  mov    %eax,(%esp)
081710cf +0x35:  call   0817148a <_GLOBAL__I__ZN19RestrictGeolocationC2Ev+0x34f>  ; global constructors keyed to RestrictGeolocation::RestrictGeolocation()+0x34f
081710d4 +0x3a:  sub    $0x4,%esp
081710d7 +0x3d:  lea    -0xc(%ebp),%eax
081710da +0x40:  mov    %eax,0x4(%esp)
081710de +0x44:  lea    -0x10(%ebp),%eax
081710e1 +0x47:  mov    %eax,(%esp)
081710e4 +0x4a:  call   081714de <_GLOBAL__I__ZN19RestrictGeolocationC2Ev+0x3a3>  ; global constructors keyed to RestrictGeolocation::RestrictGeolocation()+0x3a3
081710e9 +0x4f:  test   %al,%al
081710eb +0x51:  je     081710f4 <+0x5a>
081710ed +0x53:  mov    $0x1,%eax
081710f2 +0x58:  jmp    081710f9 <+0x5f>
081710f4 +0x5a:  mov    $0x0,%eax
081710f9 +0x5f:  leave
081710fa +0x60:  ret
```

## 反编译 C

```c
// RestrictGeolocation::isAllowCountryCode @ 0x817109a

/* RestrictGeolocation::isAllowCountryCode(std::string) */

bool RestrictGeolocation::isAllowCountryCode(string param_1)

{
  char cVar1;
  string local_14;
  unordered_set<std::string,boost::hash<std::string>,std::equal_to<std::string>,std::allocator<std::string>>
  local_10 [12];
  
  boost::unordered::
  unordered_set<std::string,boost::hash<std::string>,std::equal_to<std::string>,std::allocator<std::string>>
  ::find(&local_14);
  boost::unordered::
  unordered_set<std::string,boost::hash<std::string>,std::equal_to<std::string>,std::allocator<std::string>>
  ::end(local_10);
  cVar1 = boost::unordered::iterator_detail::operator!=
                    ((c_iterator *)&local_14,(c_iterator *)local_10);
  return cVar1 != '\0';
}
```

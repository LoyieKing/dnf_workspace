# addAllowCountry

`_ZN19RestrictGeolocation15addAllowCountryESs`

`RestrictGeolocation::addAllowCountry(std::basic_string<char, std::char_traits<char>, std::allocator<char> >)`

| 类 | 地址 |
|---|---|
| `RestrictGeolocation` | `0x08170a9e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08170a9e  _ZN19RestrictGeolocation15addAllowCountryESs
#           RestrictGeolocation::addAllowCountry(std::basic_string<char, std::char_traits<char>, std::allocator<char> >)
# range [0x08170a9e, 0x08170b15]
08170a9e +0x00:  push   %ebp
08170a9f +0x01:  mov    %esp,%ebp
08170aa1 +0x03:  sub    $0x28,%esp
08170aa4 +0x06:  mov    0x8(%ebp),%eax
08170aa7 +0x09:  lea    0x4(%eax),%ecx
08170aaa +0x0c:  lea    -0x18(%ebp),%eax
08170aad +0x0f:  mov    0xc(%ebp),%edx
08170ab0 +0x12:  mov    %edx,0x8(%esp)
08170ab4 +0x16:  mov    %ecx,0x4(%esp)
08170ab8 +0x1a:  mov    %eax,(%esp)
08170abb +0x1d:  call   081714a6 <_GLOBAL__I__ZN19RestrictGeolocationC2Ev+0x36b>  ; global constructors keyed to RestrictGeolocation::RestrictGeolocation()+0x36b
08170ac0 +0x22:  sub    $0x4,%esp
08170ac3 +0x25:  mov    0x8(%ebp),%eax
08170ac6 +0x28:  lea    0x4(%eax),%edx
08170ac9 +0x2b:  lea    -0x14(%ebp),%eax
08170acc +0x2e:  mov    %edx,0x4(%esp)
08170ad0 +0x32:  mov    %eax,(%esp)
08170ad3 +0x35:  call   0817148a <_GLOBAL__I__ZN19RestrictGeolocationC2Ev+0x34f>  ; global constructors keyed to RestrictGeolocation::RestrictGeolocation()+0x34f
08170ad8 +0x3a:  sub    $0x4,%esp
08170adb +0x3d:  lea    -0x18(%ebp),%eax
08170ade +0x40:  mov    %eax,0x4(%esp)
08170ae2 +0x44:  lea    -0x14(%ebp),%eax
08170ae5 +0x47:  mov    %eax,(%esp)
08170ae8 +0x4a:  call   081714de <_GLOBAL__I__ZN19RestrictGeolocationC2Ev+0x3a3>  ; global constructors keyed to RestrictGeolocation::RestrictGeolocation()+0x3a3
08170aed +0x4f:  test   %al,%al
08170aef +0x51:  jne    08170b12 <+0x74>
08170af1 +0x53:  mov    0x8(%ebp),%eax
08170af4 +0x56:  lea    0x4(%eax),%ecx
08170af7 +0x59:  lea    -0x10(%ebp),%eax
08170afa +0x5c:  mov    0xc(%ebp),%edx
08170afd +0x5f:  mov    %edx,0x8(%esp)
08170b01 +0x63:  mov    %ecx,0x4(%esp)
08170b05 +0x67:  mov    %eax,(%esp)
08170b08 +0x6a:  call   081714f2 <_GLOBAL__I__ZN19RestrictGeolocationC2Ev+0x3b7>  ; global constructors keyed to RestrictGeolocation::RestrictGeolocation()+0x3b7
08170b0d +0x6f:  sub    $0x4,%esp
08170b10 +0x72:  jmp    08170b13 <+0x75>
08170b12 +0x74:  nop
08170b13 +0x75:  leave
08170b14 +0x76:  ret
08170b15 +0x77:  nop
```

## 反编译 C

```c
// RestrictGeolocation::addAllowCountry @ 0x8170a9e

/* RestrictGeolocation::addAllowCountry(std::string) */

void RestrictGeolocation::addAllowCountry(string param_1)

{
  char cVar1;
  string local_1c;
  unordered_set<std::string,boost::hash<std::string>,std::equal_to<std::string>,std::allocator<std::string>>
  local_18 [4];
  string local_14 [4];
  
  boost::unordered::
  unordered_set<std::string,boost::hash<std::string>,std::equal_to<std::string>,std::allocator<std::string>>
  ::find(&local_1c);
  boost::unordered::
  unordered_set<std::string,boost::hash<std::string>,std::equal_to<std::string>,std::allocator<std::string>>
  ::end(local_18);
  cVar1 = boost::unordered::iterator_detail::operator!=
                    ((c_iterator *)local_18,(c_iterator *)&local_1c);
  if (cVar1 == '\0') {
    boost::unordered::
    unordered_set<std::string,boost::hash<std::string>,std::equal_to<std::string>,std::allocator<std::string>>
    ::insert(local_14);
  }
  return;
}
```

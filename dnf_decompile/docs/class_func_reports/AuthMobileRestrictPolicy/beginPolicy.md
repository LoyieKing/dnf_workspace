# beginPolicy

`_ZN24AuthMobileRestrictPolicy11beginPolicyERKSs`

`AuthMobileRestrictPolicy::beginPolicy(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)`

| 类 | 地址 |
|---|---|
| `AuthMobileRestrictPolicy` | `0x0816d7ac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816d7ac  _ZN24AuthMobileRestrictPolicy11beginPolicyERKSs
#           AuthMobileRestrictPolicy::beginPolicy(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
# range [0x0816d7ac, 0x0816d7d7]
0816d7ac +0x00:  push   %ebp
0816d7ad +0x01:  mov    %esp,%ebp
0816d7af +0x03:  sub    $0x18,%esp
0816d7b2 +0x06:  mov    0x8(%ebp),%eax
0816d7b5 +0x09:  lea    0xc(%eax),%ecx
0816d7b8 +0x0c:  mov    0x8(%ebp),%eax
0816d7bb +0x0f:  mov    0x8(%eax),%eax
0816d7be +0x12:  mov    0xc(%ebp),%edx
0816d7c1 +0x15:  mov    %edx,0x8(%esp)
0816d7c5 +0x19:  mov    %ecx,0x4(%esp)
0816d7c9 +0x1d:  mov    %eax,(%esp)
0816d7cc +0x20:  call   0816d490 <_ZL19setPolicyApplyValueN16RestrictCategory4EnumER13ServicePolicyRKSs>  ; setPolicyApplyValue(RestrictCategory::Enum, ServicePolicy&, std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
0816d7d1 +0x25:  mov    $0x1,%eax
0816d7d6 +0x2a:  leave
0816d7d7 +0x2b:  ret
```

## 反编译 C

```c
// AuthMobileRestrictPolicy::beginPolicy @ 0x816d7ac

/* AuthMobileRestrictPolicy::beginPolicy(std::string const&) */

undefined4 __thiscall
AuthMobileRestrictPolicy::beginPolicy(AuthMobileRestrictPolicy *this,string *param_1)

{
  setPolicyApplyValue(*(undefined4 *)(this + 8),this + 0xc,param_1);
  return 1;
}
```

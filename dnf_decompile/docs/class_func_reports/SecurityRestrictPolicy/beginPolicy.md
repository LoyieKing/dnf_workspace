# beginPolicy

`_ZN22SecurityRestrictPolicy11beginPolicyERKSs`

`SecurityRestrictPolicy::beginPolicy(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)`

| 类 | 地址 |
|---|---|
| `SecurityRestrictPolicy` | `0x0816db2e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816db2e  _ZN22SecurityRestrictPolicy11beginPolicyERKSs
#           SecurityRestrictPolicy::beginPolicy(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
# range [0x0816db2e, 0x0816db59]
0816db2e +0x00:  push   %ebp
0816db2f +0x01:  mov    %esp,%ebp
0816db31 +0x03:  sub    $0x18,%esp
0816db34 +0x06:  mov    0x8(%ebp),%eax
0816db37 +0x09:  lea    0xc(%eax),%ecx
0816db3a +0x0c:  mov    0x8(%ebp),%eax
0816db3d +0x0f:  mov    0x8(%eax),%eax
0816db40 +0x12:  mov    0xc(%ebp),%edx
0816db43 +0x15:  mov    %edx,0x8(%esp)
0816db47 +0x19:  mov    %ecx,0x4(%esp)
0816db4b +0x1d:  mov    %eax,(%esp)
0816db4e +0x20:  call   0816d490 <_ZL19setPolicyApplyValueN16RestrictCategory4EnumER13ServicePolicyRKSs>  ; setPolicyApplyValue(RestrictCategory::Enum, ServicePolicy&, std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
0816db53 +0x25:  mov    $0x1,%eax
0816db58 +0x2a:  leave
0816db59 +0x2b:  ret
```

## 反编译 C

```c
// SecurityRestrictPolicy::beginPolicy @ 0x816db2e

/* SecurityRestrictPolicy::beginPolicy(std::string const&) */

undefined4 __thiscall
SecurityRestrictPolicy::beginPolicy(SecurityRestrictPolicy *this,string *param_1)

{
  setPolicyApplyValue(*(undefined4 *)(this + 8),this + 0xc,param_1);
  return 1;
}
```

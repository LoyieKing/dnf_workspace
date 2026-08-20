# beginPolicy

`_ZN29CreateCharacterRestrictPolicy11beginPolicyERKSs`

`CreateCharacterRestrictPolicy::beginPolicy(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)`

| 类 | 地址 |
|---|---|
| `CreateCharacterRestrictPolicy` | `0x0816deb2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816deb2  _ZN29CreateCharacterRestrictPolicy11beginPolicyERKSs
#           CreateCharacterRestrictPolicy::beginPolicy(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
# range [0x0816deb2, 0x0816dedd]
0816deb2 +0x00:  push   %ebp
0816deb3 +0x01:  mov    %esp,%ebp
0816deb5 +0x03:  sub    $0x18,%esp
0816deb8 +0x06:  mov    0x8(%ebp),%eax
0816debb +0x09:  lea    0xc(%eax),%ecx
0816debe +0x0c:  mov    0x8(%ebp),%eax
0816dec1 +0x0f:  mov    0x8(%eax),%eax
0816dec4 +0x12:  mov    0xc(%ebp),%edx
0816dec7 +0x15:  mov    %edx,0x8(%esp)
0816decb +0x19:  mov    %ecx,0x4(%esp)
0816decf +0x1d:  mov    %eax,(%esp)
0816ded2 +0x20:  call   0816d490 <_ZL19setPolicyApplyValueN16RestrictCategory4EnumER13ServicePolicyRKSs>  ; setPolicyApplyValue(RestrictCategory::Enum, ServicePolicy&, std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
0816ded7 +0x25:  mov    $0x1,%eax
0816dedc +0x2a:  leave
0816dedd +0x2b:  ret
```

## 反编译 C

```c
// CreateCharacterRestrictPolicy::beginPolicy @ 0x816deb2

/* CreateCharacterRestrictPolicy::beginPolicy(std::string const&) */

undefined4 __thiscall
CreateCharacterRestrictPolicy::beginPolicy(CreateCharacterRestrictPolicy *this,string *param_1)

{
  setPolicyApplyValue(*(undefined4 *)(this + 8),this + 0xc,param_1);
  return 1;
}
```

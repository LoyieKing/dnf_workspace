# isApply

`_ZN24AuthMobileRestrictPolicy7isApplyEi`

`AuthMobileRestrictPolicy::isApply(int)`

| 类 | 地址 |
|---|---|
| `AuthMobileRestrictPolicy` | `0x0816d7f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816d7f0  _ZN24AuthMobileRestrictPolicy7isApplyEi
#           AuthMobileRestrictPolicy::isApply(int)
# range [0x0816d7f0, 0x0816d865]
0816d7f0 +0x00:  push   %ebp
0816d7f1 +0x01:  mov    %esp,%ebp
0816d7f3 +0x03:  sub    $0x28,%esp
0816d7f6 +0x06:  cmpl   $0x21,0xc(%ebp)
0816d7fa +0x0a:  jg     0816d802 <+0x12>
0816d7fc +0x0c:  cmpl   $0x0,0xc(%ebp)
0816d800 +0x10:  jns    0816d844 <+0x54>
0816d802 +0x12:  mov    0xc(%ebp),%eax
0816d805 +0x15:  mov    %eax,0x18(%esp)
0816d809 +0x19:  movl   $0x22,0x14(%esp)
0816d811 +0x21:  movl   $"[Taiwan, Restrict] Invalid AuthMobileRestrictPolicy Parameter. End:%d, Param:%d",0x10(%esp)
0816d819 +0x29:  movl   $0x84,0xc(%esp)
0816d821 +0x31:  movl   $&_ZZN24AuthMobileRestrictPolicy7isApplyEiE19__PRETTY_FUNCTION__,0x8(%esp)
0816d829 +0x39:  movl   $"localtaiwan/System/ServiceRestrictManager.cpp",0x4(%esp)
0816d831 +0x41:  movl   $0x1,(%esp)
0816d838 +0x48:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0816d83d +0x4d:  mov    $0x0,%eax
0816d842 +0x52:  jmp    0816d863 <+0x73>
0816d844 +0x54:  mov    0xc(%ebp),%eax
0816d847 +0x57:  mov    0x8(%ebp),%edx
0816d84a +0x5a:  add    $0xc,%edx
0816d84d +0x5d:  mov    %eax,0x4(%esp)
0816d851 +0x61:  mov    %edx,(%esp)
0816d854 +0x64:  call   0816eee8 <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0x1d6>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0x1d6
0816d859 +0x69:  movzwl (%eax),%eax
0816d85c +0x6c:  cmp    $0x1,%ax
0816d860 +0x70:  sete   %al
0816d863 +0x73:  leave
0816d864 +0x74:  ret
0816d865 +0x75:  nop
```

## 反编译 C

```c
// AuthMobileRestrictPolicy::isApply @ 0x816d7f0

/* AuthMobileRestrictPolicy::isApply(int) */

undefined2 __thiscall AuthMobileRestrictPolicy::isApply(AuthMobileRestrictPolicy *this,int param_1)

{
  undefined2 uVar1;
  short *psVar2;
  
  if ((param_1 < 0x22) && (-1 < param_1)) {
    psVar2 = (short *)std::vector<short,std::allocator<short>>::operator[]
                                ((vector<short,std::allocator<short>> *)(this + 0xc),param_1);
    uVar1 = CONCAT11((char)((ushort)*psVar2 >> 8),*psVar2 == 1);
  }
  else {
    LogManager::logFormat
              (1,"localtaiwan/System/ServiceRestrictManager.cpp",
               "virtual bool AuthMobileRestrictPolicy::isApply(int)",0x84,
               "[Taiwan, Restrict] Invalid AuthMobileRestrictPolicy Parameter. End:%d, Param:%d",
               0x22,param_1);
    uVar1 = 0;
  }
  return uVar1;
}
```

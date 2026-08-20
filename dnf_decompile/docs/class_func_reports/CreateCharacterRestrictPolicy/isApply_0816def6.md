# isApply

`_ZN29CreateCharacterRestrictPolicy7isApplyEi`

`CreateCharacterRestrictPolicy::isApply(int)`

| 类 | 地址 |
|---|---|
| `CreateCharacterRestrictPolicy` | `0x0816def6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816def6  _ZN29CreateCharacterRestrictPolicy7isApplyEi
#           CreateCharacterRestrictPolicy::isApply(int)
# range [0x0816def6, 0x0816df6b]
0816def6 +0x00:  push   %ebp
0816def7 +0x01:  mov    %esp,%ebp
0816def9 +0x03:  sub    $0x28,%esp
0816defc +0x06:  cmpl   $0x2,0xc(%ebp)
0816df00 +0x0a:  jg     0816df08 <+0x12>
0816df02 +0x0c:  cmpl   $0x0,0xc(%ebp)
0816df06 +0x10:  jns    0816df4a <+0x54>
0816df08 +0x12:  mov    0xc(%ebp),%eax
0816df0b +0x15:  mov    %eax,0x18(%esp)
0816df0f +0x19:  movl   $0x3,0x14(%esp)
0816df17 +0x21:  movl   $"[Taiwan, Restrict] Invalid AuthMobileRestrictPolicy Parameter. End:%d, Param:%d",0x10(%esp)
0816df1f +0x29:  movl   $0x11c,0xc(%esp)
0816df27 +0x31:  movl   $&_ZZN29CreateCharacterRestrictPolicy7isApplyEiE19__PRETTY_FUNCTION__,0x8(%esp)
0816df2f +0x39:  movl   $"localtaiwan/System/ServiceRestrictManager.cpp",0x4(%esp)
0816df37 +0x41:  movl   $0x1,(%esp)
0816df3e +0x48:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0816df43 +0x4d:  mov    $0x0,%eax
0816df48 +0x52:  jmp    0816df69 <+0x73>
0816df4a +0x54:  mov    0xc(%ebp),%eax
0816df4d +0x57:  mov    0x8(%ebp),%edx
0816df50 +0x5a:  add    $0xc,%edx
0816df53 +0x5d:  mov    %eax,0x4(%esp)
0816df57 +0x61:  mov    %edx,(%esp)
0816df5a +0x64:  call   0816eee8 <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0x1d6>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0x1d6
0816df5f +0x69:  movzwl (%eax),%eax
0816df62 +0x6c:  cmp    $0x1,%ax
0816df66 +0x70:  sete   %al
0816df69 +0x73:  leave
0816df6a +0x74:  ret
0816df6b +0x75:  nop
```

## 反编译 C

```c
// CreateCharacterRestrictPolicy::isApply @ 0x816def6

/* CreateCharacterRestrictPolicy::isApply(int) */

undefined2 __thiscall
CreateCharacterRestrictPolicy::isApply(CreateCharacterRestrictPolicy *this,int param_1)

{
  undefined2 uVar1;
  short *psVar2;
  
  if ((param_1 < 3) && (-1 < param_1)) {
    psVar2 = (short *)std::vector<short,std::allocator<short>>::operator[]
                                ((vector<short,std::allocator<short>> *)(this + 0xc),param_1);
    uVar1 = CONCAT11((char)((ushort)*psVar2 >> 8),*psVar2 == 1);
  }
  else {
    LogManager::logFormat
              (1,"localtaiwan/System/ServiceRestrictManager.cpp",
               "virtual bool CreateCharacterRestrictPolicy::isApply(int)",0x11c,
               "[Taiwan, Restrict] Invalid AuthMobileRestrictPolicy Parameter. End:%d, Param:%d",3,
               param_1);
    uVar1 = 0;
  }
  return uVar1;
}
```

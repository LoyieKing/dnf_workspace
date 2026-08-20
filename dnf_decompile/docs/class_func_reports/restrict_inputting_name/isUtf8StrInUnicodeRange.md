# isUtf8StrInUnicodeRange

`_ZN23restrict_inputting_name23isUtf8StrInUnicodeRangeEPKc`

`restrict_inputting_name::isUtf8StrInUnicodeRange(char const*)`

| 类 | 地址 |
|---|---|
| `restrict_inputting_name` | `0x08ac2d6c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ac2d6c  _ZN23restrict_inputting_name23isUtf8StrInUnicodeRangeEPKc
#           restrict_inputting_name::isUtf8StrInUnicodeRange(char const*)
# range [0x08ac2d6c, 0x08ac2ddf]
08ac2d6c +0x00:  push   %ebp
08ac2d6d +0x01:  mov    %esp,%ebp
08ac2d6f +0x03:  push   %esi
08ac2d70 +0x04:  push   %ebx
08ac2d71 +0x05:  sub    $0x20,%esp
08ac2d74 +0x08:  lea    -0xc(%ebp),%eax
08ac2d77 +0x0b:  mov    %eax,(%esp)
08ac2d7a +0x0e:  call   08ad99fe <_ZN10WideStringC1Ev>  ; WideString::WideString()
08ac2d7f +0x13:  mov    0x8(%ebp),%eax
08ac2d82 +0x16:  mov    %eax,(%esp)
08ac2d85 +0x19:  call   0807e3b0 <_init+0xca8>
08ac2d8a +0x1e:  lea    -0xc(%ebp),%edx
08ac2d8d +0x21:  mov    %edx,0x8(%esp)
08ac2d91 +0x25:  mov    %eax,0x4(%esp)
08ac2d95 +0x29:  mov    0x8(%ebp),%eax
08ac2d98 +0x2c:  mov    %eax,(%esp)
08ac2d9b +0x2f:  call   08adf893 <_Z15convertFromUtf8PKciP10WideString>  ; convertFromUtf8(char const*, int, WideString*)
08ac2da0 +0x34:  lea    -0xc(%ebp),%eax
08ac2da3 +0x37:  mov    %eax,(%esp)
08ac2da6 +0x3a:  call   08ac2ec0 <_GLOBAL__I__ZN23restrict_inputting_name25RestrictInputtingNameData21unicodeRangeDataList_E+0x1d>  ; global constructors keyed to restrict_inputting_name::RestrictInputtingNameData::unicodeRangeDataList_+0x1d
08ac2dab +0x3f:  mov    %eax,(%esp)
08ac2dae +0x42:  call   08ac2de4 <_ZN23restrict_inputting_name23isWideStrInUnicodeRangeEPKw>  ; restrict_inputting_name::isWideStrInUnicodeRange(wchar_t const*)
08ac2db3 +0x47:  mov    %eax,%ebx
08ac2db5 +0x49:  lea    -0xc(%ebp),%eax
08ac2db8 +0x4c:  mov    %eax,(%esp)
08ac2dbb +0x4f:  call   08ad9c14 <_ZN10WideStringD1Ev>  ; WideString::~WideString()
08ac2dc0 +0x54:  mov    %ebx,%eax
08ac2dc2 +0x56:  add    $0x20,%esp
08ac2dc5 +0x59:  pop    %ebx
08ac2dc6 +0x5a:  pop    %esi
08ac2dc7 +0x5b:  pop    %ebp
08ac2dc8 +0x5c:  ret
08ac2dc9 +0x5d:  mov    %edx,%ebx
08ac2dcb +0x5f:  mov    %eax,%esi
08ac2dcd +0x61:  lea    -0xc(%ebp),%eax
08ac2dd0 +0x64:  mov    %eax,(%esp)
08ac2dd3 +0x67:  call   08ad9c14 <_ZN10WideStringD1Ev>  ; WideString::~WideString()
08ac2dd8 +0x6c:  mov    %esi,%eax
08ac2dda +0x6e:  mov    %ebx,%edx
08ac2ddc +0x70:  mov    %eax,(%esp)
08ac2ddf +0x73:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// restrict_inputting_name::isUtf8StrInUnicodeRange @ 0x8ac2d6c

/* restrict_inputting_name::isUtf8StrInUnicodeRange(char const*) */

undefined4 restrict_inputting_name::isUtf8StrInUnicodeRange(char *param_1)

{
  size_t sourceLen;
  wchar_t *pwVar1;
  undefined4 uVar2;
  WideString local_10;
  
  WideString::WideString(&local_10);
  sourceLen = strlen(param_1);
                    /* try { // try from 08ac2d9b to 08ac2db2 has its CatchHandler @ 08ac2dc9 */
  convertFromUtf8(param_1,sourceLen,&local_10);
  pwVar1 = WideString::c_str(&local_10);
  uVar2 = isWideStrInUnicodeRange(pwVar1);
  WideString::~WideString(&local_10,sourceLen);
  return uVar2;
}
```

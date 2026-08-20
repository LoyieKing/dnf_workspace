# getString

`_ZNK14CNRDScriptData9getStringEPKc`

`CNRDScriptData::getString(char const*) const`

| 类 | 地址 |
|---|---|
| `CNRDScriptData` | `0x0807fef4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0807fef4  _ZNK14CNRDScriptData9getStringEPKc
#           CNRDScriptData::getString(char const*) const
# range [0x0807fef4, 0x0807ff2f]
0807fef4 +0x00:  push   %ebp
0807fef5 +0x01:  mov    %esp,%ebp
0807fef7 +0x03:  sub    $0x28,%esp
0807fefa +0x06:  mov    0x8(%ebp),%eax
0807fefd +0x09:  lea    0x84(%eax),%edx
0807ff03 +0x0f:  mov    0xc(%ebp),%eax
0807ff06 +0x12:  mov    %eax,0x4(%esp)
0807ff0a +0x16:  mov    %edx,(%esp)
0807ff0d +0x19:  call   08080f42 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xf68>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xf68
0807ff12 +0x1e:  mov    %eax,-0xc(%ebp)
0807ff15 +0x21:  cmpl   $0x0,-0xc(%ebp)
0807ff19 +0x25:  jne    0807ff22 <+0x2e>
0807ff1b +0x27:  mov    $"CNRDScriptData::Error",%eax
0807ff20 +0x2c:  jmp    0807ff2d <+0x39>
0807ff22 +0x2e:  mov    -0xc(%ebp),%eax
0807ff25 +0x31:  mov    %eax,(%esp)
0807ff28 +0x34:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0807ff2d +0x39:  leave
0807ff2e +0x3a:  ret
0807ff2f +0x3b:  nop
```

## 反编译 C

```c
// CNRDScriptData::getString @ 0x807fef4

/* CNRDScriptData::getString(char const*) const */

char * CNRDScriptData::getString(char *param_1)

{
  string *this;
  char *pcVar1;
  
  this = (string *)StringUnorderedMap<CharStringHashTrait,std::string>::get(param_1 + 0x84);
  if (this == (string *)0x0) {
    pcVar1 = "CNRDScriptData::Error";
  }
  else {
    pcVar1 = (char *)std::string::c_str(this);
  }
  return pcVar1;
}
```

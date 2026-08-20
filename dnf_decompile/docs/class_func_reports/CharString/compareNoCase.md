# compareNoCase

`_ZN10CharString13compareNoCaseERKS_PKc`

`CharString::compareNoCase(CharString const&, char const*)`

| 类 | 地址 |
|---|---|
| `CharString` | `0x08ad9524` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad9524  _ZN10CharString13compareNoCaseERKS_PKc
#           CharString::compareNoCase(CharString const&, char const*)
# range [0x08ad9524, 0x08ad9545]
08ad9524 +0x00:  push   %ebp
08ad9525 +0x01:  mov    %esp,%ebp
08ad9527 +0x03:  sub    $0x18,%esp
08ad952a +0x06:  mov    0x8(%ebp),%eax
08ad952d +0x09:  mov    %eax,(%esp)
08ad9530 +0x0c:  call   0807fffc <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x22>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x22
08ad9535 +0x11:  mov    0xc(%ebp),%edx
08ad9538 +0x14:  mov    %edx,0x4(%esp)
08ad953c +0x18:  mov    %eax,(%esp)
08ad953f +0x1b:  call   0807de50 <_init+0x748>
08ad9544 +0x20:  leave
08ad9545 +0x21:  ret
```

## 反编译 C

```c
// CharString::compareNoCase @ 0x8ad9524

int32 CharString::compareNoCase(CharString *src1,char *src2)

{
  char *__s1;
  int iVar1;
  
  __s1 = c_str(src1);
  iVar1 = strcasecmp(__s1,src2);
  return iVar1;
}
```

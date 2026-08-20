# compareNoCase

`_ZN10CharString13compareNoCaseEPKcRKS_`

`CharString::compareNoCase(char const*, CharString const&)`

| 类 | 地址 |
|---|---|
| `CharString` | `0x08ad9578` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad9578  _ZN10CharString13compareNoCaseEPKcRKS_
#           CharString::compareNoCase(char const*, CharString const&)
# range [0x08ad9578, 0x08ad9599]
08ad9578 +0x00:  push   %ebp
08ad9579 +0x01:  mov    %esp,%ebp
08ad957b +0x03:  sub    $0x18,%esp
08ad957e +0x06:  mov    0xc(%ebp),%eax
08ad9581 +0x09:  mov    %eax,(%esp)
08ad9584 +0x0c:  call   0807fffc <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x22>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x22
08ad9589 +0x11:  mov    %eax,0x4(%esp)
08ad958d +0x15:  mov    0x8(%ebp),%eax
08ad9590 +0x18:  mov    %eax,(%esp)
08ad9593 +0x1b:  call   0807de50 <_init+0x748>
08ad9598 +0x20:  leave
08ad9599 +0x21:  ret
```

## 反编译 C

```c
// CharString::compareNoCase @ 0x8ad9578

int32 CharString::compareNoCase(char *src1,CharString *src2)

{
  char *__s2;
  int iVar1;
  
  __s2 = c_str(src2);
  iVar1 = strcasecmp(src1,__s2);
  return iVar1;
}
```

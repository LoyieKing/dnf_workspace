# compareNoCase

`_ZN10CharString13compareNoCaseERKS_S1_`

`CharString::compareNoCase(CharString const&, CharString const&)`

| 类 | 地址 |
|---|---|
| `CharString` | `0x08ad9546` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad9546  _ZN10CharString13compareNoCaseERKS_S1_
#           CharString::compareNoCase(CharString const&, CharString const&)
# range [0x08ad9546, 0x08ad9577]
08ad9546 +0x00:  push   %ebp
08ad9547 +0x01:  mov    %esp,%ebp
08ad9549 +0x03:  push   %ebx
08ad954a +0x04:  sub    $0x14,%esp
08ad954d +0x07:  mov    0xc(%ebp),%eax
08ad9550 +0x0a:  mov    %eax,(%esp)
08ad9553 +0x0d:  call   0807fffc <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x22>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x22
08ad9558 +0x12:  mov    %eax,%ebx
08ad955a +0x14:  mov    0x8(%ebp),%eax
08ad955d +0x17:  mov    %eax,(%esp)
08ad9560 +0x1a:  call   0807fffc <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x22>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x22
08ad9565 +0x1f:  mov    %ebx,0x4(%esp)
08ad9569 +0x23:  mov    %eax,(%esp)
08ad956c +0x26:  call   0807de50 <_init+0x748>
08ad9571 +0x2b:  add    $0x14,%esp
08ad9574 +0x2e:  pop    %ebx
08ad9575 +0x2f:  pop    %ebp
08ad9576 +0x30:  ret
08ad9577 +0x31:  nop
```

## 反编译 C

```c
// CharString::compareNoCase @ 0x8ad9546

int32 CharString::compareNoCase(CharString *src1,CharString *src2)

{
  char *__s2;
  char *__s1;
  int iVar1;
  
  __s2 = c_str(src2);
  __s1 = c_str(src1);
  iVar1 = strcasecmp(__s1,__s2);
  return iVar1;
}
```

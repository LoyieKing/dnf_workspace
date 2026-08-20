# compare

`_ZN10CharString7compareEPKcRKS_`

`CharString::compare(char const*, CharString const&)`

| 类 | 地址 |
|---|---|
| `CharString` | `0x08ad9502` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad9502  _ZN10CharString7compareEPKcRKS_
#           CharString::compare(char const*, CharString const&)
# range [0x08ad9502, 0x08ad9523]
08ad9502 +0x00:  push   %ebp
08ad9503 +0x01:  mov    %esp,%ebp
08ad9505 +0x03:  sub    $0x18,%esp
08ad9508 +0x06:  mov    0xc(%ebp),%eax
08ad950b +0x09:  mov    %eax,(%esp)
08ad950e +0x0c:  call   0807fffc <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x22>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x22
08ad9513 +0x11:  mov    %eax,0x4(%esp)
08ad9517 +0x15:  mov    0x8(%ebp),%eax
08ad951a +0x18:  mov    %eax,(%esp)
08ad951d +0x1b:  call   0807e4e0 <_init+0xdd8>
08ad9522 +0x20:  leave
08ad9523 +0x21:  ret
```

## 反编译 C

```c
// CharString::compare @ 0x8ad9502

int32 CharString::compare(char *src1,CharString *src2)

{
  char *__s2;
  int iVar1;
  
  __s2 = c_str(src2);
  iVar1 = strcmp(src1,__s2);
  return iVar1;
}
```

# compare

`_ZN10CharString7compareERKS_S1_`

`CharString::compare(CharString const&, CharString const&)`

| 类 | 地址 |
|---|---|
| `CharString` | `0x08ad94d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad94d0  _ZN10CharString7compareERKS_S1_
#           CharString::compare(CharString const&, CharString const&)
# range [0x08ad94d0, 0x08ad9501]
08ad94d0 +0x00:  push   %ebp
08ad94d1 +0x01:  mov    %esp,%ebp
08ad94d3 +0x03:  push   %ebx
08ad94d4 +0x04:  sub    $0x14,%esp
08ad94d7 +0x07:  mov    0xc(%ebp),%eax
08ad94da +0x0a:  mov    %eax,(%esp)
08ad94dd +0x0d:  call   0807fffc <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x22>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x22
08ad94e2 +0x12:  mov    %eax,%ebx
08ad94e4 +0x14:  mov    0x8(%ebp),%eax
08ad94e7 +0x17:  mov    %eax,(%esp)
08ad94ea +0x1a:  call   0807fffc <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x22>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x22
08ad94ef +0x1f:  mov    %ebx,0x4(%esp)
08ad94f3 +0x23:  mov    %eax,(%esp)
08ad94f6 +0x26:  call   0807e4e0 <_init+0xdd8>
08ad94fb +0x2b:  add    $0x14,%esp
08ad94fe +0x2e:  pop    %ebx
08ad94ff +0x2f:  pop    %ebp
08ad9500 +0x30:  ret
08ad9501 +0x31:  nop
```

## 反编译 C

```c
// CharString::compare @ 0x8ad94d0

int32 CharString::compare(CharString *src1,CharString *src2)

{
  char *__s2;
  char *__s1;
  int iVar1;
  
  __s2 = c_str(src2);
  __s1 = c_str(src1);
  iVar1 = strcmp(__s1,__s2);
  return iVar1;
}
```

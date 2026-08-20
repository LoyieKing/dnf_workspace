# compare

`_ZN10CharString7compareERKS_PKc`

`CharString::compare(CharString const&, char const*)`

| 类 | 地址 |
|---|---|
| `CharString` | `0x08ad94ae` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad94ae  _ZN10CharString7compareERKS_PKc
#           CharString::compare(CharString const&, char const*)
# range [0x08ad94ae, 0x08ad94cf]
08ad94ae +0x00:  push   %ebp
08ad94af +0x01:  mov    %esp,%ebp
08ad94b1 +0x03:  sub    $0x18,%esp
08ad94b4 +0x06:  mov    0x8(%ebp),%eax
08ad94b7 +0x09:  mov    %eax,(%esp)
08ad94ba +0x0c:  call   0807fffc <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x22>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x22
08ad94bf +0x11:  mov    0xc(%ebp),%edx
08ad94c2 +0x14:  mov    %edx,0x4(%esp)
08ad94c6 +0x18:  mov    %eax,(%esp)
08ad94c9 +0x1b:  call   0807e4e0 <_init+0xdd8>
08ad94ce +0x20:  leave
08ad94cf +0x21:  ret
```

## 反编译 C

```c
// CharString::compare @ 0x8ad94ae

int32 CharString::compare(CharString *src1,char *src2)

{
  char *__s1;
  int iVar1;
  
  __s1 = c_str(src1);
  iVar1 = strcmp(__s1,src2);
  return iVar1;
}
```

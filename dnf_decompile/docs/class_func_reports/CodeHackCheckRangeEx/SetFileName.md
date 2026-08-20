# SetFileName

`_ZN20CodeHackCheckRangeEx11SetFileNameEPKc`

`CodeHackCheckRangeEx::SetFileName(char const*)`

| 类 | 地址 |
|---|---|
| `CodeHackCheckRangeEx` | `0x0808a9aa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0808a9aa  _ZN20CodeHackCheckRangeEx11SetFileNameEPKc
#           CodeHackCheckRangeEx::SetFileName(char const*)
# range [0x0808a9aa, 0x0808a9c3]
0808a9aa +0x00:  push   %ebp
0808a9ab +0x01:  mov    %esp,%ebp
0808a9ad +0x03:  sub    $0x18,%esp
0808a9b0 +0x06:  mov    0x8(%ebp),%eax
0808a9b3 +0x09:  mov    0xc(%ebp),%edx
0808a9b6 +0x0c:  mov    %edx,0x4(%esp)
0808a9ba +0x10:  mov    %eax,(%esp)
0808a9bd +0x13:  call   0808a5dd <_Z13StrCpyMaxPathPcPKc>  ; StrCpyMaxPath(char*, char const*)
0808a9c2 +0x18:  leave
0808a9c3 +0x19:  ret
```

## 反编译 C

```c
// CodeHackCheckRangeEx::SetFileName @ 0x808a9aa

/* CodeHackCheckRangeEx::SetFileName(char const*) */

void __thiscall CodeHackCheckRangeEx::SetFileName(CodeHackCheckRangeEx *this,char *param_1)

{
  StrCpyMaxPath((char *)this,param_1);
  return;
}
```

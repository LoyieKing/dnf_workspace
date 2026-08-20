# SetFileName

`_ZN18CodeHackChecksumEx11SetFileNameEPKc`

`CodeHackChecksumEx::SetFileName(char const*)`

| 类 | 地址 |
|---|---|
| `CodeHackChecksumEx` | `0x0808a7ae` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0808a7ae  _ZN18CodeHackChecksumEx11SetFileNameEPKc
#           CodeHackChecksumEx::SetFileName(char const*)
# range [0x0808a7ae, 0x0808a7cb]
0808a7ae +0x00:  push   %ebp
0808a7af +0x01:  mov    %esp,%ebp
0808a7b1 +0x03:  sub    $0x18,%esp
0808a7b4 +0x06:  mov    0x8(%ebp),%eax
0808a7b7 +0x09:  lea    0xc(%eax),%edx
0808a7ba +0x0c:  mov    0xc(%ebp),%eax
0808a7bd +0x0f:  mov    %eax,0x4(%esp)
0808a7c1 +0x13:  mov    %edx,(%esp)
0808a7c4 +0x16:  call   0808a5dd <_Z13StrCpyMaxPathPcPKc>  ; StrCpyMaxPath(char*, char const*)
0808a7c9 +0x1b:  leave
0808a7ca +0x1c:  ret
0808a7cb +0x1d:  nop
```

## 反编译 C

```c
// CodeHackChecksumEx::SetFileName @ 0x808a7ae

/* CodeHackChecksumEx::SetFileName(char const*) */

void __thiscall CodeHackChecksumEx::SetFileName(CodeHackChecksumEx *this,char *param_1)

{
  StrCpyMaxPath((char *)(this + 0xc),param_1);
  return;
}
```

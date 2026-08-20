# FileSink

`_ZN8TaoCrypt8FileSinkC1EPKcRNS_6SourceE`

`TaoCrypt::FileSink::FileSink(char const*, TaoCrypt::Source&)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::FileSink` | `0x08758900` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08758900  _ZN8TaoCrypt8FileSinkC1EPKcRNS_6SourceE
#           TaoCrypt::FileSink::FileSink(char const*, TaoCrypt::Source&)
# range [0x08758900, 0x0875894e]
08758900 +0x00:  push   %ebp
08758901 +0x01:  mov    %esp,%ebp
08758903 +0x03:  sub    $0x18,%esp
08758906 +0x06:  mov    %ebx,-0x8(%ebp)
08758909 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
0875890e +0x0e:  add    $0xc1428a,%ebx
08758914 +0x14:  mov    %esi,-0x4(%ebp)
08758917 +0x17:  mov    0x8(%ebp),%esi
0875891a +0x1a:  lea    -0x66b53d(%ebx),%eax
08758920 +0x20:  mov    %eax,0x4(%esp)
08758924 +0x24:  mov    0xc(%ebp),%eax
08758927 +0x27:  mov    %eax,(%esp)
0875892a +0x2a:  call   0807e770 <_init+0x1068>
0875892f +0x2f:  test   %eax,%eax
08758931 +0x31:  mov    %eax,(%esi)
08758933 +0x33:  je     08758944 <+0x44>
08758935 +0x35:  mov    0x10(%ebp),%eax
08758938 +0x38:  mov    %esi,(%esp)
0875893b +0x3b:  mov    %eax,0x4(%esp)
0875893f +0x3f:  call   08758860 <_ZN8TaoCrypt8FileSink3putERNS_6SourceE>  ; TaoCrypt::FileSink::put(TaoCrypt::Source&)
08758944 +0x44:  mov    -0x8(%ebp),%ebx
08758947 +0x47:  mov    -0x4(%ebp),%esi
0875894a +0x4a:  mov    %ebp,%esp
0875894c +0x4c:  pop    %ebp
0875894d +0x4d:  ret
0875894e +0x4e:  xchg   %ax,%ax
```

## 反编译 C

```c
// TaoCrypt::FileSink::FileSink @ 0x8758900

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::FileSink::FileSink(char const*, TaoCrypt::Source&) */

void __thiscall TaoCrypt::FileSink::FileSink(FileSink *this,char *param_1,Source *param_2)

{
  FILE *pFVar1;
  
  pFVar1 = fopen(param_1,"wb");
  *(FILE **)this = pFVar1;
  if (pFVar1 != (FILE *)0x0) {
    put(this,param_2);
  }
  return;
}
```

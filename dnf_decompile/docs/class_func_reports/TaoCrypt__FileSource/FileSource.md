# FileSource

`_ZN8TaoCrypt10FileSourceC1EPKcRNS_6SourceE`

`TaoCrypt::FileSource::FileSource(char const*, TaoCrypt::Source&)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::FileSource` | `0x08758b70` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08758b70  _ZN8TaoCrypt10FileSourceC1EPKcRNS_6SourceE
#           TaoCrypt::FileSource::FileSource(char const*, TaoCrypt::Source&)
# range [0x08758b70, 0x08758bbf]
08758b70 +0x00:  push   %ebp
08758b71 +0x01:  mov    %esp,%ebp
08758b73 +0x03:  sub    $0x18,%esp
08758b76 +0x06:  mov    %ebx,-0x8(%ebp)
08758b79 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
08758b7e +0x0e:  add    $0xc1401a,%ebx
08758b84 +0x14:  mov    %esi,-0x4(%ebp)
08758b87 +0x17:  mov    0x8(%ebp),%esi
08758b8a +0x1a:  lea    -0x66b544(%ebx),%eax
08758b90 +0x20:  mov    %eax,0x4(%esp)
08758b94 +0x24:  mov    0xc(%ebp),%eax
08758b97 +0x27:  mov    %eax,(%esp)
08758b9a +0x2a:  call   0807e770 <_init+0x1068>
08758b9f +0x2f:  test   %eax,%eax
08758ba1 +0x31:  mov    %eax,(%esi)
08758ba3 +0x33:  je     08758bb4 <+0x44>
08758ba5 +0x35:  mov    0x10(%ebp),%eax
08758ba8 +0x38:  mov    %esi,(%esp)
08758bab +0x3b:  mov    %eax,0x4(%esp)
08758baf +0x3f:  call   08758a40 <_ZN8TaoCrypt10FileSource3getERNS_6SourceE>  ; TaoCrypt::FileSource::get(TaoCrypt::Source&)
08758bb4 +0x44:  mov    -0x8(%ebp),%ebx
08758bb7 +0x47:  mov    -0x4(%ebp),%esi
08758bba +0x4a:  mov    %ebp,%esp
08758bbc +0x4c:  pop    %ebp
08758bbd +0x4d:  ret
08758bbe +0x4e:  nop
08758bbf +0x4f:  nop
```

## 反编译 C

```c
// TaoCrypt::FileSource::FileSource @ 0x8758b70

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::FileSource::FileSource(char const*, TaoCrypt::Source&) */

void __thiscall TaoCrypt::FileSource::FileSource(FileSource *this,char *param_1,Source *param_2)

{
  FILE *pFVar1;
  
  pFVar1 = fopen(param_1,"rb");
  *(FILE **)this = pFVar1;
  if (pFVar1 != (FILE *)0x0) {
    get(this,param_2);
  }
  return;
}
```

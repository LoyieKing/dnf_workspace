# GenerateByte

`_ZN8TaoCrypt21RandomNumberGenerator12GenerateByteEv`

`TaoCrypt::RandomNumberGenerator::GenerateByte()`

| 类 | 地址 |
|---|---|
| `TaoCrypt::RandomNumberGenerator` | `0x08767940` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08767940  _ZN8TaoCrypt21RandomNumberGenerator12GenerateByteEv
#           TaoCrypt::RandomNumberGenerator::GenerateByte()
# range [0x08767940, 0x08767979]
08767940 +0x00:  push   %ebp
08767941 +0x01:  mov    %esp,%ebp
08767943 +0x03:  push   %ebx
08767944 +0x04:  call   08722df8 <__i686.get_pc_thunk.bx>
08767949 +0x09:  add    $0xc0524f,%ebx
0876794f +0x0f:  sub    $0x24,%esp
08767952 +0x12:  lea    -0x9(%ebp),%eax
08767955 +0x15:  mov    %eax,0x4(%esp)
08767959 +0x19:  mov    0x8(%ebp),%eax
0876795c +0x1c:  movl   $0x1,0x8(%esp)
08767964 +0x24:  mov    %eax,(%esp)
08767967 +0x27:  call   087678e0 <_ZN8TaoCrypt21RandomNumberGenerator13GenerateBlockEPhj>  ; TaoCrypt::RandomNumberGenerator::GenerateBlock(unsigned char*, unsigned int)
0876796c +0x2c:  movzbl -0x9(%ebp),%eax
08767970 +0x30:  add    $0x24,%esp
08767973 +0x33:  pop    %ebx
08767974 +0x34:  pop    %ebp
08767975 +0x35:  ret
08767976 +0x36:  lea    0x0(%esi),%esi
08767979 +0x39:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TaoCrypt::RandomNumberGenerator::GenerateByte @ 0x8767940

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::RandomNumberGenerator::GenerateByte() */

uchar __thiscall TaoCrypt::RandomNumberGenerator::GenerateByte(RandomNumberGenerator *this)

{
  uchar local_d [5];
  
  builtin_memcpy(local_d + 1,"Iyv\b",4);
  GenerateBlock(this,local_d,1);
  return local_d[0];
}
```

# size_left

`_ZN8TaoCrypt10FileSource9size_leftEv`

`TaoCrypt::FileSource::size_left()`

| 类 | 地址 |
|---|---|
| `TaoCrypt::FileSource` | `0x08758a10` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08758a10  _ZN8TaoCrypt10FileSource9size_leftEv
#           TaoCrypt::FileSource::size_left()
# range [0x08758a10, 0x08758a3c]
08758a10 +0x00:  push   %ebp
08758a11 +0x01:  mov    %esp,%ebp
08758a13 +0x03:  push   %ebx
08758a14 +0x04:  call   08722df8 <__i686.get_pc_thunk.bx>
08758a19 +0x09:  add    $0xc1417f,%ebx
08758a1f +0x0f:  sub    $0x14,%esp
08758a22 +0x12:  mov    0x8(%ebp),%eax
08758a25 +0x15:  movl   $0x1,0x4(%esp)
08758a2d +0x1d:  mov    %eax,(%esp)
08758a30 +0x20:  call   08758950 <_ZN8TaoCrypt10FileSource4sizeEb>  ; TaoCrypt::FileSource::size(bool)
08758a35 +0x25:  add    $0x14,%esp
08758a38 +0x28:  pop    %ebx
08758a39 +0x29:  pop    %ebp
08758a3a +0x2a:  ret
08758a3b +0x2b:  nop
08758a3c +0x2c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TaoCrypt::FileSource::size_left @ 0x8758a10

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::FileSource::size_left() */

void __thiscall TaoCrypt::FileSource::size_left(FileSource *this)

{
  size(this,true);
  return;
}
```

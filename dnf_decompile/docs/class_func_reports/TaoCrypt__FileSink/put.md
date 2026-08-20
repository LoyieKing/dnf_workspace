# put

`_ZN8TaoCrypt8FileSink3putERNS_6SourceE`

`TaoCrypt::FileSink::put(TaoCrypt::Source&)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::FileSink` | `0x08758860` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08758860  _ZN8TaoCrypt8FileSink3putERNS_6SourceE
#           TaoCrypt::FileSink::put(TaoCrypt::Source&)
# range [0x08758860, 0x0875889e]
08758860 +0x00:  push   %ebp
08758861 +0x01:  mov    %esp,%ebp
08758863 +0x03:  push   %ebx
08758864 +0x04:  sub    $0x14,%esp
08758867 +0x07:  mov    0x8(%ebp),%edx
0875886a +0x0a:  mov    0xc(%ebp),%eax
0875886d +0x0d:  call   08722df8 <__i686.get_pc_thunk.bx>
08758872 +0x12:  add    $0xc14326,%ebx
08758878 +0x18:  mov    (%edx),%edx
0875887a +0x1a:  mov    %edx,0xc(%esp)
0875887e +0x1e:  mov    (%eax),%edx
08758880 +0x20:  movl   $0x1,0x4(%esp)
08758888 +0x28:  mov    %edx,0x8(%esp)
0875888c +0x2c:  mov    0x4(%eax),%eax
0875888f +0x2f:  mov    %eax,(%esp)
08758892 +0x32:  call   0807e320 <_init+0xc18>
08758897 +0x37:  add    $0x14,%esp
0875889a +0x3a:  pop    %ebx
0875889b +0x3b:  pop    %ebp
0875889c +0x3c:  ret
0875889d +0x3d:  nop
0875889e +0x3e:  xchg   %ax,%ax
```

## 反编译 C

```c
// TaoCrypt::FileSink::put @ 0x8758860

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::FileSink::put(TaoCrypt::Source&) */

void __thiscall TaoCrypt::FileSink::put(FileSink *this,Source *param_1)

{
  fwrite(*(void **)(param_1 + 4),1,*(size_t *)param_1,*(FILE **)this);
  return;
}
```

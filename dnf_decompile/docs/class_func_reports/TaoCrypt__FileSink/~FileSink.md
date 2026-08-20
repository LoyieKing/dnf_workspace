# ~FileSink

`_ZN8TaoCrypt8FileSinkD1Ev`

`TaoCrypt::FileSink::~FileSink()`

| 类 | 地址 |
|---|---|
| `TaoCrypt::FileSink` | `0x087588a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087588a0  _ZN8TaoCrypt8FileSinkD1Ev
#           TaoCrypt::FileSink::~FileSink()
# range [0x087588a0, 0x087588ca]
087588a0 +0x00:  push   %ebp
087588a1 +0x01:  mov    %esp,%ebp
087588a3 +0x03:  push   %ebx
087588a4 +0x04:  sub    $0x14,%esp
087588a7 +0x07:  mov    0x8(%ebp),%eax
087588aa +0x0a:  call   08722df8 <__i686.get_pc_thunk.bx>
087588af +0x0f:  add    $0xc142e9,%ebx
087588b5 +0x15:  mov    (%eax),%eax
087588b7 +0x17:  test   %eax,%eax
087588b9 +0x19:  je     087588c3 <+0x23>
087588bb +0x1b:  mov    %eax,(%esp)
087588be +0x1e:  call   0807dea0 <_init+0x798>
087588c3 +0x23:  add    $0x14,%esp
087588c6 +0x26:  pop    %ebx
087588c7 +0x27:  pop    %ebp
087588c8 +0x28:  ret
087588c9 +0x29:  nop
087588ca +0x2a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// TaoCrypt::FileSink::~FileSink @ 0x87588a0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::FileSink::~FileSink() */

void __thiscall TaoCrypt::FileSink::~FileSink(FileSink *this)

{
  if (*(FILE **)this != (FILE *)0x0) {
    fclose(*(FILE **)this);
  }
  return;
}
```

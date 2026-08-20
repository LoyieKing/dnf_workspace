# ~FileSource

`_ZN8TaoCrypt10FileSourceD1Ev`

`TaoCrypt::FileSource::~FileSource()`

| 类 | 地址 |
|---|---|
| `TaoCrypt::FileSource` | `0x087588d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087588d0  _ZN8TaoCrypt10FileSourceD1Ev
#           TaoCrypt::FileSource::~FileSource()
# range [0x087588d0, 0x087588fa]
087588d0 +0x00:  push   %ebp
087588d1 +0x01:  mov    %esp,%ebp
087588d3 +0x03:  push   %ebx
087588d4 +0x04:  sub    $0x14,%esp
087588d7 +0x07:  mov    0x8(%ebp),%eax
087588da +0x0a:  call   08722df8 <__i686.get_pc_thunk.bx>
087588df +0x0f:  add    $0xc142b9,%ebx
087588e5 +0x15:  mov    (%eax),%eax
087588e7 +0x17:  test   %eax,%eax
087588e9 +0x19:  je     087588f3 <+0x23>
087588eb +0x1b:  mov    %eax,(%esp)
087588ee +0x1e:  call   0807dea0 <_init+0x798>
087588f3 +0x23:  add    $0x14,%esp
087588f6 +0x26:  pop    %ebx
087588f7 +0x27:  pop    %ebp
087588f8 +0x28:  ret
087588f9 +0x29:  nop
087588fa +0x2a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// TaoCrypt::FileSource::~FileSource @ 0x87588d0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::FileSource::~FileSource() */

void __thiscall TaoCrypt::FileSource::~FileSource(FileSource *this)

{
  if (*(FILE **)this != (FILE *)0x0) {
    fclose(*(FILE **)this);
  }
  return;
}
```

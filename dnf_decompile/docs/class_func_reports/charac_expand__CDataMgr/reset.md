# reset

`_ZN13charac_expand8CDataMgr5resetEv`

`charac_expand::CDataMgr::reset()`

| 类 | 地址 |
|---|---|
| `charac_expand::CDataMgr` | `0x0832ad78` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0832ad78  _ZN13charac_expand8CDataMgr5resetEv
#           charac_expand::CDataMgr::reset()
# range [0x0832ad78, 0x0832ada9]
0832ad78 +0x00:  push   %ebp
0832ad79 +0x01:  mov    %esp,%ebp
0832ad7b +0x03:  sub    $0x28,%esp
0832ad7e +0x06:  movl   $0x0,-0xc(%ebp)
0832ad85 +0x0d:  jmp    0832ad9c <+0x24>
0832ad87 +0x0f:  mov    -0xc(%ebp),%edx
0832ad8a +0x12:  mov    0x8(%ebp),%eax
0832ad8d +0x15:  mov    (%eax,%edx,4),%eax
0832ad90 +0x18:  mov    %eax,(%esp)
0832ad93 +0x1b:  call   0832aebc <_GLOBAL__I__ZN13charac_expand8CDataMgrC2Ev+0x59>  ; global constructors keyed to charac_expand::CDataMgr::CDataMgr()+0x59
0832ad98 +0x20:  addl   $0x1,-0xc(%ebp)
0832ad9c +0x24:  cmpl   $0x13,-0xc(%ebp)
0832ada0 +0x28:  setle  %al
0832ada3 +0x2b:  test   %al,%al
0832ada5 +0x2d:  jne    0832ad87 <+0xf>
0832ada7 +0x2f:  leave
0832ada8 +0x30:  ret
0832ada9 +0x31:  nop
```

## 反编译 C

```c
// charac_expand::CDataMgr::reset @ 0x832ad78

/* charac_expand::CDataMgr::reset() */

void __thiscall charac_expand::CDataMgr::reset(CDataMgr *this)

{
  int local_10;
  
  for (local_10 = 0; local_10 < 0x14; local_10 = local_10 + 1) {
    CData::reset(*(CData **)(this + local_10 * 4));
  }
  return;
}
```

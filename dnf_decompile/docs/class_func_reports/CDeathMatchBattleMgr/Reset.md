# Reset

`_ZN20CDeathMatchBattleMgr5ResetEv`

`CDeathMatchBattleMgr::Reset()`

| 类 | 地址 |
|---|---|
| `CDeathMatchBattleMgr` | `0x085dee22` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085dee22  _ZN20CDeathMatchBattleMgr5ResetEv
#           CDeathMatchBattleMgr::Reset()
# range [0x085dee22, 0x085dee65]
085dee22 +0x00:  push   %ebp
085dee23 +0x01:  mov    %esp,%ebp
085dee25 +0x03:  sub    $0x18,%esp
085dee28 +0x06:  mov    0x8(%ebp),%eax
085dee2b +0x09:  add    $0x4,%eax
085dee2e +0x0c:  movl   $0x20,0x8(%esp)
085dee36 +0x14:  movl   $0x0,0x4(%esp)
085dee3e +0x1c:  mov    %eax,(%esp)
085dee41 +0x1f:  call   0807dcc0 <_init+0x5b8>
085dee46 +0x24:  mov    0x8(%ebp),%eax
085dee49 +0x27:  add    $0x24,%eax
085dee4c +0x2a:  movl   $0x20,0x8(%esp)
085dee54 +0x32:  movl   $0x0,0x4(%esp)
085dee5c +0x3a:  mov    %eax,(%esp)
085dee5f +0x3d:  call   0807dcc0 <_init+0x5b8>
085dee64 +0x42:  leave
085dee65 +0x43:  ret
```

## 反编译 C

```c
// CDeathMatchBattleMgr::Reset @ 0x85dee22

/* CDeathMatchBattleMgr::Reset() */

void __thiscall CDeathMatchBattleMgr::Reset(CDeathMatchBattleMgr *this)

{
  memset(this + 4,0,0x20);
  memset(this + 0x24,0,0x20);
  return;
}
```

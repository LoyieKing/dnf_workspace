# OnStart

`_ZN20CDeathMatchBattleMgr7OnStartEv`

`CDeathMatchBattleMgr::OnStart()`

| 类 | 地址 |
|---|---|
| `CDeathMatchBattleMgr` | `0x085deeca` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085deeca  _ZN20CDeathMatchBattleMgr7OnStartEv
#           CDeathMatchBattleMgr::OnStart()
# range [0x085deeca, 0x085def0d]
085deeca +0x00:  push   %ebp
085deecb +0x01:  mov    %esp,%ebp
085deecd +0x03:  sub    $0x18,%esp
085deed0 +0x06:  mov    0x8(%ebp),%eax
085deed3 +0x09:  add    $0x4,%eax
085deed6 +0x0c:  movl   $0x20,0x8(%esp)
085deede +0x14:  movl   $0x0,0x4(%esp)
085deee6 +0x1c:  mov    %eax,(%esp)
085deee9 +0x1f:  call   0807dcc0 <_init+0x5b8>
085deeee +0x24:  mov    0x8(%ebp),%eax
085deef1 +0x27:  add    $0x24,%eax
085deef4 +0x2a:  movl   $0x20,0x8(%esp)
085deefc +0x32:  movl   $0x0,0x4(%esp)
085def04 +0x3a:  mov    %eax,(%esp)
085def07 +0x3d:  call   0807dcc0 <_init+0x5b8>
085def0c +0x42:  leave
085def0d +0x43:  ret
```

## 反编译 C

```c
// CDeathMatchBattleMgr::OnStart @ 0x85deeca

/* CDeathMatchBattleMgr::OnStart() */

void __thiscall CDeathMatchBattleMgr::OnStart(CDeathMatchBattleMgr *this)

{
  memset(this + 4,0,0x20);
  memset(this + 0x24,0,0x20);
  return;
}
```

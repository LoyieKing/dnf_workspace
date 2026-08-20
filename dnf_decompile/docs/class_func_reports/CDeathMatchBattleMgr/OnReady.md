# OnReady

`_ZN20CDeathMatchBattleMgr7OnReadyEib`

`CDeathMatchBattleMgr::OnReady(int, bool)`

| 类 | 地址 |
|---|---|
| `CDeathMatchBattleMgr` | `0x085deeae` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085deeae  _ZN20CDeathMatchBattleMgr7OnReadyEib
#           CDeathMatchBattleMgr::OnReady(int, bool)
# range [0x085deeae, 0x085deec9]
085deeae +0x00:  push   %ebp
085deeaf +0x01:  mov    %esp,%ebp
085deeb1 +0x03:  sub    $0x4,%esp
085deeb4 +0x06:  mov    0x10(%ebp),%eax
085deeb7 +0x09:  mov    %al,-0x4(%ebp)
085deeba +0x0c:  cmpl   $0x0,0xc(%ebp)
085deebe +0x10:  js     085deec6 <+0x18>
085deec0 +0x12:  cmpl   $0x7,0xc(%ebp)
085deec4 +0x16:  jmp    085deec7 <+0x19>
085deec6 +0x18:  nop
085deec7 +0x19:  leave
085deec8 +0x1a:  ret
085deec9 +0x1b:  nop
```

## 反编译 C

```c
// CDeathMatchBattleMgr::OnReady @ 0x85deeae

/* CDeathMatchBattleMgr::OnReady(int, bool) */

void CDeathMatchBattleMgr::OnReady(int param_1,bool param_2)

{
  return;
}
```

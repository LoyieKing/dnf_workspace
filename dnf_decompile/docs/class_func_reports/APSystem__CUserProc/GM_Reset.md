# GM_Reset

`_ZN8APSystem9CUserProc8GM_ResetEP5CUser`

`APSystem::CUserProc::GM_Reset(CUser*)`

| 类 | 地址 |
|---|---|
| `APSystem::CUserProc` | `0x081225d2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081225d2  _ZN8APSystem9CUserProc8GM_ResetEP5CUser
#           APSystem::CUserProc::GM_Reset(CUser*)
# range [0x081225d2, 0x081225ed]
081225d2 +0x00:  push   %ebp
081225d3 +0x01:  mov    %esp,%ebp
081225d5 +0x03:  sub    $0x4,%esp
081225d8 +0x06:  cmpl   $0x0,0x8(%ebp)
081225dc +0x0a:  je     081225eb <+0x19>
081225de +0x0c:  mov    0x8(%ebp),%eax
081225e1 +0x0f:  mov    %eax,(%esp)
081225e4 +0x12:  call   0812238a <_ZN8APSystem9CUserProc33SetTodayActionAndCheckMedalRewardEP5CUser>  ; APSystem::CUserProc::SetTodayActionAndCheckMedalReward(CUser*)
081225e9 +0x17:  jmp    081225ec <+0x1a>
081225eb +0x19:  nop
081225ec +0x1a:  leave
081225ed +0x1b:  ret
```

## 反编译 C

```c
// APSystem::CUserProc::GM_Reset @ 0x81225d2

/* APSystem::CUserProc::GM_Reset(CUser*) */

void APSystem::CUserProc::GM_Reset(CUser *param_1)

{
  if (param_1 != (CUser *)0x0) {
    SetTodayActionAndCheckMedalReward(param_1);
  }
  return;
}
```

# GM_Set

`_ZN8APSystem9CUserProc6GM_SetEP5CUserj`

`APSystem::CUserProc::GM_Set(CUser*, unsigned int)`

| 类 | 地址 |
|---|---|
| `APSystem::CUserProc` | `0x081225ee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081225ee  _ZN8APSystem9CUserProc6GM_SetEP5CUserj
#           APSystem::CUserProc::GM_Set(CUser*, unsigned int)
# range [0x081225ee, 0x08122629]
081225ee +0x00:  push   %ebp
081225ef +0x01:  mov    %esp,%ebp
081225f1 +0x03:  sub    $0x18,%esp
081225f4 +0x06:  cmpl   $0x0,0x8(%ebp)
081225f8 +0x0a:  je     08122626 <+0x38>
081225fa +0x0c:  mov    0x8(%ebp),%eax
081225fd +0x0f:  lea    0x8d264(%eax),%edx
08122603 +0x15:  mov    0xc(%ebp),%eax
08122606 +0x18:  mov    %eax,0x8(%esp)
0812260a +0x1c:  mov    0x8(%ebp),%eax
0812260d +0x1f:  mov    %eax,0x4(%esp)
08122611 +0x23:  mov    %edx,(%esp)
08122614 +0x26:  call   08121b3e <_ZN8APSystem19CActionPointManager6GM_SetER5CUserj>  ; APSystem::CActionPointManager::GM_Set(CUser&, unsigned int)
08122619 +0x2b:  mov    0x8(%ebp),%eax
0812261c +0x2e:  mov    %eax,(%esp)
0812261f +0x31:  call   081224a0 <_ZN8APSystem9CUserProc19SendActionListStateER5CUser>  ; APSystem::CUserProc::SendActionListState(CUser&)
08122624 +0x36:  jmp    08122627 <+0x39>
08122626 +0x38:  nop
08122627 +0x39:  leave
08122628 +0x3a:  ret
08122629 +0x3b:  nop
```

## 反编译 C

```c
// APSystem::CUserProc::GM_Set @ 0x81225ee

/* APSystem::CUserProc::GM_Set(CUser*, unsigned int) */

void APSystem::CUserProc::GM_Set(CUser *param_1,uint param_2)

{
  if (param_1 != (CUser *)0x0) {
    CActionPointManager::GM_Set((CActionPointManager *)(param_1 + 0x8d264),param_1,param_2);
    SendActionListState(param_1);
  }
  return;
}
```

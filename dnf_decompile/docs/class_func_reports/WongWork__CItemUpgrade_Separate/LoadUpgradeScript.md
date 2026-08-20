# LoadUpgradeScript

`_ZN8WongWork21CItemUpgrade_Separate17LoadUpgradeScriptEPKc`

`WongWork::CItemUpgrade_Separate::LoadUpgradeScript(char const*)`

| 类 | 地址 |
|---|---|
| `WongWork::CItemUpgrade_Separate` | `0x0811eca8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0811eca8  _ZN8WongWork21CItemUpgrade_Separate17LoadUpgradeScriptEPKc
#           WongWork::CItemUpgrade_Separate::LoadUpgradeScript(char const*)
# range [0x0811eca8, 0x0811ecc4]
0811eca8 +0x00:  push   %ebp
0811eca9 +0x01:  mov    %esp,%ebp
0811ecab +0x03:  sub    $0x18,%esp
0811ecae +0x06:  mov    0x8(%ebp),%eax
0811ecb1 +0x09:  add    $0x4,%eax
0811ecb4 +0x0c:  mov    %eax,0x4(%esp)
0811ecb8 +0x10:  mov    0xc(%ebp),%eax
0811ecbb +0x13:  mov    %eax,(%esp)
0811ecbe +0x16:  call   08912336 <_Z25importGenuineUpgradeTablePKcP25GenuineDamageUpgradeTable>  ; importGenuineUpgradeTable(char const*, GenuineDamageUpgradeTable*)
0811ecc3 +0x1b:  leave
0811ecc4 +0x1c:  ret
```

## 反编译 C

```c
// WongWork::CItemUpgrade_Separate::LoadUpgradeScript @ 0x811eca8

/* WongWork::CItemUpgrade_Separate::LoadUpgradeScript(char const*) */

void __thiscall
WongWork::CItemUpgrade_Separate::LoadUpgradeScript(CItemUpgrade_Separate *this,char *param_1)

{
  importGenuineUpgradeTable(param_1,(GenuineDamageUpgradeTable *)(this + 4));
  return;
}
```

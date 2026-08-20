# LoadUpgradeScript

`_ZN8WongWork12CItemUpgrade17LoadUpgradeScriptEPKc`

`WongWork::CItemUpgrade::LoadUpgradeScript(char const*)`

| 类 | 地址 |
|---|---|
| `WongWork::CItemUpgrade` | `0x0854919a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0854919a  _ZN8WongWork12CItemUpgrade17LoadUpgradeScriptEPKc
#           WongWork::CItemUpgrade::LoadUpgradeScript(char const*)
# range [0x0854919a, 0x085491b7]
0854919a +0x00:  push   %ebp
0854919b +0x01:  mov    %esp,%ebp
0854919d +0x03:  sub    $0x18,%esp
085491a0 +0x06:  mov    0x8(%ebp),%eax
085491a3 +0x09:  lea    0x4(%eax),%edx
085491a6 +0x0c:  mov    0xc(%ebp),%eax
085491a9 +0x0f:  mov    %eax,0x4(%esp)
085491ad +0x13:  mov    %edx,(%esp)
085491b0 +0x16:  call   0854b38a <_GLOBAL__I__ZN8WongWork12CItemUpgradeC2Ev+0x212>  ; global constructors keyed to WongWork::CItemUpgrade::CItemUpgrade()+0x212
085491b5 +0x1b:  leave
085491b6 +0x1c:  ret
085491b7 +0x1d:  nop
```

## 反编译 C

```c
// WongWork::CItemUpgrade::LoadUpgradeScript @ 0x854919a

/* WongWork::CItemUpgrade::LoadUpgradeScript(char const*) */

void __thiscall WongWork::CItemUpgrade::LoadUpgradeScript(CItemUpgrade *this,char *param_1)

{
  CItemUpgradeTable::loadUpgradeScript((CItemUpgradeTable *)(this + 4),param_1);
  return;
}
```

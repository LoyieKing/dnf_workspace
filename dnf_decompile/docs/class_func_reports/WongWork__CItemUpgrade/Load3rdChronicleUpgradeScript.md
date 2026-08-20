# Load3rdChronicleUpgradeScript

`_ZN8WongWork12CItemUpgrade29Load3rdChronicleUpgradeScriptEPKc`

`WongWork::CItemUpgrade::Load3rdChronicleUpgradeScript(char const*)`

| 类 | 地址 |
|---|---|
| `WongWork::CItemUpgrade` | `0x085491b8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085491b8  _ZN8WongWork12CItemUpgrade29Load3rdChronicleUpgradeScriptEPKc
#           WongWork::CItemUpgrade::Load3rdChronicleUpgradeScript(char const*)
# range [0x085491b8, 0x085491d5]
085491b8 +0x00:  push   %ebp
085491b9 +0x01:  mov    %esp,%ebp
085491bb +0x03:  sub    $0x18,%esp
085491be +0x06:  mov    0x8(%ebp),%eax
085491c1 +0x09:  lea    0x4(%eax),%edx
085491c4 +0x0c:  mov    0xc(%ebp),%eax
085491c7 +0x0f:  mov    %eax,0x4(%esp)
085491cb +0x13:  mov    %edx,(%esp)
085491ce +0x16:  call   0854b38a <_GLOBAL__I__ZN8WongWork12CItemUpgradeC2Ev+0x212>  ; global constructors keyed to WongWork::CItemUpgrade::CItemUpgrade()+0x212
085491d3 +0x1b:  leave
085491d4 +0x1c:  ret
085491d5 +0x1d:  nop
```

## 反编译 C

```c
// WongWork::CItemUpgrade::Load3rdChronicleUpgradeScript @ 0x85491b8

/* WongWork::CItemUpgrade::Load3rdChronicleUpgradeScript(char const*) */

void __thiscall
WongWork::CItemUpgrade::Load3rdChronicleUpgradeScript(CItemUpgrade *this,char *param_1)

{
  CItemUpgradeTable::loadUpgradeScript((CItemUpgradeTable *)(this + 4),param_1);
  return;
}
```

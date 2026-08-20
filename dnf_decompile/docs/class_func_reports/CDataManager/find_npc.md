# find_npc

`_ZNK12CDataManager8find_npcEj`

`CDataManager::find_npc(unsigned int) const`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x08363818` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08363818  _ZNK12CDataManager8find_npcEj
#           CDataManager::find_npc(unsigned int) const
# range [0x08363818, 0x08363837]
08363818 +0x00:  push   %ebp
08363819 +0x01:  mov    %esp,%ebp
0836381b +0x03:  sub    $0x18,%esp
0836381e +0x06:  mov    0x8(%ebp),%eax
08363821 +0x09:  mov    0xa8d0(%eax),%eax
08363827 +0x0f:  mov    0xc(%ebp),%edx
0836382a +0x12:  mov    %edx,0x4(%esp)
0836382e +0x16:  mov    %eax,(%esp)
08363831 +0x19:  call   08581680 <_ZNK14CNPCScriptList4findEj>  ; CNPCScriptList::find(unsigned int) const
08363836 +0x1e:  leave
08363837 +0x1f:  ret
```

## 反编译 C

```c
// CDataManager::find_npc @ 0x8363818

/* CDataManager::find_npc(unsigned int) const */

void CDataManager::find_npc(uint param_1)

{
  CNPCScriptList::find(*(uint *)(param_1 + 0xa8d0));
  return;
}
```

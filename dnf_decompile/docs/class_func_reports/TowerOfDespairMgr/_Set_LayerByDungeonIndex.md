# _Set_LayerByDungeonIndex

`_ZN17TowerOfDespairMgr24_Set_LayerByDungeonIndexEjPK8CDungeon`

`TowerOfDespairMgr::_Set_LayerByDungeonIndex(unsigned int, CDungeon const*)`

| 类 | 地址 |
|---|---|
| `TowerOfDespairMgr` | `0x08643c6c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08643c6c  _ZN17TowerOfDespairMgr24_Set_LayerByDungeonIndexEjPK8CDungeon
#           TowerOfDespairMgr::_Set_LayerByDungeonIndex(unsigned int, CDungeon const*)
# range [0x08643c6c, 0x08643c85]
08643c6c +0x00:  push   %ebp
08643c6d +0x01:  mov    %esp,%ebp
08643c6f +0x03:  cmpl   $0x0,0x10(%ebp)
08643c73 +0x07:  je     08643c83 <+0x17>
08643c75 +0x09:  mov    0xc(%ebp),%edx
08643c78 +0x0c:  mov    0x8(%ebp),%eax
08643c7b +0x0f:  mov    0x10(%ebp),%ecx
08643c7e +0x12:  mov    %ecx,(%eax,%edx,4)
08643c81 +0x15:  jmp    08643c84 <+0x18>
08643c83 +0x17:  nop
08643c84 +0x18:  pop    %ebp
08643c85 +0x19:  ret
```

## 反编译 C

```c
// TowerOfDespairMgr::_Set_LayerByDungeonIndex @ 0x8643c6c

/* TowerOfDespairMgr::_Set_LayerByDungeonIndex(unsigned int, CDungeon const*) */

void __thiscall
TowerOfDespairMgr::_Set_LayerByDungeonIndex(TowerOfDespairMgr *this,uint param_1,CDungeon *param_2)

{
  if (param_2 != (CDungeon *)0x0) {
    *(CDungeon **)(this + param_1 * 4) = param_2;
  }
  return;
}
```

# Get_DungeonIndexByLayer

`_ZN17TowerOfDespairMgr23Get_DungeonIndexByLayerEj`

`TowerOfDespairMgr::Get_DungeonIndexByLayer(unsigned int)`

| 类 | 地址 |
|---|---|
| `TowerOfDespairMgr` | `0x08643d76` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08643d76  _ZN17TowerOfDespairMgr23Get_DungeonIndexByLayerEj
#           TowerOfDespairMgr::Get_DungeonIndexByLayer(unsigned int)
# range [0x08643d76, 0x08643d9b]
08643d76 +0x00:  push   %ebp
08643d77 +0x01:  mov    %esp,%ebp
08643d79 +0x03:  cmpl   $0x0,0xc(%ebp)
08643d7d +0x07:  je     08643d85 <+0xf>
08643d7f +0x09:  cmpl   $0x64,0xc(%ebp)
08643d83 +0x0d:  jbe    08643d8c <+0x16>
08643d85 +0x0f:  mov    $0x0,%eax
08643d8a +0x14:  jmp    08643d99 <+0x23>
08643d8c +0x16:  mov    0xc(%ebp),%edx
08643d8f +0x19:  mov    0x8(%ebp),%eax
08643d92 +0x1c:  add    $0x64,%edx
08643d95 +0x1f:  mov    0x4(%eax,%edx,4),%eax
08643d99 +0x23:  pop    %ebp
08643d9a +0x24:  ret
08643d9b +0x25:  nop
```

## 反编译 C

```c
// TowerOfDespairMgr::Get_DungeonIndexByLayer @ 0x8643d76

/* TowerOfDespairMgr::Get_DungeonIndexByLayer(unsigned int) */

undefined4 __thiscall
TowerOfDespairMgr::Get_DungeonIndexByLayer(TowerOfDespairMgr *this,uint param_1)

{
  undefined4 uVar1;
  
  if ((param_1 == 0) || (100 < param_1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(this + (param_1 + 100) * 4 + 4);
  }
  return uVar1;
}
```

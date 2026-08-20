# Get_CDungeonByLayer

`_ZN17TowerOfDespairMgr19Get_CDungeonByLayerEj`

`TowerOfDespairMgr::Get_CDungeonByLayer(unsigned int)`

| 类 | 地址 |
|---|---|
| `TowerOfDespairMgr` | `0x08643d14` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08643d14  _ZN17TowerOfDespairMgr19Get_CDungeonByLayerEj
#           TowerOfDespairMgr::Get_CDungeonByLayer(unsigned int)
# range [0x08643d14, 0x08643d75]
08643d14 +0x00:  push   %ebp
08643d15 +0x01:  mov    %esp,%ebp
08643d17 +0x03:  push   %esi
08643d18 +0x04:  push   %ebx
08643d19 +0x05:  sub    $0x10,%esp
08643d1c +0x08:  cmpl   $0x0,0xc(%ebp)
08643d20 +0x0c:  je     08643d28 <+0x14>
08643d22 +0x0e:  cmpl   $0x64,0xc(%ebp)
08643d26 +0x12:  jbe    08643d2f <+0x1b>
08643d28 +0x14:  mov    $0x0,%eax
08643d2d +0x19:  jmp    08643d6e <+0x5a>
08643d2f +0x1b:  mov    0xc(%ebp),%edx
08643d32 +0x1e:  mov    0x8(%ebp),%eax
08643d35 +0x21:  mov    (%eax,%edx,4),%eax
08643d38 +0x24:  test   %eax,%eax
08643d3a +0x26:  jne    08643d65 <+0x51>
08643d3c +0x28:  mov    0xc(%ebp),%ebx
08643d3f +0x2b:  mov    0xc(%ebp),%edx
08643d42 +0x2e:  mov    0x8(%ebp),%eax
08643d45 +0x31:  add    $0x64,%edx
08643d48 +0x34:  mov    0x4(%eax,%edx,4),%eax
08643d4c +0x38:  mov    %eax,%esi
08643d4e +0x3a:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08643d53 +0x3f:  mov    %esi,0x4(%esp)
08643d57 +0x43:  mov    %eax,(%esp)
08643d5a +0x46:  call   0835f9f8 <_ZNK12CDataManager12find_dungeonEi>  ; CDataManager::find_dungeon(int) const
08643d5f +0x4b:  mov    0x8(%ebp),%edx
08643d62 +0x4e:  mov    %eax,(%edx,%ebx,4)
08643d65 +0x51:  mov    0xc(%ebp),%edx
08643d68 +0x54:  mov    0x8(%ebp),%eax
08643d6b +0x57:  mov    (%eax,%edx,4),%eax
08643d6e +0x5a:  add    $0x10,%esp
08643d71 +0x5d:  pop    %ebx
08643d72 +0x5e:  pop    %esi
08643d73 +0x5f:  pop    %ebp
08643d74 +0x60:  ret
08643d75 +0x61:  nop
```

## 反编译 C

```c
// TowerOfDespairMgr::Get_CDungeonByLayer @ 0x8643d14

/* TowerOfDespairMgr::Get_CDungeonByLayer(unsigned int) */

undefined4 __thiscall TowerOfDespairMgr::Get_CDungeonByLayer(TowerOfDespairMgr *this,uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((param_1 == 0) || (100 < param_1)) {
    uVar1 = 0;
  }
  else {
    if (*(int *)(this + param_1 * 4) == 0) {
      iVar2 = G_CDataManager();
      uVar1 = CDataManager::find_dungeon(iVar2);
      *(undefined4 *)(this + param_1 * 4) = uVar1;
    }
    uVar1 = *(undefined4 *)(this + param_1 * 4);
  }
  return uVar1;
}
```

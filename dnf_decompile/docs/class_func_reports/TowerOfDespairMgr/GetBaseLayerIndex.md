# GetBaseLayerIndex

`_ZN17TowerOfDespairMgr17GetBaseLayerIndexEv`

`TowerOfDespairMgr::GetBaseLayerIndex()`

| 类 | 地址 |
|---|---|
| `TowerOfDespairMgr` | `0x086440a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086440a0  _ZN17TowerOfDespairMgr17GetBaseLayerIndexEv
#           TowerOfDespairMgr::GetBaseLayerIndex()
# range [0x086440a0, 0x086440ed]
086440a0 +0x00:  push   %ebp
086440a1 +0x01:  mov    %esp,%ebp
086440a3 +0x03:  sub    $0x28,%esp
086440a6 +0x06:  mov    0x8(%ebp),%eax
086440a9 +0x09:  mov    0x358(%eax),%eax
086440af +0x0f:  test   %eax,%eax
086440b1 +0x11:  jne    086440e3 <+0x43>
086440b3 +0x13:  movl   $0x1,0x4(%esp)
086440bb +0x1b:  mov    0x8(%ebp),%eax
086440be +0x1e:  mov    %eax,(%esp)
086440c1 +0x21:  call   08643d14 <_ZN17TowerOfDespairMgr19Get_CDungeonByLayerEj>  ; TowerOfDespairMgr::Get_CDungeonByLayer(unsigned int)
086440c6 +0x26:  mov    %eax,-0xc(%ebp)
086440c9 +0x29:  cmpl   $0x0,-0xc(%ebp)
086440cd +0x2d:  je     086440e3 <+0x43>
086440cf +0x2f:  mov    -0xc(%ebp),%eax
086440d2 +0x32:  mov    %eax,(%esp)
086440d5 +0x35:  call   080fdcf0 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1c
086440da +0x3a:  mov    0x8(%ebp),%edx
086440dd +0x3d:  mov    %eax,0x358(%edx)
086440e3 +0x43:  mov    0x8(%ebp),%eax
086440e6 +0x46:  mov    0x358(%eax),%eax
086440ec +0x4c:  leave
086440ed +0x4d:  ret
```

## 反编译 C

```c
// TowerOfDespairMgr::GetBaseLayerIndex @ 0x86440a0

/* TowerOfDespairMgr::GetBaseLayerIndex() */

undefined4 __thiscall TowerOfDespairMgr::GetBaseLayerIndex(TowerOfDespairMgr *this)

{
  CDungeon *this_00;
  undefined4 uVar1;
  
  if (*(int *)(this + 0x358) == 0) {
    this_00 = (CDungeon *)Get_CDungeonByLayer(this,1);
    if (this_00 != (CDungeon *)0x0) {
      uVar1 = CDungeon::get_index(this_00);
      *(undefined4 *)(this + 0x358) = uVar1;
    }
  }
  return *(undefined4 *)(this + 0x358);
}
```

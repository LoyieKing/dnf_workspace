# Get_APCNameByLayer

`_ZN17TowerOfDespairMgr18Get_APCNameByLayerERK9TOD_Layer`

`TowerOfDespairMgr::Get_APCNameByLayer(TOD_Layer const&)`

| 类 | 地址 |
|---|---|
| `TowerOfDespairMgr` | `0x08643e4a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08643e4a  _ZN17TowerOfDespairMgr18Get_APCNameByLayerERK9TOD_Layer
#           TowerOfDespairMgr::Get_APCNameByLayer(TOD_Layer const&)
# range [0x08643e4a, 0x08643e7d]
08643e4a +0x00:  push   %ebp
08643e4b +0x01:  mov    %esp,%ebp
08643e4d +0x03:  sub    $0x18,%esp
08643e50 +0x06:  mov    0x8(%ebp),%eax
08643e53 +0x09:  mov    0x354(%eax),%eax
08643e59 +0x0f:  test   %eax,%eax
08643e5b +0x11:  je     08643e77 <+0x2d>
08643e5d +0x13:  mov    0x8(%ebp),%eax
08643e60 +0x16:  mov    0x354(%eax),%eax
08643e66 +0x1c:  mov    0xc(%ebp),%edx
08643e69 +0x1f:  mov    %edx,0x4(%esp)
08643e6d +0x23:  mov    %eax,(%esp)
08643e70 +0x26:  call   085ff020 <_ZN22TowerOfDespair_APC_Mgr20Get_APC_Name_byIndexERK9TOD_Layer>  ; TowerOfDespair_APC_Mgr::Get_APC_Name_byIndex(TOD_Layer const&)
08643e75 +0x2b:  jmp    08643e7c <+0x32>
08643e77 +0x2d:  mov    $0x0,%eax
08643e7c +0x32:  leave
08643e7d +0x33:  ret
```

## 反编译 C

```c
// TowerOfDespairMgr::Get_APCNameByLayer @ 0x8643e4a

/* TowerOfDespairMgr::Get_APCNameByLayer(TOD_Layer const&) */

undefined4 TowerOfDespairMgr::Get_APCNameByLayer(TOD_Layer *param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x354) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = TowerOfDespair_APC_Mgr::Get_APC_Name_byIndex(*(TOD_Layer **)(param_1 + 0x354));
  }
  return uVar1;
}
```

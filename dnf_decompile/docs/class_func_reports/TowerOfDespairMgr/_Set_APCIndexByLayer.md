# _Set_APCIndexByLayer

`_ZN17TowerOfDespairMgr20_Set_APCIndexByLayerEj`

`TowerOfDespairMgr::_Set_APCIndexByLayer(unsigned int)`

| 类 | 地址 |
|---|---|
| `TowerOfDespairMgr` | `0x08643cf4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08643cf4  _ZN17TowerOfDespairMgr20_Set_APCIndexByLayerEj
#           TowerOfDespairMgr::_Set_APCIndexByLayer(unsigned int)
# range [0x08643cf4, 0x08643d13]
08643cf4 +0x00:  push   %ebp
08643cf5 +0x01:  mov    %esp,%ebp
08643cf7 +0x03:  sub    $0x18,%esp
08643cfa +0x06:  mov    0x8(%ebp),%eax
08643cfd +0x09:  lea    0x340(%eax),%edx
08643d03 +0x0f:  lea    0xc(%ebp),%eax
08643d06 +0x12:  mov    %eax,0x4(%esp)
08643d0a +0x16:  mov    %edx,(%esp)
08643d0d +0x19:  call   080e24f0 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x296>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x296
08643d12 +0x1e:  leave
08643d13 +0x1f:  ret
```

## 反编译 C

```c
// TowerOfDespairMgr::_Set_APCIndexByLayer @ 0x8643cf4

/* TowerOfDespairMgr::_Set_APCIndexByLayer(unsigned int) */

void TowerOfDespairMgr::_Set_APCIndexByLayer(uint param_1)

{
  std::vector<unsigned_int,std::allocator<unsigned_int>>::push_back
            ((vector<unsigned_int,std::allocator<unsigned_int>> *)(param_1 + 0x340),
             (uint *)&stack0x00000008);
  return;
}
```

# IsTowerOfDespairDungeon_ByIndex

`_ZNK17TowerOfDespairMgr31IsTowerOfDespairDungeon_ByIndexEi`

`TowerOfDespairMgr::IsTowerOfDespairDungeon_ByIndex(int) const`

| 类 | 地址 |
|---|---|
| `TowerOfDespairMgr` | `0x08644272` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08644272  _ZNK17TowerOfDespairMgr31IsTowerOfDespairDungeon_ByIndexEi
#           TowerOfDespairMgr::IsTowerOfDespairDungeon_ByIndex(int) const
# range [0x08644272, 0x086442c9]
08644272 +0x00:  push   %ebp
08644273 +0x01:  mov    %esp,%ebp
08644275 +0x03:  sub    $0x28,%esp
08644278 +0x06:  mov    0x8(%ebp),%eax
0864427b +0x09:  lea    0x328(%eax),%ecx
08644281 +0x0f:  lea    -0x10(%ebp),%eax
08644284 +0x12:  lea    0xc(%ebp),%edx
08644287 +0x15:  mov    %edx,0x8(%esp)
0864428b +0x19:  mov    %ecx,0x4(%esp)
0864428f +0x1d:  mov    %eax,(%esp)
08644292 +0x20:  call   080da46a <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x607>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x607
08644297 +0x25:  sub    $0x4,%esp
0864429a +0x28:  mov    0x8(%ebp),%eax
0864429d +0x2b:  lea    0x328(%eax),%edx
086442a3 +0x31:  lea    -0xc(%ebp),%eax
086442a6 +0x34:  mov    %edx,0x4(%esp)
086442aa +0x38:  mov    %eax,(%esp)
086442ad +0x3b:  call   080da496 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x633>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x633
086442b2 +0x40:  sub    $0x4,%esp
086442b5 +0x43:  lea    -0x10(%ebp),%eax
086442b8 +0x46:  mov    %eax,0x4(%esp)
086442bc +0x4a:  lea    -0xc(%ebp),%eax
086442bf +0x4d:  mov    %eax,(%esp)
086442c2 +0x50:  call   080e6152 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x288>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x288
086442c7 +0x55:  leave
086442c8 +0x56:  ret
086442c9 +0x57:  nop
```

## 反编译 C

```c
// TowerOfDespairMgr::IsTowerOfDespairDungeon_ByIndex @ 0x8644272

/* TowerOfDespairMgr::IsTowerOfDespairDungeon_ByIndex(int) const */

void TowerOfDespairMgr::IsTowerOfDespairDungeon_ByIndex(int param_1)

{
  _Rb_tree_const_iterator local_14 [4];
  set<int,std::less<int>,std::allocator<int>> local_10 [12];
  
  std::set<int,std::less<int>,std::allocator<int>>::find((int *)local_14);
  std::set<int,std::less<int>,std::allocator<int>>::end(local_10);
  std::_Rb_tree_const_iterator<int>::operator!=((_Rb_tree_const_iterator<int> *)local_10,local_14);
  return;
}
```

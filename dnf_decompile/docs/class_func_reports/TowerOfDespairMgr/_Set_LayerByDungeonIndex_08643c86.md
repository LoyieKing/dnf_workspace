# _Set_LayerByDungeonIndex

`_ZN17TowerOfDespairMgr24_Set_LayerByDungeonIndexEjj`

`TowerOfDespairMgr::_Set_LayerByDungeonIndex(unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TowerOfDespairMgr` | `0x08643c86` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08643c86  _ZN17TowerOfDespairMgr24_Set_LayerByDungeonIndexEjj
#           TowerOfDespairMgr::_Set_LayerByDungeonIndex(unsigned int, unsigned int)
# range [0x08643c86, 0x08643cf3]
08643c86 +0x00:  push   %ebp
08643c87 +0x01:  mov    %esp,%ebp
08643c89 +0x03:  push   %ebx
08643c8a +0x04:  sub    $0x24,%esp
08643c8d +0x07:  mov    0xc(%ebp),%edx
08643c90 +0x0a:  mov    0x8(%ebp),%eax
08643c93 +0x0d:  lea    0x64(%edx),%ecx
08643c96 +0x10:  mov    0x10(%ebp),%edx
08643c99 +0x13:  mov    %edx,0x4(%eax,%ecx,4)
08643c9d +0x17:  mov    0x10(%ebp),%eax
08643ca0 +0x1a:  mov    %eax,-0xc(%ebp)
08643ca3 +0x1d:  mov    0x8(%ebp),%eax
08643ca6 +0x20:  lea    0x328(%eax),%ecx
08643cac +0x26:  lea    -0x14(%ebp),%eax
08643caf +0x29:  lea    -0xc(%ebp),%edx
08643cb2 +0x2c:  mov    %edx,0x8(%esp)
08643cb6 +0x30:  mov    %ecx,0x4(%esp)
08643cba +0x34:  mov    %eax,(%esp)
08643cbd +0x37:  call   080da5c6 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x763>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x763
08643cc2 +0x3c:  sub    $0x4,%esp
08643cc5 +0x3f:  mov    0x10(%ebp),%ebx
08643cc8 +0x42:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08643ccd +0x47:  mov    %ebx,0x4(%esp)
08643cd1 +0x4b:  mov    %eax,(%esp)
08643cd4 +0x4e:  call   0835f9f8 <_ZNK12CDataManager12find_dungeonEi>  ; CDataManager::find_dungeon(int) const
08643cd9 +0x53:  mov    %eax,0x8(%esp)
08643cdd +0x57:  mov    0xc(%ebp),%eax
08643ce0 +0x5a:  mov    %eax,0x4(%esp)
08643ce4 +0x5e:  mov    0x8(%ebp),%eax
08643ce7 +0x61:  mov    %eax,(%esp)
08643cea +0x64:  call   08643c6c <_ZN17TowerOfDespairMgr24_Set_LayerByDungeonIndexEjPK8CDungeon>  ; TowerOfDespairMgr::_Set_LayerByDungeonIndex(unsigned int, CDungeon const*)
08643cef +0x69:  mov    -0x4(%ebp),%ebx
08643cf2 +0x6c:  leave
08643cf3 +0x6d:  ret
```

## 反编译 C

```c
// TowerOfDespairMgr::_Set_LayerByDungeonIndex @ 0x8643c86

/* TowerOfDespairMgr::_Set_LayerByDungeonIndex(unsigned int, unsigned int) */

void __thiscall
TowerOfDespairMgr::_Set_LayerByDungeonIndex(TowerOfDespairMgr *this,uint param_1,uint param_2)

{
  int iVar1;
  CDungeon *pCVar2;
  int local_18 [2];
  uint local_10;
  
  *(uint *)(this + (param_1 + 100) * 4 + 4) = param_2;
  local_10 = param_2;
  std::set<int,std::less<int>,std::allocator<int>>::insert(local_18);
  iVar1 = G_CDataManager();
  pCVar2 = (CDungeon *)CDataManager::find_dungeon(iVar1);
  _Set_LayerByDungeonIndex(this,param_1,pCVar2);
  return;
}
```

# invalidAniDecoItem

`_ZN12CDataManager18invalidAniDecoItemEii`

`CDataManager::invalidAniDecoItem(int, int)`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x08365c86` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08365c86  _ZN12CDataManager18invalidAniDecoItemEii
#           CDataManager::invalidAniDecoItem(int, int)
# range [0x08365c86, 0x08365d0d]
08365c86 +0x00:  push   %ebp
08365c87 +0x01:  mov    %esp,%ebp
08365c89 +0x03:  sub    $0x28,%esp
08365c8c +0x06:  mov    0xc(%ebp),%eax
08365c8f +0x09:  add    $0x1,%eax
08365c92 +0x0c:  mov    %eax,0xc(%ebp)
08365c95 +0x0f:  mov    0x8(%ebp),%eax
08365c98 +0x12:  lea    0x4c5c(%eax),%ecx
08365c9e +0x18:  lea    -0x10(%ebp),%eax
08365ca1 +0x1b:  lea    0xc(%ebp),%edx
08365ca4 +0x1e:  mov    %edx,0x8(%esp)
08365ca8 +0x22:  mov    %ecx,0x4(%esp)
08365cac +0x26:  mov    %eax,(%esp)
08365caf +0x29:  call   080cd2ee <_GLOBAL__I__ZN10BingoEventC2Ev+0x213b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x213b
08365cb4 +0x2e:  sub    $0x4,%esp
08365cb7 +0x31:  mov    0x8(%ebp),%eax
08365cba +0x34:  lea    0x4c5c(%eax),%edx
08365cc0 +0x3a:  lea    -0xc(%ebp),%eax
08365cc3 +0x3d:  mov    %edx,0x4(%esp)
08365cc7 +0x41:  mov    %eax,(%esp)
08365cca +0x44:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
08365ccf +0x49:  sub    $0x4,%esp
08365cd2 +0x4c:  lea    -0xc(%ebp),%eax
08365cd5 +0x4f:  mov    %eax,0x4(%esp)
08365cd9 +0x53:  lea    -0x10(%ebp),%eax
08365cdc +0x56:  mov    %eax,(%esp)
08365cdf +0x59:  call   080da3c8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x565>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x565
08365ce4 +0x5e:  test   %al,%al
08365ce6 +0x60:  je     08365d07 <+0x81>
08365ce8 +0x62:  lea    -0x10(%ebp),%eax
08365ceb +0x65:  mov    %eax,(%esp)
08365cee +0x68:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
08365cf3 +0x6d:  mov    0x4(%eax),%eax
08365cf6 +0x70:  cmp    0x10(%ebp),%eax
08365cf9 +0x73:  sete   %al
08365cfc +0x76:  test   %al,%al
08365cfe +0x78:  je     08365d07 <+0x81>
08365d00 +0x7a:  mov    $0x1,%eax
08365d05 +0x7f:  jmp    08365d0c <+0x86>
08365d07 +0x81:  mov    $0x0,%eax
08365d0c +0x86:  leave
08365d0d +0x87:  ret
```

## 反编译 C

```c
// CDataManager::invalidAniDecoItem @ 0x8365c86

/* CDataManager::invalidAniDecoItem(int, int) */

undefined4 __thiscall CDataManager::invalidAniDecoItem(CDataManager *this,int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator<std::pair<int_const,int>> local_14 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_10 [12];
  
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find((int *)local_14);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                    (local_14,(_Rb_tree_iterator *)local_10);
  if ((cVar1 != '\0') &&
     (iVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_14),
     *(int *)(iVar2 + 4) == param_2)) {
    return 1;
  }
  return 0;
}
```

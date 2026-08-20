# getMatchEventPoint

`_ZN12CDataManager18getMatchEventPointEi`

`CDataManager::getMatchEventPoint(int)`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x0836544a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0836544a  _ZN12CDataManager18getMatchEventPointEi
#           CDataManager::getMatchEventPoint(int)
# range [0x0836544a, 0x083654b9]
0836544a +0x00:  push   %ebp
0836544b +0x01:  mov    %esp,%ebp
0836544d +0x03:  sub    $0x28,%esp
08365450 +0x06:  mov    0x8(%ebp),%eax
08365453 +0x09:  lea    0x4b80(%eax),%ecx
08365459 +0x0f:  lea    -0x10(%ebp),%eax
0836545c +0x12:  lea    0xc(%ebp),%edx
0836545f +0x15:  mov    %edx,0x8(%esp)
08365463 +0x19:  mov    %ecx,0x4(%esp)
08365467 +0x1d:  mov    %eax,(%esp)
0836546a +0x20:  call   080cd2ee <_GLOBAL__I__ZN10BingoEventC2Ev+0x213b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x213b
0836546f +0x25:  sub    $0x4,%esp
08365472 +0x28:  mov    0x8(%ebp),%eax
08365475 +0x2b:  lea    0x4b80(%eax),%edx
0836547b +0x31:  lea    -0xc(%ebp),%eax
0836547e +0x34:  mov    %edx,0x4(%esp)
08365482 +0x38:  mov    %eax,(%esp)
08365485 +0x3b:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
0836548a +0x40:  sub    $0x4,%esp
0836548d +0x43:  lea    -0xc(%ebp),%eax
08365490 +0x46:  mov    %eax,0x4(%esp)
08365494 +0x4a:  lea    -0x10(%ebp),%eax
08365497 +0x4d:  mov    %eax,(%esp)
0836549a +0x50:  call   080da3c8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x565>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x565
0836549f +0x55:  test   %al,%al
083654a1 +0x57:  je     083654b3 <+0x69>
083654a3 +0x59:  lea    -0x10(%ebp),%eax
083654a6 +0x5c:  mov    %eax,(%esp)
083654a9 +0x5f:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
083654ae +0x64:  mov    0x4(%eax),%eax
083654b1 +0x67:  jmp    083654b8 <+0x6e>
083654b3 +0x69:  mov    $0x0,%eax
083654b8 +0x6e:  leave
083654b9 +0x6f:  ret
```

## 反编译 C

```c
// CDataManager::getMatchEventPoint @ 0x836544a

/* CDataManager::getMatchEventPoint(int) */

undefined4 CDataManager::getMatchEventPoint(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  _Rb_tree_iterator<std::pair<int_const,int>> local_14 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_10 [12];
  
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find((int *)local_14);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                    (local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_14);
    uVar3 = *(undefined4 *)(iVar2 + 4);
  }
  return uVar3;
}
```

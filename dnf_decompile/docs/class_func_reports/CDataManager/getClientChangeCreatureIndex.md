# getClientChangeCreatureIndex

`_ZN12CDataManager28getClientChangeCreatureIndexEi`

`CDataManager::getClientChangeCreatureIndex(int)`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x08365c16` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08365c16  _ZN12CDataManager28getClientChangeCreatureIndexEi
#           CDataManager::getClientChangeCreatureIndex(int)
# range [0x08365c16, 0x08365c85]
08365c16 +0x00:  push   %ebp
08365c17 +0x01:  mov    %esp,%ebp
08365c19 +0x03:  sub    $0x28,%esp
08365c1c +0x06:  mov    0x8(%ebp),%eax
08365c1f +0x09:  lea    0x4c38(%eax),%ecx
08365c25 +0x0f:  lea    -0x10(%ebp),%eax
08365c28 +0x12:  lea    0xc(%ebp),%edx
08365c2b +0x15:  mov    %edx,0x8(%esp)
08365c2f +0x19:  mov    %ecx,0x4(%esp)
08365c33 +0x1d:  mov    %eax,(%esp)
08365c36 +0x20:  call   080cd2ee <_GLOBAL__I__ZN10BingoEventC2Ev+0x213b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x213b
08365c3b +0x25:  sub    $0x4,%esp
08365c3e +0x28:  mov    0x8(%ebp),%eax
08365c41 +0x2b:  lea    0x4c38(%eax),%edx
08365c47 +0x31:  lea    -0xc(%ebp),%eax
08365c4a +0x34:  mov    %edx,0x4(%esp)
08365c4e +0x38:  mov    %eax,(%esp)
08365c51 +0x3b:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
08365c56 +0x40:  sub    $0x4,%esp
08365c59 +0x43:  lea    -0xc(%ebp),%eax
08365c5c +0x46:  mov    %eax,0x4(%esp)
08365c60 +0x4a:  lea    -0x10(%ebp),%eax
08365c63 +0x4d:  mov    %eax,(%esp)
08365c66 +0x50:  call   080da3c8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x565>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x565
08365c6b +0x55:  test   %al,%al
08365c6d +0x57:  je     08365c7f <+0x69>
08365c6f +0x59:  lea    -0x10(%ebp),%eax
08365c72 +0x5c:  mov    %eax,(%esp)
08365c75 +0x5f:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
08365c7a +0x64:  mov    0x4(%eax),%eax
08365c7d +0x67:  jmp    08365c84 <+0x6e>
08365c7f +0x69:  mov    $0xffffffff,%eax
08365c84 +0x6e:  leave
08365c85 +0x6f:  ret
```

## 反编译 C

```c
// CDataManager::getClientChangeCreatureIndex @ 0x8365c16

/* CDataManager::getClientChangeCreatureIndex(int) */

undefined4 CDataManager::getClientChangeCreatureIndex(int param_1)

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
    uVar3 = 0xffffffff;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_14);
    uVar3 = *(undefined4 *)(iVar2 + 4);
  }
  return uVar3;
}
```

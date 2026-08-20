# GetPvpMapInfo

`_ZN8CMapList13GetPvpMapInfoEiR10PvPMapInfo`

`CMapList::GetPvpMapInfo(int, PvPMapInfo&)`

| 类 | 地址 |
|---|---|
| `CMapList` | `0x0834f5c8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0834f5c8  _ZN8CMapList13GetPvpMapInfoEiR10PvPMapInfo
#           CMapList::GetPvpMapInfo(int, PvPMapInfo&)
# range [0x0834f5c8, 0x0834f64f]
0834f5c8 +0x00:  push   %ebp
0834f5c9 +0x01:  mov    %esp,%ebp
0834f5cb +0x03:  sub    $0x28,%esp
0834f5ce +0x06:  lea    -0x10(%ebp),%eax
0834f5d1 +0x09:  lea    0x8(%ebp),%edx
0834f5d4 +0x0c:  mov    %edx,0x8(%esp)
0834f5d8 +0x10:  movl   $&_ZN8CMapList14mapPvpMapInfo_E,0x4(%esp)
0834f5e0 +0x18:  mov    %eax,(%esp)
0834f5e3 +0x1b:  call   0838bebe <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1b95e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1b95e
0834f5e8 +0x20:  sub    $0x4,%esp
0834f5eb +0x23:  lea    -0xc(%ebp),%eax
0834f5ee +0x26:  movl   $&_ZN8CMapList14mapPvpMapInfo_E,0x4(%esp)
0834f5f6 +0x2e:  mov    %eax,(%esp)
0834f5f9 +0x31:  call   0838be58 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1b8f8>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1b8f8
0834f5fe +0x36:  sub    $0x4,%esp
0834f601 +0x39:  lea    -0xc(%ebp),%eax
0834f604 +0x3c:  mov    %eax,0x4(%esp)
0834f608 +0x40:  lea    -0x10(%ebp),%eax
0834f60b +0x43:  mov    %eax,(%esp)
0834f60e +0x46:  call   0838be7e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1b91e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1b91e
0834f613 +0x4b:  test   %al,%al
0834f615 +0x4d:  je     0834f648 <+0x80>
0834f617 +0x4f:  lea    -0x10(%ebp),%eax
0834f61a +0x52:  mov    %eax,(%esp)
0834f61d +0x55:  call   0838beb0 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1b950>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1b950
0834f622 +0x5a:  add    $0x4,%eax
0834f625 +0x5d:  cmp    %eax,0xc(%ebp)
0834f628 +0x60:  je     0834f641 <+0x79>
0834f62a +0x62:  movl   $0x5,0x8(%esp)
0834f632 +0x6a:  mov    %eax,0x4(%esp)
0834f636 +0x6e:  mov    0xc(%ebp),%eax
0834f639 +0x71:  mov    %eax,(%esp)
0834f63c +0x74:  call   0807d8a0 <_init+0x198>
0834f641 +0x79:  mov    $0x1,%eax
0834f646 +0x7e:  jmp    0834f64d <+0x85>
0834f648 +0x80:  mov    $0x0,%eax
0834f64d +0x85:  leave
0834f64e +0x86:  ret
0834f64f +0x87:  nop
```

## 反编译 C

```c
// CMapList::GetPvpMapInfo @ 0x834f5c8

/* CMapList::GetPvpMapInfo(int, PvPMapInfo&) */

undefined4 CMapList::GetPvpMapInfo(int param_1,PvPMapInfo *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  _Rb_tree_iterator<std::pair<int_const,PvPMapInfo>> local_14 [4];
  map<int,PvPMapInfo,std::less<int>,std::allocator<std::pair<int_const,PvPMapInfo>>> local_10 [12];
  
  std::map<int,PvPMapInfo,std::less<int>,std::allocator<std::pair<int_const,PvPMapInfo>>>::find
            ((int *)local_14);
  std::map<int,PvPMapInfo,std::less<int>,std::allocator<std::pair<int_const,PvPMapInfo>>>::end
            (local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,PvPMapInfo>>::operator!=
                    (local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,PvPMapInfo>>::operator->(local_14);
    if (param_2 != (PvPMapInfo *)(iVar2 + 4)) {
      memcpy(param_2,(PvPMapInfo *)(iVar2 + 4),5);
    }
    uVar3 = 1;
  }
  return uVar3;
}
```

# FindPrePayInfo

`_ZN14CPrePayInfoMgr14FindPrePayInfoEi`

`CPrePayInfoMgr::FindPrePayInfo(int)`

| 类 | 地址 |
|---|---|
| `CPrePayInfoMgr` | `0x082151b8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082151b8  _ZN14CPrePayInfoMgr14FindPrePayInfoEi
#           CPrePayInfoMgr::FindPrePayInfo(int)
# range [0x082151b8, 0x0821522d]
082151b8 +0x00:  push   %ebp
082151b9 +0x01:  mov    %esp,%ebp
082151bb +0x03:  sub    $0x38,%esp
082151be +0x06:  lea    -0x10(%ebp),%eax
082151c1 +0x09:  mov    %eax,(%esp)
082151c4 +0x0c:  call   08237bac <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd256>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd256
082151c9 +0x11:  mov    0x8(%ebp),%edx
082151cc +0x14:  lea    -0x1c(%ebp),%eax
082151cf +0x17:  lea    0xc(%ebp),%ecx
082151d2 +0x1a:  mov    %ecx,0x8(%esp)
082151d6 +0x1e:  mov    %edx,0x4(%esp)
082151da +0x22:  mov    %eax,(%esp)
082151dd +0x25:  call   08237bba <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd264>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd264
082151e2 +0x2a:  sub    $0x4,%esp
082151e5 +0x2d:  mov    -0x1c(%ebp),%eax
082151e8 +0x30:  mov    %eax,-0x10(%ebp)
082151eb +0x33:  mov    0x8(%ebp),%edx
082151ee +0x36:  lea    -0xc(%ebp),%eax
082151f1 +0x39:  mov    %edx,0x4(%esp)
082151f5 +0x3d:  mov    %eax,(%esp)
082151f8 +0x40:  call   08237be6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd290>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd290
082151fd +0x45:  sub    $0x4,%esp
08215200 +0x48:  lea    -0xc(%ebp),%eax
08215203 +0x4b:  mov    %eax,0x4(%esp)
08215207 +0x4f:  lea    -0x10(%ebp),%eax
0821520a +0x52:  mov    %eax,(%esp)
0821520d +0x55:  call   08237c0c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd2b6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd2b6
08215212 +0x5a:  test   %al,%al
08215214 +0x5c:  je     08215226 <+0x6e>
08215216 +0x5e:  lea    -0x10(%ebp),%eax
08215219 +0x61:  mov    %eax,(%esp)
0821521c +0x64:  call   08237c20 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd2ca>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd2ca
08215221 +0x69:  add    $0x4,%eax
08215224 +0x6c:  jmp    0821522b <+0x73>
08215226 +0x6e:  mov    $0x0,%eax
0821522b +0x73:  leave
0821522c +0x74:  ret
0821522d +0x75:  nop
```

## 反编译 C

```c
// CPrePayInfoMgr::FindPrePayInfo @ 0x82151b8

/* CPrePayInfoMgr::FindPrePayInfo(int) */

int CPrePayInfoMgr::FindPrePayInfo(int param_1)

{
  char cVar1;
  int iVar2;
  int local_20 [3];
  int local_14;
  map<int,PrePayInfo,std::less<int>,std::allocator<std::pair<int_const,PrePayInfo>>> local_10 [12];
  
  std::_Rb_tree_iterator<std::pair<int_const,PrePayInfo>>::_Rb_tree_iterator
            ((_Rb_tree_iterator<std::pair<int_const,PrePayInfo>> *)&local_14);
  std::map<int,PrePayInfo,std::less<int>,std::allocator<std::pair<int_const,PrePayInfo>>>::find
            (local_20);
  local_14 = local_20[0];
  std::map<int,PrePayInfo,std::less<int>,std::allocator<std::pair<int_const,PrePayInfo>>>::end
            (local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,PrePayInfo>>::operator!=
                    ((_Rb_tree_iterator<std::pair<int_const,PrePayInfo>> *)&local_14,
                     (_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    iVar2 = 0;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,PrePayInfo>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,PrePayInfo>> *)&local_14);
    iVar2 = iVar2 + 4;
  }
  return iVar2;
}
```

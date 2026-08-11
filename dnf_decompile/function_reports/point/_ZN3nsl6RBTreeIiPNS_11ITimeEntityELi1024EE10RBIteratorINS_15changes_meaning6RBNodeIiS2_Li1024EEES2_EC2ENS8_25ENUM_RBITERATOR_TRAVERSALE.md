# _ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE10RBIteratorINS_15changes_meaning6RBNodeIiS2_Li1024EEES2_EC2ENS8_25ENUM_RBITERATOR_TRAVERSALE

`nsl::RBTree<int, nsl::ITimeEntity*, 1024>::RBIterator<nsl::changes_meaning::RBNode<int, nsl::ITimeEntity*, 1024>, nsl::ITimeEntity*>::RBIterator(nsl::RBTree<int, nsl::ITimeEntity*, 1024>::RBIterator<nsl::changes_meaning::RBNode<int, nsl::ITimeEntity*, 1024>, nsl::ITimeEntity*>::ENUM_RBITERATOR_TRAVERSAL)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| point | NEAR | `0x80bfe48` | `0x1c` | `0x80b2a6e` | `0x1c` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,11 +1,11 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE10RBIteratorINS_15changes_meaning6RBNodeIiS2_Li1024EEES2_E4initEv>
+mov    0xc(%ebp),%edx
 mov    0x8(%ebp),%eax
-mov    0xc(%ebp),%edx
 mov    %edx,0x4(%eax)
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Struct "ITimeEntity": ignoring overlapping field "bTerminated" */
/* DWARF original prototype: void
   RBIterator(RBIterator<nsl::changes_meaning::RBNode<int,_nsl::ITimeEntity*,_1024>,_nsl::ITimeEntity*>
   * this, ENUM_RBITERATOR_TRAVERSAL _mTraversal) */

void __thiscall
nsl::RBTree<int,_nsl::ITimeEntity*,_1024>::
RBIterator<nsl::changes_meaning::RBNode<int,_nsl::ITimeEntity*,_1024>,_nsl::ITimeEntity*>::
_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE10RBIteratorINS_15changes_meaning6RBNodeIiS2_Li1024EEES2_EC2ENS8_25ENUM_RBITERATOR_TRAVERSALE
          (RBIterator<nsl::changes_meaning::RBNode<int,_nsl::ITimeEntity*,_1024>,_nsl::ITimeEntity*>
           *this,ENUM_RBITERATOR_TRAVERSAL _mTraversal)

{
  init(this);
  this->mTraversal = _mTraversal;
  return;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/ServerLab/ServerLib/common_source/TimeManager.cpp, source/ChannelOld/DNFChannelBridge/Authenticator.h, source/ChannelOld/DNFChannelBridge/ChannelService.h, source/ChannelOld/DNFChannelBridge/ChannelServiceApp.h, source/ChannelOld/DNFChannelBridge/CheckThread.h, source/ChannelOld/DNFChannelBridge/CommandLineParser.h, source/ChannelOld/DNFChannelBridge/DBMgr.h, source/ChannelOld/DNFChannelBridge/DebugLog.h 等 581 个文件*

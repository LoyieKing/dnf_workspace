# _ZN22LimitNpcBuyItemManager23getNpcLimitBuyItemCountEjR25LimitNpcBuyItemChangeInfo

`LimitNpcBuyItemManager::getNpcLimitBuyItemCount(unsigned int, LimitNpcBuyItemChangeInfo&)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x805b20e` | `0x85` | `0x80959ba` | `0x84` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,45 +1,44 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x24,%esp
 mov    0x8(%ebp),%edx
 lea    -0x10(%ebp),%eax
 lea    0xc(%ebp),%ecx
 mov    %ecx,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIj15NpcBuyLimitItemSt4lessIjESaISt4pairIKjS0_EEE4findERS4_>
 sub    $0x4,%esp
 mov    0x8(%ebp),%edx
 lea    -0xc(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIj15NpcBuyLimitItemSt4lessIjESaISt4pairIKjS0_EEE3endEv>
 sub    $0x4,%esp
 lea    -0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKj15NpcBuyLimitItemEEeqERKS4_>
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKj15NpcBuyLimitItemEEneERKS4_>
 test   %al,%al
-jne    <T> <_ZN22LimitNpcBuyItemManager23getNpcLimitBuyItemCountEjR25LimitNpcBuyItemChangeInfo+0x7f>
+je     <T> <_ZN22LimitNpcBuyItemManager23getNpcLimitBuyItemCountEjR25LimitNpcBuyItemChangeInfo+0x7f>
 mov    0xc(%ebp),%edx
 mov    0x10(%ebp),%eax
-mov    %edx,0xa(%eax)
+mov    %edx,0xc(%eax)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKj15NpcBuyLimitItemEEptEv>
-mov    0x8(%eax),%ebx
+mov    0x8(%eax),%eax
+mov    %eax,%ebx
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKj15NpcBuyLimitItemEEptEv>
 mov    0xc(%eax),%eax
 mov    %ebx,%edx
 sub    %eax,%edx
 mov    0x10(%ebp),%eax
-mov    %edx,0xe(%eax)
-jmp    <T> <_ZN22LimitNpcBuyItemManager23getNpcLimitBuyItemCountEjR25LimitNpcBuyItemChangeInfo+0x80>
-nop
+mov    %edx,0x10(%eax)
 mov    -0x4(%ebp),%ebx
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* LimitNpcBuyItemManager::getNpcLimitBuyItemCount(unsigned int, LimitNpcBuyItemChangeInfo&) */

void __thiscall
LimitNpcBuyItemManager::
_ZN22LimitNpcBuyItemManager23getNpcLimitBuyItemCountEjR25LimitNpcBuyItemChangeInfo
          (LimitNpcBuyItemManager *this,uint param_1,LimitNpcBuyItemChangeInfo *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  _Rb_tree_iterator<std::pair<unsigned_int_const,NpcBuyLimitItem>> local_14 [4];
  map<unsigned_int,NpcBuyLimitItem,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,NpcBuyLimitItem>>>
  local_10 [8];
  
  std::
  map<unsigned_int,NpcBuyLimitItem,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,NpcBuyLimitItem>>>
  ::find((uint *)local_14);
  std::
  map<unsigned_int,NpcBuyLimitItem,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,NpcBuyLimitItem>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,NpcBuyLimitItem>>::operator==
                    (local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    *(uint *)(param_2 + 10) = param_1;
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,NpcBuyLimitItem>>::operator->
                      (local_14);
    iVar2 = *(int *)(iVar2 + 8);
    iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,NpcBuyLimitItem>>::operator->
                      (local_14);
    *(int *)(param_2 + 0xe) = iVar2 - *(int *)(iVar3 + 0xc);
  }
  return;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/Monitor/LimitNpcBuyItem.cpp, source/DNFServer/GameServer/Monitor/LimitNpcBuyItem.cpp, source/DNFServer/GameServer/Monitor/LimitNpcBuyItem.h, source/DNFServer/GameServer/Monitor/RawAccess.h, source/DNFServer/ServerCommon/DNFFileLog.h, source/DNFServer/ServerCommon/DNFFunctionLib.h, source/DNFServer/ServerCommon/Thread.h, source/DNFServer/ServerCommon/tinyxml.h 等 299 个文件*

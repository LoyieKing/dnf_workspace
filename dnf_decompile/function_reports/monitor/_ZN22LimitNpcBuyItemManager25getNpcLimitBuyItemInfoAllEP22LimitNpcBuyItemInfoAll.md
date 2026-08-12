# _ZN22LimitNpcBuyItemManager25getNpcLimitBuyItemInfoAllEP22LimitNpcBuyItemInfoAll

`LimitNpcBuyItemManager::getNpcLimitBuyItemInfoAll(LimitNpcBuyItemInfoAll*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x805b0d4` | `0x126` | `0x8095896` | `0x123` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,97 +1,97 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x24,%esp
 mov    0x8(%ebp),%edx
-lea    -0xc(%ebp),%eax
+lea    -0x10(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIj15NpcBuyLimitItemSt4lessIjESaISt4pairIKjS0_EEE5beginEv>
 sub    $0x4,%esp
-mov    0x8(%ebp),%edx
+jmp    <T> <_ZN22LimitNpcBuyItemManager25getNpcLimitBuyItemInfoAllEP22LimitNpcBuyItemInfoAll+0xe9>
 lea    -0x10(%ebp),%eax
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZNSt3mapIj15NpcBuyLimitItemSt4lessIjESaISt4pairIKjS0_EEE3endEv>
-sub    $0x4,%esp
-jmp    <T> <_ZN22LimitNpcBuyItemManager25getNpcLimitBuyItemInfoAllEP22LimitNpcBuyItemInfoAll+0x101>
-lea    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKj15NpcBuyLimitItemEEptEv>
 mov    (%eax),%eax
 test   %eax,%eax
 setne  %al
 test   %al,%al
-je     <T> <_ZN22LimitNpcBuyItemManager25getNpcLimitBuyItemInfoAllEP22LimitNpcBuyItemInfoAll+0xf6>
+je     <T> <_ZN22LimitNpcBuyItemManager25getNpcLimitBuyItemInfoAllEP22LimitNpcBuyItemInfoAll+0xde>
 mov    0xc(%ebp),%eax
-mov    0x16(%eax),%eax
+mov    0x18(%eax),%eax
 test   %eax,%eax
-js     <T> <_ZN22LimitNpcBuyItemManager25getNpcLimitBuyItemInfoAllEP22LimitNpcBuyItemInfoAll+0x11d>
+js     <T> <_ZN22LimitNpcBuyItemManager25getNpcLimitBuyItemInfoAllEP22LimitNpcBuyItemInfoAll+0x11a>
 mov    0xc(%ebp),%eax
-mov    0x16(%eax),%eax
+mov    0x18(%eax),%eax
 cmp    $0x1d,%eax
-jg     <T> <_ZN22LimitNpcBuyItemManager25getNpcLimitBuyItemInfoAllEP22LimitNpcBuyItemInfoAll+0x120>
+jg     <T> <_ZN22LimitNpcBuyItemManager25getNpcLimitBuyItemInfoAllEP22LimitNpcBuyItemInfoAll+0x11d>
+mov    0xc(%ebp),%ecx
 mov    0xc(%ebp),%eax
-mov    0x16(%eax),%ebx
-lea    -0xc(%ebp),%eax
+mov    0x18(%eax),%edx
+mov    %edx,%eax
+add    %eax,%eax
+add    %edx,%eax
+shl    $0x2,%eax
+add    $0x1a,%eax
+lea    (%ecx,%eax,1),%ebx
+lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKj15NpcBuyLimitItemEEptEv>
-mov    (%eax),%edx
+mov    (%eax),%eax
+mov    %eax,(%ebx)
 mov    0xc(%ebp),%ecx
-mov    %ebx,%eax
+mov    0xc(%ebp),%eax
+mov    0x18(%eax),%edx
+mov    %edx,%eax
 add    %eax,%eax
-add    %ebx,%eax
+add    %edx,%eax
 shl    $0x2,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0x10,%eax
-mov    %edx,0xa(%eax)
-mov    0xc(%ebp),%eax
-mov    0x16(%eax),%ebx
-lea    -0xc(%ebp),%eax
+add    $0x1e,%eax
+lea    (%ecx,%eax,1),%ebx
+lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKj15NpcBuyLimitItemEEptEv>
-mov    0x8(%eax),%edx
+mov    0x8(%eax),%eax
+mov    %eax,(%ebx)
 mov    0xc(%ebp),%ecx
-mov    %ebx,%eax
+mov    0xc(%ebp),%eax
+mov    0x18(%eax),%edx
+mov    %edx,%eax
 add    %eax,%eax
-add    %ebx,%eax
+add    %edx,%eax
 shl    $0x2,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0x10,%eax
-mov    %edx,0xe(%eax)
-mov    0xc(%ebp),%eax
-mov    0x16(%eax),%ebx
-lea    -0xc(%ebp),%eax
+add    $0x22,%eax
+lea    (%ecx,%eax,1),%ebx
+lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKj15NpcBuyLimitItemEEptEv>
-mov    0xc(%eax),%edx
-mov    0xc(%ebp),%ecx
-mov    %ebx,%eax
-add    %eax,%eax
-add    %ebx,%eax
-shl    $0x2,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0x10,%eax
-mov    %edx,0x12(%eax)
+mov    0xc(%eax),%eax
+mov    %eax,(%ebx)
 mov    0xc(%ebp),%eax
-mov    0x16(%eax),%eax
+mov    0x18(%eax),%eax
 lea    0x1(%eax),%edx
 mov    0xc(%ebp),%eax
-mov    %edx,0x16(%eax)
-lea    -0xc(%ebp),%eax
+mov    %edx,0x18(%eax)
+lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKj15NpcBuyLimitItemEEppEv>
+mov    0x8(%ebp),%edx
+lea    -0xc(%ebp),%eax
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZNSt3mapIj15NpcBuyLimitItemSt4lessIjESaISt4pairIKjS0_EEE3endEv>
+sub    $0x4,%esp
+lea    -0xc(%ebp),%eax
+mov    %eax,0x4(%esp)
 lea    -0x10(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKj15NpcBuyLimitItemEEneERKS4_>
 test   %al,%al
-jne    <T> <_ZN22LimitNpcBuyItemManager25getNpcLimitBuyItemInfoAllEP22LimitNpcBuyItemInfoAll+0x36>
-jmp    <T> <_ZN22LimitNpcBuyItemManager25getNpcLimitBuyItemInfoAllEP22LimitNpcBuyItemInfoAll+0x121>
+jne    <T> <_ZN22LimitNpcBuyItemManager25getNpcLimitBuyItemInfoAllEP22LimitNpcBuyItemInfoAll+0x21>
+jmp    <T> <_ZN22LimitNpcBuyItemManager25getNpcLimitBuyItemInfoAllEP22LimitNpcBuyItemInfoAll+0x11e>
 nop
-jmp    <T> <_ZN22LimitNpcBuyItemManager25getNpcLimitBuyItemInfoAllEP22LimitNpcBuyItemInfoAll+0x121>
+jmp    <T> <_ZN22LimitNpcBuyItemManager25getNpcLimitBuyItemInfoAllEP22LimitNpcBuyItemInfoAll+0x11e>
 nop
 mov    -0x4(%ebp),%ebx
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* LimitNpcBuyItemManager::getNpcLimitBuyItemInfoAll(LimitNpcBuyItemInfoAll*) */

void __thiscall
LimitNpcBuyItemManager::
_ZN22LimitNpcBuyItemManager25getNpcLimitBuyItemInfoAllEP22LimitNpcBuyItemInfoAll
          (LimitNpcBuyItemManager *this,LimitNpcBuyItemInfoAll *param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  map<unsigned_int,NpcBuyLimitItem,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,NpcBuyLimitItem>>>
  local_14 [4];
  map<unsigned_int,NpcBuyLimitItem,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,NpcBuyLimitItem>>>
  local_10 [8];
  
  std::
  map<unsigned_int,NpcBuyLimitItem,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,NpcBuyLimitItem>>>
  ::begin(local_10);
  std::
  map<unsigned_int,NpcBuyLimitItem,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,NpcBuyLimitItem>>>
  ::end(local_14);
  do {
    cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,NpcBuyLimitItem>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_int_const,NpcBuyLimitItem>> *)local_10,
                       (_Rb_tree_iterator *)local_14);
    if (cVar2 == '\0') {
      return;
    }
    piVar3 = (int *)std::_Rb_tree_iterator<std::pair<unsigned_int_const,NpcBuyLimitItem>>::
                    operator->((_Rb_tree_iterator<std::pair<unsigned_int_const,NpcBuyLimitItem>> *)
                               local_10);
    if (*piVar3 != 0) {
      if (*(int *)(param_1 + 0x16) < 0) {
        return;
      }
      if (0x1d < *(int *)(param_1 + 0x16)) {
        return;
      }
      iVar1 = *(int *)(param_1 + 0x16);
      puVar4 = (undefined4 *)
               std::_Rb_tree_iterator<std::pair<unsigned_int_const,NpcBuyLimitItem>>::operator->
                         ((_Rb_tree_iterator<std::pair<unsigned_int_const,NpcBuyLimitItem>> *)
                          local_10);
      *(undefined4 *)(param_1 + iVar1 * 0xc + 0x1a) = *puVar4;
      iVar1 = *(int *)(param_1 + 0x16);
      iVar5 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,NpcBuyLimitItem>>::operator->
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,NpcBuyLimitItem>> *)
                         local_10);
      *(undefined4 *)(param_1 + iVar1 * 0xc + 0x1e) = *(undefined4 *)(iVar5 + 8);
      iVar1 = *(int *)(param_1 + 0x16);
      iVar5 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,NpcBuyLimitItem>>::operator->
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,NpcBuyLimitItem>> *)
                         local_10);
      *(undefined4 *)(param_1 + iVar1 * 0xc + 0x22) = *(undefined4 *)(iVar5 + 0xc);
      *(int *)(param_1 + 0x16) = *(int *)(param_1 + 0x16) + 1;
    }
    std::_Rb_tree_iterator<std::pair<unsigned_int_const,NpcBuyLimitItem>>::operator++
              ((_Rb_tree_iterator<std::pair<unsigned_int_const,NpcBuyLimitItem>> *)local_10);
  } while( true );
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/LimitNpcBuyItem.cpp](source/DNFServer/GameServer/Monitor/LimitNpcBuyItem.cpp)（约第 85 行）：

```cpp
void LimitNpcBuyItemManager::getNpcLimitBuyItemInfoAll(LimitNpcBuyItemInfoAll* out)
{
    for (std::map<unsigned int, NpcBuyLimitItem>::iterator it = m_items.begin();
         it != m_items.end(); ++it)
    {
        if (it->first != 0)
        {
            if (out->m_count < 0)
            {
                return;
            }
            if (0x1d < out->m_count)
            {
                return;
            }
            *(unsigned int*)((char*)out + out->m_count * 0xc + 0x1a) = it->first;
            *(unsigned int*)((char*)out + out->m_count * 0xc + 0x1e) = it->second.m_maxCount;
            *(unsigned int*)((char*)out + out->m_count * 0xc + 0x22) = it->second.m_sellCount;
            out->m_count = out->m_count + 1;
        }
    }
}
```

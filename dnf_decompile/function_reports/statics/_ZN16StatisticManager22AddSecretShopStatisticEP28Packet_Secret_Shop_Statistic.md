# _ZN16StatisticManager22AddSecretShopStatisticEP28Packet_Secret_Shop_Statistic

`StatisticManager::AddSecretShopStatistic(Packet_Secret_Shop_Statistic*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x80745d8` | `0x22a` | `0x80746ee` | `0x229` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,183 +1,184 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x60,%esp
 mov    0xc(%ebp),%eax
-mov    0xa(%eax),%eax
+add    $0xa,%eax
+mov    (%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN16StatisticManager22AddSecretShopStatisticEP28Packet_Secret_Shop_Statistic+0x21c>
+je     <T> <_ZN16StatisticManager22AddSecretShopStatisticEP28Packet_Secret_Shop_Statistic+0x21f>
 mov    0xc(%ebp),%eax
-mov    0xe(%eax),%eax
+add    $0xe,%eax
+mov    (%eax),%eax
 cmp    $0x2,%eax
 jg     <T> <_ZN16StatisticManager22AddSecretShopStatisticEP28Packet_Secret_Shop_Statistic+0x21f>
+mov    0xc(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%eax
+mov    %eax,-0x10(%ebp)
 movl   $0x0,-0xc(%ebp)
-jmp    <T> <_ZN16StatisticManager22AddSecretShopStatisticEP28Packet_Secret_Shop_Statistic+0x206>
+jmp    <T> <_ZN16StatisticManager22AddSecretShopStatisticEP28Packet_Secret_Shop_Statistic+0x209>
+mov    0xc(%ebp),%ecx
 mov    -0xc(%ebp),%edx
 mov    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
 shl    $0x2,%eax
-add    $0x10,%eax
-add    0xc(%ebp),%eax
-lea    0x2(%eax),%ecx
-mov    0xc(%ebp),%eax
-mov    0xe(%eax),%edx
+add    $0x12,%eax
+add    %eax,%ecx
+mov    -0x10(%ebp),%edx
+mov    %edx,%eax
+add    %eax,%eax
+add    %edx,%eax
+shl    $0x3,%eax
+add    $0x440,%eax
+add    0x8(%ebp),%eax
+lea    0x4(%eax),%edx
+lea    -0x50(%ebp),%eax
+mov    %ecx,0x8(%esp)
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZNSt3mapIi26SECRET_SHOP_STATISTIC_DATASt4lessIiESaISt4pairIKiS0_EEE4findERS4_>
+sub    $0x4,%esp
+mov    -0x10(%ebp),%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x3,%eax
 add    $0x440,%eax
 add    0x8(%ebp),%eax
 lea    0x4(%eax),%edx
 lea    -0x4c(%ebp),%eax
-mov    %ecx,0x8(%esp)
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZNSt3mapIi26SECRET_SHOP_STATISTIC_DATASt4lessIiESaISt4pairIKiS0_EEE4findERS4_>
-sub    $0x4,%esp
-mov    0xc(%ebp),%eax
-mov    0xe(%eax),%edx
-mov    %edx,%eax
-add    %eax,%eax
-add    %edx,%eax
-shl    $0x3,%eax
-add    $0x440,%eax
-add    0x8(%ebp),%eax
-lea    0x4(%eax),%edx
-lea    -0x48(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIi26SECRET_SHOP_STATISTIC_DATASt4lessIiESaISt4pairIKiS0_EEE3endEv>
 sub    $0x4,%esp
-lea    -0x48(%ebp),%eax
+lea    -0x4c(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x4c(%ebp),%eax
+lea    -0x50(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKi26SECRET_SHOP_STATISTIC_DATAEEneERKS4_>
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKi26SECRET_SHOP_STATISTIC_DATAEEeqERKS4_>
 test   %al,%al
-je     <T> <_ZN16StatisticManager22AddSecretShopStatisticEP28Packet_Secret_Shop_Statistic+0x17e>
-lea    -0x4c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKi26SECRET_SHOP_STATISTIC_DATAEEptEv>
-mov    %eax,%edx
-mov    0x10(%edx),%ebx
-mov    -0xc(%ebp),%ecx
-mov    0xc(%ebp),%esi
-mov    %ecx,%eax
-shl    $0x2,%eax
-add    %ecx,%eax
-shl    $0x2,%eax
-lea    (%esi,%eax,1),%eax
-add    $0x10,%eax
-mov    0xe(%eax),%eax
-lea    (%ebx,%eax,1),%eax
-mov    %eax,0x10(%edx)
-lea    -0x4c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKi26SECRET_SHOP_STATISTIC_DATAEEptEv>
-mov    %eax,%edx
-mov    0x8(%edx),%ebx
-mov    -0xc(%ebp),%ecx
-mov    0xc(%ebp),%esi
-mov    %ecx,%eax
-shl    $0x2,%eax
-add    %ecx,%eax
-shl    $0x2,%eax
-lea    (%esi,%eax,1),%eax
-add    $0x10,%eax
-mov    0x6(%eax),%eax
-lea    (%ebx,%eax,1),%eax
-mov    %eax,0x8(%edx)
-lea    -0x4c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKi26SECRET_SHOP_STATISTIC_DATAEEptEv>
-mov    %eax,%edx
-mov    0xc(%edx),%ebx
-mov    -0xc(%ebp),%ecx
-mov    0xc(%ebp),%esi
-mov    %ecx,%eax
-shl    $0x2,%eax
-add    %ecx,%eax
-shl    $0x2,%eax
-lea    (%esi,%eax,1),%eax
-add    $0x10,%eax
-mov    0xa(%eax),%eax
-lea    (%ebx,%eax,1),%eax
-mov    %eax,0xc(%edx)
-lea    -0x4c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKi26SECRET_SHOP_STATISTIC_DATAEEptEv>
-mov    %eax,%edx
-mov    0x14(%edx),%ebx
-mov    -0xc(%ebp),%ecx
-mov    0xc(%ebp),%esi
-mov    %ecx,%eax
-shl    $0x2,%eax
-add    %ecx,%eax
-shl    $0x2,%eax
-lea    (%esi,%eax,1),%eax
-add    $0x20,%eax
-mov    0x2(%eax),%eax
-lea    (%ebx,%eax,1),%eax
-mov    %eax,0x14(%edx)
-jmp    <T> <_ZN16StatisticManager22AddSecretShopStatisticEP28Packet_Secret_Shop_Statistic+0x202>
+je     <T> <_ZN16StatisticManager22AddSecretShopStatisticEP28Packet_Secret_Shop_Statistic+0x14d>
+mov    0xc(%ebp),%ecx
 mov    -0xc(%ebp),%edx
 mov    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
 shl    $0x2,%eax
-add    $0x10,%eax
-add    0xc(%ebp),%eax
-lea    0x2(%eax),%ecx
+add    $0x12,%eax
+add    %eax,%ecx
+mov    0xc(%ebp),%ebx
 mov    -0xc(%ebp),%edx
 mov    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
 shl    $0x2,%eax
-add    $0x10,%eax
-add    0xc(%ebp),%eax
-add    $0x2,%eax
+add    $0x12,%eax
+lea    (%ebx,%eax,1),%edx
+lea    -0x28(%ebp),%eax
 mov    %ecx,0x8(%esp)
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZSt9make_pairIRiR26SECRET_SHOP_STATISTIC_DATAESt4pairINSt17__decay_and_stripIT_E6__typeENS4_IT0_E6__typeEEOS5_OS8_>
+sub    $0x4,%esp
+lea    -0x28(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt4pairIi26SECRET_SHOP_STATISTIC_DATAEC1IRiRS0_EEOT_OT0_>
-lea    -0x24(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKi26SECRET_SHOP_STATISTIC_DATAEC1IiS1_EEOS_IT_T0_E>
-mov    0xc(%ebp),%eax
-mov    0xe(%eax),%edx
+mov    -0x10(%ebp),%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x3,%eax
 add    $0x440,%eax
 add    0x8(%ebp),%eax
 lea    0x4(%eax),%ecx
-lea    -0x44(%ebp),%eax
-lea    -0x3c(%ebp),%edx
+lea    -0x48(%ebp),%eax
+lea    -0x40(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIi26SECRET_SHOP_STATISTIC_DATASt4lessIiESaISt4pairIKiS0_EEE6insertERKS5_>
 sub    $0x4,%esp
+jmp    <T> <_ZN16StatisticManager22AddSecretShopStatisticEP28Packet_Secret_Shop_Statistic+0x205>
+lea    -0x50(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKi26SECRET_SHOP_STATISTIC_DATAEEptEv>
+mov    %eax,%edx
+mov    0x10(%edx),%ebx
+mov    0xc(%ebp),%esi
+mov    -0xc(%ebp),%ecx
+mov    %ecx,%eax
+shl    $0x2,%eax
+add    %ecx,%eax
+shl    $0x2,%eax
+add    $0x1e,%eax
+lea    (%esi,%eax,1),%eax
+mov    (%eax),%eax
+lea    (%ebx,%eax,1),%eax
+mov    %eax,0x10(%edx)
+lea    -0x50(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKi26SECRET_SHOP_STATISTIC_DATAEEptEv>
+mov    %eax,%edx
+mov    0x8(%edx),%ebx
+mov    0xc(%ebp),%esi
+mov    -0xc(%ebp),%ecx
+mov    %ecx,%eax
+shl    $0x2,%eax
+add    %ecx,%eax
+shl    $0x2,%eax
+add    $0x16,%eax
+lea    (%esi,%eax,1),%eax
+mov    (%eax),%eax
+lea    (%ebx,%eax,1),%eax
+mov    %eax,0x8(%edx)
+lea    -0x50(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKi26SECRET_SHOP_STATISTIC_DATAEEptEv>
+mov    %eax,%edx
+mov    0xc(%edx),%ebx
+mov    0xc(%ebp),%esi
+mov    -0xc(%ebp),%ecx
+mov    %ecx,%eax
+shl    $0x2,%eax
+add    %ecx,%eax
+shl    $0x2,%eax
+add    $0x1a,%eax
+lea    (%esi,%eax,1),%eax
+mov    (%eax),%eax
+lea    (%ebx,%eax,1),%eax
+mov    %eax,0xc(%edx)
+lea    -0x50(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKi26SECRET_SHOP_STATISTIC_DATAEEptEv>
+mov    %eax,%edx
+mov    0x14(%edx),%ebx
+mov    0xc(%ebp),%esi
+mov    -0xc(%ebp),%ecx
+mov    %ecx,%eax
+shl    $0x2,%eax
+add    %ecx,%eax
+shl    $0x2,%eax
+add    $0x22,%eax
+lea    (%esi,%eax,1),%eax
+mov    (%eax),%eax
+lea    (%ebx,%eax,1),%eax
+mov    %eax,0x14(%edx)
 addl   $0x1,-0xc(%ebp)
 mov    0xc(%ebp),%eax
-mov    0xa(%eax),%eax
+add    $0xa,%eax
+mov    (%eax),%eax
 cmp    -0xc(%ebp),%eax
 setg   %al
 test   %al,%al
-jne    <T> <_ZN16StatisticManager22AddSecretShopStatisticEP28Packet_Secret_Shop_Statistic+0x31>
-jmp    <T> <_ZN16StatisticManager22AddSecretShopStatisticEP28Packet_Secret_Shop_Statistic+0x220>
-nop
-jmp    <T> <_ZN16StatisticManager22AddSecretShopStatisticEP28Packet_Secret_Shop_Statistic+0x220>
-nop
+jne    <T> <_ZN16StatisticManager22AddSecretShopStatisticEP28Packet_Secret_Shop_Statistic+0x40>
 lea    -0x8(%ebp),%esp
 add    $0x0,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* StatisticManager::AddSecretShopStatistic(Packet_Secret_Shop_Statistic*) */

void __thiscall
StatisticManager::_ZN16StatisticManager22AddSecretShopStatisticEP28Packet_Secret_Shop_Statistic
          (StatisticManager *this,Packet_Secret_Shop_Statistic *param_1)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator<std::pair<int_const,SECRET_SHOP_STATISTIC_DATA>> local_50 [4];
  map<int,SECRET_SHOP_STATISTIC_DATA,std::less<int>,std::allocator<std::pair<int_const,SECRET_SHOP_STATISTIC_DATA>>>
  local_4c [4];
  pair local_48 [8];
  pair<int_const,SECRET_SHOP_STATISTIC_DATA> local_40 [24];
  pair<int,SECRET_SHOP_STATISTIC_DATA> local_28 [24];
  int local_10;
  
  if ((*(int *)(param_1 + 10) != 0) && (*(int *)(param_1 + 0xe) < 3)) {
    for (local_10 = 0; local_10 < *(int *)(param_1 + 10); local_10 = local_10 + 1) {
      std::
      map<int,SECRET_SHOP_STATISTIC_DATA,std::less<int>,std::allocator<std::pair<int_const,SECRET_SHOP_STATISTIC_DATA>>>
      ::find((int *)local_50);
      std::
      map<int,SECRET_SHOP_STATISTIC_DATA,std::less<int>,std::allocator<std::pair<int_const,SECRET_SHOP_STATISTIC_DATA>>>
      ::end(local_4c);
      cVar1 = std::_Rb_tree_iterator<std::pair<int_const,SECRET_SHOP_STATISTIC_DATA>>::operator!=
                        (local_50,(_Rb_tree_iterator *)local_4c);
      if (cVar1 == '\0') {
        std::pair<int,SECRET_SHOP_STATISTIC_DATA>::pair<int&,SECRET_SHOP_STATISTIC_DATA&>
                  (local_28,(int *)(param_1 + local_10 * 0x14 + 0x12),
                   (SECRET_SHOP_STATISTIC_DATA *)(param_1 + local_10 * 0x14 + 0x12));
        std::pair<int_const,SECRET_SHOP_STATISTIC_DATA>::pair<int,SECRET_SHOP_STATISTIC_DATA>
                  (local_40,local_28);
        std::
        map<int,SECRET_SHOP_STATISTIC_DATA,std::less<int>,std::allocator<std::pair<int_const,SECRET_SHOP_STATISTIC_DATA>>>
        ::insert(local_48);
      }
      else {
        iVar2 = std::_Rb_tree_iterator<std::pair<int_const,SECRET_SHOP_STATISTIC_DATA>>::operator->
                          (local_50);
        *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + *(int *)(param_1 + local_10 * 0x14 + 0x1e)
        ;
        iVar2 = std::_Rb_tree_iterator<std::pair<int_const,SECRET_SHOP_STATISTIC_DATA>>::operator->
                          (local_50);
        *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + *(int *)(param_1 + local_10 * 0x14 + 0x16);
        iVar2 = std::_Rb_tree_iterator<std::pair<int_const,SECRET_SHOP_STATISTIC_DATA>>::operator->
                          (local_50);
        *(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) + *(int *)(param_1 + local_10 * 0x14 + 0x1a);
        iVar2 = std::_Rb_tree_iterator<std::pair<int_const,SECRET_SHOP_STATISTIC_DATA>>::operator->
                          (local_50);
        *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + *(int *)(param_1 + local_10 * 0x14 + 0x22)
        ;
      }
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/Statistics.cpp](source/DNFServer/GameServer/Statics/Statistics.cpp)（约第 1592 行）：

```cpp
void StatisticManager::AddSecretShopStatistic(Packet_Secret_Shop_Statistic* pkt)
{
    if (*(int*)((char*)pkt + 10) != 0 && *(int*)((char*)pkt + 0xe) < 3)
    {
        int shopIdx = *(int*)((char*)pkt + 0xe);
        for (int i = 0; i < *(int*)((char*)pkt + 10); i++)
        {
            std::map<int, SECRET_SHOP_STATISTIC_DATA>::iterator it =
                m_secretShop[shopIdx].find(*(int*)((char*)pkt + i * 0x14 + 0x12));
            if (it == m_secretShop[shopIdx].end())
            {
                m_secretShop[shopIdx].insert(std::make_pair(
                    *(int*)((char*)pkt + i * 0x14 + 0x12),
                    *(SECRET_SHOP_STATISTIC_DATA*)((char*)pkt + i * 0x14 + 0x12)));
            }
            else
            {
                it->second.m_data[3] += *(int*)((char*)pkt + i * 0x14 + 0x1e);
                it->second.m_data[1] += *(int*)((char*)pkt + i * 0x14 + 0x16);
                it->second.m_data[2] += *(int*)((char*)pkt + i * 0x14 + 0x1a);
                it->second.m_data[4] += *(int*)((char*)pkt + i * 0x14 + 0x22);
            }
        }
    }
}
```

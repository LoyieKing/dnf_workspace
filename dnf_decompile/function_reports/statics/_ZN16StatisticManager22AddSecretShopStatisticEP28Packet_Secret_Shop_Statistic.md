# _ZN16StatisticManager22AddSecretShopStatisticEP28Packet_Secret_Shop_Statistic

`StatisticManager::AddSecretShopStatistic(Packet_Secret_Shop_Statistic*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x80745d8` | `0x22a` | `0x8074716` | `0x228` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,183 +1,182 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x60,%esp
 mov    0xc(%ebp),%eax
 mov    0xa(%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN16StatisticManager22AddSecretShopStatisticEP28Packet_Secret_Shop_Statistic+0x21c>
+je     <T> <_ZN16StatisticManager22AddSecretShopStatisticEP28Packet_Secret_Shop_Statistic+0x21a>
 mov    0xc(%ebp),%eax
 mov    0xe(%eax),%eax
 cmp    $0x2,%eax
-jg     <T> <_ZN16StatisticManager22AddSecretShopStatisticEP28Packet_Secret_Shop_Statistic+0x21f>
+jg     <T> <_ZN16StatisticManager22AddSecretShopStatisticEP28Packet_Secret_Shop_Statistic+0x21d>
 movl   $0x0,-0xc(%ebp)
-jmp    <T> <_ZN16StatisticManager22AddSecretShopStatisticEP28Packet_Secret_Shop_Statistic+0x206>
+jmp    <T> <_ZN16StatisticManager22AddSecretShopStatisticEP28Packet_Secret_Shop_Statistic+0x204>
 mov    -0xc(%ebp),%edx
 mov    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
 shl    $0x2,%eax
 add    $0x10,%eax
 add    0xc(%ebp),%eax
 lea    0x2(%eax),%ecx
 mov    0xc(%ebp),%eax
 mov    0xe(%eax),%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x3,%eax
 add    $0x440,%eax
 add    0x8(%ebp),%eax
 lea    0x4(%eax),%edx
 lea    -0x4c(%ebp),%eax
 mov    %ecx,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIi26SECRET_SHOP_STATISTIC_DATASt4lessIiESaISt4pairIKiS0_EEE4findERS4_>
 sub    $0x4,%esp
 mov    0xc(%ebp),%eax
 mov    0xe(%eax),%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x3,%eax
 add    $0x440,%eax
 add    0x8(%ebp),%eax
 lea    0x4(%eax),%edx
 lea    -0x48(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIi26SECRET_SHOP_STATISTIC_DATASt4lessIiESaISt4pairIKiS0_EEE3endEv>
 sub    $0x4,%esp
 lea    -0x48(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKi26SECRET_SHOP_STATISTIC_DATAEEneERKS4_>
 test   %al,%al
-je     <T> <_ZN16StatisticManager22AddSecretShopStatisticEP28Packet_Secret_Shop_Statistic+0x17e>
+je     <T> <_ZN16StatisticManager22AddSecretShopStatisticEP28Packet_Secret_Shop_Statistic+0x17c>
 lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKi26SECRET_SHOP_STATISTIC_DATAEEptEv>
 mov    %eax,%edx
 mov    0x10(%edx),%ebx
 mov    -0xc(%ebp),%ecx
 mov    0xc(%ebp),%esi
 mov    %ecx,%eax
 shl    $0x2,%eax
 add    %ecx,%eax
 shl    $0x2,%eax
 lea    (%esi,%eax,1),%eax
-add    $0x10,%eax
-mov    0xe(%eax),%eax
+add    $0x1c,%eax
+mov    0x2(%eax),%eax
 lea    (%ebx,%eax,1),%eax
 mov    %eax,0x10(%edx)
 lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKi26SECRET_SHOP_STATISTIC_DATAEEptEv>
 mov    %eax,%edx
-mov    0x8(%edx),%ebx
-mov    -0xc(%ebp),%ecx
-mov    0xc(%ebp),%esi
+mov    0x8(%edx),%esi
+mov    -0xc(%ebp),%eax
+mov    0xc(%ebp),%ebx
+lea    0x1(%eax),%ecx
 mov    %ecx,%eax
 shl    $0x2,%eax
 add    %ecx,%eax
 shl    $0x2,%eax
+mov    0x2(%eax,%ebx,1),%eax
 lea    (%esi,%eax,1),%eax
-add    $0x10,%eax
-mov    0x6(%eax),%eax
-lea    (%ebx,%eax,1),%eax
 mov    %eax,0x8(%edx)
 lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKi26SECRET_SHOP_STATISTIC_DATAEEptEv>
 mov    %eax,%edx
 mov    0xc(%edx),%ebx
 mov    -0xc(%ebp),%ecx
 mov    0xc(%ebp),%esi
 mov    %ecx,%eax
 shl    $0x2,%eax
 add    %ecx,%eax
 shl    $0x2,%eax
 lea    (%esi,%eax,1),%eax
-add    $0x10,%eax
-mov    0xa(%eax),%eax
+add    $0x18,%eax
+mov    0x2(%eax),%eax
 lea    (%ebx,%eax,1),%eax
 mov    %eax,0xc(%edx)
 lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKi26SECRET_SHOP_STATISTIC_DATAEEptEv>
 mov    %eax,%edx
 mov    0x14(%edx),%ebx
 mov    -0xc(%ebp),%ecx
 mov    0xc(%ebp),%esi
 mov    %ecx,%eax
 shl    $0x2,%eax
 add    %ecx,%eax
 shl    $0x2,%eax
 lea    (%esi,%eax,1),%eax
 add    $0x20,%eax
 mov    0x2(%eax),%eax
 lea    (%ebx,%eax,1),%eax
 mov    %eax,0x14(%edx)
-jmp    <T> <_ZN16StatisticManager22AddSecretShopStatisticEP28Packet_Secret_Shop_Statistic+0x202>
+jmp    <T> <_ZN16StatisticManager22AddSecretShopStatisticEP28Packet_Secret_Shop_Statistic+0x200>
 mov    -0xc(%ebp),%edx
 mov    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
 shl    $0x2,%eax
 add    $0x10,%eax
 add    0xc(%ebp),%eax
 lea    0x2(%eax),%ecx
 mov    -0xc(%ebp),%edx
 mov    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
 shl    $0x2,%eax
 add    $0x10,%eax
 add    0xc(%ebp),%eax
 add    $0x2,%eax
 mov    %ecx,0x8(%esp)
 mov    %eax,0x4(%esp)
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIi26SECRET_SHOP_STATISTIC_DATAEC1IRiRS0_EEOT_OT0_>
 lea    -0x24(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKi26SECRET_SHOP_STATISTIC_DATAEC1IiS1_EEOS_IT_T0_E>
 mov    0xc(%ebp),%eax
 mov    0xe(%eax),%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x3,%eax
 add    $0x440,%eax
 add    0x8(%ebp),%eax
 lea    0x4(%eax),%ecx
 lea    -0x44(%ebp),%eax
 lea    -0x3c(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIi26SECRET_SHOP_STATISTIC_DATASt4lessIiESaISt4pairIKiS0_EEE6insertERKS5_>
 sub    $0x4,%esp
 addl   $0x1,-0xc(%ebp)
 mov    0xc(%ebp),%eax
 mov    0xa(%eax),%eax
 cmp    -0xc(%ebp),%eax
 setg   %al
 test   %al,%al
 jne    <T> <_ZN16StatisticManager22AddSecretShopStatisticEP28Packet_Secret_Shop_Statistic+0x31>
-jmp    <T> <_ZN16StatisticManager22AddSecretShopStatisticEP28Packet_Secret_Shop_Statistic+0x220>
+jmp    <T> <_ZN16StatisticManager22AddSecretShopStatisticEP28Packet_Secret_Shop_Statistic+0x21e>
 nop
-jmp    <T> <_ZN16StatisticManager22AddSecretShopStatisticEP28Packet_Secret_Shop_Statistic+0x220>
+jmp    <T> <_ZN16StatisticManager22AddSecretShopStatisticEP28Packet_Secret_Shop_Statistic+0x21e>
 nop
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

定义于 [source/DNFServer/GameServer/Statics/Statistics.cpp](source/DNFServer/GameServer/Statics/Statistics.cpp)（约第 1690 行）：

```cpp
void StatisticManager::AddSecretShopStatistic(Packet_Secret_Shop_Statistic* pkt)
{
    if (pkt->m_count == 0)
    {
        return;
    }
    if (2 < pkt->m_shopIdx)
    {
        return;
    }
    for (int i = 0; i < pkt->m_count; i++)
    {
        std::map<int, SECRET_SHOP_STATISTIC_DATA>::iterator it =
            m_secretShop[pkt->m_shopIdx].find(pkt->m_items[i].m_data[0]);
        if (it != m_secretShop[pkt->m_shopIdx].end())
        {
            it->second.m_data[3] += pkt->m_items[i].m_data[3];
            it->second.m_data[1] += pkt->m_items[i].m_data[1];
            it->second.m_data[2] += pkt->m_items[i].m_data[2];
            it->second.m_data[4] += pkt->m_items[i].m_data[4];
        }
        else
        {
            m_secretShop[pkt->m_shopIdx].insert(
                std::pair<int, SECRET_SHOP_STATISTIC_DATA>(
                    pkt->m_items[i].m_data[0], pkt->m_items[i]));
        }
    }
}
```

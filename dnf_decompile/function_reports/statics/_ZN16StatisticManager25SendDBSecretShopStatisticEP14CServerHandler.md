# _ZN16StatisticManager25SendDBSecretShopStatisticEP14CServerHandler

`StatisticManager::SendDBSecretShopStatistic(CServerHandler*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x8074802` | `0x157` | `0x8074b74` | `0x19e` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,101 +1,125 @@
 push   %ebp
 mov    %esp,%ebp
+push   %esi
 push   %ebx
-sub    $0xfe4,%esp
-lea    -0xfca(%ebp),%eax
+sub    $0xfe0,%esp
+movl   $0x0,-0x14(%ebp)
+jmp    <T> <_ZN16StatisticManager25SendDBSecretShopStatisticEP14CServerHandler+0x185>
+mov    -0x14(%ebp),%edx
+mov    %edx,%eax
+add    %eax,%eax
+add    %edx,%eax
+shl    $0x3,%eax
+add    $0x440,%eax
+add    0x8(%ebp),%eax
+add    $0x4,%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt3mapIi26SECRET_SHOP_STATISTIC_DATASt4lessIiESaISt4pairIKiS0_EEE5emptyEv>
+test   %al,%al
+jne    <T> <_ZN16StatisticManager25SendDBSecretShopStatisticEP14CServerHandler+0x180>
+lea    -0xfce(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN28Packet_Secret_Shop_StatisticC1Ev>
-movl   $0x0,-0x10(%ebp)
-jmp    <T> <_ZN16StatisticManager25SendDBSecretShopStatisticEP14CServerHandler+0x143>
-mov    -0x10(%ebp),%eax
-mov    %eax,-0xfbc(%ebp)
-mov    -0x10(%ebp),%edx
+mov    -0x14(%ebp),%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x3,%eax
 add    $0x440,%eax
 add    0x8(%ebp),%eax
 add    $0x4,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIi26SECRET_SHOP_STATISTIC_DATASt4lessIiESaISt4pairIKiS0_EEE4sizeEv>
+mov    %eax,-0xfc4(%ebp)
+mov    -0x14(%ebp),%eax
 mov    %eax,-0xfc0(%ebp)
-mov    -0xfc0(%ebp),%eax
-test   %eax,%eax
-jle    <T> <_ZN16StatisticManager25SendDBSecretShopStatisticEP14CServerHandler+0x13e>
-movl   $0x0,-0xc(%ebp)
-mov    -0x10(%ebp),%edx
+movl   $0x0,-0x10(%ebp)
+mov    -0x14(%ebp),%edx
+mov    %edx,%eax
+add    %eax,%eax
+add    %edx,%eax
+shl    $0x3,%eax
+add    $0x440,%eax
+add    0x8(%ebp),%eax
+lea    0x4(%eax),%edx
+lea    -0x1c(%ebp),%eax
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZNSt3mapIi26SECRET_SHOP_STATISTIC_DATASt4lessIiESaISt4pairIKiS0_EEE5beginEv>
+sub    $0x4,%esp
+jmp    <T> <_ZN16StatisticManager25SendDBSecretShopStatisticEP14CServerHandler+0x126>
+mov    -0x10(%ebp),%ebx
+lea    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKi26SECRET_SHOP_STATISTIC_DATAEEptEv>
+mov    (%eax),%edx
+mov    %ebx,%eax
+shl    $0x2,%eax
+add    %ebx,%eax
+shl    $0x2,%eax
+lea    -0x8(%ebp),%ecx
+lea    (%ecx,%eax,1),%eax
+sub    $0xfb6,%eax
+mov    %edx,0x2(%eax)
+movl   $0x1,-0xc(%ebp)
+jmp    <T> <_ZN16StatisticManager25SendDBSecretShopStatisticEP14CServerHandler+0x10c>
+mov    -0x10(%ebp),%ebx
+mov    -0xc(%ebp),%esi
+lea    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKi26SECRET_SHOP_STATISTIC_DATAEEptEv>
+mov    -0xc(%ebp),%edx
+mov    0x4(%eax,%edx,4),%edx
+mov    %ebx,%eax
+shl    $0x2,%eax
+add    %ebx,%eax
+add    %esi,%eax
+add    $0x4,%eax
+mov    %edx,-0xfcc(%ebp,%eax,4)
+addl   $0x1,-0xc(%ebp)
+cmpl   $0x4,-0xc(%ebp)
+setle  %al
+test   %al,%al
+jne    <T> <_ZN16StatisticManager25SendDBSecretShopStatisticEP14CServerHandler+0xdd>
+addl   $0x1,-0x10(%ebp)
+lea    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKi26SECRET_SHOP_STATISTIC_DATAEEppEv>
+mov    -0x14(%ebp),%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x3,%eax
 add    $0x440,%eax
 add    0x8(%ebp),%eax
 lea    0x4(%eax),%edx
 lea    -0x18(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
-call   <T> <_ZNSt3mapIi26SECRET_SHOP_STATISTIC_DATASt4lessIiESaISt4pairIKiS0_EEE5beginEv>
-sub    $0x4,%esp
-jmp    <T> <_ZN16StatisticManager25SendDBSecretShopStatisticEP14CServerHandler+0xe4>
-mov    -0xc(%ebp),%ebx
-lea    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKi26SECRET_SHOP_STATISTIC_DATAEEptEv>
-mov    %eax,%edx
-mov    %ebx,%eax
-shl    $0x2,%eax
-add    %ebx,%eax
-shl    $0x2,%eax
-lea    -0x8(%ebp),%ecx
-lea    (%ecx,%eax,1),%eax
-sub    $0xfb2,%eax
-mov    0x4(%edx),%ecx
-mov    %ecx,0x2(%eax)
-mov    0x8(%edx),%ecx
-mov    %ecx,0x6(%eax)
-mov    0xc(%edx),%ecx
-mov    %ecx,0xa(%eax)
-mov    0x10(%edx),%ecx
-mov    %ecx,0xe(%eax)
-mov    0x14(%edx),%edx
-mov    %edx,0x12(%eax)
-lea    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKi26SECRET_SHOP_STATISTIC_DATAEEppEv>
-addl   $0x1,-0xc(%ebp)
-mov    -0x10(%ebp),%edx
-mov    %edx,%eax
-add    %eax,%eax
-add    %edx,%eax
-shl    $0x3,%eax
-add    $0x440,%eax
-add    0x8(%ebp),%eax
-lea    0x4(%eax),%edx
-lea    -0x14(%ebp),%eax
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIi26SECRET_SHOP_STATISTIC_DATASt4lessIiESaISt4pairIKiS0_EEE3endEv>
 sub    $0x4,%esp
-lea    -0x14(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKi26SECRET_SHOP_STATISTIC_DATAEEneERKS4_>
 test   %al,%al
-jne    <T> <_ZN16StatisticManager25SendDBSecretShopStatisticEP14CServerHandler+0x92>
-lea    -0xfca(%ebp),%eax
+jne    <T> <_ZN16StatisticManager25SendDBSecretShopStatisticEP14CServerHandler+0xac>
+lea    -0xfce(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
-jmp    <T> <_ZN16StatisticManager25SendDBSecretShopStatisticEP14CServerHandler+0x13f>
+jmp    <T> <_ZN16StatisticManager25SendDBSecretShopStatisticEP14CServerHandler+0x181>
 nop
-addl   $0x1,-0x10(%ebp)
-cmpl   $0x2,-0x10(%ebp)
+addl   $0x1,-0x14(%ebp)
+cmpl   $0x2,-0x14(%ebp)
 setle  %al
 test   %al,%al
-jne    <T> <_ZN16StatisticManager25SendDBSecretShopStatisticEP14CServerHandler+0x24>
-mov    -0x4(%ebp),%ebx
-leave
+jne    <T> <_ZN16StatisticManager25SendDBSecretShopStatisticEP14CServerHandler+0x17>
+lea    -0x8(%ebp),%esp
+add    $0x0,%esp
+pop    %ebx
+pop    %esi
+pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* StatisticManager::SendDBSecretShopStatistic(CServerHandler*) */

void __thiscall
StatisticManager::_ZN16StatisticManager25SendDBSecretShopStatisticEP14CServerHandler
          (StatisticManager *this,CServerHandler *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  Packet_Secret_Shop_Statistic local_fce [10];
  int local_fc4;
  int local_fc0;
  undefined4 auStack_fbc [1000];
  map<int,SECRET_SHOP_STATISTIC_DATA,std::less<int>,std::allocator<std::pair<int_const,SECRET_SHOP_STATISTIC_DATA>>>
  local_1c [4];
  map<int,SECRET_SHOP_STATISTIC_DATA,std::less<int>,std::allocator<std::pair<int_const,SECRET_SHOP_STATISTIC_DATA>>>
  local_18 [4];
  int local_14;
  int local_10;
  
  Packet_Secret_Shop_Statistic::Packet_Secret_Shop_Statistic(local_fce);
  for (local_14 = 0; local_14 < 3; local_14 = local_14 + 1) {
    local_fc0 = local_14;
    local_fc4 = std::
                map<int,SECRET_SHOP_STATISTIC_DATA,std::less<int>,std::allocator<std::pair<int_const,SECRET_SHOP_STATISTIC_DATA>>>
                ::size((map<int,SECRET_SHOP_STATISTIC_DATA,std::less<int>,std::allocator<std::pair<int_const,SECRET_SHOP_STATISTIC_DATA>>>
                        *)(this + local_14 * 0x18 + 0x444));
    if (0 < local_fc4) {
      local_10 = 0;
      std::
      map<int,SECRET_SHOP_STATISTIC_DATA,std::less<int>,std::allocator<std::pair<int_const,SECRET_SHOP_STATISTIC_DATA>>>
      ::begin(local_1c);
      while( true ) {
        std::
        map<int,SECRET_SHOP_STATISTIC_DATA,std::less<int>,std::allocator<std::pair<int_const,SECRET_SHOP_STATISTIC_DATA>>>
        ::end(local_18);
        cVar2 = std::_Rb_tree_iterator<std::pair<int_const,SECRET_SHOP_STATISTIC_DATA>>::operator!=
                          ((_Rb_tree_iterator<std::pair<int_const,SECRET_SHOP_STATISTIC_DATA>> *)
                           local_1c,(_Rb_tree_iterator *)local_18);
        iVar1 = local_10;
        if (cVar2 == '\0') break;
        iVar3 = std::_Rb_tree_iterator<std::pair<int_const,SECRET_SHOP_STATISTIC_DATA>>::operator->
                          ((_Rb_tree_iterator<std::pair<int_const,SECRET_SHOP_STATISTIC_DATA>> *)
                           local_1c);
        auStack_fbc[iVar1 * 5] = *(undefined4 *)(iVar3 + 4);
        auStack_fbc[iVar1 * 5 + 1] = *(undefined4 *)(iVar3 + 8);
        auStack_fbc[iVar1 * 5 + 2] = *(undefined4 *)(iVar3 + 0xc);
        auStack_fbc[iVar1 * 5 + 3] = *(undefined4 *)(iVar3 + 0x10);
        auStack_fbc[iVar1 * 5 + 4] = *(undefined4 *)(iVar3 + 0x14);
        std::_Rb_tree_iterator<std::pair<int_const,SECRET_SHOP_STATISTIC_DATA>>::operator++
                  ((_Rb_tree_iterator<std::pair<int_const,SECRET_SHOP_STATISTIC_DATA>> *)local_1c);
        local_10 = local_10 + 1;
      }
      CServerHandler::SendToDB(param_1,(PacketHeader *)local_fce);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/Statistics.cpp](source/DNFServer/GameServer/Statics/Statistics.cpp)（约第 1674 行）：

```cpp
void StatisticManager::SendDBSecretShopStatistic(CServerHandler* handler)
{
    for (int s = 0; s < 3; s++)
    {
        if (m_secretShop[s].empty())
        {
            continue;
        }
        Packet_Secret_Shop_Statistic pkt;
        pkt.m_count = m_secretShop[s].size();
        pkt.m_shopIdx = s;
        int idx = 0;
        for (std::map<int, SECRET_SHOP_STATISTIC_DATA>::iterator it = m_secretShop[s].begin();
             it != m_secretShop[s].end(); ++it)
        {
            pkt.m_items[idx].m_data[0] = it->first;
            for (int k = 1; k < 5; k++)
            {
                pkt.m_items[idx].m_data[k] = it->second.m_data[k];
            }
            idx++;
        }
        handler->SendToDB((PacketHeader*)&pkt);
    }
}
```

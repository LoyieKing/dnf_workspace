# _ZN16StatisticManager20SendDBValueStatisticEP14CServerHandler

`StatisticManager::SendDBValueStatistic(CServerHandler*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x8073b18` | `0x34e` | `0x8073db0` | `0x393` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,207 +1,220 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0x112c,%esp
+sub    $0x113c,%esp
 mov    0x8(%ebp),%eax
 add    $0x408,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIi18ValueStatisticDataSt4lessIiESaISt4pairIKiS0_EEE5emptyEv>
 test   %al,%al
-jne    <T> <_ZN16StatisticManager20SendDBValueStatisticEP14CServerHandler+0x342>
+jne    <T> <_ZN16StatisticManager20SendDBValueStatisticEP14CServerHandler+0x388>
 lea    -0x103b(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN24Packet_DBMW_Query_StringC1Ev>
-movl   $0x4ef5,-0x1031(%ebp)
-lea    -0x28(%ebp),%eax
-mov    %eax,(%esp)
+lea    -0x103b(%ebp),%eax
+add    $0xa,%eax
+movl   $0x4ef5,(%eax)
+movl   $0x0,(%esp)
 call   <T> <time>
+mov    %eax,-0x24(%ebp)
 mov    0x8(%ebp),%eax
 lea    0x408(%eax),%edx
 lea    -0x2c(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIi18ValueStatisticDataSt4lessIiESaISt4pairIKiS0_EEE5beginEv>
 sub    $0x4,%esp
-jmp    <T> <_ZN16StatisticManager20SendDBValueStatisticEP14CServerHandler+0x30b>
+jmp    <T> <_ZN16StatisticManager20SendDBValueStatisticEP14CServerHandler+0x353>
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKi18ValueStatisticDataEEptEv>
 mov    (%eax),%eax
 mov    %eax,-0x20(%ebp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKi18ValueStatisticDataEEptEv>
 add    $0x4,%eax
 mov    %eax,-0x1c(%ebp)
 movl   $0x1001,0x8(%esp)
 movl   $0x0,0x4(%esp)
 lea    -0x103b(%ebp),%eax
 add    $0xe,%eax
 mov    %eax,(%esp)
 call   <T> <memset>
 mov    -0x1c(%ebp),%eax
+mov    0x70(%eax),%eax
+mov    %eax,-0x10a4(%ebp)
+mov    -0x1c(%ebp),%eax
+mov    0x6c(%eax),%eax
+mov    %eax,-0x10a0(%ebp)
+mov    -0x1c(%ebp),%eax
+mov    0x68(%eax),%eax
+mov    %eax,-0x109c(%ebp)
+mov    -0x1c(%ebp),%eax
 mov    0x64(%eax),%eax
-mov    %eax,-0x109c(%ebp)
+mov    %eax,-0x1098(%ebp)
 mov    -0x1c(%ebp),%eax
 mov    0x60(%eax),%eax
-mov    %eax,-0x1098(%ebp)
+mov    %eax,-0x1094(%ebp)
 mov    -0x1c(%ebp),%eax
 mov    0x5c(%eax),%eax
-mov    %eax,-0x1094(%ebp)
+mov    %eax,-0x1090(%ebp)
 mov    -0x1c(%ebp),%eax
 mov    0x58(%eax),%eax
-mov    %eax,-0x1090(%ebp)
+mov    %eax,-0x108c(%ebp)
 mov    -0x1c(%ebp),%eax
 mov    0x54(%eax),%eax
-mov    %eax,-0x108c(%ebp)
+mov    %eax,-0x1088(%ebp)
 mov    -0x1c(%ebp),%eax
 mov    0x50(%eax),%eax
-mov    %eax,-0x1088(%ebp)
+mov    %eax,-0x1084(%ebp)
 mov    -0x1c(%ebp),%eax
 mov    0x4c(%eax),%eax
-mov    %eax,-0x1084(%ebp)
+mov    %eax,-0x1080(%ebp)
 mov    -0x1c(%ebp),%eax
 mov    0x48(%eax),%eax
-mov    %eax,-0x1080(%ebp)
+mov    %eax,-0x107c(%ebp)
 mov    -0x1c(%ebp),%eax
 mov    0x44(%eax),%eax
-mov    %eax,-0x107c(%ebp)
+mov    %eax,-0x1078(%ebp)
 mov    -0x1c(%ebp),%eax
 mov    0x40(%eax),%eax
-mov    %eax,-0x1078(%ebp)
+mov    %eax,-0x1074(%ebp)
 mov    -0x1c(%ebp),%eax
 mov    0x3c(%eax),%eax
-mov    %eax,-0x1074(%ebp)
+mov    %eax,-0x1070(%ebp)
 mov    -0x1c(%ebp),%eax
 mov    0x38(%eax),%eax
-mov    %eax,-0x1070(%ebp)
+mov    %eax,-0x106c(%ebp)
 mov    -0x1c(%ebp),%eax
 mov    0x34(%eax),%eax
-mov    %eax,-0x106c(%ebp)
+mov    %eax,-0x1068(%ebp)
 mov    -0x1c(%ebp),%eax
 mov    0x30(%eax),%eax
-mov    %eax,-0x1068(%ebp)
+mov    %eax,-0x1064(%ebp)
 mov    -0x1c(%ebp),%eax
 mov    0x2c(%eax),%eax
-mov    %eax,-0x1064(%ebp)
+mov    %eax,-0x1060(%ebp)
 mov    -0x1c(%ebp),%eax
 mov    0x28(%eax),%eax
-mov    %eax,-0x1060(%ebp)
+mov    %eax,-0x105c(%ebp)
 mov    -0x1c(%ebp),%eax
 mov    0x24(%eax),%eax
-mov    %eax,-0x105c(%ebp)
+mov    %eax,-0x1058(%ebp)
 mov    -0x1c(%ebp),%eax
 mov    0x20(%eax),%eax
-mov    %eax,-0x1058(%ebp)
+mov    %eax,-0x1054(%ebp)
 mov    -0x1c(%ebp),%eax
 mov    0x1c(%eax),%eax
-mov    %eax,-0x1054(%ebp)
+mov    %eax,-0x1050(%ebp)
 mov    -0x1c(%ebp),%eax
 mov    0x18(%eax),%eax
-mov    %eax,-0x1050(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0x14(%eax),%eax
 mov    %eax,-0x104c(%ebp)
 mov    -0x1c(%ebp),%eax
-mov    0x10(%eax),%edi
-mov    -0x1c(%ebp),%eax
-mov    0xc(%eax),%esi
-mov    -0x1c(%ebp),%eax
-mov    0x8(%eax),%ebx
-mov    -0x1c(%ebp),%eax
-mov    0x4(%eax),%ecx
+mov    0x14(%eax),%edi
+mov    -0x1c(%ebp),%eax
+mov    0x10(%eax),%esi
+mov    -0x1c(%ebp),%eax
+mov    0xc(%eax),%ebx
+mov    -0x1c(%ebp),%eax
+mov    0x8(%eax),%ecx
+mov    -0x1c(%ebp),%eax
+mov    0x4(%eax),%edx
 mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,-0x10ac(%ebp)
-mov    -0x28(%ebp),%edx
+mov    -0x10a4(%ebp),%eax
+mov    %eax,0x88(%esp)
+mov    -0x10a0(%ebp),%eax
+mov    %eax,0x84(%esp)
 mov    -0x109c(%ebp),%eax
+mov    %eax,0x80(%esp)
+mov    -0x1098(%ebp),%eax
 mov    %eax,0x7c(%esp)
-mov    -0x1098(%ebp),%eax
+mov    -0x1094(%ebp),%eax
 mov    %eax,0x78(%esp)
-mov    -0x1094(%ebp),%eax
+mov    -0x1090(%ebp),%eax
 mov    %eax,0x74(%esp)
-mov    -0x1090(%ebp),%eax
+mov    -0x108c(%ebp),%eax
 mov    %eax,0x70(%esp)
-mov    -0x108c(%ebp),%eax
+mov    -0x1088(%ebp),%eax
 mov    %eax,0x6c(%esp)
-mov    -0x1088(%ebp),%eax
+mov    -0x1084(%ebp),%eax
 mov    %eax,0x68(%esp)
-mov    -0x1084(%ebp),%eax
+mov    -0x1080(%ebp),%eax
 mov    %eax,0x64(%esp)
-mov    -0x1080(%ebp),%eax
+mov    -0x107c(%ebp),%eax
 mov    %eax,0x60(%esp)
-mov    -0x107c(%ebp),%eax
+mov    -0x1078(%ebp),%eax
 mov    %eax,0x5c(%esp)
-mov    -0x1078(%ebp),%eax
+mov    -0x1074(%ebp),%eax
 mov    %eax,0x58(%esp)
-mov    -0x1074(%ebp),%eax
+mov    -0x1070(%ebp),%eax
 mov    %eax,0x54(%esp)
-mov    -0x1070(%ebp),%eax
+mov    -0x106c(%ebp),%eax
 mov    %eax,0x50(%esp)
-mov    -0x106c(%ebp),%eax
+mov    -0x1068(%ebp),%eax
 mov    %eax,0x4c(%esp)
-mov    -0x1068(%ebp),%eax
+mov    -0x1064(%ebp),%eax
 mov    %eax,0x48(%esp)
-mov    -0x1064(%ebp),%eax
+mov    -0x1060(%ebp),%eax
 mov    %eax,0x44(%esp)
-mov    -0x1060(%ebp),%eax
+mov    -0x105c(%ebp),%eax
 mov    %eax,0x40(%esp)
-mov    -0x105c(%ebp),%eax
+mov    -0x1058(%ebp),%eax
 mov    %eax,0x3c(%esp)
-mov    -0x1058(%ebp),%eax
+mov    -0x1054(%ebp),%eax
 mov    %eax,0x38(%esp)
-mov    -0x1054(%ebp),%eax
+mov    -0x1050(%ebp),%eax
 mov    %eax,0x34(%esp)
-mov    -0x1050(%ebp),%eax
+mov    -0x104c(%ebp),%eax
 mov    %eax,0x30(%esp)
-mov    -0x104c(%ebp),%eax
-mov    %eax,0x2c(%esp)
-mov    %edi,0x28(%esp)
-mov    %esi,0x24(%esp)
-mov    %ebx,0x20(%esp)
-mov    %ecx,0x1c(%esp)
+mov    %edi,0x2c(%esp)
+mov    %esi,0x28(%esp)
+mov    %ebx,0x24(%esp)
+mov    %ecx,0x20(%esp)
+mov    %edx,0x1c(%esp)
 mov    -0x10ac(%ebp),%eax
 mov    %eax,0x18(%esp)
 mov    -0x20(%ebp),%eax
 mov    %eax,0x14(%esp)
-mov    %edx,0x10(%esp)
+mov    -0x24(%ebp),%eax
+mov    %eax,0x10(%esp)
 movl   $0x1,0xc(%esp)
 movl   $"inSert into log_value_stat(channel_no,occ_time ,level,uv,drop_gold,drop_item,result_card_gold,result_card_item,gold_card_item,store_item_buy,jar_item,disjoint_create,upgrade_faild_forced_disjoint,quest_reward,deathtower_card_gold,deathtower_card_item,consume_store_item_buy,consume_upgrade_attempt,consume_upgrade_faild,consume_stamina_recovery,consume_quest_consume,consume_auction_commision,consume_item_disjoint,consume_item_repair,consume_item_use,consume_item_drop,consume_gold_drop,consume_gold_card_price,consume_qp_init) values(%d,from_unixtime(%d),%d,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u)",0x8(%esp)
 movl   $0x400,0x4(%esp)
 lea    -0x103b(%ebp),%eax
 add    $0xe,%eax
 mov    %eax,(%esp)
 call   <T> <snprintf>
 lea    -0x103b(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKi18ValueStatisticDataEEppEv>
 mov    0x8(%ebp),%eax
 lea    0x408(%eax),%edx
-lea    -0x24(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIi18ValueStatisticDataSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 sub    $0x4,%esp
-lea    -0x24(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKi18ValueStatisticDataEEneERKS4_>
 test   %al,%al
-jne    <T> <_ZN16StatisticManager20SendDBValueStatisticEP14CServerHandler+0x67>
-jmp    <T> <_ZN16StatisticManager20SendDBValueStatisticEP14CServerHandler+0x343>
-nop
+jne    <T> <_ZN16StatisticManager20SendDBValueStatisticEP14CServerHandler+0x70>
 lea    -0xc(%ebp),%esp
 add    $0x0,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* StatisticManager::SendDBValueStatistic(CServerHandler*) */

void __thiscall
StatisticManager::_ZN16StatisticManager20SendDBValueStatisticEP14CServerHandler
          (StatisticManager *this,CServerHandler *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  Packet_DBMW_Query_String local_103f [10];
  undefined4 local_1035;
  char acStack_1031 [4097];
  map<int,ValueStatisticData,std::less<int>,std::allocator<std::pair<int_const,ValueStatisticData>>>
  local_30 [4];
  time_t local_2c;
  map<int,ValueStatisticData,std::less<int>,std::allocator<std::pair<int_const,ValueStatisticData>>>
  local_28 [4];
  undefined4 local_24;
  undefined4 *local_20;
  
  cVar1 = std::
          map<int,ValueStatisticData,std::less<int>,std::allocator<std::pair<int_const,ValueStatisticData>>>
          ::empty((map<int,ValueStatisticData,std::less<int>,std::allocator<std::pair<int_const,ValueStatisticData>>>
                   *)(this + 0x408));
  if (cVar1 == '\0') {
    Packet_DBMW_Query_String::Packet_DBMW_Query_String(local_103f);
    local_1035 = 0x4ef5;
    time(&local_2c);
    std::
    map<int,ValueStatisticData,std::less<int>,std::allocator<std::pair<int_const,ValueStatisticData>>>
    ::begin(local_30);
    while( true ) {
      std::
      map<int,ValueStatisticData,std::less<int>,std::allocator<std::pair<int_const,ValueStatisticData>>>
      ::end(local_28);
      cVar1 = std::_Rb_tree_iterator<std::pair<int_const,ValueStatisticData>>::operator!=
                        ((_Rb_tree_iterator<std::pair<int_const,ValueStatisticData>> *)local_30,
                         (_Rb_tree_iterator *)local_28);
      if (cVar1 == '\0') break;
      puVar2 = (undefined4 *)
               std::_Rb_tree_iterator<std::pair<int_const,ValueStatisticData>>::operator->
                         ((_Rb_tree_iterator<std::pair<int_const,ValueStatisticData>> *)local_30);
      local_24 = *puVar2;
      iVar3 = std::_Rb_tree_iterator<std::pair<int_const,ValueStatisticData>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,ValueStatisticData>> *)local_30);
      local_20 = (undefined4 *)(iVar3 + 4);
      memset(acStack_1031,0,0x1001);
      snprintf(acStack_1031,0x400,
               "inSert into log_value_stat(channel_no,occ_time ,level,uv,drop_gold,drop_item,result_card_gold,result_card_item,gold_card_item,store_item_buy,jar_item,disjoint_create,upgrade_faild_forced_disjoint,quest_reward,deathtower_card_gold,deathtower_card_item,consume_store_item_buy,consume_upgrade_attempt,consume_upgrade_faild,consume_stamina_recovery,consume_quest_consume,consume_auction_commision,consume_item_disjoint,consume_item_repair,consume_item_use,consume_item_drop,consume_gold_drop,consume_gold_card_price,consume_qp_init) values(%d,from_unixtime(%d),%d,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u)"
               ,1,local_2c,local_24,*local_20,local_20[1],local_20[2],local_20[3],local_20[4],
               local_20[5],local_20[6],local_20[7],local_20[8],local_20[9],local_20[10],
               local_20[0xb],local_20[0xc],local_20[0xd],local_20[0xe],local_20[0xf],local_20[0x10],
               local_20[0x11],local_20[0x12],local_20[0x13],local_20[0x14],local_20[0x15],
               local_20[0x16],local_20[0x17],local_20[0x18],local_20[0x19]);
      CServerHandler::SendToDB(param_1,(PacketHeader *)local_103f);
      std::_Rb_tree_iterator<std::pair<int_const,ValueStatisticData>>::operator++
                ((_Rb_tree_iterator<std::pair<int_const,ValueStatisticData>> *)local_30);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/Statistics.cpp](source/DNFServer/GameServer/Statics/Statistics.cpp)（约第 1530 行）：

```cpp
void StatisticManager::SendDBValueStatistic(CServerHandler* handler)
{
    // ORIG：空 if + else 形态（call empty; test; jne），直接写 !empty() 会物化 xor。
    if (m_value.empty())
    {
    }
    else
    {
        Packet_DBMW_Query_String pkt;
        *(unsigned int*)((char*)&pkt + 0xa) = 0x4ef5;
        time_t now = time(0);
        for (std::map<int, ValueStatisticData>::iterator it = m_value.begin();
             it != m_value.end(); ++it)
        {
            int key = it->first;
            ValueStatisticData* v = &it->second;
            memset((char*)&pkt + 0xe, 0, 0x1001);
            snprintf((char*)&pkt + 0xe, 0x400,
                "inSert into log_value_stat(channel_no,occ_time ,level,uv,drop_gold,drop_item,result_card_gold,result_card_item,gold_card_item,store_item_buy,jar_item,disjoint_create,upgrade_faild_forced_disjoint,quest_reward,deathtower_card_gold,deathtower_card_item,consume_store_item_buy,consume_upgrade_attempt,consume_upgrade_faild,consume_stamina_recovery,consume_quest_consume,consume_auction_commision,consume_item_disjoint,consume_item_repair,consume_item_use,consume_item_drop,consume_gold_drop,consume_gold_card_price,consume_qp_init) values(%d,from_unixtime(%d),%d,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u)",
                1, now, key, v->m_data[0], v->m_data[1], v->m_data[2], v->m_data[3], v->m_data[4],
                v->m_data[5], v->m_data[6], v->m_data[7], v->m_data[8], v->m_data[9],
                v->m_data[10], v->m_data[11], v->m_data[12], v->m_data[13], v->m_data[14],
                v->m_data[15], v->m_data[16], v->m_data[17], v->m_data[18], v->m_data[19],
                v->m_data[20], v->m_data[21], v->m_data[22], v->m_data[23], v->m_data[24],
                v->m_data[25], v->m_data[26], v->m_data[27], v->m_data[28]);
            handler->SendToDB((PacketHeader*)&pkt);
        }
    }
}
```

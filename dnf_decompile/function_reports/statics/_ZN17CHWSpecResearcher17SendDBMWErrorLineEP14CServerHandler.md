# _ZN17CHWSpecResearcher17SendDBMWErrorLineEP14CServerHandler

`CHWSpecResearcher::SendDBMWErrorLine(CServerHandler*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x8063362` | `0x186` | `0x8067a46` | `0x184` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,113 +1,112 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x1824,%esp
 lea    -0x180a(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN37Packet_DBMW_Save_Error_Line_StatisticC1Ev>
 movl   $0x0,-0xc(%ebp)
 mov    0x8(%ebp),%eax
 add    $0x50,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapI13STErrorStaticjSt4lessIS0_ESaISt4pairIKS0_jEEE5emptyEv>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN17CHWSpecResearcher17SendDBMWErrorLineEP14CServerHandler+0x181>
+je     <T> <_ZN17CHWSpecResearcher17SendDBMWErrorLineEP14CServerHandler+0x17f>
 mov    0x8(%ebp),%eax
 lea    0x50(%eax),%edx
 lea    -0x14(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI13STErrorStaticjSt4lessIS0_ESaISt4pairIKS0_jEEE5beginEv>
 sub    $0x4,%esp
-jmp    <T> <_ZN17CHWSpecResearcher17SendDBMWErrorLineEP14CServerHandler+0x113>
+jmp    <T> <_ZN17CHWSpecResearcher17SendDBMWErrorLineEP14CServerHandler+0x111>
 mov    -0xc(%ebp),%ebx
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK13STErrorStaticjEEptEv>
 movzwl (%eax),%edx
 mov    %ebx,%eax
 shl    $0x2,%eax
 add    %ebx,%eax
 add    %eax,%eax
 lea    -0x8(%ebp),%ecx
 lea    (%ecx,%eax,1),%eax
 sub    $0x17f0,%eax
 mov    %dx,(%eax)
 mov    -0xc(%ebp),%ebx
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK13STErrorStaticjEEptEv>
-mov    0x4(%eax),%eax
-mov    %eax,%edx
+mov    0x4(%eax),%edx
 mov    %ebx,%eax
 shl    $0x2,%eax
 add    %ebx,%eax
 add    %eax,%eax
 lea    -0x8(%ebp),%ecx
 lea    (%ecx,%eax,1),%eax
 sub    $0x1802,%eax
 mov    %edx,0xe(%eax)
 mov    -0xc(%ebp),%ebx
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK13STErrorStaticjEEptEv>
 mov    0x8(%eax),%edx
 mov    %ebx,%eax
 shl    $0x2,%eax
 add    %ebx,%eax
 add    %eax,%eax
 lea    -0x8(%ebp),%ecx
 lea    (%ecx,%eax,1),%eax
 sub    $0x1802,%eax
 mov    %edx,0x14(%eax)
 addl   $0x1,-0xc(%ebp)
 mov    -0xc(%ebp),%eax
 cmp    $0x263,%eax
 seta   %al
 test   %al,%al
-je     <T> <_ZN17CHWSpecResearcher17SendDBMWErrorLineEP14CServerHandler+0x108>
+je     <T> <_ZN17CHWSpecResearcher17SendDBMWErrorLineEP14CServerHandler+0x106>
 movl   $0x264,-0x1800(%ebp)
 lea    -0x180a(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
 movl   $0x0,-0xc(%ebp)
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIK13STErrorStaticjEEppEv>
 mov    0x8(%ebp),%eax
 lea    0x50(%eax),%edx
 lea    -0x10(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI13STErrorStaticjSt4lessIS0_ESaISt4pairIKS0_jEEE3endEv>
 sub    $0x4,%esp
 lea    -0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK13STErrorStaticjEEneERKS4_>
 test   %al,%al
 jne    <T> <_ZN17CHWSpecResearcher17SendDBMWErrorLineEP14CServerHandler+0x55>
 cmpl   $0x0,-0xc(%ebp)
-je     <T> <_ZN17CHWSpecResearcher17SendDBMWErrorLineEP14CServerHandler+0x181>
+je     <T> <_ZN17CHWSpecResearcher17SendDBMWErrorLineEP14CServerHandler+0x17f>
 mov    -0xc(%ebp),%eax
 mov    %eax,-0x1800(%ebp)
 mov    -0xc(%ebp),%eax
 mov    %eax,%edx
 mov    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
 add    %eax,%eax
 add    $0xe,%eax
 mov    %ax,-0x1808(%ebp)
 lea    -0x180a(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
 mov    -0x4(%ebp),%ebx
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CHWSpecResearcher::SendDBMWErrorLine(CServerHandler*) */

void __thiscall
CHWSpecResearcher::_ZN17CHWSpecResearcher17SendDBMWErrorLineEP14CServerHandler
          (CHWSpecResearcher *this,CServerHandler *param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  undefined2 *puVar4;
  int iVar5;
  Packet_DBMW_Save_Error_Line_Statistic local_180e [2];
  short local_180c;
  uint local_1804;
  undefined4 uStack_1800;
  undefined2 uStack_17fc;
  undefined4 auStack_17fa [1528];
  map<STErrorStatic,unsigned_int,std::less<STErrorStatic>,std::allocator<std::pair<STErrorStatic_const,unsigned_int>>>
  local_18 [4];
  map<STErrorStatic,unsigned_int,std::less<STErrorStatic>,std::allocator<std::pair<STErrorStatic_const,unsigned_int>>>
  local_14 [4];
  uint local_10;
  
  Packet_DBMW_Save_Error_Line_Statistic::Packet_DBMW_Save_Error_Line_Statistic(local_180e);
  local_10 = 0;
  cVar3 = std::
          map<STErrorStatic,unsigned_int,std::less<STErrorStatic>,std::allocator<std::pair<STErrorStatic_const,unsigned_int>>>
          ::empty((map<STErrorStatic,unsigned_int,std::less<STErrorStatic>,std::allocator<std::pair<STErrorStatic_const,unsigned_int>>>
                   *)(this + 0x50));
  if (cVar3 != '\x01') {
    std::
    map<STErrorStatic,unsigned_int,std::less<STErrorStatic>,std::allocator<std::pair<STErrorStatic_const,unsigned_int>>>
    ::begin(local_18);
    while( true ) {
      std::
      map<STErrorStatic,unsigned_int,std::less<STErrorStatic>,std::allocator<std::pair<STErrorStatic_const,unsigned_int>>>
      ::end(local_14);
      cVar3 = std::_Rb_tree_iterator<std::pair<STErrorStatic_const,unsigned_int>>::operator!=
                        ((_Rb_tree_iterator<std::pair<STErrorStatic_const,unsigned_int>> *)local_18,
                         (_Rb_tree_iterator *)local_14);
      uVar2 = local_10;
      if (cVar3 == '\0') break;
      puVar4 = (undefined2 *)
               std::_Rb_tree_iterator<std::pair<STErrorStatic_const,unsigned_int>>::operator->
                         ((_Rb_tree_iterator<std::pair<STErrorStatic_const,unsigned_int>> *)local_18
                         );
      uVar1 = local_10;
      (&uStack_17fc)[uVar2 * 5] = *puVar4;
      iVar5 = std::_Rb_tree_iterator<std::pair<STErrorStatic_const,unsigned_int>>::operator->
                        ((_Rb_tree_iterator<std::pair<STErrorStatic_const,unsigned_int>> *)local_18)
      ;
      uVar2 = local_10;
      *(undefined4 *)((int)&uStack_1800 + uVar1 * 10) = *(undefined4 *)(iVar5 + 4);
      iVar5 = std::_Rb_tree_iterator<std::pair<STErrorStatic_const,unsigned_int>>::operator->
                        ((_Rb_tree_iterator<std::pair<STErrorStatic_const,unsigned_int>> *)local_18)
      ;
      *(undefined4 *)((int)auStack_17fa + uVar2 * 10) = *(undefined4 *)(iVar5 + 8);
      local_10 = local_10 + 1;
      if (0x263 < local_10) {
        local_1804 = 0x264;
        CServerHandler::SendToDB(param_1,(PacketHeader *)local_180e);
        local_10 = 0;
      }
      std::_Rb_tree_iterator<std::pair<STErrorStatic_const,unsigned_int>>::operator++
                ((_Rb_tree_iterator<std::pair<STErrorStatic_const,unsigned_int>> *)local_18);
    }
    if (local_10 != 0) {
      local_1804 = local_10;
      local_180c = ((short)(local_10 << 2) + (short)local_10) * 2 + 0xe;
      CServerHandler::SendToDB(param_1,(PacketHeader *)local_180e);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/HWSpecResearcher.cpp](source/DNFServer/GameServer/Statics/HWSpecResearcher.cpp)（约第 112 行）：

```cpp
void CHWSpecResearcher::SendDBMWErrorLine(CServerHandler* handler)
{
    Packet_DBMW_Save_Error_Line_Statistic pkt;
    int count = 0;
    if (!m_errorSpec.empty())
    {
        for (std::map<STErrorStatic, unsigned int>::iterator it = m_errorSpec.begin();
             it != m_errorSpec.end(); ++it)
        {
            pkt.m_items[count].m_field4 = it->first.m_field0;
            pkt.m_items[count].m_field0 = (unsigned int)it->first.m_field4;
            pkt.m_items[count].m_field6 = (int)it->second;
            if (0x263U < (++count))
            {
                pkt.m_count = 0x264;
                handler->SendToDB((PacketHeader*)&pkt);
                count = 0;
            }
        }
        if (count != 0)
        {
            pkt.m_count = count;
            pkt.packetSize = (unsigned short)(count * 10 + 0xe);
            handler->SendToDB((PacketHeader*)&pkt);
        }
    }
}
```

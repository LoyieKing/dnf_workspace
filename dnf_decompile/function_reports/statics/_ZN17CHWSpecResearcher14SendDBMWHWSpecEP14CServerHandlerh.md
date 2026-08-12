# _ZN17CHWSpecResearcher14SendDBMWHWSpecEP14CServerHandlerh

`CHWSpecResearcher::SendDBMWHWSpec(CServerHandler*, unsigned char)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x8062ff0` | `0x1a1` | `0x80676da` | `0x1a4` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,111 +1,112 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x1824,%esp
 mov    0x10(%ebp),%eax
 mov    %al,-0x180c(%ebp)
 lea    -0x1803(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN38Packet_DBMW_Save_Client_Spec_StatisticC1Ev>
 movzbl -0x180c(%ebp),%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x3,%eax
 add    0x8(%ebp),%eax
 mov    %eax,-0x14(%ebp)
 movzbl -0x180c(%ebp),%eax
 mov    %al,-0x17f9(%ebp)
 movl   $0x0,-0x10(%ebp)
 mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapI12STSpecStaticjSt4lessIS0_ESaISt4pairIKS0_jEEE5emptyEv>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN17CHWSpecResearcher14SendDBMWHWSpecEP14CServerHandlerh+0x19c>
+je     <T> <_ZN17CHWSpecResearcher14SendDBMWHWSpecEP14CServerHandlerh+0x19f>
 lea    -0x1c(%ebp),%eax
 mov    -0x14(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI12STSpecStaticjSt4lessIS0_ESaISt4pairIKS0_jEEE5beginEv>
 sub    $0x4,%esp
-jmp    <T> <_ZN17CHWSpecResearcher14SendDBMWHWSpecEP14CServerHandlerh+0x12c>
+jmp    <T> <_ZN17CHWSpecResearcher14SendDBMWHWSpecEP14CServerHandlerh+0x12f>
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK12STSpecStaticjEEptEv>
 mov    %eax,-0xc(%ebp)
-mov    -0xc(%ebp),%ecx
+lea    -0x1803(%ebp),%edx
 mov    -0x10(%ebp),%eax
-lea    -0x1803(%ebp),%ebx
 add    %eax,%eax
-lea    0x0(,%eax,8),%edx
-sub    %eax,%edx
-lea    (%ebx,%edx,1),%eax
+lea    0x0(,%eax,8),%ecx
+mov    %ecx,%ebx
+sub    %eax,%ebx
+mov    %ebx,%eax
 add    $0x11,%eax
+add    %eax,%edx
 movl   $0xc,0x8(%esp)
-mov    %ecx,0x4(%esp)
-mov    %eax,(%esp)
+mov    -0xc(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
 call   <T> <memcpy>
-mov    -0x10(%ebp),%ebx
+lea    -0x1803(%ebp),%edx
+mov    -0x10(%ebp),%eax
+add    %eax,%eax
+lea    0x0(,%eax,8),%ecx
+mov    %ecx,%ebx
+sub    %eax,%ebx
+mov    %ebx,%eax
+add    $0xf,%eax
+lea    (%edx,%eax,1),%ebx
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK12STSpecStaticjEEptEv>
 mov    0xc(%eax),%eax
-mov    %eax,%ecx
-mov    %ebx,%eax
-add    %eax,%eax
-lea    0x0(,%eax,8),%edx
-sub    %eax,%edx
-lea    -0x8(%ebp),%eax
-add    %edx,%eax
-sub    $0x17fb,%eax
-mov    %cx,0xf(%eax)
+mov    %ax,(%ebx)
 addl   $0x1,-0x10(%ebp)
-mov    -0x10(%ebp),%eax
-cmp    $0x1b3,%eax
+cmpl   $0x1b3,-0x10(%ebp)
 seta   %al
 test   %al,%al
-je     <T> <_ZN17CHWSpecResearcher14SendDBMWHWSpecEP14CServerHandlerh+0x121>
+je     <T> <_ZN17CHWSpecResearcher14SendDBMWHWSpecEP14CServerHandlerh+0x124>
 movl   $0x1b4,-0x17f8(%ebp)
 lea    -0x1803(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
 movl   $0x0,-0x10(%ebp)
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIK12STSpecStaticjEEppEv>
 lea    -0x18(%ebp),%eax
 mov    -0x14(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI12STSpecStaticjSt4lessIS0_ESaISt4pairIKS0_jEEE3endEv>
 sub    $0x4,%esp
 lea    -0x18(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK12STSpecStaticjEEneERKS4_>
 test   %al,%al
 jne    <T> <_ZN17CHWSpecResearcher14SendDBMWHWSpecEP14CServerHandlerh+0x7b>
 cmpl   $0x0,-0x10(%ebp)
-je     <T> <_ZN17CHWSpecResearcher14SendDBMWHWSpecEP14CServerHandlerh+0x19c>
+je     <T> <_ZN17CHWSpecResearcher14SendDBMWHWSpecEP14CServerHandlerh+0x19f>
 mov    -0x10(%ebp),%eax
 mov    %eax,-0x17f8(%ebp)
 mov    -0x10(%ebp),%eax
 add    %eax,%eax
 lea    0x0(,%eax,8),%edx
 mov    %edx,%ecx
 sub    %ax,%cx
 mov    %ecx,%eax
 add    $0xf,%eax
 mov    %ax,-0x1801(%ebp)
 lea    -0x1803(%ebp),%eax
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

/* CHWSpecResearcher::SendDBMWHWSpec(CServerHandler*, unsigned char) */

void __thiscall
CHWSpecResearcher::_ZN17CHWSpecResearcher14SendDBMWHWSpecEP14CServerHandlerh
          (CHWSpecResearcher *this,CServerHandler *param_1,uchar param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  Packet_DBMW_Save_Client_Spec_Statistic local_1807 [2];
  short local_1805;
  uchar local_17fd;
  uint local_17fc;
  undefined2 uStack_17f8;
  undefined1 auStack_17f6 [6102];
  map<STSpecStatic,unsigned_int,std::less<STSpecStatic>,std::allocator<std::pair<STSpecStatic_const,unsigned_int>>>
  local_20 [4];
  map<STSpecStatic,unsigned_int,std::less<STSpecStatic>,std::allocator<std::pair<STSpecStatic_const,unsigned_int>>>
  local_1c [4];
  map<STSpecStatic,unsigned_int,std::less<STSpecStatic>,std::allocator<std::pair<STSpecStatic_const,unsigned_int>>>
  *local_18;
  uint local_14;
  void *local_10;
  
  Packet_DBMW_Save_Client_Spec_Statistic::Packet_DBMW_Save_Client_Spec_Statistic(local_1807);
  local_18 = (map<STSpecStatic,unsigned_int,std::less<STSpecStatic>,std::allocator<std::pair<STSpecStatic_const,unsigned_int>>>
              *)(this + (uint)param_2 * 0x18);
  local_14 = 0;
  local_17fd = param_2;
  cVar2 = std::
          map<STSpecStatic,unsigned_int,std::less<STSpecStatic>,std::allocator<std::pair<STSpecStatic_const,unsigned_int>>>
          ::empty(local_18);
  if (cVar2 != '\x01') {
    std::
    map<STSpecStatic,unsigned_int,std::less<STSpecStatic>,std::allocator<std::pair<STSpecStatic_const,unsigned_int>>>
    ::begin(local_20);
    while( true ) {
      std::
      map<STSpecStatic,unsigned_int,std::less<STSpecStatic>,std::allocator<std::pair<STSpecStatic_const,unsigned_int>>>
      ::end(local_1c);
      cVar2 = std::_Rb_tree_iterator<std::pair<STSpecStatic_const,unsigned_int>>::operator!=
                        ((_Rb_tree_iterator<std::pair<STSpecStatic_const,unsigned_int>> *)local_20,
                         (_Rb_tree_iterator *)local_1c);
      if (cVar2 == '\0') break;
      local_10 = (void *)std::_Rb_tree_iterator<std::pair<STSpecStatic_const,unsigned_int>>::
                         operator->((_Rb_tree_iterator<std::pair<STSpecStatic_const,unsigned_int>> *
                                    )local_20);
      memcpy(auStack_17f6 + local_14 * 0xe,local_10,0xc);
      uVar1 = local_14;
      iVar3 = std::_Rb_tree_iterator<std::pair<STSpecStatic_const,unsigned_int>>::operator->
                        ((_Rb_tree_iterator<std::pair<STSpecStatic_const,unsigned_int>> *)local_20);
      (&uStack_17f8)[uVar1 * 7] = (short)*(undefined4 *)(iVar3 + 0xc);
      local_14 = local_14 + 1;
      if (0x1b3 < local_14) {
        local_17fc = 0x1b4;
        CServerHandler::SendToDB(param_1,(PacketHeader *)local_1807);
        local_14 = 0;
      }
      std::_Rb_tree_iterator<std::pair<STSpecStatic_const,unsigned_int>>::operator++
                ((_Rb_tree_iterator<std::pair<STSpecStatic_const,unsigned_int>> *)local_20);
    }
    if (local_14 != 0) {
      local_17fc = local_14;
      local_1805 = (short)local_14 * 0xe + 0xf;
      CServerHandler::SendToDB(param_1,(PacketHeader *)local_1807);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/HWSpecResearcher.cpp](source/DNFServer/GameServer/Statics/HWSpecResearcher.cpp)（约第 48 行）：

```cpp
void CHWSpecResearcher::SendDBMWHWSpec(CServerHandler* handler, unsigned char param)
{
    Packet_DBMW_Save_Client_Spec_Statistic pkt;
    std::map<STSpecStatic, unsigned int>* pMap = &m_spec[param];
    pkt.m_fieldA = (char)param;
    unsigned int count = 0;
    if (!pMap->empty())
    {
        for (std::map<STSpecStatic, unsigned int>::iterator it = pMap->begin();
             it != pMap->end(); ++it)
        {
            const STSpecStatic* pSpec = &it->first;
            memcpy((char*)&pkt + 0xf + count * 0xe + 2, pSpec, 0xc);
            *(short*)((char*)&pkt + 0xf + count * 0xe) = (short)it->second;
            if (0x1b3 < (++count))
            {
                pkt.m_fieldB = 0x1b4;
                handler->SendToDB((PacketHeader*)&pkt);
                count = 0;
            }
        }
        if (count != 0)
        {
            pkt.m_fieldB = count;
            pkt.packetSize = (unsigned short)(count * 0xe + 0xf);
            handler->SendToDB((PacketHeader*)&pkt);
        }
    }
}
```

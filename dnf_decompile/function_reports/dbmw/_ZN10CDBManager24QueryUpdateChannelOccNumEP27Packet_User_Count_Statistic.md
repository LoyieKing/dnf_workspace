# _ZN10CDBManager24QueryUpdateChannelOccNumEP27Packet_User_Count_Statistic

`CDBManager::QueryUpdateChannelOccNum(Packet_User_Count_Statistic*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x8086072` | `0x1be` | `0x8050a02` | `0x1ca` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,123 +1,130 @@
 push   %ebp
 mov    %esp,%ebp
-push   %esi
 push   %ebx
-sub    $0x40,%esp
+sub    $0x44,%esp
 cmpl   $0x0,0xc(%ebp)
-jne    <T> <_ZN10CDBManager24QueryUpdateChannelOccNumEP27Packet_User_Count_Statistic+0x18>
+jne    <T> <_ZN10CDBManager24QueryUpdateChannelOccNumEP27Packet_User_Count_Statistic+0x17>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager24QueryUpdateChannelOccNumEP27Packet_User_Count_Statistic+0x1b7>
+jmp    <T> <_ZN10CDBManager24QueryUpdateChannelOccNumEP27Packet_User_Count_Statistic+0x1c4>
 mov    0x8(%ebp),%eax
 mov    0x8(%eax),%eax
+mov    %eax,-0x14(%ebp)
+cmpl   $0x0,-0x14(%ebp)
+jne    <T> <_ZN10CDBManager24QueryUpdateChannelOccNumEP27Packet_User_Count_Statistic+0x30>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager24QueryUpdateChannelOccNumEP27Packet_User_Count_Statistic+0x1c4>
+mov    0xc(%ebp),%eax
 mov    %eax,-0x10(%ebp)
-cmpl   $0x0,-0x10(%ebp)
-jne    <T> <_ZN10CDBManager24QueryUpdateChannelOccNumEP27Packet_User_Count_Statistic+0x31>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager24QueryUpdateChannelOccNumEP27Packet_User_Count_Statistic+0x1b7>
-mov    -0x10(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%ecx
-mov    0xc(%ebp),%eax
-mov    0xa(%eax),%edx
-mov    0xc(%ebp),%eax
-mov    0xe(%eax),%eax
+mov    -0x10(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%edx
+mov    -0x10(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%eax
 mov    %edx,0x10(%esp)
 mov    %eax,0xc(%esp)
 movl   $"upDate game_channel set gc_now=%d,gc_up_time=now() where gc_no=%d",0x8(%esp)
 movl   $0x4eed,0x4(%esp)
-mov    -0x10(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   *%ecx
-mov    -0x10(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4eed,0x4(%esp)
-mov    -0x10(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager24QueryUpdateChannelOccNumEP27Packet_User_Count_Statistic+0xd2>
-mov    0xc(%ebp),%eax
-mov    0xe(%eax),%esi
-mov    0xc(%ebp),%eax
-mov    0xa(%eax),%ebx
+je     <T> <_ZN10CDBManager24QueryUpdateChannelOccNumEP27Packet_User_Count_Statistic+0xdf>
 movl   $0x27dc,0x8(%esp)
 movl   $&_ZZN10CDBManager24QueryUpdateChannelOccNumEP27Packet_User_Count_StatisticE12__FUNCTION__,0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    -0x10(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%edx
+mov    -0x10(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%eax
+mov    %edx,0x10(%esp)
+mov    %eax,0xc(%esp)
 movl   $"upDate game_channel Error : channel_no(%d), user_count(%d)",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 movl   $0x0,-0xc(%ebp)
-jmp    <T> <_ZN10CDBManager24QueryUpdateChannelOccNumEP27Packet_User_Count_Statistic+0x1a1>
-mov    -0x10(%ebp),%eax
+jmp    <T> <_ZN10CDBManager24QueryUpdateChannelOccNumEP27Packet_User_Count_Statistic+0x1b0>
+mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%ecx
 mov    -0xc(%ebp),%eax
 lea    0x1(%eax),%ebx
-mov    0xc(%ebp),%eax
-mov    0xa(%eax),%edx
-mov    -0xc(%ebp),%esi
-mov    0xc(%ebp),%eax
-add    $0x8,%esi
-movzwl 0x2(%eax,%esi,2),%eax
+mov    -0x10(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%edx
+mov    -0xc(%ebp),%eax
+add    $0x9,%eax
+add    %eax,%eax
+add    -0x10(%ebp),%eax
+movzwl (%eax),%eax
 cwtl
 mov    %ebx,0x14(%esp)
 mov    %edx,0x10(%esp)
 mov    %eax,0xc(%esp)
 movl   $"upDate channel_occ_info set occ_num=%d where gc_no=%d and age=%d",0x8(%esp)
 movl   $0x4f29,0x4(%esp)
-mov    -0x10(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   *%ecx
-mov    -0x10(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4f29,0x4(%esp)
-mov    -0x10(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager24QueryUpdateChannelOccNumEP27Packet_User_Count_Statistic+0x19d>
-mov    -0xc(%ebp),%edx
-mov    0xc(%ebp),%eax
-add    $0x8,%edx
-movzwl 0x2(%eax,%edx,2),%eax
-movswl %ax,%esi
-mov    0xc(%ebp),%eax
-mov    0xa(%eax),%ebx
+je     <T> <_ZN10CDBManager24QueryUpdateChannelOccNumEP27Packet_User_Count_Statistic+0x1ac>
 movl   $0x27e4,0x8(%esp)
 movl   $&_ZZN10CDBManager24QueryUpdateChannelOccNumEP27Packet_User_Count_StatisticE12__FUNCTION__,0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    -0x10(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%edx
+mov    -0xc(%ebp),%eax
+add    $0x9,%eax
+add    %eax,%eax
+add    -0x10(%ebp),%eax
+movzwl (%eax),%eax
+cwtl
+mov    %edx,0x10(%esp)
+mov    %eax,0xc(%esp)
 movl   $"upDate channel_occ_info Error : channel_no(%d), user_count(%d)",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 addl   $0x1,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
-cmp    $0x63,%eax
-setbe  %al
+cmpl   $0x63,-0xc(%ebp)
+setle  %al
 test   %al,%al
-jne    <T> <_ZN10CDBManager24QueryUpdateChannelOccNumEP27Packet_User_Count_Statistic+0xde>
+jne    <T> <_ZN10CDBManager24QueryUpdateChannelOccNumEP27Packet_User_Count_Statistic+0xeb>
 mov    $0x1,%eax
-add    $0x40,%esp
+add    $0x44,%esp
 pop    %ebx
-pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::QueryUpdateChannelOccNum(Packet_User_Count_Statistic*) */

undefined4 __thiscall
CDBManager::_ZN10CDBManager24QueryUpdateChannelOccNumEP27Packet_User_Count_Statistic
          (CDBManager *this,Packet_User_Count_Statistic *param_1)

{
  short sVar1;
  undefined4 uVar2;
  char cVar3;
  undefined4 uVar4;
  CMyFileLog local_24 [8];
  CMyFileLog local_1c [8];
  int *local_14;
  uint local_10;
  
  if (param_1 == (Packet_User_Count_Statistic *)0x0) {
    uVar4 = 0;
  }
  else {
    local_14 = *(int **)(this + 8);
    if (local_14 == (int *)0x0) {
      uVar4 = 0;
    }
    else {
      (**(code **)(*local_14 + 0x1c))
                (local_14,0x4eed,"upDate game_channel set gc_now=%d,gc_up_time=now() where gc_no=%d"
                 ,*(undefined4 *)(param_1 + 0xe),*(undefined4 *)(param_1 + 10));
      cVar3 = (**(code **)(*local_14 + 0x20))(local_14,0x4eed);
      if (cVar3 != '\x01') {
        uVar4 = *(undefined4 *)(param_1 + 0xe);
        uVar2 = *(undefined4 *)(param_1 + 10);
        CMyFileLog::CMyFileLog(local_24,"QueryUpdateChannelOccNum",0x27dc);
        CMyFileLog::operator()
                  (local_24,"./log/DBQueryErr",
                   "upDate game_channel Error : channel_no(%d), user_count(%d)",uVar2,uVar4);
      }
      for (local_10 = 0; local_10 < 100; local_10 = local_10 + 1) {
        (**(code **)(*local_14 + 0x1c))
                  (local_14,0x4f29,
                   "upDate channel_occ_info set occ_num=%d where gc_no=%d and age=%d",
                   (int)*(short *)(param_1 + (local_10 + 8) * 2 + 2),*(undefined4 *)(param_1 + 10),
                   local_10 + 1);
        cVar3 = (**(code **)(*local_14 + 0x20))(local_14,0x4f29);
        if (cVar3 != '\x01') {
          sVar1 = *(short *)(param_1 + (local_10 + 8) * 2 + 2);
          uVar4 = *(undefined4 *)(param_1 + 10);
          CMyFileLog::CMyFileLog(local_1c,"QueryUpdateChannelOccNum",0x27e4);
          CMyFileLog::operator()
                    (local_1c,"./log/DBQueryErr",
                     "upDate channel_occ_info Error : channel_no(%d), user_count(%d)",uVar4,
                     (int)sVar1);
        }
      }
      uVar4 = 1;
    }
  }
  return uVar4;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DBManager.cpp](source/DNFServer/GameServer/DBMW/DBManager.cpp)（约第 1059 行）：

```cpp
bool CDBManager::QueryUpdateChannelOccNum(Packet_User_Count_Statistic* packet)
{
    if (!packet)
        return 0;
    CDBHandle* h = m_handles[2];    // game db
    if (!h)
        return 0;
    char* p = (char*)packet;
    h->set_query(0x4eed,
                 "upDate game_channel set gc_now=%d,gc_up_time=now() where gc_no=%d",
                 *(int*)(p + 0xe), *(int*)(p + 0xa));
    if (!h->exec(0x4eed))
    {
        CMyFileLog log(__FUNCTION__, 0x27dc);
        log("./log/DBQueryErr",
            "upDate game_channel Error : channel_no(%d), user_count(%d)",
            *(int*)(p + 0xe), *(int*)(p + 0xa));
    }
    for (int i = 0; i <= 0x63; i++)
    {
        h->set_query(0x4f29,
                     "upDate channel_occ_info set occ_num=%d where gc_no=%d and age=%d",
                     *(signed short*)(p + 0x12 + i * 2),
                     *(int*)(p + 0xa), i + 1);
        if (!h->exec(0x4f29))
        {
            CMyFileLog log(__FUNCTION__, 0x27e4);
            log("./log/DBQueryErr",
                "upDate channel_occ_info Error : channel_no(%d), user_count(%d)",
                *(signed short*)(p + 0x12 + i * 2), *(int*)(p + 0xa));
        }
    }
    return 1;
}
```

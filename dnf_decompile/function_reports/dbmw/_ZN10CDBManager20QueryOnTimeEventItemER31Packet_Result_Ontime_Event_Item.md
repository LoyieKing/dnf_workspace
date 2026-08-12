# _ZN10CDBManager20QueryOnTimeEventItemER31Packet_Result_Ontime_Event_Item

`CDBManager::QueryOnTimeEventItem(Packet_Result_Ontime_Event_Item&)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x8085b3c` | `0x158` | `0x8062df8` | `0x15a` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,106 +1,107 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 mov    0x8(%ebp),%eax
 mov    0x34(%eax),%eax
 mov    %eax,-0xc(%ebp)
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
 movl   $"seLect idx, cnt from event_ontime_item",0x8(%esp)
 movl   $0x4f18,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN10CDBManager20QueryOnTimeEventItemER31Packet_Result_Ontime_Event_Item+0x78>
 movl   $0x24b1,0x8(%esp)
 movl   $&_ZZN10CDBManager20QueryOnTimeEventItemER31Packet_Result_Ontime_Event_ItemE12__FUNCTION__,0x4(%esp)
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"set_query(seLect_from_event_ontime_item) Query Error",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager20QueryOnTimeEventItemER31Packet_Result_Ontime_Event_Item+0x156>
+jmp    <T> <_ZN10CDBManager20QueryOnTimeEventItemER31Packet_Result_Ontime_Event_Item+0x158>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4f18,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
 jne    <T> <_ZN10CDBManager20QueryOnTimeEventItemER31Packet_Result_Ontime_Event_Item+0xb2>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x24,%eax
 mov    (%eax),%edx
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN10CDBManager20QueryOnTimeEventItemER31Packet_Result_Ontime_Event_Item+0xb9>
 mov    $0x1,%eax
 jmp    <T> <_ZN10CDBManager20QueryOnTimeEventItemER31Packet_Result_Ontime_Event_Item+0xbe>
 mov    $0x0,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager20QueryOnTimeEventItemER31Packet_Result_Ontime_Event_Item+0xed>
+je     <T> <_ZN10CDBManager20QueryOnTimeEventItemER31Packet_Result_Ontime_Event_Item+0xef>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x6c,%eax
 mov    (%eax),%edx
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 test   %eax,%eax
 sete   %al
 test   %al,%al
-je     <T> <_ZN10CDBManager20QueryOnTimeEventItemER31Packet_Result_Ontime_Event_Item+0xe6>
+je     <T> <_ZN10CDBManager20QueryOnTimeEventItemER31Packet_Result_Ontime_Event_Item+0xe8>
 mov    0xc(%ebp),%eax
-movw   $0x2,0x12(%eax)
+add    $0x12,%eax
+movw   $0x2,(%eax)
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager20QueryOnTimeEventItemER31Packet_Result_Ontime_Event_Item+0x156>
+jmp    <T> <_ZN10CDBManager20QueryOnTimeEventItemER31Packet_Result_Ontime_Event_Item+0x158>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x38,%eax
 mov    (%eax),%edx
 mov    0xc(%ebp),%eax
 add    $0xa,%eax
 mov    %eax,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager20QueryOnTimeEventItemER31Packet_Result_Ontime_Event_Item+0x11f>
+je     <T> <_ZN10CDBManager20QueryOnTimeEventItemER31Packet_Result_Ontime_Event_Item+0x121>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager20QueryOnTimeEventItemER31Packet_Result_Ontime_Event_Item+0x156>
+jmp    <T> <_ZN10CDBManager20QueryOnTimeEventItemER31Packet_Result_Ontime_Event_Item+0x158>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x38,%eax
 mov    (%eax),%edx
 mov    0xc(%ebp),%eax
 add    $0xe,%eax
 mov    %eax,0x8(%esp)
 movl   $0x1,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager20QueryOnTimeEventItemER31Packet_Result_Ontime_Event_Item+0x151>
+je     <T> <_ZN10CDBManager20QueryOnTimeEventItemER31Packet_Result_Ontime_Event_Item+0x153>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager20QueryOnTimeEventItemER31Packet_Result_Ontime_Event_Item+0x156>
+jmp    <T> <_ZN10CDBManager20QueryOnTimeEventItemER31Packet_Result_Ontime_Event_Item+0x158>
 mov    $0x1,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::QueryOnTimeEventItem(Packet_Result_Ontime_Event_Item&) */

undefined4 __thiscall
CDBManager::_ZN10CDBManager20QueryOnTimeEventItemER31Packet_Result_Ontime_Event_Item
          (CDBManager *this,Packet_Result_Ontime_Event_Item *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  CMyFileLog local_18 [8];
  int *local_10;
  
  local_10 = *(int **)(this + 0x34);
  cVar2 = (**(code **)(*local_10 + 0x1c))(local_10,0x4f18,"seLect idx, cnt from event_ontime_item");
  if (cVar2 == '\x01') {
    cVar2 = (**(code **)(*local_10 + 0x20))(local_10,0x4f18);
    if ((cVar2 == '\x01') && (cVar2 = (**(code **)(*local_10 + 0x24))(local_10), cVar2 == '\x01')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      iVar3 = (**(code **)(*local_10 + 0x6c))(local_10);
      if (iVar3 == 0) {
        *(undefined2 *)(param_1 + 0x12) = 2;
      }
      uVar4 = 0;
    }
    else {
      cVar2 = (**(code **)(*local_10 + 0x38))(local_10,0,param_1 + 10);
      if (cVar2 == '\x01') {
        cVar2 = (**(code **)(*local_10 + 0x38))(local_10,1,param_1 + 0xe);
        if (cVar2 == '\x01') {
          uVar4 = 1;
        }
        else {
          uVar4 = 0;
        }
      }
      else {
        uVar4 = 0;
      }
    }
    return uVar4;
  }
  CMyFileLog::CMyFileLog(local_18,"QueryOnTimeEventItem",0x24b1);
  CMyFileLog::operator()
            (local_18,"./log/DBQueryErr","set_query(seLect_from_event_ontime_item) Query Error");
  return 0;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DBManager.cpp](source/DNFServer/GameServer/DBMW/DBManager.cpp)（约第 5924 行）：

```cpp
char CDBManager::QueryOnTimeEventItem(Packet_Result_Ontime_Event_Item& reply)
{
    CDBHandle* h = m_handles[0xd];    // se_event db
    if (!h->set_query(0x4f18, "seLect idx, cnt from event_ontime_item"))
    {
        CMyFileLog log(__FUNCTION__, 0x24b1);
        log("./log/DBQueryErr",
            "set_query(seLect_from_event_ontime_item) Query Error");
        return 0;
    }
    if (!h->exec(0x4f18) || !h->fetch())
    {
        if (h->get_n_rows() == 0)
            reply.m_field12 = 2;
        return 0;
    }
    if (!h->get_uint(0, *(unsigned int*)((char*)&reply + 0xa)))
        return 0;
    if (!h->get_uint(1, *(unsigned int*)((char*)&reply + 0xe)))
        return 0;
    return 1;
}
```

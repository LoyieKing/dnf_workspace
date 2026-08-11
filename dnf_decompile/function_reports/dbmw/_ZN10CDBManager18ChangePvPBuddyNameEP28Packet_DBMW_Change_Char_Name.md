# _ZN10CDBManager18ChangePvPBuddyNameEP28Packet_DBMW_Change_Char_Name

`CDBManager::ChangePvPBuddyName(Packet_DBMW_Change_Char_Name*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x807b276` | `0xe3` | `0x805c4a6` | `0xed` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,68 +1,69 @@
 push   %ebp
 mov    %esp,%ebp
-push   %edi
-push   %esi
 push   %ebx
-sub    $0x3c,%esp
+sub    $0x34,%esp
 mov    0x8(%ebp),%eax
 mov    0x24(%eax),%eax
-mov    %eax,-0x1c(%ebp)
-mov    -0x1c(%ebp),%eax
+mov    %eax,-0xc(%ebp)
+mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%ecx
 mov    0xc(%ebp),%eax
 mov    0xb(%eax),%edx
 mov    0xc(%ebp),%eax
 movzbl 0xa(%eax),%eax
 movsbl %al,%eax
 mov    0xc(%ebp),%ebx
 add    $0xf,%ebx
 mov    %edx,0x14(%esp)
 mov    %eax,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"upDate pvp_buddy set buddy_charac_name='%s' where buddy_server_id=%d and buddy_charac_no=%d",0x8(%esp)
 movl   $0x4efa,0x4(%esp)
-mov    -0x1c(%ebp),%eax
+mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%ecx
-mov    -0x1c(%ebp),%eax
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager18ChangePvPBuddyNameEP28Packet_DBMW_Change_Char_Name+0xba>
+movl   $0x13b0,0x8(%esp)
+movl   $&_ZZN10CDBManager18ChangePvPBuddyNameEP28Packet_DBMW_Change_Char_NameE12__FUNCTION__,0x4(%esp)
+lea    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    0xc(%ebp),%eax
+mov    0xb(%eax),%edx
+mov    0xc(%ebp),%eax
+movzbl 0xa(%eax),%eax
+movsbl %al,%eax
+mov    0xc(%ebp),%ecx
+add    $0xf,%ecx
+mov    %edx,0x14(%esp)
+mov    %eax,0x10(%esp)
+mov    %ecx,0xc(%esp)
+movl   $"CDBManager::ChangeCharacName() : upDate pvp_buddy set charac_name='%s' where server_id=%d and charac_no=%d",0x8(%esp)
+movl   $"./log/DBQueryErr",0x4(%esp)
+lea    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager18ChangePvPBuddyNameEP28Packet_DBMW_Change_Char_Name+0xe7>
+mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4efa,0x4(%esp)
-mov    -0x1c(%ebp),%eax
+mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager18ChangePvPBuddyNameEP28Packet_DBMW_Change_Char_Name+0xd6>
-mov    0xc(%ebp),%eax
-mov    0xb(%eax),%esi
-mov    0xc(%ebp),%eax
-movzbl 0xa(%eax),%eax
-movsbl %al,%ebx
-mov    0xc(%ebp),%eax
-lea    0xf(%eax),%edi
-movl   $0x13b0,0x8(%esp)
-movl   $&_ZZN10CDBManager18ChangePvPBuddyNameEP28Packet_DBMW_Change_Char_NameE12__FUNCTION__,0x4(%esp)
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x14(%esp)
-mov    %ebx,0x10(%esp)
-mov    %edi,0xc(%esp)
-movl   $"CDBManager::ChangeCharacName() : upDate pvp_buddy set charac_name='%s' where server_id=%d and charac_no=%d",0x8(%esp)
-movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+je     <T> <_ZN10CDBManager18ChangePvPBuddyNameEP28Packet_DBMW_Change_Char_Name+0xe2>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager18ChangePvPBuddyNameEP28Packet_DBMW_Change_Char_Name+0xdb>
+jmp    <T> <_ZN10CDBManager18ChangePvPBuddyNameEP28Packet_DBMW_Change_Char_Name+0xe7>
 mov    $0x1,%eax
-add    $0x3c,%esp
+add    $0x34,%esp
 pop    %ebx
-pop    %esi
-pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::ChangePvPBuddyName(Packet_DBMW_Change_Char_Name*) */

bool __thiscall
CDBManager::_ZN10CDBManager18ChangePvPBuddyNameEP28Packet_DBMW_Change_Char_Name
          (CDBManager *this,Packet_DBMW_Change_Char_Name *param_1)

{
  Packet_DBMW_Change_Char_Name PVar1;
  undefined4 uVar2;
  char cVar3;
  CMyFileLog local_28 [8];
  int *local_20;
  
  local_20 = *(int **)(this + 0x24);
  (**(code **)(*local_20 + 0x1c))
            (local_20,0x4efa,
             "upDate pvp_buddy set buddy_charac_name=\'%s\' where buddy_server_id=%d and buddy_charac_no=%d"
             ,param_1 + 0xf,(int)(char)param_1[10],*(undefined4 *)(param_1 + 0xb));
  cVar3 = (**(code **)(*local_20 + 0x20))(local_20,0x4efa);
  if (cVar3 != '\x01') {
    uVar2 = *(undefined4 *)(param_1 + 0xb);
    PVar1 = param_1[10];
    CMyFileLog::CMyFileLog(local_28,"ChangePvPBuddyName",0x13b0);
    CMyFileLog::operator()
              (local_28,"./log/DBQueryErr",
               "CDBManager::ChangeCharacName() : upDate pvp_buddy set charac_name=\'%s\' where server_id=%d and charac_no=%d"
               ,param_1 + 0xf,(int)(char)PVar1,uVar2);
  }
  return cVar3 == '\x01';
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DBManager.cpp](source/DNFServer/GameServer/DBMW/DBManager.cpp)（约第 4177 行）：

```cpp
char CDBManager::ChangePvPBuddyName(Packet_DBMW_Change_Char_Name* packet)
{
    CDBHandle* h = m_handles[9];    // +0x24
    if (!h->set_query(0x4efa,
                      "upDate pvp_buddy set buddy_charac_name='%s' where buddy_server_id=%d and buddy_charac_no=%d",
                      packet->m_name, packet->m_serverId, packet->m_characNo))
    {
        CMyFileLog log(__FUNCTION__, 0x13b0);
        log("./log/DBQueryErr",
            "CDBManager::ChangeCharacName() : upDate pvp_buddy set charac_name='%s' where server_id=%d and charac_no=%d",
            packet->m_name, packet->m_serverId, packet->m_characNo);
        return 0;
    }
    if (!h->exec(0x4efa))
        return 0;
    return 1;
}
```

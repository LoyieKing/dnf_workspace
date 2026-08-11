# _ZN10CDBManager24OnManagerEventTriggerAckEP32Packet_Manager_Event_Trigger_Ack

`CDBManager::OnManagerEventTriggerAck(Packet_Manager_Event_Trigger_Ack*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x80841d0` | `0x143` | `0x80527ba` | `0x150` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,87 +1,92 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x48,%esp
-mov    0xc(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    %eax,-0x18(%ebp)
-mov    0xc(%ebp),%eax
-mov    0xe(%eax),%eax
+mov    0x8(%ebp),%eax
+mov    0x4(%eax),%eax
 mov    %eax,-0x14(%ebp)
 mov    0xc(%ebp),%eax
-mov    0x12(%eax),%eax
 mov    %eax,-0x10(%ebp)
-mov    0x8(%ebp),%eax
-mov    0x4(%eax),%eax
+mov    -0x10(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%eax
 mov    %eax,-0xc(%ebp)
-cmpl   $0x2,-0x14(%ebp)
-jne    <T> <_ZN10CDBManager24OnManagerEventTriggerAckEP32Packet_Manager_Event_Trigger_Ack+0x69>
-mov    -0xc(%ebp),%eax
+cmpl   $0x2,-0xc(%ebp)
+jne    <T> <_ZN10CDBManager24OnManagerEventTriggerAckEP32Packet_Manager_Event_Trigger_Ack+0x6c>
+mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
+mov    (%eax),%ecx
+mov    -0x10(%ebp),%eax
+add    $0x12,%eax
 mov    (%eax),%edx
 mov    -0x10(%ebp),%eax
-mov    %eax,0x14(%esp)
-mov    -0x18(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%eax
+mov    %edx,0x14(%esp)
 mov    %eax,0x10(%esp)
-mov    -0x14(%ebp),%eax
+mov    -0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"upDate dnf_event_log set event_flag=%d where event_type=%d and server_id=%d and ( end_time > unix_timestamp(now()) or end_time=0)",0x8(%esp)
 movl   $0x4eff,0x4(%esp)
-mov    -0xc(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
-call   *%edx
-jmp    <T> <_ZN10CDBManager24OnManagerEventTriggerAckEP32Packet_Manager_Event_Trigger_Ack+0xe5>
-cmpl   $0x4,-0x14(%ebp)
-jne    <T> <_ZN10CDBManager24OnManagerEventTriggerAckEP32Packet_Manager_Event_Trigger_Ack+0xa8>
-mov    -0xc(%ebp),%eax
+call   *%ecx
+jmp    <T> <_ZN10CDBManager24OnManagerEventTriggerAckEP32Packet_Manager_Event_Trigger_Ack+0xf2>
+cmpl   $0x4,-0xc(%ebp)
+jne    <T> <_ZN10CDBManager24OnManagerEventTriggerAckEP32Packet_Manager_Event_Trigger_Ack+0xb5>
+mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
+mov    (%eax),%ecx
+mov    -0x10(%ebp),%eax
+add    $0x12,%eax
 mov    (%eax),%edx
 mov    -0x10(%ebp),%eax
-mov    %eax,0x14(%esp)
-mov    -0x18(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%eax
+mov    %edx,0x14(%esp)
 mov    %eax,0x10(%esp)
-mov    -0x14(%ebp),%eax
+mov    -0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"upDate dnf_event_log set event_flag=%d where event_type=%d and server_id=%d and end_time <>0",0x8(%esp)
 movl   $0x4eff,0x4(%esp)
-mov    -0xc(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
-call   *%edx
-jmp    <T> <_ZN10CDBManager24OnManagerEventTriggerAckEP32Packet_Manager_Event_Trigger_Ack+0xe5>
+call   *%ecx
+jmp    <T> <_ZN10CDBManager24OnManagerEventTriggerAckEP32Packet_Manager_Event_Trigger_Ack+0xf2>
 movl   $0x2211,0x8(%esp)
 movl   $&_ZZN10CDBManager24OnManagerEventTriggerAckEP32Packet_Manager_Event_Trigger_AckE12__FUNCTION__,0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    -0x14(%ebp),%eax
+mov    -0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"CDBManager::OnManagerEventTriggerAck() Unvalid Kind(%d)",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    -0xc(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4eff,0x4(%esp)
-mov    -0xc(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager24OnManagerEventTriggerAckEP32Packet_Manager_Event_Trigger_Ack+0x13c>
+je     <T> <_ZN10CDBManager24OnManagerEventTriggerAckEP32Packet_Manager_Event_Trigger_Ack+0x149>
 movl   $0x2215,0x8(%esp)
 movl   $&_ZZN10CDBManager24OnManagerEventTriggerAckEP32Packet_Manager_Event_Trigger_AckE12__FUNCTION__,0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CDBManager::OnManagerEventTriggerAck() upDate Error",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x1,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::OnManagerEventTriggerAck(Packet_Manager_Event_Trigger_Ack*) */

undefined4 __thiscall
CDBManager::_ZN10CDBManager24OnManagerEventTriggerAckEP32Packet_Manager_Event_Trigger_Ack
          (CDBManager *this,Packet_Manager_Event_Trigger_Ack *param_1)

{
  char cVar1;
  int iVar2;
  CMyFileLog local_2c [8];
  CMyFileLog local_24 [8];
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  int *local_10;
  
  local_1c = *(undefined4 *)(param_1 + 10);
  iVar2 = *(int *)(param_1 + 0xe);
  local_14 = *(undefined4 *)(param_1 + 0x12);
  local_10 = *(int **)(this + 4);
  local_18 = iVar2;
  if (iVar2 == 2) {
    (**(code **)(*local_10 + 0x1c))
              (local_10,0x4eff,
               "upDate dnf_event_log set event_flag=%d where event_type=%d and server_id=%d and ( end_time > unix_timestamp(now()) or end_time=0)"
               ,2,local_1c,local_14);
  }
  else if (iVar2 == 4) {
    (**(code **)(*local_10 + 0x1c))
              (local_10,0x4eff,
               "upDate dnf_event_log set event_flag=%d where event_type=%d and server_id=%d and end_time <>0"
               ,4,local_1c,local_14);
  }
  else {
    CMyFileLog::CMyFileLog(local_2c,"OnManagerEventTriggerAck",0x2211);
    iVar2 = local_18;
    CMyFileLog::operator()
              (local_2c,"./log/DBQueryErr","CDBManager::OnManagerEventTriggerAck() Unvalid Kind(%d)"
               ,local_18);
  }
  cVar1 = (**(code **)(*local_10 + 0x20))(local_10,0x4eff);
  if (cVar1 != '\x01') {
    CMyFileLog::CMyFileLog(local_24,"OnManagerEventTriggerAck",0x2215);
    CMyFileLog::operator()
              (local_24,"./log/DBQueryErr","CDBManager::OnManagerEventTriggerAck() upDate Error",
               iVar2);
  }
  return 1;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBMWCommon.h, source/DNFServer/GameServer/DBMW/DBMWTypes.h, source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBManager.h, source/DNFServer/GameServer/DBMW/DNFAppConfig.h, source/DNFServer/GameServer/DBMW/DNFAppStartInit.h, source/DNFServer/GameServer/DBMW/DNFAppStopInit.h 等 293 个文件*

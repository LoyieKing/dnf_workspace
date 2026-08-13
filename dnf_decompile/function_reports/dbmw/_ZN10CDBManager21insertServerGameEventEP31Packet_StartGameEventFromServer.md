# _ZN10CDBManager21insertServerGameEventEP31Packet_StartGameEventFromServer

`CDBManager::insertServerGameEvent(Packet_StartGameEventFromServer*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x8087670` | `0x14f` | `0x804ff2a` | `0x14b` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,97 +1,98 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x4c,%esp
-movb   $0x0,-0x1d(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
+mov    %eax,-0x20(%ebp)
+cmpl   $0x0,-0x20(%ebp)
+jne    <T> <_ZN10CDBManager21insertServerGameEventEP31Packet_StartGameEventFromServer+0x22>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager21insertServerGameEventEP31Packet_StartGameEventFromServer+0x143>
+mov    0xc(%ebp),%eax
 mov    %eax,-0x1c(%ebp)
-cmpl   $0x0,-0x1c(%ebp)
-jne    <T> <_ZN10CDBManager21insertServerGameEventEP31Packet_StartGameEventFromServer+0x26>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager21insertServerGameEventEP31Packet_StartGameEventFromServer+0x147>
-mov    -0x1c(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edi
-mov    0xc(%ebp),%eax
-mov    0x12(%eax),%esi
-mov    0xc(%ebp),%eax
-movzwl 0x18(%eax),%eax
+mov    -0x1c(%ebp),%eax
+add    $0x12,%eax
+mov    (%eax),%esi
+mov    -0x1c(%ebp),%eax
+add    $0x18,%eax
+movzwl (%eax),%eax
 movzwl %ax,%ebx
-mov    0xc(%ebp),%eax
-movzwl 0x16(%eax),%eax
+mov    -0x1c(%ebp),%eax
+add    $0x16,%eax
+movzwl (%eax),%eax
 movzwl %ax,%ecx
-mov    0xc(%ebp),%eax
-mov    0xe(%eax),%edx
-mov    0xc(%ebp),%eax
-mov    0xa(%eax),%eax
+mov    -0x1c(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%edx
+mov    -0x1c(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%eax
 mov    %esi,0x1c(%esp)
 mov    %ebx,0x18(%esp)
 mov    %ecx,0x14(%esp)
 mov    %edx,0x10(%esp)
 mov    %eax,0xc(%esp)
 movl   $" inSert into dnf_event_log (occ_time, event_type, event_flag, parameter1, parameter2,  server_id, start_time, end_time, m_id, expl, etc)  values (unix_timestamp(now()), %d, %d, %d, %d, %d, unix_timestamp(now()), 0, 1, 'event from monitor server', '6th birthday') ",0x8(%esp)
 movl   $0x4f5d,0x4(%esp)
-mov    -0x1c(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edi
-mov    %al,-0x1d(%ebp)
-movzbl -0x1d(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager21insertServerGameEventEP31Packet_StartGameEventFromServer+0xdd>
-mov    -0x1c(%ebp),%eax
+je     <T> <_ZN10CDBManager21insertServerGameEventEP31Packet_StartGameEventFromServer+0xe0>
+movl   $0x2e96,0x8(%esp)
+movl   $&_ZZN10CDBManager21insertServerGameEventEP31Packet_StartGameEventFromServerE12__FUNCTION__,0x4(%esp)
+lea    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x20(%ebp),%eax
 mov    (%eax),%eax
 add    $0x7c,%eax
 mov    (%eax),%edx
-mov    -0x1c(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %eax,%ebx
-movl   $0x2e96,0x8(%esp)
+mov    %eax,0x8(%esp)
+movl   $"./log/DBQueryErr",0x4(%esp)
+lea    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager21insertServerGameEventEP31Packet_StartGameEventFromServer+0x143>
+mov    -0x20(%ebp),%eax
+mov    (%eax),%eax
+add    $0x20,%eax
+mov    (%eax),%edx
+movl   $0x4f5d,0x4(%esp)
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager21insertServerGameEventEP31Packet_StartGameEventFromServer+0x13e>
+movl   $0x2e9d,0x8(%esp)
 movl   $&_ZZN10CDBManager21insertServerGameEventEP31Packet_StartGameEventFromServerE12__FUNCTION__,0x4(%esp)
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0x8(%esp)
+movl   $"insertServerGameEvent Query(exec) Error",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager21insertServerGameEventEP31Packet_StartGameEventFromServer+0x147>
-mov    -0x1c(%ebp),%eax
-mov    (%eax),%eax
-add    $0x20,%eax
-mov    (%eax),%edx
-movl   $0x4f5d,0x4(%esp)
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x1d(%ebp)
-movzbl -0x1d(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager21insertServerGameEventEP31Packet_StartGameEventFromServer+0x142>
-movl   $0x2e9d,0x8(%esp)
-movl   $&_ZZN10CDBManager21insertServerGameEventEP31Packet_StartGameEventFromServerE12__FUNCTION__,0x4(%esp)
-lea    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $"insertServerGameEvent Query(exec) Error",0x8(%esp)
-movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager21insertServerGameEventEP31Packet_StartGameEventFromServer+0x147>
+jmp    <T> <_ZN10CDBManager21insertServerGameEventEP31Packet_StartGameEventFromServer+0x143>
 mov    $0x1,%eax
 add    $0x4c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::insertServerGameEvent(Packet_StartGameEventFromServer*) */

undefined4 __thiscall
CDBManager::_ZN10CDBManager21insertServerGameEventEP31Packet_StartGameEventFromServer
          (CDBManager *this,Packet_StartGameEventFromServer *param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  CMyFileLog local_34 [8];
  CMyFileLog local_2c [11];
  char local_21;
  int *local_20;
  
  local_21 = 0;
  local_20 = *(int **)(this + 4);
  if (local_20 == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    local_21 = (**(code **)(*local_20 + 0x1c))
                         (local_20,0x4f5d,
                          " inSert into dnf_event_log (occ_time, event_type, event_flag, parameter1, parameter2,  server_id, start_time, end_time, m_id, expl, etc)  values (unix_timestamp(now()), %d, %d, %d, %d, %d, unix_timestamp(now()), 0, 1, \'event from monitor server\', \'6th birthday\') "
                          ,*(undefined4 *)(param_1 + 10),*(undefined4 *)(param_1 + 0xe),
                          *(undefined2 *)(param_1 + 0x16),*(undefined2 *)(param_1 + 0x18),
                          *(undefined4 *)(param_1 + 0x12));
    if (local_21 == '\x01') {
      local_21 = (**(code **)(*local_20 + 0x20))(local_20,0x4f5d);
      if (local_21 == '\x01') {
        uVar1 = 1;
      }
      else {
        CMyFileLog::CMyFileLog(local_2c,"insertServerGameEvent",0x2e9d);
        CMyFileLog::operator()
                  (local_2c,"./log/DBQueryErr","insertServerGameEvent Query(exec) Error");
        uVar1 = 0;
      }
    }
    else {
      pcVar2 = (char *)(**(code **)(*local_20 + 0x7c))(local_20);
      CMyFileLog::CMyFileLog(local_34,"insertServerGameEvent",0x2e96);
      CMyFileLog::operator()(local_34,"./log/DBQueryErr",pcVar2);
      uVar1 = 0;
    }
  }
  return uVar1;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBMWCommon.h, source/DNFServer/GameServer/DBMW/DBMWTypes.h, source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBManager.h, source/DNFServer/GameServer/DBMW/DNFAppConfig.h, source/DNFServer/GameServer/DBMW/DNFAppStartInit.h, source/DNFServer/GameServer/DBMW/DNFAppStopInit.h 等 293 个文件*

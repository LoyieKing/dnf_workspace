# _ZN10CDBManager21updateServerGameEventEP30Packet_StopGameEventFromServer

`CDBManager::updateServerGameEvent(Packet_StopGameEventFromServer*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x80877c0` | `0x12f` | `0x80500ac` | `0x127` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,85 +1,84 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x44,%esp
-movb   $0x0,-0xd(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
+mov    %eax,-0x10(%ebp)
+cmpl   $0x0,-0x10(%ebp)
+jne    <T> <_ZN10CDBManager21updateServerGameEventEP30Packet_StopGameEventFromServer+0x20>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager21updateServerGameEventEP30Packet_StopGameEventFromServer+0x121>
+mov    0xc(%ebp),%eax
 mov    %eax,-0xc(%ebp)
-cmpl   $0x0,-0xc(%ebp)
-jne    <T> <_ZN10CDBManager21updateServerGameEventEP30Packet_StopGameEventFromServer+0x24>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager21updateServerGameEventEP30Packet_StopGameEventFromServer+0x129>
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%ebx
-mov    0xc(%ebp),%eax
-mov    0xa(%eax),%ecx
-mov    0xc(%ebp),%eax
-mov    0xe(%eax),%edx
-mov    0xc(%ebp),%eax
-mov    0x12(%eax),%eax
+mov    -0xc(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%ecx
+mov    -0xc(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%edx
+mov    -0xc(%ebp),%eax
+add    $0x12,%eax
+mov    (%eax),%eax
 mov    %ecx,0x14(%esp)
 mov    %edx,0x10(%esp)
 mov    %eax,0xc(%esp)
 movl   $" upDate dnf_event_log set end_time = %u  where server_id = %d and event_type = %d and end_time = 0 ",0x8(%esp)
 movl   $0x4f5e,0x4(%esp)
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%ebx
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager21updateServerGameEventEP30Packet_StopGameEventFromServer+0xbf>
-mov    -0xc(%ebp),%eax
+je     <T> <_ZN10CDBManager21updateServerGameEventEP30Packet_StopGameEventFromServer+0xbe>
+movl   $0x2eb2,0x8(%esp)
+movl   $&_ZZN10CDBManager21updateServerGameEventEP30Packet_StopGameEventFromServerE12__FUNCTION__,0x4(%esp)
+lea    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x7c,%eax
 mov    (%eax),%edx
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %eax,%ebx
-movl   $0x2eb2,0x8(%esp)
+mov    %eax,0x8(%esp)
+movl   $"./log/DBQueryErr",0x4(%esp)
+lea    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager21updateServerGameEventEP30Packet_StopGameEventFromServer+0x121>
+mov    -0x10(%ebp),%eax
+mov    (%eax),%eax
+add    $0x20,%eax
+mov    (%eax),%edx
+movl   $0x4f5e,0x4(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager21updateServerGameEventEP30Packet_StopGameEventFromServer+0x11c>
+movl   $0x2eb9,0x8(%esp)
 movl   $&_ZZN10CDBManager21updateServerGameEventEP30Packet_StopGameEventFromServerE12__FUNCTION__,0x4(%esp)
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0x8(%esp)
+movl   $"updateServerGameEvent Query(exec) Error",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager21updateServerGameEventEP30Packet_StopGameEventFromServer+0x129>
-mov    -0xc(%ebp),%eax
-mov    (%eax),%eax
-add    $0x20,%eax
-mov    (%eax),%edx
-movl   $0x4f5e,0x4(%esp)
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager21updateServerGameEventEP30Packet_StopGameEventFromServer+0x124>
-movl   $0x2eb9,0x8(%esp)
-movl   $&_ZZN10CDBManager21updateServerGameEventEP30Packet_StopGameEventFromServerE12__FUNCTION__,0x4(%esp)
-lea    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $"updateServerGameEvent Query(exec) Error",0x8(%esp)
-movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager21updateServerGameEventEP30Packet_StopGameEventFromServer+0x129>
+jmp    <T> <_ZN10CDBManager21updateServerGameEventEP30Packet_StopGameEventFromServer+0x121>
 mov    $0x1,%eax
 add    $0x44,%esp
 pop    %ebx
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::updateServerGameEvent(Packet_StopGameEventFromServer*) */

undefined4 __thiscall
CDBManager::_ZN10CDBManager21updateServerGameEventEP30Packet_StopGameEventFromServer
          (CDBManager *this,Packet_StopGameEventFromServer *param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  CMyFileLog local_24 [8];
  CMyFileLog local_1c [11];
  char local_11;
  int *local_10;
  
  local_11 = 0;
  local_10 = *(int **)(this + 4);
  if (local_10 == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    local_11 = (**(code **)(*local_10 + 0x1c))
                         (local_10,0x4f5e,
                          " upDate dnf_event_log set end_time = %u  where server_id = %d and event_type = %d and end_time = 0 "
                          ,*(undefined4 *)(param_1 + 0x12),*(undefined4 *)(param_1 + 0xe),
                          *(undefined4 *)(param_1 + 10));
    if (local_11 == '\x01') {
      local_11 = (**(code **)(*local_10 + 0x20))(local_10,0x4f5e);
      if (local_11 == '\x01') {
        uVar1 = 1;
      }
      else {
        CMyFileLog::CMyFileLog(local_1c,"updateServerGameEvent",0x2eb9);
        CMyFileLog::operator()
                  (local_1c,"./log/DBQueryErr","updateServerGameEvent Query(exec) Error");
        uVar1 = 0;
      }
    }
    else {
      pcVar2 = (char *)(**(code **)(*local_10 + 0x7c))(local_10);
      CMyFileLog::CMyFileLog(local_24,"updateServerGameEvent",0x2eb2);
      CMyFileLog::operator()(local_24,"./log/DBQueryErr",pcVar2);
      uVar1 = 0;
    }
  }
  return uVar1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DBManager.cpp](source/DNFServer/GameServer/DBMW/DBManager.cpp)（约第 850 行）：

```cpp
char CDBManager::updateServerGameEvent(Packet_StopGameEventFromServer* packet)
{
    CDBHandle* h = m_handles[1];    // account db
    if (!h)
        return 0;
    char* p = (char*)packet;
    if (!h->set_query(0x4f5e,
                      " upDate dnf_event_log set end_time = %u  where server_id = %d and event_type = %d and end_time = 0 ",
                      *(unsigned int*)(p + 0x12), *(int*)(p + 0xe),
                      *(int*)(p + 0xa)))
    {
        CMyFileLog log(__FUNCTION__, 0x2eb2);
        log("./log/DBQueryErr", h->get_quest_str());
        return 0;
    }
    if (!h->exec(0x4f5e))
    {
        CMyFileLog log(__FUNCTION__, 0x2eb9);
        log("./log/DBQueryErr", "updateServerGameEvent Query(exec) Error");
        return 0;
    }
    return 1;
}
```

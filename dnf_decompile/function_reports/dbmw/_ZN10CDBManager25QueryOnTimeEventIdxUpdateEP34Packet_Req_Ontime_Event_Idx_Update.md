# _ZN10CDBManager25QueryOnTimeEventIdxUpdateEP34Packet_Req_Ontime_Event_Idx_Update

`CDBManager::QueryOnTimeEventIdxUpdate(Packet_Req_Ontime_Event_Idx_Update*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x8085c94` | `0x1e0` | `0x8062b2a` | `0x1de` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,137 +1,137 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x44,%esp
 cmpl   $0x0,0xc(%ebp)
 jne    <T> <_ZN10CDBManager25QueryOnTimeEventIdxUpdateEP34Packet_Req_Ontime_Event_Idx_Update+0x17>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager25QueryOnTimeEventIdxUpdateEP34Packet_Req_Ontime_Event_Idx_Update+0x1da>
+jmp    <T> <_ZN10CDBManager25QueryOnTimeEventIdxUpdateEP34Packet_Req_Ontime_Event_Idx_Update+0x1d8>
 mov    0x8(%ebp),%eax
 mov    0x34(%eax),%eax
 mov    %eax,-0xc(%ebp)
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
 movl   $"seLect ifnull(max(no), 1) from event_1112_ontime_info",0x8(%esp)
 movl   $0x4f14,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN10CDBManager25QueryOnTimeEventIdxUpdateEP34Packet_Req_Ontime_Event_Idx_Update+0x89>
 movl   $0x24d8,0x8(%esp)
 movl   $&_ZZN10CDBManager25QueryOnTimeEventIdxUpdateEP34Packet_Req_Ontime_Event_Idx_UpdateE12__FUNCTION__,0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"set_query(seLect_from_event_ontime_idx) Query Error ",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager25QueryOnTimeEventIdxUpdateEP34Packet_Req_Ontime_Event_Idx_Update+0x1da>
+jmp    <T> <_ZN10CDBManager25QueryOnTimeEventIdxUpdateEP34Packet_Req_Ontime_Event_Idx_Update+0x1d8>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4f14,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-xor    $0x1,%eax
 test   %al,%al
-jne    <T> <_ZN10CDBManager25QueryOnTimeEventIdxUpdateEP34Packet_Req_Ontime_Event_Idx_Update+0xc3>
+je     <T> <_ZN10CDBManager25QueryOnTimeEventIdxUpdateEP34Packet_Req_Ontime_Event_Idx_Update+0xca>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x24,%eax
 mov    (%eax),%edx
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN10CDBManager25QueryOnTimeEventIdxUpdateEP34Packet_Req_Ontime_Event_Idx_Update+0xca>
-mov    $0x1,%eax
-jmp    <T> <_ZN10CDBManager25QueryOnTimeEventIdxUpdateEP34Packet_Req_Ontime_Event_Idx_Update+0xcf>
 mov    $0x0,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager25QueryOnTimeEventIdxUpdateEP34Packet_Req_Ontime_Event_Idx_Update+0xdd>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager25QueryOnTimeEventIdxUpdateEP34Packet_Req_Ontime_Event_Idx_Update+0x1da>
+jmp    <T> <_ZN10CDBManager25QueryOnTimeEventIdxUpdateEP34Packet_Req_Ontime_Event_Idx_Update+0x1d8>
+movl   $0x0,-0x10(%ebp)
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x38,%eax
 mov    (%eax),%edx
-lea    -0x20(%ebp),%eax
+lea    -0x10(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager25QueryOnTimeEventIdxUpdateEP34Packet_Req_Ontime_Event_Idx_Update+0x10f>
+je     <T> <_ZN10CDBManager25QueryOnTimeEventIdxUpdateEP34Packet_Req_Ontime_Event_Idx_Update+0x103>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager25QueryOnTimeEventIdxUpdateEP34Packet_Req_Ontime_Event_Idx_Update+0x1da>
+jmp    <T> <_ZN10CDBManager25QueryOnTimeEventIdxUpdateEP34Packet_Req_Ontime_Event_Idx_Update+0x1d8>
 mov    0xc(%ebp),%eax
-mov    0x12(%eax),%edx
-mov    -0x20(%ebp),%eax
+add    $0x12,%eax
+mov    (%eax),%edx
+mov    -0x10(%ebp),%eax
 cmp    %eax,%edx
-jbe    <T> <_ZN10CDBManager25QueryOnTimeEventIdxUpdateEP34Packet_Req_Ontime_Event_Idx_Update+0x1cc>
+jbe    <T> <_ZN10CDBManager25QueryOnTimeEventIdxUpdateEP34Packet_Req_Ontime_Event_Idx_Update+0x1c8>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%ebx
 mov    0xc(%ebp),%eax
-mov    0xe(%eax),%ecx
+add    $0xe,%eax
+mov    (%eax),%ecx
 mov    0xc(%ebp),%eax
-mov    0xa(%eax),%edx
+add    $0xa,%eax
+mov    (%eax),%edx
 mov    0xc(%ebp),%eax
-mov    0x12(%eax),%eax
+add    $0x12,%eax
+mov    (%eax),%eax
 mov    %ecx,0x14(%esp)
 mov    %edx,0x10(%esp)
 mov    %eax,0xc(%esp)
 movl   $"inSert into event_1112_ontime_info(no ,item_index,item_count,time ) values(%u,%u,%u,now())",0x8(%esp)
 movl   $0x4f19,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%ebx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager25QueryOnTimeEventIdxUpdateEP34Packet_Req_Ontime_Event_Idx_Update+0x1a4>
+je     <T> <_ZN10CDBManager25QueryOnTimeEventIdxUpdateEP34Packet_Req_Ontime_Event_Idx_Update+0x1a0>
 movl   $0x24ec,0x8(%esp)
 movl   $&_ZZN10CDBManager25QueryOnTimeEventIdxUpdateEP34Packet_Req_Ontime_Event_Idx_UpdateE12__FUNCTION__,0x4(%esp)
-lea    -0x14(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"set_query(inSert_event_ontime_idx_update) Query Error ",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x14(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager25QueryOnTimeEventIdxUpdateEP34Packet_Req_Ontime_Event_Idx_Update+0x1da>
+jmp    <T> <_ZN10CDBManager25QueryOnTimeEventIdxUpdateEP34Packet_Req_Ontime_Event_Idx_Update+0x1d8>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4f19,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager25QueryOnTimeEventIdxUpdateEP34Packet_Req_Ontime_Event_Idx_Update+0x1d5>
+je     <T> <_ZN10CDBManager25QueryOnTimeEventIdxUpdateEP34Packet_Req_Ontime_Event_Idx_Update+0x1d3>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager25QueryOnTimeEventIdxUpdateEP34Packet_Req_Ontime_Event_Idx_Update+0x1da>
-mov    -0x20(%ebp),%edx
+jmp    <T> <_ZN10CDBManager25QueryOnTimeEventIdxUpdateEP34Packet_Req_Ontime_Event_Idx_Update+0x1d8>
 mov    0xc(%ebp),%eax
-mov    %edx,0x12(%eax)
+lea    0x12(%eax),%edx
+mov    -0x10(%ebp),%eax
+mov    %eax,(%edx)
 mov    $0x1,%eax
 add    $0x44,%esp
 pop    %ebx
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::QueryOnTimeEventIdxUpdate(Packet_Req_Ontime_Event_Idx_Update*) */

undefined4 __thiscall
CDBManager::_ZN10CDBManager25QueryOnTimeEventIdxUpdateEP34Packet_Req_Ontime_Event_Idx_Update
          (CDBManager *this,Packet_Req_Ontime_Event_Idx_Update *param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  uint local_24;
  CMyFileLog local_20 [8];
  CMyFileLog local_18 [8];
  int *local_10;
  
  if (param_1 == (Packet_Req_Ontime_Event_Idx_Update *)0x0) {
    return 0;
  }
  local_10 = *(int **)(this + 0x34);
  cVar2 = (**(code **)(*local_10 + 0x1c))
                    (local_10,0x4f14,"seLect ifnull(max(no), 1) from event_1112_ontime_info");
  if (cVar2 != '\x01') {
    CMyFileLog::CMyFileLog(local_20,"QueryOnTimeEventIdxUpdate",0x24d8);
    CMyFileLog::operator()
              (local_20,"./log/DBQueryErr","set_query(seLect_from_event_ontime_idx) Query Error ");
    return 0;
  }
  cVar2 = (**(code **)(*local_10 + 0x20))(local_10,0x4f14);
  if ((cVar2 == '\x01') && (cVar2 = (**(code **)(*local_10 + 0x24))(local_10), cVar2 == '\x01')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    uVar3 = 0;
  }
  else {
    cVar2 = (**(code **)(*local_10 + 0x38))(local_10,0,&local_24);
    if (cVar2 == '\x01') {
      if (local_24 < *(uint *)(param_1 + 0x12)) {
        cVar2 = (**(code **)(*local_10 + 0x1c))
                          (local_10,0x4f19,
                           "inSert into event_1112_ontime_info(no ,item_index,item_count,time ) values(%u,%u,%u,now())"
                           ,*(undefined4 *)(param_1 + 0x12),*(undefined4 *)(param_1 + 10),
                           *(undefined4 *)(param_1 + 0xe));
        if (cVar2 != '\x01') {
          CMyFileLog::CMyFileLog(local_18,"QueryOnTimeEventIdxUpdate",0x24ec);
          CMyFileLog::operator()
                    (local_18,"./log/DBQueryErr",
                     "set_query(inSert_event_ontime_idx_update) Query Error ");
          return 0;
        }
        cVar2 = (**(code **)(*local_10 + 0x20))(local_10,0x4f19);
        if (cVar2 != '\x01') {
          return 0;
        }
      }
      else {
        *(uint *)(param_1 + 0x12) = local_24;
      }
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBMWCommon.h, source/DNFServer/GameServer/DBMW/DBMWTypes.h, source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBManager.h, source/DNFServer/GameServer/DBMW/DNFAppConfig.h, source/DNFServer/GameServer/DBMW/DNFAppStartInit.h, source/DNFServer/GameServer/DBMW/DNFAppStopInit.h 等 293 个文件*

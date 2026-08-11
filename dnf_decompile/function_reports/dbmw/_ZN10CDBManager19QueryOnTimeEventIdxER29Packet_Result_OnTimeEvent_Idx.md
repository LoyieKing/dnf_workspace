# _ZN10CDBManager19QueryOnTimeEventIdxER29Packet_Result_OnTimeEvent_Idx

`CDBManager::QueryOnTimeEventIdx(Packet_Result_OnTimeEvent_Idx&)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | NEAR | `0x8085a30` | `0x10c` | `0x805ccb6` | `0x10c` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,79 +1,79 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 mov    0x8(%ebp),%eax
 mov    0x34(%eax),%eax
 mov    %eax,-0xc(%ebp)
 mov    0xc(%ebp),%eax
 movl   $0x0,0xa(%eax)
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
-mov    (%eax),%edx
+mov    (%eax),%eax
 movl   $"seLect ifnull(max(no), 1) from event_1112_ontime_info",0x8(%esp)
 movl   $0x4f14,0x4(%esp)
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    -0xc(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN10CDBManager19QueryOnTimeEventIdxER29Packet_Result_OnTimeEvent_Idx+0x82>
 movl   $0x244e,0x8(%esp)
 movl   $"QueryOnTimeEventIdx",0x4(%esp)
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"set_query(seLect_from_event_ontime_idx) Query Error",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
 jmp    <T> <_ZN10CDBManager19QueryOnTimeEventIdxER29Packet_Result_OnTimeEvent_Idx+0x10a>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
-mov    (%eax),%edx
+mov    (%eax),%eax
 movl   $0x4f14,0x4(%esp)
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    -0xc(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
 xor    $0x1,%eax
 test   %al,%al
 jne    <T> <_ZN10CDBManager19QueryOnTimeEventIdxER29Packet_Result_OnTimeEvent_Idx+0xbc>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x24,%eax
-mov    (%eax),%edx
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    (%eax),%eax
+mov    -0xc(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN10CDBManager19QueryOnTimeEventIdxER29Packet_Result_OnTimeEvent_Idx+0xc3>
 mov    $0x1,%eax
 jmp    <T> <_ZN10CDBManager19QueryOnTimeEventIdxER29Packet_Result_OnTimeEvent_Idx+0xc8>
 mov    $0x0,%eax
 test   %al,%al
 je     <T> <_ZN10CDBManager19QueryOnTimeEventIdxER29Packet_Result_OnTimeEvent_Idx+0xd3>
 mov    $0x0,%eax
 jmp    <T> <_ZN10CDBManager19QueryOnTimeEventIdxER29Packet_Result_OnTimeEvent_Idx+0x10a>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x38,%eax
-mov    (%eax),%edx
-mov    0xc(%ebp),%eax
-add    $0xa,%eax
-mov    %eax,0x8(%esp)
+mov    (%eax),%eax
+mov    0xc(%ebp),%edx
+add    $0xa,%edx
+mov    %edx,0x8(%esp)
 movl   $0x0,0x4(%esp)
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    -0xc(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN10CDBManager19QueryOnTimeEventIdxER29Packet_Result_OnTimeEvent_Idx+0x105>
 mov    $0x0,%eax
 jmp    <T> <_ZN10CDBManager19QueryOnTimeEventIdxER29Packet_Result_OnTimeEvent_Idx+0x10a>
 mov    $0x1,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::QueryOnTimeEventIdx(Packet_Result_OnTimeEvent_Idx&) */

undefined4 __thiscall
CDBManager::_ZN10CDBManager19QueryOnTimeEventIdxER29Packet_Result_OnTimeEvent_Idx
          (CDBManager *this,Packet_Result_OnTimeEvent_Idx *param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  CMyFileLog local_18 [8];
  int *local_10;
  
  local_10 = *(int **)(this + 0x34);
  *(undefined4 *)(param_1 + 10) = 0;
  cVar2 = (**(code **)(*local_10 + 0x1c))
                    (local_10,0x4f14,"seLect ifnull(max(no), 1) from event_1112_ontime_info");
  if (cVar2 == '\x01') {
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
      cVar2 = (**(code **)(*local_10 + 0x38))(local_10,0,param_1 + 10);
      if (cVar2 == '\x01') {
        uVar3 = 1;
      }
      else {
        uVar3 = 0;
      }
    }
    return uVar3;
  }
  CMyFileLog::CMyFileLog(local_18,"QueryOnTimeEventIdx",0x244e);
  CMyFileLog::operator()
            (local_18,"./log/DBQueryErr","set_query(seLect_from_event_ontime_idx) Query Error");
  return 0;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DBManager.cpp](source/DNFServer/GameServer/DBMW/DBManager.cpp)（约第 4372 行）：

```cpp
char CDBManager::QueryOnTimeEventIdx(Packet_Result_OnTimeEvent_Idx& rpy)
{
    CDBHandle* h = m_handles[0xd];    // se_event db
    rpy.m_fieldA = 0;
    if (!h->set_query(0x4f14,
                      "seLect ifnull(max(no), 1) from event_1112_ontime_info"))
    {
        CMyFileLog log("QueryOnTimeEventIdx", 0x244e);
        log("./log/DBQueryErr", "set_query(seLect_from_event_ontime_idx) Query Error");
        return 0;
    }
    if (!h->exec(0x4f14) || !h->fetch())
        return 0;
    if (!h->get_uint(0, *(unsigned int*)((char*)&rpy + 0xa)))
        return 0;
    return 1;
}
```

# _ZN14CServerHandler14ResetHeartBeatEh

`CServerHandler::ResetHeartBeat(unsigned char)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| manager | DIFF | `0x806817c` | `0x9f` | `0x805e588` | `0x9a` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,48 +1,45 @@
 push   %ebp
 mov    %esp,%ebp
-push   %ebx
-sub    $0x34,%esp
+sub    $0x38,%esp
 mov    0xc(%ebp),%eax
 mov    %al,-0x1c(%ebp)
 cmpb   $0x64,-0x1c(%ebp)
-ja     <T> <_ZN14CServerHandler14ResetHeartBeatEh+0x37>
+ja     <T> <_ZN14CServerHandler14ResetHeartBeatEh+0x36>
 movzbl -0x1c(%ebp),%edx
 mov    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
 shl    $0x2,%eax
 add    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CMonitorServer20IsValidMonitorServerEv>
 test   %al,%al
-je     <T> <_ZN14CServerHandler14ResetHeartBeatEh+0x37>
+je     <T> <_ZN14CServerHandler14ResetHeartBeatEh+0x36>
 mov    $0x1,%eax
-jmp    <T> <_ZN14CServerHandler14ResetHeartBeatEh+0x3c>
+jmp    <T> <_ZN14CServerHandler14ResetHeartBeatEh+0x3b>
 mov    $0x0,%eax
 test   %al,%al
-je     <T> <_ZN14CServerHandler14ResetHeartBeatEh+0x5b>
+je     <T> <_ZN14CServerHandler14ResetHeartBeatEh+0x5a>
 movzbl -0x1c(%ebp),%edx
 mov    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
 shl    $0x2,%eax
 add    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CMonitorServer14ResetHeartBeatEv>
-jmp    <T> <_ZN14CServerHandler14ResetHeartBeatEh+0x99>
-movzbl -0x1c(%ebp),%ebx
+jmp    <T> <_ZN14CServerHandler14ResetHeartBeatEh+0x98>
 movl   $0x70,0x8(%esp)
 movl   $&_ZZN14CServerHandler14ResetHeartBeatEhE12__FUNCTION__,0x4(%esp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+movzbl -0x1c(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $"Server Index Over Index : %d!\n",0x8(%esp)
 movl   $"./log/Server.log",0x4(%esp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-add    $0x34,%esp
-pop    %ebx
-pop    %ebp
+leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CServerHandler::ResetHeartBeat(unsigned char) */

void __thiscall
CServerHandler::_ZN14CServerHandler14ResetHeartBeatEh(CServerHandler *this,uchar param_1)

{
  bool bVar1;
  char cVar2;
  CMyFileLog local_14 [12];
  
  if (param_1 < 0x65) {
    cVar2 = CMonitorServer::IsValidMonitorServer((CMonitorServer *)(this + (uint)param_1 * 0x14));
    if (cVar2 != '\0') {
      bVar1 = true;
      goto LAB_080681b8;
    }
  }
  bVar1 = false;
LAB_080681b8:
  if (bVar1) {
    CMonitorServer::ResetHeartBeat((CMonitorServer *)(this + (uint)param_1 * 0x14));
  }
  else {
    CMyFileLog::CMyFileLog(local_14,"ResetHeartBeat",0x70);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_14,"./log/Server.log","Server Index Over Index : %d!\n",(uint)param_1);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Manager/DNFServerHandler.cpp](source/DNFServer/GameServer/Manager/DNFServerHandler.cpp)（约第 198 行）：

```cpp
void CServerHandler::ResetHeartBeat(unsigned char idx)
{
    if (idx <= 0x64 && m_monitorServers[idx].IsValidMonitorServer())
    {
        m_monitorServers[idx].ResetHeartBeat();
        return;
    }
    CMyFileLog log(__FUNCTION__, 0x70);
    log("./log/Server.log", "Server Index Over Index : %d!\n", idx);
}
```

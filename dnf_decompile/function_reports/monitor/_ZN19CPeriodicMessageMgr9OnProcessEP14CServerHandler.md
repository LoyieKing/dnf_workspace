# _ZN19CPeriodicMessageMgr9OnProcessEP14CServerHandler

`CPeriodicMessageMgr::OnProcess(CServerHandler*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x806682e` | `0xd0` | `0x8050034` | `0xcf` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,67 +1,68 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x58,%esp
 movl   $0x0,(%esp)
 call   <T> <time>
-mov    %eax,-0x10(%ebp)
-lea    -0x10(%ebp),%eax
+mov    %eax,-0xc(%ebp)
+lea    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <localtime>
 mov    (%eax),%edx
-mov    %edx,-0x48(%ebp)
+mov    %edx,-0x44(%ebp)
 mov    0x4(%eax),%edx
-mov    %edx,-0x44(%ebp)
+mov    %edx,-0x40(%ebp)
 mov    0x8(%eax),%edx
-mov    %edx,-0x40(%ebp)
+mov    %edx,-0x3c(%ebp)
 mov    0xc(%eax),%edx
-mov    %edx,-0x3c(%ebp)
+mov    %edx,-0x38(%ebp)
 mov    0x10(%eax),%edx
-mov    %edx,-0x38(%ebp)
+mov    %edx,-0x34(%ebp)
 mov    0x14(%eax),%edx
-mov    %edx,-0x34(%ebp)
+mov    %edx,-0x30(%ebp)
 mov    0x18(%eax),%edx
-mov    %edx,-0x30(%ebp)
+mov    %edx,-0x2c(%ebp)
 mov    0x1c(%eax),%edx
-mov    %edx,-0x2c(%ebp)
+mov    %edx,-0x28(%ebp)
 mov    0x20(%eax),%edx
-mov    %edx,-0x28(%ebp)
+mov    %edx,-0x24(%ebp)
 mov    0x24(%eax),%edx
-mov    %edx,-0x24(%ebp)
+mov    %edx,-0x20(%ebp)
 mov    0x28(%eax),%eax
-mov    %eax,-0x20(%ebp)
-mov    -0x44(%ebp),%eax
+mov    %eax,-0x1c(%ebp)
+mov    -0x40(%ebp),%eax
 test   %eax,%eax
-jne    <T> <_ZN19CPeriodicMessageMgr9OnProcessEP14CServerHandler+0xa2>
-mov    -0x40(%ebp),%eax
-mov    %eax,-0xc(%ebp)
+jne    <T> <_ZN19CPeriodicMessageMgr9OnProcessEP14CServerHandler+0xa1>
 mov    0x8(%ebp),%eax
-mov    0x200(%eax),%eax
-cmp    -0xc(%ebp),%eax
-jg     <T> <_ZN19CPeriodicMessageMgr9OnProcessEP14CServerHandler+0xa2>
+mov    0x200(%eax),%edx
+mov    -0x3c(%ebp),%eax
+cmp    %eax,%edx
+jg     <T> <_ZN19CPeriodicMessageMgr9OnProcessEP14CServerHandler+0xa1>
 mov    0x8(%ebp),%eax
-mov    0x204(%eax),%eax
-cmp    -0xc(%ebp),%eax
-jl     <T> <_ZN19CPeriodicMessageMgr9OnProcessEP14CServerHandler+0xa2>
-cmpl   $0x0,-0xc(%ebp)
-je     <T> <_ZN19CPeriodicMessageMgr9OnProcessEP14CServerHandler+0xa2>
+mov    0x204(%eax),%edx
+mov    -0x3c(%ebp),%eax
+cmp    %eax,%edx
+jl     <T> <_ZN19CPeriodicMessageMgr9OnProcessEP14CServerHandler+0xa1>
+mov    -0x3c(%ebp),%eax
+test   %eax,%eax
+je     <T> <_ZN19CPeriodicMessageMgr9OnProcessEP14CServerHandler+0xa1>
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN19CPeriodicMessageMgr15OnTimerSendDataEP14CServerHandler>
+mov    -0x3c(%ebp),%eax
+test   %eax,%eax
+jne    <T> <_ZN19CPeriodicMessageMgr9OnProcessEP14CServerHandler+0xcd>
 mov    -0x40(%ebp),%eax
-test   %eax,%eax
-jne    <T> <_ZN19CPeriodicMessageMgr9OnProcessEP14CServerHandler+0xce>
-mov    -0x44(%ebp),%eax
 cmp    $0xa,%eax
-jne    <T> <_ZN19CPeriodicMessageMgr9OnProcessEP14CServerHandler+0xce>
-lea    -0x1a(%ebp),%eax
+jne    <T> <_ZN19CPeriodicMessageMgr9OnProcessEP14CServerHandler+0xcd>
+lea    -0x16(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN28Packet_Load_Periodic_MessageC1Ev>
-lea    -0x1a(%ebp),%eax
+lea    -0x16(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPeriodicMessageMgr::OnProcess(CServerHandler*) */

void __thiscall
CPeriodicMessageMgr::_ZN19CPeriodicMessageMgr9OnProcessEP14CServerHandler
          (CPeriodicMessageMgr *this,CServerHandler *param_1)

{
  int iVar1;
  int iVar2;
  tm *ptVar3;
  Packet_Load_Periodic_Message local_1e [10];
  time_t local_14;
  int local_10;
  
  local_14 = time((time_t *)0x0);
  ptVar3 = localtime(&local_14);
  iVar1 = ptVar3->tm_min;
  iVar2 = ptVar3->tm_hour;
  if ((((iVar1 == 0) && (local_10 = iVar2, *(int *)(this + 0x200) <= iVar2)) &&
      (iVar2 <= *(int *)(this + 0x204))) && (iVar2 != 0)) {
    _ZN19CPeriodicMessageMgr15OnTimerSendDataEP14CServerHandler(this,param_1);
  }
  if ((iVar2 == 0) && (iVar1 == 10)) {
    Packet_Load_Periodic_Message::Packet_Load_Periodic_Message(local_1e);
    CServerHandler::SendToDB(param_1,(PacketHeader *)local_1e);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFApplication.cpp](source/DNFServer/GameServer/Monitor/DNFApplication.cpp)（约第 75 行）：

```cpp
void CPeriodicMessageMgr::OnProcess(CServerHandler* handler)
{
    time_t t = time(0);
    struct tm st = *localtime(&t);
    if (st.tm_min == 0 && m_startHour <= st.tm_hour && m_endHour >= st.tm_hour &&
        st.tm_hour != 0)
    {
        OnTimerSendData(handler);
    }
    if (st.tm_hour == 0 && st.tm_min == 10)
    {
        Packet_Load_Periodic_Message pkt;
        handler->SendToDB(&pkt);
    }
}
```

# _ZN16StatisticManager23SendDBLoadingTimeReportEP14CServerHandler

`StatisticManager::SendDBLoadingTimeReport(CServerHandler*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | NEAR | `0x8071b84` | `0xb3` | `0x8071c56` | `0xb3` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,56 +1,56 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x64,%esp
 lea    -0x43(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN31Packet_DBMW_Loading_Time_ReportC1Ev>
 movl   $0x0,-0xc(%ebp)
 jmp    <T> <_ZN16StatisticManager23SendDBLoadingTimeReportEP14CServerHandler+0x80>
 mov    -0xc(%ebp),%ebx
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler16GetServerGroupNoEv>
 mov    %al,-0x39(%ebp,%ebx,1)
 mov    -0xc(%ebp),%edx
 mov    0x8(%ebp),%eax
 add    $0x58,%edx
 mov    0x4(%eax,%edx,4),%eax
 test   %eax,%eax
 jne    <T> <_ZN16StatisticManager23SendDBLoadingTimeReportEP14CServerHandler+0x4e>
 mov    -0xc(%ebp),%eax
 add    $0x4,%eax
 movl   $0x0,-0x40(%ebp,%eax,4)
 jmp    <T> <_ZN16StatisticManager23SendDBLoadingTimeReportEP14CServerHandler+0x7c>
 mov    -0xc(%ebp),%ecx
 mov    -0xc(%ebp),%edx
 mov    0x8(%ebp),%eax
 add    $0x50,%edx
 mov    (%eax,%edx,4),%eax
 mov    -0xc(%ebp),%ebx
 mov    0x8(%ebp),%edx
 add    $0x58,%ebx
-mov    0x4(%edx,%ebx,4),%ebx
-mov    %ebx,-0x4c(%ebp)
+mov    0x4(%edx,%ebx,4),%edx
+mov    %edx,-0x4c(%ebp)
 mov    $0x0,%edx
 divl   -0x4c(%ebp)
 lea    0x4(%ecx),%edx
 mov    %eax,-0x40(%ebp,%edx,4)
 addl   $0x1,-0xc(%ebp)
 cmpl   $0x8,-0xc(%ebp)
 setle  %al
 test   %al,%al
 jne    <T> <_ZN16StatisticManager23SendDBLoadingTimeReportEP14CServerHandler+0x1b>
 lea    -0x43(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
 mov    0x8(%ebp),%eax
 add    $0x140,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17LoadingTimeReport5ResetEv>
 add    $0x64,%esp
 pop    %ebx
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* StatisticManager::SendDBLoadingTimeReport(CServerHandler*) */

void __thiscall
StatisticManager::_ZN16StatisticManager23SendDBLoadingTimeReportEP14CServerHandler
          (StatisticManager *this,CServerHandler *param_1)

{
  int iVar1;
  undefined1 uVar2;
  Packet_DBMW_Loading_Time_Report local_47 [3];
  uint uStack_44;
  undefined1 auStack_3d [45];
  int local_10;
  
  Packet_DBMW_Loading_Time_Report::Packet_DBMW_Loading_Time_Report(local_47);
  for (local_10 = 0; iVar1 = local_10, local_10 < 9; local_10 = local_10 + 1) {
    uVar2 = CServerHandler::GetServerGroupNo(param_1);
    auStack_3d[iVar1] = uVar2;
    if (*(int *)(this + (local_10 + 0x58) * 4 + 4) == 0) {
      (&uStack_44)[local_10 + 4] = 0;
    }
    else {
      (&uStack_44)[local_10 + 4] =
           *(uint *)(this + (local_10 + 0x50) * 4) / *(uint *)(this + (local_10 + 0x58) * 4 + 4);
    }
  }
  CServerHandler::SendToDB(param_1,(PacketHeader *)local_47);
  LoadingTimeReport::Reset((LoadingTimeReport *)(this + 0x140));
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/Statistics.cpp](source/DNFServer/GameServer/Statics/Statistics.cpp)（约第 924 行）：

```cpp
void StatisticManager::SendDBLoadingTimeReport(CServerHandler* handler)
{
    Packet_DBMW_Loading_Time_Report pkt;
    for (int i = 0; i < 9; i++)
    {
        pkt.m_group[i] = handler->GetServerGroupNo();
        if (m_loading.m_data2[i] == 0)
        {
            pkt.m_value[i] = 0;
        }
        else
        {
            pkt.m_value[i] =
                (unsigned int)m_loading.m_data[i] / (unsigned int)m_loading.m_data2[i];
        }
    }
    handler->SendToDB((PacketHeader*)&pkt);
    m_loading.Reset();
}
```

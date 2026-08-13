# _ZN17CPacketTranslater31OnUpdateTowerOfDespairStatisticEP12PacketHeader

`CPacketTranslater::OnUpdateTowerOfDespairStatistic(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x809f9de` | `0x18f` | `0x80d5816` | `0x192` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,106 +1,108 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x50,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 je     <T> <_ZN17CPacketTranslater31OnUpdateTowerOfDespairStatisticEP12PacketHeader+0x187>
 mov    0x8(%ebp),%eax
 mov    %eax,-0x14(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 lea    0x50(%eax),%edx
 mov    -0x14(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN10CDBManager28QueryTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_STD>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater31OnUpdateTowerOfDespairStatisticEP12PacketHeader+0x188>
+je     <T> <_ZN17CPacketTranslater31OnUpdateTowerOfDespairStatisticEP12PacketHeader+0x18b>
 cmpl   $0x0,-0x14(%ebp)
-je     <T> <_ZN17CPacketTranslater31OnUpdateTowerOfDespairStatisticEP12PacketHeader+0x188>
+je     <T> <_ZN17CPacketTranslater31OnUpdateTowerOfDespairStatisticEP12PacketHeader+0x18a>
 mov    -0x14(%ebp),%eax
 mov    0xe(%eax),%ebx
 movl   $0x12e5,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater31OnUpdateTowerOfDespairStatisticEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"TOD Statistic Error\nTOD uv(%d)",0x8(%esp)
 movl   $"./log/statistic",0x4(%esp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 movl   $0x1,-0x10(%ebp)
 jmp    <T> <_ZN17CPacketTranslater31OnUpdateTowerOfDespairStatisticEP12PacketHeader+0xf3>
 mov    -0x10(%ebp),%edx
 mov    -0x14(%ebp),%eax
 add    $0x2,%edx
 mov    0x2(%eax,%edx,8),%esi
 mov    -0x10(%ebp),%edx
 mov    -0x14(%ebp),%eax
 add    $0x2,%edx
 mov    0x6(%eax,%edx,8),%ebx
 movl   $0x12e7,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater31OnUpdateTowerOfDespairStatisticEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %esi,0x14(%esp)
 mov    %ebx,0x10(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"TOD Layer(%d), enter(%d), succ(%d)",0x8(%esp)
 movl   $"./log/statistic",0x4(%esp)
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 addl   $0x1,-0x10(%ebp)
 cmpl   $0x64,-0x10(%ebp)
 setle  %al
 test   %al,%al
 jne    <T> <_ZN17CPacketTranslater31OnUpdateTowerOfDespairStatisticEP12PacketHeader+0x90>
-jmp    <T> <_ZN17CPacketTranslater31OnUpdateTowerOfDespairStatisticEP12PacketHeader+0x188>
+jmp    <T> <_ZN17CPacketTranslater31OnUpdateTowerOfDespairStatisticEP12PacketHeader+0x18b>
 cmp    $0x1,%edx
 je     <T> <_ZN17CPacketTranslater31OnUpdateTowerOfDespairStatisticEP12PacketHeader+0x110>
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0xc(%ebp)
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %eax,%ebx
 movl   $0x12ed,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater31OnUpdateTowerOfDespairStatisticEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnUpdateTowerOfDespairStatistic() Exception Break : %s",0x8(%esp)
 movl   $"./log/Except.log",0x4(%esp)
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN17CPacketTranslater31OnUpdateTowerOfDespairStatisticEP12PacketHeader+0x180>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater31OnUpdateTowerOfDespairStatisticEP12PacketHeader+0x188>
+jmp    <T> <_ZN17CPacketTranslater31OnUpdateTowerOfDespairStatisticEP12PacketHeader+0x18b>
+nop
+jmp    <T> <_ZN17CPacketTranslater31OnUpdateTowerOfDespairStatisticEP12PacketHeader+0x18b>
 nop
 add    $0x50,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnUpdateTowerOfDespairStatistic(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater31OnUpdateTowerOfDespairStatisticEP12PacketHeader
               (PacketHeader *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  CMyFileLog local_30 [8];
  CMyFileLog local_28 [16];
  PacketHeader *local_18;
  int local_14;
  
  if (m_pclApp != 0) {
    local_18 = param_1;
                    /* try { // try from 0809fa0b to 0809facc has its CatchHandler @ 0809fae1 */
    cVar3 = CDBManager::
            _ZN10CDBManager28QueryTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_STD
                      ((CDBManager *)(m_pclApp + 0x50),
                       (Packet_TowerOfDespair_Statistic_STD *)param_1);
    if ((cVar3 != '\x01') && (local_18 != (PacketHeader *)0x0)) {
      uVar1 = *(undefined4 *)(local_18 + 0xe);
      CMyFileLog::CMyFileLog(local_30,"OnUpdateTowerOfDespairStatistic",0x12e5);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_30,"./log/statistic","TOD Statistic Error\nTOD uv(%d)",uVar1);
      for (local_14 = 1; local_14 < 0x65; local_14 = local_14 + 1) {
        uVar1 = *(undefined4 *)(local_18 + (local_14 + 2) * 8 + 2);
        uVar2 = *(undefined4 *)(local_18 + (local_14 + 2) * 8 + 6);
        CMyFileLog::CMyFileLog(local_28,"OnUpdateTowerOfDespairStatistic",0x12e7);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_28,"./log/statistic","TOD Layer(%d), enter(%d), succ(%d)",local_14,uVar2,
                   uVar1);
      }
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp](source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp)（约第 1441 行）：

```cpp
void CPacketTranslater::OnUpdateTowerOfDespairStatistic(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        Packet_TowerOfDespair_Statistic_STD* pkt =
            (Packet_TowerOfDespair_Statistic_STD*)header;
        if (!m_pclApp->m_dbManager.QueryTowerOfDespairStatistic(
                pkt))
        {
            if (!pkt)
                return;
            DNF_LOG_SCOPE_LINE(0x12e5, "./log/statistic", "TOD Statistic Error\nTOD uv(%d)", pkt->m_uv);

            for (int i = 1; i <= 0x64; i++)
            {
                DNF_LOG_SCOPE_LINE(0x12e7, "./log/statistic",
                    "TOD Layer(%d), enter(%d), succ(%d)", i,
                    pkt->m_entries[i].m_field12, pkt->m_entries[i].m_fieldE);
            }
        }
    }
    DNF_CATCH_LOG_CDNF("./log/Except.log",
                       "CPacketTranslater::OnUpdateTowerOfDespairStatistic() Exception Break",
                       0x12ed);
}
```

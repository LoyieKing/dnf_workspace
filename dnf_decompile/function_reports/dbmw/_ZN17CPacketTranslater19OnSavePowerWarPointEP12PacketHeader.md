# _ZN17CPacketTranslater19OnSavePowerWarPointEP12PacketHeader

`CPacketTranslater::OnSavePowerWarPoint(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x8097ede` | `0x161` | `0x807fb20` | `0x15f` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,95 +1,94 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x40,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater19OnSavePowerWarPointEP12PacketHeader+0x159>
+je     <T> <_ZN17CPacketTranslater19OnSavePowerWarPointEP12PacketHeader+0x157>
 mov    0x8(%ebp),%eax
 mov    %eax,-0x10(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 lea    0x50(%eax),%edx
 mov    -0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN10CDBManager17SavePowerWarPointEP30Packet_DB_Save_Power_War_Point>
-mov    -0x10(%ebp),%eax
-mov    0x10(%eax),%esi
-mov    -0x10(%ebp),%eax
-mov    0xc(%eax),%ebx
 movl   $0x6a4,0x8(%esp)
 movl   $"OnSavePowerWarPoint",0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    -0x10(%ebp),%eax
+mov    0xc(%eax),%edx
+mov    -0x10(%ebp),%eax
+mov    0x10(%eax),%eax
+mov    %edx,0x10(%esp)
+mov    %eax,0xc(%esp)
 movl   $"QueryGuildBooting A_Side(%d) B_Side(%d)",0x8(%esp)
 movl   $"./log/QueryGuildBooting",0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater19OnSavePowerWarPointEP12PacketHeader+0x15a>
+jmp    <T> <_ZN17CPacketTranslater19OnSavePowerWarPointEP12PacketHeader+0x158>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater19OnSavePowerWarPointEP12PacketHeader+0xfd>
+jne    <T> <_ZN17CPacketTranslater19OnSavePowerWarPointEP12PacketHeader+0xfb>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
-mov    (%eax),%eax
-add    $0x8,%eax
-mov    (%eax),%edx
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %eax,%ebx
 movl   $0x6a8,0x8(%esp)
 movl   $"OnSavePowerWarPoint",0x4(%esp)
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    -0xc(%ebp),%eax
+mov    (%eax),%eax
+add    $0x8,%eax
+mov    (%eax),%eax
+mov    -0xc(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnRequestGuildCreate() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except.log",0x4(%esp)
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater19OnSavePowerWarPointEP12PacketHeader+0xf6>
+jmp    <T> <_ZN17CPacketTranslater19OnSavePowerWarPointEP12PacketHeader+0xf4>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater19OnSavePowerWarPointEP12PacketHeader+0x15a>
+jmp    <T> <_ZN17CPacketTranslater19OnSavePowerWarPointEP12PacketHeader+0x158>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x6ad,0x8(%esp)
 movl   $"OnSavePowerWarPoint",0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnRequestGuildCreate() Exception Break\n",0x8(%esp)
 movl   $"./log/Except.log",0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater19OnSavePowerWarPointEP12PacketHeader+0x152>
+jmp    <T> <_ZN17CPacketTranslater19OnSavePowerWarPointEP12PacketHeader+0x150>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater19OnSavePowerWarPointEP12PacketHeader+0x15a>
+jmp    <T> <_ZN17CPacketTranslater19OnSavePowerWarPointEP12PacketHeader+0x158>
 nop
 add    $0x40,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnSavePowerWarPoint(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater19OnSavePowerWarPointEP12PacketHeader
               (PacketHeader *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  CMyFileLog local_2c [24];
  PacketHeader *local_14;
  
  if (m_pclApp != 0) {
    local_14 = param_1;
                    /* try { // try from 08097f0b to 08097f59 has its CatchHandler @ 08097f5f */
    CDBManager::_ZN10CDBManager17SavePowerWarPointEP30Packet_DB_Save_Power_War_Point
              ((CDBManager *)(m_pclApp + 0x50),(Packet_DB_Save_Power_War_Point *)param_1);
    uVar1 = *(undefined4 *)(local_14 + 0x10);
    uVar2 = *(undefined4 *)(local_14 + 0xc);
    CMyFileLog::CMyFileLog(local_2c,"OnSavePowerWarPoint",0x6a4);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_2c,"./log/QueryGuildBooting","QueryGuildBooting A_Side(%d) B_Side(%d)",uVar2,
               uVar1);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp](source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp)（约第 838 行）：

```cpp
void CPacketTranslater::OnSavePowerWarPoint(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        Packet_DB_Save_Power_War_Point* pkt =
            (Packet_DB_Save_Power_War_Point*)header;
        m_pclApp->m_dbManager.SavePowerWarPoint(
            pkt);
        CMyFileLog log("OnSavePowerWarPoint", 0x6a4);
        log("./log/QueryGuildBooting", "QueryGuildBooting A_Side(%d) B_Side(%d)",
            pkt->m_bSidePoint, pkt->m_aSidePoint);
    }
    DNF_CATCH_LOG("./log/Except.log",
                  "CPacketTranslater::OnRequestGuildCreate() Exception Break",
                  0x6a8, 0x6ad);
}
```

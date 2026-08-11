# _ZN17CPacketTranslater26OnLoadFromDBOnGuildBootingEP12PacketHeader

`CPacketTranslater::OnLoadFromDBOnGuildBooting(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8080a3e` | `0x17c` | `0x80771c4` | `0x180` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,102 +1,104 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x40,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,-0x14(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater26OnLoadFromDBOnGuildBootingEP12PacketHeader+0x52>
 movl   $0x1343,0x8(%esp)
 movl   $"OnLoadFromDBOnGuildBooting",0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnLoadFromDBOnGuildBooting : 0 == m_pclApp",0x8(%esp)
 movl   $"./log/Power",0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater26OnLoadFromDBOnGuildBootingEP12PacketHeader+0x175>
+jmp    <T> <_ZN17CPacketTranslater26OnLoadFromDBOnGuildBootingEP12PacketHeader+0x179>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication15GetPowerManagerEv>
 mov    %eax,-0x10(%ebp)
 mov    -0x14(%ebp),%eax
-mov    0xe(%eax),%ecx
+add    $0xe,%eax
+mov    (%eax),%ecx
 mov    -0x14(%ebp),%eax
-mov    0xa(%eax),%edx
+add    $0xa,%eax
+mov    (%eax),%edx
 mov    -0x14(%ebp),%eax
-movzbl 0x12(%eax),%eax
+add    $0x12,%eax
+movzbl (%eax),%eax
 movsbl %al,%eax
 mov    %ecx,0xc(%esp)
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CPowerManager12SetPowerInfoEcii>
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CPowerManager16SendPowerWarInfoEv>
-jmp    <T> <_ZN17CPacketTranslater26OnLoadFromDBOnGuildBootingEP12PacketHeader+0x175>
+jmp    <T> <_ZN17CPacketTranslater26OnLoadFromDBOnGuildBootingEP12PacketHeader+0x179>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater26OnLoadFromDBOnGuildBootingEP12PacketHeader+0x11b>
+jne    <T> <_ZN17CPacketTranslater26OnLoadFromDBOnGuildBootingEP12PacketHeader+0x11f>
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
 movl   $0x134f,0x8(%esp)
 movl   $"OnLoadFromDBOnGuildBooting",0x4(%esp)
 lea    -0x24(%ebp),%eax
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
 movl   $"CPacketTranslater::OnPacketSecedePower Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater26OnLoadFromDBOnGuildBootingEP12PacketHeader+0x114>
+jmp    <T> <_ZN17CPacketTranslater26OnLoadFromDBOnGuildBootingEP12PacketHeader+0x118>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater26OnLoadFromDBOnGuildBootingEP12PacketHeader+0x175>
+jmp    <T> <_ZN17CPacketTranslater26OnLoadFromDBOnGuildBootingEP12PacketHeader+0x179>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x1354,0x8(%esp)
 movl   $"OnLoadFromDBOnGuildBooting",0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnPacketSecedePower Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater26OnLoadFromDBOnGuildBootingEP12PacketHeader+0x170>
+jmp    <T> <_ZN17CPacketTranslater26OnLoadFromDBOnGuildBootingEP12PacketHeader+0x174>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 add    $0x40,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnLoadFromDBOnGuildBooting(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater26OnLoadFromDBOnGuildBootingEP12PacketHeader
               (PacketHeader *param_1)

{
  CMyFileLog local_30 [24];
  PacketHeader *local_18;
  CPowerManager *local_14;
  
  local_18 = param_1;
  if (m_pclApp == (CApplication *)0x0) {
                    /* try { // try from 08080a6b to 08080ad7 has its CatchHandler @ 08080add */
    CMyFileLog::CMyFileLog(local_30,"OnLoadFromDBOnGuildBooting",0x1343);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_30,"./log/Power",
               "CPacketTranslater::OnLoadFromDBOnGuildBooting : 0 == m_pclApp");
  }
  else {
    local_14 = (CPowerManager *)CApplication::GetPowerManager(m_pclApp);
    CPowerManager::_ZN13CPowerManager12SetPowerInfoEcii
              (local_14,(char)local_18[0x12],*(int *)(local_18 + 10),*(int *)(local_18 + 0xe));
    CPowerManager::_ZN13CPowerManager16SendPowerWarInfoEv(local_14);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 3448 行）：

```cpp
void CPacketTranslater::OnLoadFromDBOnGuildBooting(PacketHeader* pkt)
{
    char* pb = (char*)pkt;
    if (m_pclApp == 0)
    {
        DNF_LOG_SCOPE_LINE(0x1343,"./log/Power",
            "CPacketTranslater::OnLoadFromDBOnGuildBooting : 0 == m_pclApp");
        return;
    }
    try
    {
        CPowerManager* pm = m_pclApp->GetPowerManager();
        pm->SetPowerInfo((char)pb[0x12], *(int*)(pb + 0xa), *(int*)(pb + 0xe));
        pm->SendPowerWarInfo();
    }
    DNF_CATCH_LOG("./log/Except", "CPacketTranslater::OnPacketSecedePower Exception Break", 0x134f, 0x1354);
}
```

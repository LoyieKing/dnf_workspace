# _ZN17CPacketTranslater21OnPowerWarProcessInfoEP12PacketHeader

`CPacketTranslater::OnPowerWarProcessInfo(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | NEAR | `0x8082e44` | `0x167` | `0x8078fa4` | `0x167` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,94 +1,94 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x40,%esp
 movl   $0x0,-0x1c(%ebp)
 movl   $0x0,-0x18(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater21OnPowerWarProcessInfoEP12PacketHeader+0x5a>
 movl   $0x1717,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater21OnPowerWarProcessInfoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnPowerWarProcessInfo : 0 == m_pclApp",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN17CPacketTranslater21OnPowerWarProcessInfoEP12PacketHeader+0x160>
 mov    0x8(%ebp),%eax
 mov    %eax,-0x14(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication15GetPowerManagerEv>
 mov    %eax,-0x10(%ebp)
 mov    -0x14(%ebp),%eax
 mov    0xa(%eax),%eax
 mov    %eax,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CPowerManager23SendPowerWarProcessInfoEj>
 jmp    <T> <_ZN17CPacketTranslater21OnPowerWarProcessInfoEP12PacketHeader+0x160>
 cmp    $0x2,%edx
 jne    <T> <_ZN17CPacketTranslater21OnPowerWarProcessInfoEP12PacketHeader+0x106>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0xc(%ebp)
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
-mov    (%eax),%edx
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    (%eax),%eax
+mov    -0xc(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
 mov    %eax,%ebx
 movl   $0x1722,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater21OnPowerWarProcessInfoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnPowerWarProcessInfo Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN17CPacketTranslater21OnPowerWarProcessInfoEP12PacketHeader+0xff>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 jmp    <T> <_ZN17CPacketTranslater21OnPowerWarProcessInfoEP12PacketHeader+0x160>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x1727,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater21OnPowerWarProcessInfoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnPowerWarProcessInfo Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN17CPacketTranslater21OnPowerWarProcessInfoEP12PacketHeader+0x15b>
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

/* CPacketTranslater::OnPowerWarProcessInfo(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater21OnPowerWarProcessInfoEP12PacketHeader
               (PacketHeader *param_1)

{
  CMyFileLog local_38 [24];
  undefined4 local_20;
  undefined4 local_1c;
  PacketHeader *local_18;
  CPowerManager *local_14;
  
  local_20 = 0;
  local_1c = 0;
  if (m_pclApp == (CApplication *)0x0) {
                    /* try { // try from 08082e79 to 08082ec8 has its CatchHandler @ 08082ece */
    CMyFileLog::CMyFileLog(local_38,"OnPowerWarProcessInfo",0x1717);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_38,"./log/Except","CPacketTranslater::OnPowerWarProcessInfo : 0 == m_pclApp");
  }
  else {
    local_18 = param_1;
    local_14 = (CPowerManager *)CApplication::GetPowerManager(m_pclApp);
    CPowerManager::_ZN13CPowerManager23SendPowerWarProcessInfoEj(local_14,*(uint *)(local_18 + 10));
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 4138 行）：

```cpp
void CPacketTranslater::OnPowerWarProcessInfo(PacketHeader* pkt)
{
    int uVar1 = 0;
    int uVar2 = 0;
    if (m_pclApp == 0)
    {
        DNF_LOG_SCOPE_LINE(0x1717, "./log/Except", "CPacketTranslater::OnPowerWarProcessInfo : 0 == m_pclApp");
        return;
    }
    try
    {
        char* pb = (char*)pkt;
        CPowerManager* pm = m_pclApp->GetPowerManager();
        pm->SendPowerWarProcessInfo(((Packet_Guild_Power_War_Process_Info*)pb)->m_a);
    }
    DNF_CATCH_LOG("./log/Except", "CPacketTranslater::OnPowerWarProcessInfo Exception Break", 0x1722, 0x1727);
}
```

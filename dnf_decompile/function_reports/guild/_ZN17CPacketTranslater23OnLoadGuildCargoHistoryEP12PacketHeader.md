# _ZN17CPacketTranslater23OnLoadGuildCargoHistoryEP12PacketHeader

`CPacketTranslater::OnLoadGuildCargoHistory(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8083b62` | `0x1c2` | `0x80795dc` | `0x1c9` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,116 +1,119 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x40,%esp
 mov    0x8(%ebp),%eax
-mov    %eax,-0x10(%ebp)
+mov    %eax,-0x18(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater23OnLoadGuildCargoHistoryEP12PacketHeader+0x52>
 movl   $0x1861,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater23OnLoadGuildCargoHistoryEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnLoadGuildCargoHistory : 0 == m_pclApp",0x8(%esp)
 movl   $"./log/GuildCargo",0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater23OnLoadGuildCargoHistoryEP12PacketHeader+0x1bb>
-mov    -0x10(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x290,%edx
+jmp    <T> <_ZN17CPacketTranslater23OnLoadGuildCargoHistoryEP12PacketHeader+0x1c2>
+mov    -0x18(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%eax
+mov    %eax,-0x14(%ebp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+lea    0x290(%eax),%edx
+mov    -0x14(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN13CGuildManager9FindGuildEj>
-mov    %eax,-0x14(%ebp)
-cmpl   $0x0,-0x14(%ebp)
+mov    %eax,-0x10(%ebp)
+cmpl   $0x0,-0x10(%ebp)
 sete   %al
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater23OnLoadGuildCargoHistoryEP12PacketHeader+0xb9>
+je     <T> <_ZN17CPacketTranslater23OnLoadGuildCargoHistoryEP12PacketHeader+0xc0>
 movl   $0x1868,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater23OnLoadGuildCargoHistoryEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnLoadGuildCargoHistory : 0 == pclGuild",0x8(%esp)
 movl   $"./log/GuildCargo",0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater23OnLoadGuildCargoHistoryEP12PacketHeader+0x1bb>
+jmp    <T> <_ZN17CPacketTranslater23OnLoadGuildCargoHistoryEP12PacketHeader+0x1c2>
+mov    -0x18(%ebp),%eax
+lea    0x12(%eax),%esi
+mov    -0x18(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%ebx
 mov    -0x10(%ebp),%eax
-lea    0x12(%eax),%esi
-mov    -0x10(%ebp),%eax
-mov    0xe(%eax),%ebx
-mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild13GetGuildCargoEv>
 mov    %esi,0x8(%esp)
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11CGuildCargo20SetGuildCargoHistoryEjP15STGuildCargoLog>
-jmp    <T> <_ZN17CPacketTranslater23OnLoadGuildCargoHistoryEP12PacketHeader+0x1bb>
+jmp    <T> <_ZN17CPacketTranslater23OnLoadGuildCargoHistoryEP12PacketHeader+0x1c2>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater23OnLoadGuildCargoHistoryEP12PacketHeader+0x161>
+jne    <T> <_ZN17CPacketTranslater23OnLoadGuildCargoHistoryEP12PacketHeader+0x168>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0xc(%ebp)
+movl   $0x1875,0x8(%esp)
+movl   $"OnLoadGuildCargoHistory",0x4(%esp)
+lea    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %eax,%ebx
-movl   $0x1875,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater23OnLoadGuildCargoHistoryEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnLoadGuildCargoHistory Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater23OnLoadGuildCargoHistoryEP12PacketHeader+0x15a>
+jmp    <T> <_ZN17CPacketTranslater23OnLoadGuildCargoHistoryEP12PacketHeader+0x161>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater23OnLoadGuildCargoHistoryEP12PacketHeader+0x1bb>
+jmp    <T> <_ZN17CPacketTranslater23OnLoadGuildCargoHistoryEP12PacketHeader+0x1c2>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x187a,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater23OnLoadGuildCargoHistoryEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnLoadGuildCargoHistory Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater23OnLoadGuildCargoHistoryEP12PacketHeader+0x1b6>
+jmp    <T> <_ZN17CPacketTranslater23OnLoadGuildCargoHistoryEP12PacketHeader+0x1bd>
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

/* CPacketTranslater::OnLoadGuildCargoHistory(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater23OnLoadGuildCargoHistoryEP12PacketHeader
               (PacketHeader *param_1)

{
  STGuildCargoLog *pSVar1;
  uint uVar2;
  CGuildCargo *this;
  CMyFileLog local_38 [8];
  CMyFileLog local_30 [24];
  CGuild *local_18;
  PacketHeader *local_14;
  
  local_14 = param_1;
  if (m_pclApp == 0) {
                    /* try { // try from 08083b8f to 08083c41 has its CatchHandler @ 08083c47 */
    CMyFileLog::CMyFileLog(local_38,"OnLoadGuildCargoHistory",0x1861);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_38,"./log/GuildCargo",
               "CPacketTranslater::OnLoadGuildCargoHistory : 0 == m_pclApp");
  }
  else {
    local_18 = (CGuild *)CGuildManager::_ZN13CGuildManager9FindGuildEj(m_pclApp + 0x290);
    if (local_18 == (CGuild *)0x0) {
      CMyFileLog::CMyFileLog(local_30,"OnLoadGuildCargoHistory",0x1868);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_30,"./log/GuildCargo",
                 "CPacketTranslater::OnLoadGuildCargoHistory : 0 == pclGuild");
    }
    else {
      pSVar1 = (STGuildCargoLog *)(local_14 + 0x12);
      uVar2 = *(uint *)(local_14 + 0xe);
      this = (CGuildCargo *)CGuild::GetGuildCargo(local_18);
      CGuildCargo::_ZN11CGuildCargo20SetGuildCargoHistoryEjP15STGuildCargoLog(this,uVar2,pSVar1);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 4345 行）：

```cpp
void CPacketTranslater::OnLoadGuildCargoHistory(PacketHeader* pkt)
{
    try
    {
        char* pb = (char*)pkt;
        if (m_pclApp == 0)
        {
            DNF_LOG_SCOPE_LINE(0x1861,"./log/GuildCargo",
                "CPacketTranslater::OnLoadGuildCargoHistory : 0 == m_pclApp");
            return;
        }
        unsigned int guildKey = *(unsigned int*)(pb + 0xa);
        CGuild* guild;
        if ((guild = (&m_pclApp->m_guildManager)->FindGuild(guildKey)) == 0)
        {
            DNF_LOG_SCOPE_LINE(0x1868,"./log/GuildCargo",
                "CPacketTranslater::OnLoadGuildCargoHistory : 0 == pclGuild");
            return;
        }
        guild->GetGuildCargo()->SetGuildCargoHistory(*(unsigned int*)(pb + 0xe),
                                                     (STGuildCargoLog*)(pb + 0x12));
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnLoadGuildCargoHistory", 0x1875);
        log("./log/Except",
            "CPacketTranslater::OnLoadGuildCargoHistory Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        CMyFileLog log(__FUNCTION__, 0x187a);
        log("./log/Except", "CPacketTranslater::OnLoadGuildCargoHistory Exception Break\n");
    }
}
```

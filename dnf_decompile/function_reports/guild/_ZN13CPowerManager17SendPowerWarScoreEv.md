# _ZN13CPowerManager17SendPowerWarScoreEv

`CPowerManager::SendPowerWarScore()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80a3972` | `0x19a` | `0x8099444` | `0x1cb` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,120 +1,133 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x5c,%esp
 mov    0x8(%ebp),%eax
-mov    0x4(%eax),%eax
+add    $0x4,%eax
+mov    (%eax),%eax
+mov    %eax,-0x20(%ebp)
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
 mov    %eax,-0x1c(%ebp)
 cmpl   $0x0,-0x1c(%ebp)
-sete   %al
-test   %al,%al
-je     <T> <_ZN13CPowerManager17SendPowerWarScoreEv+0x105>
-lea    -0x25(%ebp),%eax
+jne    <T> <_ZN13CPowerManager17SendPowerWarScoreEv+0x108>
+lea    -0x29(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x25(%ebp),%eax
+lea    -0x29(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CGuildManager::OnChangePowerWarScore() pclServerHandler == NULL\n",0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x2c(%ebp),%esi
+lea    -0x30(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN13CPowerManager17SendPowerWarScoreEv+0xa8>
+jmp    <T> <_ZN13CPowerManager17SendPowerWarScoreEv+0xab>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%esi
 mov    %ecx,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%ecx
 mov    %esi,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
-lea    -0x2c(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN13CPowerManager17SendPowerWarScoreEv+0xa2>
+jmp    <T> <_ZN13CPowerManager17SendPowerWarScoreEv+0xa5>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
-jne    <T> <_ZN13CPowerManager17SendPowerWarScoreEv+0xc7>
+jne    <T> <_ZN13CPowerManager17SendPowerWarScoreEv+0xca>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%ecx
 mov    %ebx,%eax
-jmp    <T> <_ZN13CPowerManager17SendPowerWarScoreEv+0xc7>
-lea    -0x2c(%ebp),%eax
+jmp    <T> <_ZN13CPowerManager17SendPowerWarScoreEv+0xca>
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN13CPowerManager17SendPowerWarScoreEv+0xe2>
+jmp    <T> <_ZN13CPowerManager17SendPowerWarScoreEv+0xe5>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
-jne    <T> <_ZN13CPowerManager17SendPowerWarScoreEv+0xc7>
+jne    <T> <_ZN13CPowerManager17SendPowerWarScoreEv+0xca>
 call   <T> <_ZSt9terminatev>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
-lea    -0x25(%ebp),%eax
+lea    -0x29(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
 mov    %ecx,(%esp)
 call   <T> <_Unwind_Resume>
-lea    -0x25(%ebp),%eax
+lea    -0x29(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
-lea    -0x3e(%ebp),%eax
+lea    -0x42(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN28Packet_Reply_Power_War_ScoreC1Ev>
+lea    -0x42(%ebp),%eax
+lea    0xa(%eax),%ebx
 movl   $0x1,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CPowerManager13GetPowerScoreE20ENUM_POWER_SIDE_TYPE>
-mov    %eax,-0x34(%ebp)
+mov    %eax,(%ebx)
+lea    -0x42(%ebp),%eax
+lea    0xe(%eax),%ebx
 movl   $0x2,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CPowerManager13GetPowerScoreE20ENUM_POWER_SIDE_TYPE>
-mov    %eax,-0x30(%ebp)
-lea    -0x3e(%ebp),%eax
+mov    %eax,(%ebx)
+lea    -0x42(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler20SendAllTcpGameServerEP12PacketHeader>
-mov    -0x30(%ebp),%esi
-mov    -0x34(%ebp),%ebx
+movl   $0x2,0x4(%esp)
+mov    0x8(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN13CPowerManager13GetPowerScoreE20ENUM_POWER_SIDE_TYPE>
+mov    %eax,%esi
+movl   $0x1,0x4(%esp)
+mov    0x8(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN13CPowerManager13GetPowerScoreE20ENUM_POWER_SIDE_TYPE>
+mov    %eax,%ebx
 movl   $0x75,0x8(%esp)
 movl   $&_ZZN13CPowerManager17SendPowerWarScoreEvE12__FUNCTION__,0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"Power Point : A(%d)  B(%d)",0x8(%esp)
 movl   $"./log/Power",0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 add    $0x5c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPowerManager::SendPowerWarScore() */

void __thiscall CPowerManager::_ZN13CPowerManager17SendPowerWarScoreEv(CPowerManager *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  CDNFException *this_00;
  Packet_Reply_Power_War_Score local_42 [10];
  undefined4 local_38;
  undefined4 local_34;
  string local_30 [7];
  allocator local_29;
  CMyFileLog local_28 [8];
  CServerHandler *local_20;
  
  local_20 = (CServerHandler *)CApplication::Get_ServerHandler(*(CApplication **)(this + 4));
  if (local_20 == (CServerHandler *)0x0) {
    std::allocator<char>::allocator();
                    /* try { // try from 080a39bb to 080a39bf has its CatchHandler @ 080a3a35 */
    std::string::string(local_30,"CGuildManager::OnChangePowerWarScore() pclServerHandler == NULL\n"
                        ,&local_29);
    this_00 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 080a39da to 080a39de has its CatchHandler @ 080a39e1 */
    CDNFException::CDNFException(this_00,local_30);
                    /* try { // try from 080a3a20 to 080a3a24 has its CatchHandler @ 080a3a27 */
    std::string::~string(local_30);
    std::allocator<char>::~allocator((allocator<char> *)&local_29);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this_00,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  Packet_Reply_Power_War_Score::Packet_Reply_Power_War_Score(local_42);
  local_38 = _ZN13CPowerManager13GetPowerScoreE20ENUM_POWER_SIDE_TYPE(this,1);
  local_34 = _ZN13CPowerManager13GetPowerScoreE20ENUM_POWER_SIDE_TYPE(this,2);
  CServerHandler::SendAllTcpGameServer(local_20,(PacketHeader *)local_42);
  uVar2 = local_34;
  uVar1 = local_38;
  CMyFileLog::CMyFileLog(local_28,"SendPowerWarScore",0x75);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
            (local_28,"./log/Power","Power Point : A(%d)  B(%d)",uVar1,uVar2);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/PowerManager.cpp](source/DNFServer/GameServer/Guild/PowerManager.cpp)（约第 143 行）：

```cpp
void CPowerManager::SendPowerWarScore()
{
    CApplication* app = *(CApplication**)((char*)this + 4);
    CServerHandler* handler = app->Get_ServerHandler();
    if (handler == 0)
    {
        throw CDNFException(
            "CGuildManager::OnChangePowerWarScore() pclServerHandler == NULL\n");
    }
    Packet_Reply_Power_War_Score pkt;
    *(unsigned int*)((char*)&pkt + 0xa) = (unsigned int)GetPowerScore((ENUM_POWER_SIDE_TYPE)1);
    *(unsigned int*)((char*)&pkt + 0xe) = (unsigned int)GetPowerScore((ENUM_POWER_SIDE_TYPE)2);
    handler->SendAllTcpGameServer(&pkt);
    DNF_LOG_SCOPE_LINE(0x75,"./log/Power", "Power Point : A(%d)  B(%d)",
        (int)GetPowerScore((ENUM_POWER_SIDE_TYPE)1),
        (int)GetPowerScore((ENUM_POWER_SIDE_TYPE)2));
}
```

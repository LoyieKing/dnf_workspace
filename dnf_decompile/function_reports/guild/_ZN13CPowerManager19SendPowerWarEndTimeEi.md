# _ZN13CPowerManager19SendPowerWarEndTimeEi

`CPowerManager::SendPowerWarEndTime(int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80a3b0c` | `0x164` | `0x8099db8` | `0x176` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,109 +1,116 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0x3c,%esp
+sub    $0x4c,%esp
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
-je     <T> <_ZN13CPowerManager19SendPowerWarEndTimeEi+0x105>
-lea    -0x1d(%ebp),%eax
+jne    <T> <_ZN13CPowerManager19SendPowerWarEndTimeEi+0x108>
+lea    -0x21(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x1d(%ebp),%eax
+lea    -0x21(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CGuildManager::OnChangePowerWarScore() pclServerHandler == NULL\n",0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x24(%ebp),%esi
+lea    -0x28(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN13CPowerManager19SendPowerWarEndTimeEi+0xa8>
+jmp    <T> <_ZN13CPowerManager19SendPowerWarEndTimeEi+0xab>
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
-lea    -0x24(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN13CPowerManager19SendPowerWarEndTimeEi+0xa2>
+jmp    <T> <_ZN13CPowerManager19SendPowerWarEndTimeEi+0xa5>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
-jne    <T> <_ZN13CPowerManager19SendPowerWarEndTimeEi+0xc7>
+jne    <T> <_ZN13CPowerManager19SendPowerWarEndTimeEi+0xca>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%ecx
 mov    %ebx,%eax
-jmp    <T> <_ZN13CPowerManager19SendPowerWarEndTimeEi+0xc7>
-lea    -0x24(%ebp),%eax
+jmp    <T> <_ZN13CPowerManager19SendPowerWarEndTimeEi+0xca>
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN13CPowerManager19SendPowerWarEndTimeEi+0xe2>
+jmp    <T> <_ZN13CPowerManager19SendPowerWarEndTimeEi+0xe5>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
-jne    <T> <_ZN13CPowerManager19SendPowerWarEndTimeEi+0xc7>
+jne    <T> <_ZN13CPowerManager19SendPowerWarEndTimeEi+0xca>
 call   <T> <_ZSt9terminatev>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
-lea    -0x1d(%ebp),%eax
+lea    -0x21(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
 mov    %ecx,(%esp)
 call   <T> <_Unwind_Resume>
-lea    -0x1d(%ebp),%eax
+lea    -0x21(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD2Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
-lea    -0x37(%ebp),%eax
+lea    -0x3b(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN32Packet_Notice_Power_War_End_TimeC1Ev>
+lea    -0x3b(%ebp),%eax
+lea    0xa(%eax),%edx
 mov    0xc(%ebp),%eax
-mov    %al,-0x2d(%ebp)
+mov    %al,(%edx)
+lea    -0x3b(%ebp),%eax
+lea    0xb(%eax),%ebx
 movl   $0x1,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CPowerManager13GetPowerScoreE20ENUM_POWER_SIDE_TYPE>
-mov    %eax,-0x2c(%ebp)
+mov    %eax,(%ebx)
+lea    -0x3b(%ebp),%eax
+lea    0xf(%eax),%ebx
 movl   $0x2,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CPowerManager13GetPowerScoreE20ENUM_POWER_SIDE_TYPE>
-mov    %eax,-0x28(%ebp)
-lea    -0x37(%ebp),%eax
+mov    %eax,(%ebx)
+lea    -0x3b(%ebp),%eax
 movl   $0x13,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler20SendAllUdpGameServerEPci>
-add    $0x3c,%esp
+add    $0x4c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPowerManager::SendPowerWarEndTime(int) */

void __thiscall
CPowerManager::_ZN13CPowerManager19SendPowerWarEndTimeEi(CPowerManager *this,int param_1)

{
  CDNFException *this_00;
  Packet_Notice_Power_War_End_Time local_3b [10];
  undefined1 local_31;
  undefined4 local_30;
  undefined4 local_2c;
  string local_28 [7];
  allocator local_21;
  CServerHandler *local_20;
  
  local_20 = (CServerHandler *)CApplication::Get_ServerHandler(*(CApplication **)(this + 4));
  if (local_20 == (CServerHandler *)0x0) {
    std::allocator<char>::allocator();
                    /* try { // try from 080a3b55 to 080a3b59 has its CatchHandler @ 080a3bcf */
    std::string::string(local_28,"CGuildManager::OnChangePowerWarScore() pclServerHandler == NULL\n"
                        ,&local_21);
    this_00 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 080a3b74 to 080a3b78 has its CatchHandler @ 080a3b7b */
    CDNFException::CDNFException(this_00,local_28);
                    /* try { // try from 080a3bba to 080a3bbe has its CatchHandler @ 080a3bc1 */
    std::string::~string(local_28);
    std::allocator<char>::~allocator((allocator<char> *)&local_21);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this_00,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  Packet_Notice_Power_War_End_Time::Packet_Notice_Power_War_End_Time(local_3b);
  local_31 = (undefined1)param_1;
  local_30 = _ZN13CPowerManager13GetPowerScoreE20ENUM_POWER_SIDE_TYPE(this,1);
  local_2c = _ZN13CPowerManager13GetPowerScoreE20ENUM_POWER_SIDE_TYPE(this,2);
  CServerHandler::SendAllUdpGameServer(local_20,(char *)local_3b,0x13);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/PowerManager.cpp](source/DNFServer/GameServer/Guild/PowerManager.cpp)（约第 161 行）：

```cpp
void CPowerManager::SendPowerWarEndTime(int time)
{
    CApplication* app = *(CApplication**)((char*)this + 4);
    CServerHandler* handler = app->Get_ServerHandler();
    if (handler == 0)
    {
        throw CDNFException(
            "CGuildManager::OnChangePowerWarScore() pclServerHandler == NULL\n");
    }
    Packet_Notice_Power_War_End_Time pkt;
    *(unsigned char*)((char*)&pkt + 0xa) = (unsigned char)time;
    *(unsigned int*)((char*)&pkt + 0xb) = (unsigned int)GetPowerScore((ENUM_POWER_SIDE_TYPE)1);
    *(unsigned int*)((char*)&pkt + 0xf) = (unsigned int)GetPowerScore((ENUM_POWER_SIDE_TYPE)2);
    handler->SendAllUdpGameServer((char*)&pkt, 0x13);
}
```

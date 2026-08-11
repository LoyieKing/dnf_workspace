# _ZN12momiji_event12EventManager16sendDeleteEffectEv

`momiji_event::EventManager::sendDeleteEffect()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x805c3b2` | `0x89` | `0x804b372` | `0x98` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,32 +1,37 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x38,%esp
 call   <T> <_Z20CApplicationInstancev>
+mov    %eax,-0x10(%ebp)
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication15Get_ServerGroupEv>
 movzbl %al,%eax
+mov    %eax,-0xc(%ebp)
+mov    -0xc(%ebp),%eax
+and    $0xff,%eax
 movl   $0x2,0x8(%esp)
 mov    %eax,0x4(%esp)
-lea    -0x22(%ebp),%eax
+lea    -0x1a(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN24Packet_Arad_DeleteEffectC1Eii>
-call   <T> <_Z20CApplicationInstancev>
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
-lea    -0x22(%ebp),%edx
+lea    -0x1a(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler20SendAllTcpGameServerEP12PacketHeader>
 movl   $0x9e,0x8(%esp)
 movl   $"sendDeleteEffect",0x4(%esp)
-lea    -0x10(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $0x2,0xc(%esp)
 movl   $"[Momiji] delete effect. (code:%u)",0x8(%esp)
 movl   $"./log/AradOnly",0x4(%esp)
-lea    -0x10(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* momiji_event::EventManager::sendDeleteEffect() */

void momiji_event::EventManager::_ZN12momiji_event12EventManager16sendDeleteEffectEv(void)

{
  CApplication *pCVar1;
  uint uVar2;
  CServerHandler *this;
  Packet_Arad_DeleteEffect local_26 [18];
  CMyFileLog local_14 [16];
  
  pCVar1 = (CApplication *)CApplicationInstance();
  uVar2 = CApplication::Get_ServerGroup(pCVar1);
  Packet_Arad_DeleteEffect::Packet_Arad_DeleteEffect(local_26,uVar2 & 0xff,2);
  pCVar1 = (CApplication *)CApplicationInstance();
  this = (CServerHandler *)CApplication::Get_ServerHandler(pCVar1);
  CServerHandler::SendAllTcpGameServer(this,(PacketHeader *)local_26);
  CMyFileLog::CMyFileLog(local_14,"sendDeleteEffect",0x9e);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
            (local_14,"./log/AradOnly","[Momiji] delete effect. (code:%u)",2);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/Arad_MomijiEvent.cpp](source/DNFServer/GameServer/Monitor/Arad_MomijiEvent.cpp)（约第 164 行）：

```cpp
void EventManager::sendDeleteEffect()
{
    CApplication* app = (CApplication*)CApplicationInstance();
    unsigned int group = (unsigned int)app->Get_ServerGroup();
    Packet_Arad_DeleteEffect pkt((int)(group & 0xff), 2);
    app->Get_ServerHandler()->SendAllTcpGameServer(&pkt);
    DNF_LOG_SCOPE_AT("sendDeleteEffect", 0x9e, "./log/AradOnly", "[Momiji] delete effect. (code:%u)", 2);
}
```

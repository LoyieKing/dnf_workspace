# _ZN12momiji_event12EventManager15sendApplyEffectEj

`momiji_event::EventManager::sendApplyEffect(unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x805c322` | `0x90` | `0x804b0aa` | `0x9d` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,34 +1,39 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x38,%esp
+sub    $0x48,%esp
 call   <T> <_Z20CApplicationInstancev>
+mov    %eax,-0x10(%ebp)
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication15Get_ServerGroupEv>
 movzbl %al,%eax
-mov    0xc(%ebp),%edx
-mov    %edx,0xc(%esp)
+mov    %eax,-0xc(%ebp)
+mov    -0xc(%ebp),%eax
+movzbl %al,%edx
+mov    0xc(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $0x2,0x8(%esp)
-mov    %eax,0x4(%esp)
+mov    %edx,0x4(%esp)
 lea    -0x26(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN23Packet_Arad_ApplyEffectC1Eiij>
-call   <T> <_Z20CApplicationInstancev>
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
 lea    -0x26(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler20SendAllTcpGameServerEP12PacketHeader>
 movl   $0x97,0x8(%esp)
 movl   $"sendApplyEffect",0x4(%esp)
-lea    -0x10(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $0x2,0xc(%esp)
 movl   $"[Momiji] apply effect. (code:%u)",0x8(%esp)
 movl   $"./log/AradOnly",0x4(%esp)
-lea    -0x10(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* momiji_event::EventManager::sendApplyEffect(unsigned int) */

void __thiscall
momiji_event::EventManager::_ZN12momiji_event12EventManager15sendApplyEffectEj
          (EventManager *this,uint param_1)

{
  CApplication *pCVar1;
  uint uVar2;
  CServerHandler *this_00;
  Packet_Arad_ApplyEffect local_2a [22];
  CMyFileLog local_14 [16];
  
  pCVar1 = (CApplication *)CApplicationInstance();
  uVar2 = CApplication::Get_ServerGroup(pCVar1);
  Packet_Arad_ApplyEffect::Packet_Arad_ApplyEffect(local_2a,uVar2 & 0xff,2,param_1);
  pCVar1 = (CApplication *)CApplicationInstance();
  this_00 = (CServerHandler *)CApplication::Get_ServerHandler(pCVar1);
  CServerHandler::SendAllTcpGameServer(this_00,(PacketHeader *)local_2a);
  CMyFileLog::CMyFileLog(local_14,"sendApplyEffect",0x97);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
            (local_14,"./log/AradOnly","[Momiji] apply effect. (code:%u)",2);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/Arad_MomijiEvent.cpp](source/DNFServer/GameServer/Monitor/Arad_MomijiEvent.cpp)（约第 117 行）：

```cpp
void EventManager::sendApplyEffect(unsigned int time)
{
    CApplication* app = (CApplication*)CApplicationInstance();
    unsigned int group = (unsigned int)app->Get_ServerGroup();
    Packet_Arad_ApplyEffect pkt(group & 0xff, 2, time);
    app->Get_ServerHandler()->SendAllTcpGameServer(&pkt);
    DNF_LOG_SCOPE_AT("sendApplyEffect", 0x97, "./log/AradOnly", "[Momiji] apply effect. (code:%u)", 2);
}
```

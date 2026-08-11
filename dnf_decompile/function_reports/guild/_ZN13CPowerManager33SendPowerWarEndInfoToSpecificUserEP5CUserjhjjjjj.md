# _ZN13CPowerManager33SendPowerWarEndInfoToSpecificUserEP5CUserjhjjjjj

`CPowerManager::SendPowerWarEndInfoToSpecificUser(CUser*, unsigned int, unsigned char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80a54d2` | `0x7d` | `0x809b3ae` | `0xaf` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,39 +1,60 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x58,%esp
+push   %ebx
+sub    $0x54,%esp
 mov    0x14(%ebp),%eax
 mov    %al,-0x3c(%ebp)
 lea    -0x33(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN32Packet_Notice_Power_war_End_InfoC1Ev>
 mov    0x8(%ebp),%eax
-mov    0x4(%eax),%eax
+add    $0x4,%eax
+mov    (%eax),%eax
+mov    %eax,-0xc(%ebp)
+mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication15GetPowerManagerEv>
-mov    %eax,-0xc(%ebp)
+lea    -0x33(%ebp),%eax
+lea    0xa(%eax),%ebx
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x29(%ebp)
+mov    %eax,(%ebx)
+lea    -0x33(%ebp),%eax
+lea    0xe(%eax),%edx
 mov    0x10(%ebp),%eax
-mov    %eax,-0x25(%ebp)
+mov    %eax,(%edx)
+lea    -0x33(%ebp),%eax
+lea    0x12(%eax),%edx
 movzbl -0x3c(%ebp),%eax
-mov    %al,-0x21(%ebp)
+mov    %al,(%edx)
+lea    -0x33(%ebp),%eax
+lea    0x13(%eax),%edx
 mov    0x18(%ebp),%eax
-mov    %eax,-0x20(%ebp)
+mov    %eax,(%edx)
+lea    -0x33(%ebp),%eax
+lea    0x17(%eax),%edx
 mov    0x1c(%ebp),%eax
-mov    %eax,-0x1c(%ebp)
+mov    %eax,(%edx)
+lea    -0x33(%ebp),%eax
+lea    0x1b(%eax),%edx
 mov    0x20(%ebp),%eax
-mov    %eax,-0x18(%ebp)
+mov    %eax,(%edx)
+lea    -0x33(%ebp),%eax
+lea    0x1f(%eax),%edx
 mov    0x24(%ebp),%eax
-mov    %eax,-0x14(%ebp)
+mov    %eax,(%edx)
+lea    -0x33(%ebp),%eax
+lea    0x23(%eax),%edx
 mov    0x28(%ebp),%eax
-mov    %eax,-0x10(%ebp)
+mov    %eax,(%edx)
 lea    -0x33(%ebp),%eax
 movl   $0x27,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser16SendToGameserverEPci>
-leave
+add    $0x54,%esp
+pop    %ebx
+pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPowerManager::SendPowerWarEndInfoToSpecificUser(CUser*, unsigned int, unsigned char, unsigned
   int, unsigned int, unsigned int, unsigned int, unsigned int) */

void __thiscall
CPowerManager::_ZN13CPowerManager33SendPowerWarEndInfoToSpecificUserEP5CUserjhjjjjj
          (CPowerManager *this,CUser *param_1,uint param_2,uchar param_3,uint param_4,uint param_5,
          uint param_6,uint param_7,uint param_8)

{
  Packet_Notice_Power_war_End_Info local_37 [10];
  undefined4 local_2d;
  uint local_29;
  uchar local_25;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  undefined4 local_10;
  
  Packet_Notice_Power_war_End_Info::Packet_Notice_Power_war_End_Info(local_37);
  local_10 = CApplication::GetPowerManager(*(CApplication **)(this + 4));
  local_2d = CUser::GetIdByChannel(param_1);
  local_29 = param_2;
  local_24 = param_4;
  local_20 = param_5;
  local_1c = param_6;
  local_18 = param_7;
  local_14 = param_8;
  local_25 = param_3;
  CUser::SendToGameserver(param_1,(char *)local_37,0x27);
  return;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/Guild/PowerManager.cpp, source/DNFServer/GameServer/Guild/BlackUser.h, source/DNFServer/GameServer/Guild/CashObject.h, source/DNFServer/GameServer/Guild/DNFAppConfig.h, source/DNFServer/GameServer/Guild/DNFAppStartInit.h, source/DNFServer/GameServer/Guild/DNFAppStopInit.h, source/DNFServer/GameServer/Guild/DNFApplication.h, source/DNFServer/GameServer/Guild/DNFDBServer.h 等 289 个文件*

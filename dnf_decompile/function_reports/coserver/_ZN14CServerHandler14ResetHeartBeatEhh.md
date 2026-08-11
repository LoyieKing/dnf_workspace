# _ZN14CServerHandler14ResetHeartBeatEhh

`CServerHandler::ResetHeartBeat(unsigned char, unsigned char)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| coserver | DIFF | `0x80567ea` | `0xd7` | `0x805466e` | `0xd0` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,70 +1,65 @@
 push   %ebp
 mov    %esp,%ebp
-push   %esi
-push   %ebx
-sub    $0x40,%esp
+sub    $0x48,%esp
 mov    0xc(%ebp),%edx
 mov    0x10(%ebp),%eax
 mov    %dl,-0x1c(%ebp)
 mov    %al,-0x20(%ebp)
 cmpb   $0xff,-0x20(%ebp)
-je     <T> <_ZN14CServerHandler14ResetHeartBeatEhh+0x55>
+je     <T> <_ZN14CServerHandler14ResetHeartBeatEhh+0x53>
 cmpb   $0x64,-0x1c(%ebp)
-ja     <T> <_ZN14CServerHandler14ResetHeartBeatEhh+0x55>
+ja     <T> <_ZN14CServerHandler14ResetHeartBeatEhh+0x53>
 movzbl -0x1c(%ebp),%edx
 mov    %edx,%eax
 shl    $0x8,%eax
 mov    %eax,%ecx
 sub    %edx,%ecx
 mov    %ecx,%edx
 movzbl -0x20(%ebp),%eax
 add    %eax,%edx
 mov    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
 shl    $0x2,%eax
 add    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11CGameServer13IsValidServerEv>
 test   %al,%al
-je     <T> <_ZN14CServerHandler14ResetHeartBeatEhh+0x55>
+je     <T> <_ZN14CServerHandler14ResetHeartBeatEhh+0x53>
 mov    $0x1,%eax
-jmp    <T> <_ZN14CServerHandler14ResetHeartBeatEhh+0x5a>
+jmp    <T> <_ZN14CServerHandler14ResetHeartBeatEhh+0x58>
 mov    $0x0,%eax
 test   %al,%al
-je     <T> <_ZN14CServerHandler14ResetHeartBeatEhh+0x8a>
+je     <T> <_ZN14CServerHandler14ResetHeartBeatEhh+0x88>
 movzbl -0x1c(%ebp),%edx
 mov    %edx,%eax
 shl    $0x8,%eax
 mov    %eax,%ecx
 sub    %edx,%ecx
 mov    %ecx,%edx
 movzbl -0x20(%ebp),%eax
 add    %eax,%edx
 mov    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
 shl    $0x2,%eax
 add    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11CGameServer14ResetHeartBeatEv>
-jmp    <T> <_ZN14CServerHandler14ResetHeartBeatEhh+0xd0>
-movzbl -0x1c(%ebp),%esi
-movzbl -0x20(%ebp),%ebx
+jmp    <T> <_ZN14CServerHandler14ResetHeartBeatEhh+0xce>
 movl   $0x7a,0x8(%esp)
 movl   $&_ZZN14CServerHandler14ResetHeartBeatEhhE12__FUNCTION__,0x4(%esp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+movzbl -0x1c(%ebp),%edx
+movzbl -0x20(%ebp),%eax
+mov    %edx,0x10(%esp)
+mov    %eax,0xc(%esp)
 movl   $"CServerHandler::ResetHeartBeat\tGame Server Index Over(%d), Group Index Over(%d)",0x8(%esp)
 movl   $"./log/GameServer",0x4(%esp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-add    $0x40,%esp
-pop    %ebx
-pop    %esi
-pop    %ebp
+leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CServerHandler::ResetHeartBeat(unsigned char, unsigned char) */

void __thiscall
CServerHandler::_ZN14CServerHandler14ResetHeartBeatEhh
          (CServerHandler *this,uchar param_1,uchar param_2)

{
  bool bVar1;
  char cVar2;
  CMyFileLog local_14 [8];
  
  if ((param_2 != 0xff) && (param_1 < 0x65)) {
    cVar2 = CGameServer::IsValidServer
                      ((CGameServer *)(this + ((uint)param_1 * 0xff + (uint)param_2) * 0x14));
    if (cVar2 != '\0') {
      bVar1 = true;
      goto LAB_08056844;
    }
  }
  bVar1 = false;
LAB_08056844:
  if (bVar1) {
    CGameServer::ResetHeartBeat
              ((CGameServer *)(this + ((uint)param_1 * 0xff + (uint)param_2) * 0x14));
  }
  else {
    CMyFileLog::CMyFileLog(local_14,"ResetHeartBeat",0x7a);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_14,"./log/GameServer",
               "CServerHandler::ResetHeartBeat\tGame Server Index Over(%d), Group Index Over(%d)",
               (uint)param_2,(uint)param_1);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/COServer/DNFServerHandler.cpp](source/DNFServer/GameServer/COServer/DNFServerHandler.cpp)（约第 81 行）：

```cpp
void CServerHandler::ResetHeartBeat(unsigned char group, unsigned char index)
{
    if (index != 0xff && group < 0x65 &&
        m_servers[(int)group * 0xff + (int)index].IsValidServer())
    {
        m_servers[(int)group * 0xff + (int)index].ResetHeartBeat();
    }
    else
    {
        DNF_LOG_SCOPE_LINE(0x7a,"./log/GameServer",
            "CServerHandler::ResetHeartBeat\tGame Server Index Over(%d), Group Index Over(%d)",
            (int)index, (int)group);
    }
}
```

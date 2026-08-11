# _ZN13CPacketTracer16AbsoluteWriteLogEv

`CPacketTracer::AbsoluteWriteLog()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x807108c` | `0x62` | `0x8067b40` | `0x5b` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,27 +1,23 @@
 push   %ebp
 mov    %esp,%ebp
-push   %ebx
-sub    $0x24,%esp
-mov    0x8(%ebp),%eax
-add    $0x4,%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSs5c_strEv>
-mov    %eax,%ebx
+sub    $0x28,%esp
 movl   $0x32,0x8(%esp)
 movl   $"AbsoluteWriteLog",0x4(%esp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    0x8(%ebp),%eax
+add    $0x4,%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSs5c_strEv>
+mov    %eax,0xc(%esp)
 movl   $"[TRACE_PACKET] Packet Code : %s\n",0x8(%esp)
 movl   $"./log/packet_trace",0x4(%esp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CPacketTracer8ResetLogEv>
-add    $0x24,%esp
-pop    %ebx
-pop    %ebp
+leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTracer::AbsoluteWriteLog() */

void __thiscall CPacketTracer::_ZN13CPacketTracer16AbsoluteWriteLogEv(CPacketTracer *this)

{
  undefined4 uVar1;
  CMyFileLog local_14 [12];
  
  uVar1 = std::string::c_str((string *)(this + 4));
  CMyFileLog::CMyFileLog(local_14,"AbsoluteWriteLog",0x32);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
            (local_14,"./log/packet_trace","[TRACE_PACKET] Packet Code : %s\n",uVar1);
  ResetLog(this);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/COServer/DNFPacketTracer.cpp](source/DNFServer/GameServer/COServer/DNFPacketTracer.cpp)（约第 53 行）：

```cpp
void CPacketTracer::AbsoluteWriteLog()
{
    register const char* s = m_log.c_str();
    DNF_LOG_SCOPE_LINE(0x32, "./log/packet_trace", "[TRACE_PACKET] Packet Code : %s\n", s);
    ResetLog();
}
```

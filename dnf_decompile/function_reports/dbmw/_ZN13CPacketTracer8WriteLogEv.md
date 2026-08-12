# _ZN13CPacketTracer8WriteLogEv

`CPacketTracer::WriteLog()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x8092726` | `0x86` | `0x80ce6b8` | `0x92` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,42 +1,47 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x24,%esp
 mov    0x8(%ebp),%eax
 mov    (%eax),%ecx
 mov    $0x88888889,%edx
 mov    %ecx,%eax
-mul    %edx
-mov    %edx,%eax
-shr    $0x4,%eax
+imul   %edx
+lea    (%edx,%ecx,1),%eax
+mov    %eax,%edx
+sar    $0x4,%edx
+mov    %ecx,%eax
+sar    $0x1f,%eax
+mov    %edx,%ebx
+sub    %eax,%ebx
+mov    %ebx,%eax
 add    %eax,%eax
 mov    %eax,%edx
 shl    $0x4,%edx
 sub    %eax,%edx
 mov    %ecx,%eax
 sub    %edx,%eax
 test   %eax,%eax
-jne    <T> <_ZN13CPacketTracer8WriteLogEv+0x80>
-mov    0x8(%ebp),%eax
-add    $0x4,%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSs5c_strEv>
-mov    %eax,%ebx
+jne    <T> <_ZN13CPacketTracer8WriteLogEv+0x8c>
 movl   $0x37,0x8(%esp)
 movl   $&_ZZN13CPacketTracer8WriteLogEvE12__FUNCTION__,0x4(%esp)
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
 add    $0x24,%esp
 pop    %ebx
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTracer::WriteLog() */

void __thiscall CPacketTracer::_ZN13CPacketTracer8WriteLogEv(CPacketTracer *this)

{
  undefined4 uVar1;
  CMyFileLog local_14 [12];
  
  if (*(uint *)this == (*(uint *)this / 0x1e) * 0x1e) {
    uVar1 = std::string::c_str((string *)(this + 4));
    CMyFileLog::CMyFileLog(local_14,"WriteLog",0x37);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_14,"./log/packet_trace","[TRACE_PACKET] Packet Code : %s\n",uVar1);
    ResetLog(this);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFPacketTracer.cpp](source/DNFServer/GameServer/DBMW/DNFPacketTracer.cpp)（约第 36 行）：

```cpp
void CPacketTracer::WriteLog()
{
    if (*(unsigned int*)&m_field0 % 30 == 0)
    {
        register const char* p = m_log.c_str();
        CMyFileLog log(__FUNCTION__, 0x37);
        log("./log/packet_trace", "[TRACE_PACKET] Packet Code : %s\n", p);
        ResetLog();
    }
}
```

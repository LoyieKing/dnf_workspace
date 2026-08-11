# _ZN7CSignal14dump_core_fileEv

`CSignal::dump_core_file()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x8053e92` | `0x4b` | `0x80e0ea0` | `0x45` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,18 +1,16 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 call   <T> <_Z21CPacketTracerInstancev>
 mov    %eax,(%esp)
 call   <T> <_ZN13CPacketTracer16AbsoluteWriteLogEv>
-lea    -0x14(%ebp),%eax
+lea    -0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
 movl   $0x4,(%esp)
 call   <T> <getrlimit>
-mov    %eax,-0xc(%ebp)
-movl   $0xffffffff,-0x14(%ebp)
-lea    -0x14(%ebp),%eax
+movl   $0xffffffff,-0x10(%ebp)
+lea    -0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
 movl   $0x4,(%esp)
 call   <T> <setrlimit>
-mov    %eax,-0xc(%ebp)
 call   <T> <abort>
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Enum "__rlimit_resource": Some values do not have unique names */
/* CSignal::dump_core_file() */

void CSignal::_ZN7CSignal14dump_core_fileEv(void)

{
  CPacketTracer *this;
  rlimit local_18;
  int local_10;
  
  this = (CPacketTracer *)CPacketTracerInstance();
  CPacketTracer::_ZN13CPacketTracer16AbsoluteWriteLogEv(this);
  local_10 = getrlimit(RLIMIT_CORE,&local_18);
  local_18.rlim_cur = 0xffffffff;
  local_10 = setrlimit(RLIMIT_CORE,&local_18);
                    /* WARNING: Subroutine does not return */
  abort();
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFSignal.cpp](source/DNFServer/GameServer/DBMW/DNFSignal.cpp)（约第 36 行）：

```cpp
void CSignal::dump_core_file()
{
    CPacketTracerInstance()->AbsoluteWriteLog();
    struct rlimit rl;
    getrlimit(RLIMIT_CORE, &rl);
    rl.rlim_cur = -1;
    setrlimit(RLIMIT_CORE, &rl);
    abort();
}
```

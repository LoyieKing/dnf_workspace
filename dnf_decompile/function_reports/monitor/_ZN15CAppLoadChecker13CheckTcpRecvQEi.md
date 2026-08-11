# _ZN15CAppLoadChecker13CheckTcpRecvQEi

`CAppLoadChecker::CheckTcpRecvQ(int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x806c66e` | `0x3c` | `0x809c952` | `0x41` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,20 +1,22 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN15CAppLoadChecker16checkTcpRecvLoadEi>
+test   %eax,%eax
+setne  %al
 test   %al,%al
-je     <T> <_ZN15CAppLoadChecker13CheckTcpRecvQEi+0x35>
+je     <T> <_ZN15CAppLoadChecker13CheckTcpRecvQEi+0x3a>
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN15CAppLoadChecker15setTcpRecvQueueEi>
 mov    $0x1,%eax
-jmp    <T> <_ZN15CAppLoadChecker13CheckTcpRecvQEi+0x3a>
+jmp    <T> <_ZN15CAppLoadChecker13CheckTcpRecvQEi+0x3f>
 mov    $0x0,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CAppLoadChecker::CheckTcpRecvQ(int) */

bool __thiscall
CAppLoadChecker::_ZN15CAppLoadChecker13CheckTcpRecvQEi(CAppLoadChecker *this,int param_1)

{
  char cVar1;
  
  cVar1 = checkTcpRecvLoad(this,param_1);
  if (cVar1 != '\0') {
    setTcpRecvQueue(this,param_1);
  }
  return cVar1 != '\0';
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/ServerLoadChecker.cpp](source/DNFServer/GameServer/DBMW/ServerLoadChecker.cpp)（约第 45 行）：

```cpp
bool CAppLoadChecker::CheckTcpRecvQ(int size)
{
    if (checkTcpRecvLoad(size))
    {
        setTcpRecvQueue(size);
        return 1;
    }
    return 0;
}
```

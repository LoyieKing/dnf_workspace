# _ZN11ServiceInfo14setPIDFileNameEPKc

`ServiceInfo::setPIDFileName(char const*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| relay | DIFF | `0x804ca9a` | `0x44` | `0x804eebc` | `0x43` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,19 +1,19 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 cmpl   $0x0,0xc(%ebp)
-je     <T> <_ZN11ServiceInfo14setPIDFileNameEPKc+0x38>
+je     <T> <_ZN11ServiceInfo14setPIDFileNameEPKc+0x37>
 mov    0x8(%ebp),%eax
-lea    0x500(%eax),%edx
+add    $0x500,%eax
 movl   $0xff,0x8(%esp)
-mov    0xc(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
+mov    0xc(%ebp),%edx
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
 call   <T> <strncpy>
 mov    0x8(%ebp),%eax
 movb   $0x0,0x5ff(%eax)
-jmp    <T> <_ZN11ServiceInfo14setPIDFileNameEPKc+0x42>
+jmp    <T> <_ZN11ServiceInfo14setPIDFileNameEPKc+0x41>
 mov    0x8(%ebp),%eax
 movb   $0x0,0x500(%eax)
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* ServiceInfo::setPIDFileName(char const*) */

void __thiscall ServiceInfo::_ZN11ServiceInfo14setPIDFileNameEPKc(ServiceInfo *this,char *param_1)

{
  if (param_1 == (char *)0x0) {
    this[0x500] = (ServiceInfo)0x0;
  }
  else {
    strncpy((char *)(this + 0x500),param_1,0xff);
    this[0x5ff] = (ServiceInfo)0x0;
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Relay/LinuxService.cpp](source/DNFServer/GameServer/Relay/LinuxService.cpp)（约第 20 行）：

```cpp
void ServiceInfo::setPIDFileName(const char* fn)
{
    if (fn != 0)
    {
        strncpy(m_pidFileName, fn, 0xff);
        m_pidFileName[0xff] = 0;
    }
    else
    {
        m_pidFileName[0] = 0;
    }
}
```

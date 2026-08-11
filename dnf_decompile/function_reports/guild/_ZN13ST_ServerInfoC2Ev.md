# _ZN13ST_ServerInfoC2Ev

`ST_ServerInfo::ST_ServerInfo()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8065340` | `0x33` | `0x8080cc8` | `0x33` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,17 +1,17 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
+mov    0x8(%ebp),%eax
+add    $0x4,%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsC1Ev>
 mov    0x8(%ebp),%eax
 movb   $0x0,(%eax)
 mov    0x8(%ebp),%eax
 movb   $0x0,0x1(%eax)
 mov    0x8(%ebp),%eax
 movb   $0xff,0x2(%eax)
 mov    0x8(%ebp),%eax
-add    $0x4,%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsC1Ev>
-mov    0x8(%ebp),%eax
 movw   $0x0,0x8(%eax)
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* ST_ServerInfo::ST_ServerInfo() */

void __thiscall ST_ServerInfo::_ZN13ST_ServerInfoC2Ev(ST_ServerInfo *this)

{
  *this = (ST_ServerInfo)0x0;
  this[1] = (ST_ServerInfo)0x0;
  this[2] = (ST_ServerInfo)0xff;
  std::string::string((string *)(this + 4));
  *(undefined2 *)(this + 8) = 0;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/COServer/DNFServerConfig.cpp](source/DNFServer/GameServer/COServer/DNFServerConfig.cpp)（约第 58 行）：

```cpp
ST_ServerInfo::ST_ServerInfo()
    : m_field0(0), m_field1(0), m_field2(0xff), m_ushort(0)
{
}
```

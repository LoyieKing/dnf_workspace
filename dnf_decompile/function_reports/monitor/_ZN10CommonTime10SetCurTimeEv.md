# _ZN10CommonTime10SetCurTimeEv

`CommonTime::SetCurTime()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8066978` | `0x7a` | `0x809fd34` | `0x76` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,44 +1,42 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <time>
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <localtime>
 mov    %eax,-0xc(%ebp)
 mov    -0xc(%ebp),%eax
 mov    0x14(%eax),%eax
-sub    $0x64,%eax
-mov    %eax,%edx
+lea    -0x64(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %dl,(%eax)
 mov    -0xc(%ebp),%eax
 mov    0x10(%eax),%eax
-add    $0x1,%eax
-mov    %eax,%edx
+lea    0x1(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %dl,0x1(%eax)
 mov    -0xc(%ebp),%eax
 mov    0xc(%eax),%eax
 mov    %eax,%edx
 mov    0x8(%ebp),%eax
 mov    %dl,0x2(%eax)
 mov    -0xc(%ebp),%eax
 mov    0x8(%eax),%eax
 mov    %eax,%edx
 mov    0x8(%ebp),%eax
 mov    %dl,0x3(%eax)
 mov    -0xc(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %eax,%edx
 mov    0x8(%ebp),%eax
 mov    %dl,0x4(%eax)
 mov    -0xc(%ebp),%eax
 mov    0x18(%eax),%eax
 mov    %eax,%edx
 mov    0x8(%ebp),%eax
 mov    %dl,0x5(%eax)
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CommonTime::SetCurTime() */

void __thiscall CommonTime::_ZN10CommonTime10SetCurTimeEv(CommonTime *this)

{
  tm *ptVar1;
  time_t local_14 [4];
  
  time(local_14);
  ptVar1 = localtime(local_14);
  *this = (CommonTime)((char)ptVar1->tm_year + -100);
  this[1] = (CommonTime)((char)ptVar1->tm_mon + '\x01');
  this[2] = SUB41(ptVar1->tm_mday,0);
  this[3] = SUB41(ptVar1->tm_hour,0);
  this[4] = SUB41(ptVar1->tm_min,0);
  this[5] = SUB41(ptVar1->tm_wday,0);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/SystemTimeHandler.cpp](source/DNFServer/GameServer/Monitor/SystemTimeHandler.cpp)（约第 30 行）：

```cpp
void CommonTime::SetCurTime()
{
    time_t t;
    time(&t);
    tm* p = localtime(&t);
    m_field0 = (unsigned char)(p->tm_year - 100);
    m_field1 = (unsigned char)(p->tm_mon + 1);
    m_field2 = (unsigned char)(p->tm_mday);
    m_field3 = (unsigned char)(p->tm_hour);
    m_field4 = (unsigned char)(p->tm_min);
    m_field5 = (unsigned char)(p->tm_wday);
}
```

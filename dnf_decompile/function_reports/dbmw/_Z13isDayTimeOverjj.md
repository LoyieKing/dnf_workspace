# _Z13isDayTimeOverjj

`isDayTimeOver(unsigned int, unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x8087b90` | `0x7f` | `0x804c45c` | `0x85` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,43 +1,45 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x58,%esp
-lea    -0x10(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <time>
-lea    -0x10(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <localtime>
+mov    %eax,-0x10(%ebp)
+mov    -0x10(%ebp),%eax
 mov    (%eax),%edx
+mov    %edx,-0x40(%ebp)
+mov    0x4(%eax),%edx
 mov    %edx,-0x3c(%ebp)
-mov    0x4(%eax),%edx
+mov    0x8(%eax),%edx
 mov    %edx,-0x38(%ebp)
-mov    0x8(%eax),%edx
+mov    0xc(%eax),%edx
 mov    %edx,-0x34(%ebp)
-mov    0xc(%eax),%edx
+mov    0x10(%eax),%edx
 mov    %edx,-0x30(%ebp)
-mov    0x10(%eax),%edx
+mov    0x14(%eax),%edx
 mov    %edx,-0x2c(%ebp)
-mov    0x14(%eax),%edx
+mov    0x18(%eax),%edx
 mov    %edx,-0x28(%ebp)
-mov    0x18(%eax),%edx
+mov    0x1c(%eax),%edx
 mov    %edx,-0x24(%ebp)
-mov    0x1c(%eax),%edx
+mov    0x20(%eax),%edx
 mov    %edx,-0x20(%ebp)
-mov    0x20(%eax),%edx
+mov    0x24(%eax),%edx
 mov    %edx,-0x1c(%ebp)
-mov    0x24(%eax),%edx
-mov    %edx,-0x18(%ebp)
 mov    0x28(%eax),%eax
-mov    %eax,-0x14(%ebp)
-mov    -0x30(%ebp),%eax
+mov    %eax,-0x18(%ebp)
+mov    -0x34(%ebp),%eax
 sub    0xc(%ebp),%eax
-mov    %eax,-0x30(%ebp)
-lea    -0x3c(%ebp),%eax
+mov    %eax,-0x34(%ebp)
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <mktime>
 mov    %eax,-0xc(%ebp)
 mov    0x8(%ebp),%eax
 cmp    -0xc(%ebp),%eax
 setl   %al
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* isDayTimeOver(unsigned int, unsigned int) */

bool isDayTimeOver(uint param_1,uint param_2)

{
  tm *ptVar1;
  time_t tVar2;
  tm local_40;
  time_t local_14 [4];
  
  time(local_14);
  ptVar1 = localtime(local_14);
  local_40.tm_sec = ptVar1->tm_sec;
  local_40.tm_min = ptVar1->tm_min;
  local_40.tm_hour = ptVar1->tm_hour;
  local_40.tm_mon = ptVar1->tm_mon;
  local_40.tm_year = ptVar1->tm_year;
  local_40.tm_wday = ptVar1->tm_wday;
  local_40.tm_yday = ptVar1->tm_yday;
  local_40.tm_isdst = ptVar1->tm_isdst;
  local_40.tm_gmtoff = ptVar1->tm_gmtoff;
  local_40.tm_zone = ptVar1->tm_zone;
  local_40.tm_mday = ptVar1->tm_mday - param_2;
  tVar2 = mktime(&local_40);
  return (int)param_1 < tVar2;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/CMisc.cpp](source/DNFServer/GameServer/DBMW/CMisc.cpp)（约第 79 行）：

```cpp
char isDayTimeOver(unsigned int timestamp, unsigned int days)
{
    struct tm t;
    time_t now;
    time(&now);
    struct tm* p = localtime(&now);
    t = *p;
    t.tm_mday -= days;
    time_t limit = mktime(&t);
    return (int)timestamp < (int)limit;
}
```

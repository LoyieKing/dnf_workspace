# _ZN6CMySql9set_queryEjPcz

`CMySql::set_query(unsigned int, char*, ...)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x808d420` | `0x7d` | `0x80c8ad2` | `0x77` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,37 +1,35 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 lea    0x14(%ebp),%eax
-mov    %eax,-0x14(%ebp)
-mov    -0x14(%ebp),%eax
+mov    %eax,-0x10(%ebp)
+mov    -0x10(%ebp),%eax
 mov    0x8(%ebp),%edx
 add    $0x78,%edx
 mov    %eax,0x8(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <vsprintf>
 mov    0x8(%ebp),%eax
 add    $0x78,%eax
 mov    %eax,(%esp)
 call   <T> <strlen>
-mov    %eax,-0x10(%ebp)
-cmpl   $0x5fff,-0x10(%ebp)
+mov    %eax,-0xc(%ebp)
+cmpl   $0x5fff,-0xc(%ebp)
 jle    <T> <_ZN6CMySql9set_queryEjPcz+0x49>
 mov    $0x0,%eax
-jmp    <T> <_ZN6CMySql9set_queryEjPcz+0x7b>
+jmp    <T> <_ZN6CMySql9set_queryEjPcz+0x75>
+mov    -0xc(%ebp),%edx
 mov    0x8(%ebp),%eax
-mov    -0x10(%ebp),%edx
 mov    %edx,0x42084(%eax)
 call   <T> <_Z21CQueryCounterInstancev>
-mov    %eax,-0xc(%ebp)
-mov    0x10(%ebp),%eax
-mov    %eax,0x8(%esp)
-mov    0xc(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0xc(%ebp),%eax
+mov    0x10(%ebp),%edx
+mov    %edx,0x8(%esp)
+mov    0xc(%ebp),%edx
+mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CQueryCounter15IncreQureyCountEjPKc>
 mov    $0x1,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CMySql::set_query(unsigned int, char*, ...) */

bool __thiscall CMySql::_ZN6CMySql9set_queryEjPcz(CMySql *this,uint param_1,char *param_2,...)

{
  size_t sVar1;
  CQueryCounter *this_00;
  
  vsprintf((char *)(this + 0x78),param_2,&stack0x00000010);
  sVar1 = strlen((char *)(this + 0x78));
  if ((int)sVar1 < 0x6000) {
    *(size_t *)(this + 0x42084) = sVar1;
    this_00 = (CQueryCounter *)CQueryCounterInstance();
    CQueryCounter::_ZN13CQueryCounter15IncreQureyCountEjPKc(this_00,param_1,param_2);
  }
  return (int)sVar1 < 0x6000;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFMySql.cpp](source/DNFServer/GameServer/DBMW/DNFMySql.cpp)（约第 234 行）：

```cpp
bool CMySql::set_query(unsigned int q, char* fmt, ...)
{
    va_list ap;
    va_start(ap, fmt);
    vsprintf(m_query, fmt, ap);
    va_end(ap);
    int len = strlen(m_query);
    if (len >= 0x6000)
        return 0;
    m_queryLen = len;
    CQueryCounterInstance()->IncreQureyCount(q, fmt);
    return 1;
}
```

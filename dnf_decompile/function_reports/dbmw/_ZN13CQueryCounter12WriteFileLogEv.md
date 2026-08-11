# _ZN13CQueryCounter12WriteFileLogEv

`CQueryCounter::WriteFileLog()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x808e3ea` | `0xbe` | `0x8099bb0` | `0xbc` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,48 +1,42 @@
 push   %ebp
 mov    %esp,%ebp
-push   %edi
-push   %ebx
-sub    $0x430,%esp
-lea    -0x414(%ebp),%ebx
-mov    $0x0,%eax
-mov    $0x100,%edx
-mov    %ebx,%edi
-mov    %edx,%ecx
-rep stos %eax,%es:(%edi)
+sub    $0x438,%esp
+movl   $0x400,0x8(%esp)
+movl   $0x0,0x4(%esp)
+lea    -0x414(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <memset>
 movl   $0x1,-0xc(%ebp)
-jmp    <T> <_ZN13CQueryCounter12WriteFileLogEv+0x66>
+jmp    <T> <_ZN13CQueryCounter12WriteFileLogEv+0x6c>
 mov    -0xc(%ebp),%edx
 mov    0x8(%ebp),%eax
 add    $0x50,%edx
 mov    0x8(%eax,%edx,4),%eax
 mov    %eax,0x10(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
 lea    -0x414(%ebp),%eax
 mov    %eax,0x8(%esp)
-movl   $"%s\t%d(%d)",0x4(%esp)
+movl   $&data#21e6c627(.rodata),0x4(%esp)
 lea    -0x414(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <sprintf>
 addl   $0x1,-0xc(%ebp)
 cmpl   $0x140,-0xc(%ebp)
 setle  %al
 test   %al,%al
-jne    <T> <_ZN13CQueryCounter12WriteFileLogEv+0x2a>
+jne    <T> <_ZN13CQueryCounter12WriteFileLogEv+0x30>
 movl   $0x68,0x8(%esp)
 movl   $"WriteFileLog",0x4(%esp)
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 lea    -0x414(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"%s",0x8(%esp)
 movl   $"./log/QueryCount",0x4(%esp)
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-add    $0x430,%esp
-pop    %ebx
-pop    %edi
-pop    %ebp
+leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CQueryCounter::WriteFileLog() */

void __thiscall CQueryCounter::_ZN13CQueryCounter12WriteFileLogEv(CQueryCounter *this)

{
  int iVar1;
  char *pcVar2;
  char local_418 [1024];
  CMyFileLog local_18 [8];
  int local_10;
  
  pcVar2 = local_418;
  for (iVar1 = 0x100; iVar1 != 0; iVar1 = iVar1 + -1) {
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2 = pcVar2 + 4;
  }
  for (local_10 = 1; local_10 < 0x141; local_10 = local_10 + 1) {
    sprintf(local_418,"%s\t%d(%d)",local_418,local_10,
            *(undefined4 *)(this + (local_10 + 0x50) * 4 + 8));
  }
  CMyFileLog::CMyFileLog(local_18,"WriteFileLog",0x68);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z(local_18,"./log/QueryCount","%s",local_418);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/QueryCounter.cpp](source/DNFServer/GameServer/DBMW/QueryCounter.cpp)（约第 46 行）：

```cpp
void CQueryCounter::WriteFileLog()
{
    char buf[0x400];
    memset(buf, 0, 0x400);
    for (int i = 1; i <= 0x140; i++)
        sprintf(buf, "\t%d(%d)", buf, i, m_counts[i]);
    CMyFileLog log("WriteFileLog", 0x68);
    log("./log/QueryCount", "%s", buf);
}
```

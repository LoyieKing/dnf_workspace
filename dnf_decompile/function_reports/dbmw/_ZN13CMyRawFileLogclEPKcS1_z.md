# _ZN13CMyRawFileLogclEPKcS1_z

`CMyRawFileLog::operator()(char const*, char const*, ...)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x8066ca0` | `0x6a` | `0x8071d02` | `0x69` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,27 +1,26 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x7028,%esp
+movl   $0x7000,0x8(%esp)
+movl   $0x0,0x4(%esp)
 lea    -0x700c(%ebp),%eax
-mov    $0x7000,%edx
-mov    %edx,0x8(%esp)
-movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memset>
 lea    0x14(%ebp),%eax
 mov    %eax,-0xc(%ebp)
 mov    -0xc(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x700c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <vsprintf>
 call   <T> <_Z22CFileLogWriterInstancev>
 lea    -0x700c(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    0xc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CFileLogWriter11writeRawLogEPKcS1_z>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CMyRawFileLog::TEMPNAMEPLACEHOLDERVALUE(char const*, char const*, ...) */

void __thiscall
CMyRawFileLog::_ZN13CMyRawFileLogclEPKcS1_z(CMyRawFileLog *this,char *param_1,char *param_2,...)

{
  CFileLogWriter *this_00;
  char local_7010 [28672];
  undefined1 *local_10;
  
  memset(local_7010,0,0x7000);
  local_10 = &stack0x00000010;
  vsprintf(local_7010,param_2,local_10);
  this_00 = (CFileLogWriter *)CFileLogWriterInstance();
  CFileLogWriter::writeRawLog(this_00,param_1,local_7010);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/ServerCommon/DNFFileLog.cpp](source/DNFServer/ServerCommon/DNFFileLog.cpp)（约第 170 行）：

```cpp
void CMyRawFileLog::operator()(char const* filename, char const* format, ...) {
    char buff[0x7000];
    // ORIG 是 mov $0x7000,%edx 直装（无 push ebx）；本工具链 register 局部必落 ebx 并强制保存
    // （30 条）。字面量折叠为 movl $0x7000,0x8(%esp)（26 条），仅差装载形态，无额外保存。
    memset(buff, 0, 0x7000);
    va_list args;
    va_start(args, format);
    vsprintf(buff, format, args);
    va_end(args);
    // 原始：Instance() 结果直接作为实参（不存局部变量）
    CFileLogWriterInstance()->writeRawLog(filename, buff);
}
```

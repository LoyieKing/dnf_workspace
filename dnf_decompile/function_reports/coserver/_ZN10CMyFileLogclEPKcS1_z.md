# _ZN10CMyFileLogclEPKcS1_z

`CMyFileLog::operator()(char const*, char const*, ...)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| coserver | DIFF | `0x805513c` | `0xad` | `0x804f2b2` | `0xb2` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,45 +1,46 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x7024,%esp
-lea    -0x700c(%ebp),%eax
-mov    $0x7000,%edx
-mov    %edx,0x8(%esp)
+movl   $0x7000,-0xc(%ebp)
+mov    -0xc(%ebp),%eax
+mov    %eax,0x8(%esp)
 movl   $0x0,0x4(%esp)
+lea    -0x7010(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <memset>
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    %edx,0xc(%esp)
 mov    %eax,0x8(%esp)
 movl   $"%s(%d): ",0x4(%esp)
-lea    -0x700c(%ebp),%eax
+lea    -0x7010(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <sprintf>
 lea    0x14(%ebp),%eax
-mov    %eax,-0xc(%ebp)
-mov    -0xc(%ebp),%ebx
-lea    -0x700c(%ebp),%eax
+mov    %eax,-0x10(%ebp)
+mov    -0x10(%ebp),%ebx
+lea    -0x7010(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strlen>
 mov    %eax,%edx
-lea    -0x700c(%ebp),%eax
+lea    -0x7010(%ebp),%eax
 add    %edx,%eax
 mov    %ebx,0x8(%esp)
 mov    0x10(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <vsprintf>
 call   <T> <_Z22CFileLogWriterInstancev>
-lea    -0x700c(%ebp),%edx
+lea    -0x7010(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    0xc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CFileLogWriter8writeLogEPKcS1_z>
 add    $0x7024,%esp
 pop    %ebx
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CMyFileLog::TEMPNAMEPLACEHOLDERVALUE(char const*, char const*, ...) */

void __thiscall
CMyFileLog::_ZN10CMyFileLogclEPKcS1_z(CMyFileLog *this,char *param_1,char *param_2,...)

{
  size_t sVar1;
  CFileLogWriter *this_00;
  char local_7010 [28672];
  undefined1 *local_10;
  
  memset(local_7010,0,0x7000);
  sprintf(local_7010,"%s(%d): ",*(undefined4 *)this,*(undefined4 *)(this + 4));
  local_10 = &stack0x00000010;
  sVar1 = strlen(local_7010);
  vsprintf(local_7010 + sVar1,param_2,&stack0x00000010);
  this_00 = (CFileLogWriter *)CFileLogWriterInstance();
  CFileLogWriter::writeLog(this_00,param_1,local_7010);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/ServerCommon/DNFFileLog.cpp](source/DNFServer/ServerCommon/DNFFileLog.cpp)（约第 150 行）：

```cpp
void CMyFileLog::operator()(char const* filename, char const* format, ...) {
    char buff[0x7000];
    unsigned int n = 0x7000;
    memset(buff, 0, n);
    sprintf(buff, "%s(%d): ", name, level);
    va_list args;
    va_start(args, format);
    // 原始：strlen 内联于 vsprintf 参数（不存局部变量）
    vsprintf(buff + strlen(buff), format, args);
    va_end(args);
    // 原始：Instance() 结果直接作为实参
    CFileLogWriterInstance()->writeLog(filename, buff);  // 原始：缓冲区直接作为格式串传递
}
```

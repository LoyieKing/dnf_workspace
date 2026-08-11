# _ZN12CToolFileLogclEPKciS1_z

`CToolFileLog::operator()(char const*, int, char const*, ...)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x8066b56` | `0x149` | `0x8071d82` | `0x149` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,82 +1,82 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %ebx
 sub    $0xe120,%esp
+mov    $0x7000,%ebx
+mov    %ebx,0x8(%esp)
+movl   $0x0,0x4(%esp)
 lea    -0x710c(%ebp),%eax
-mov    $0x7000,%edx
-mov    %edx,0x8(%esp)
-movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memset>
+mov    $0x7000,%ebx
+mov    %ebx,0x8(%esp)
+movl   $0x0,0x4(%esp)
 lea    -0xe10c(%ebp),%eax
-mov    $0x7000,%edx
-mov    %edx,0x8(%esp)
-movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memset>
 lea    -0x10c(%ebp),%ebx
 mov    $0x0,%eax
 mov    $0x40,%edx
 mov    %ebx,%edi
 mov    %edx,%ecx
 rep stos %eax,%es:(%edi)
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    %edx,0xc(%esp)
 mov    %eax,0x8(%esp)
 movl   $"%s(%d): ",0x4(%esp)
 lea    -0x710c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <sprintf>
 lea    0x18(%ebp),%eax
 mov    %eax,-0xc(%ebp)
 mov    -0xc(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    0x14(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0xe10c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <vsprintf>
 lea    -0x710c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strlen>
 mov    %eax,%edx
 lea    -0x710c(%ebp),%eax
 add    %edx,%eax
 lea    -0xe10c(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <strcat>
 cmpl   $0xffffffff,0x10(%ebp)
 je     <T> <_ZN12CToolFileLogclEPKciS1_z+0x121>
 mov    0x10(%ebp),%eax
 mov    %eax,0xc(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"%s_%02d_",0x4(%esp)
 lea    -0x10c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <sprintf>
 call   <T> <_Z22CFileLogWriterInstancev>
 lea    -0x710c(%ebp),%edx
 mov    %edx,0x8(%esp)
 lea    -0x10c(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CFileLogWriter8writeLogEPKcS1_z>
 jmp    <T> <_ZN12CToolFileLogclEPKciS1_z+0x13f>
 call   <T> <_Z22CFileLogWriterInstancev>
 lea    -0x710c(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    0xc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CFileLogWriter8writeLogEPKcS1_z>
 add    $0xe120,%esp
 pop    %ebx
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CToolFileLog::TEMPNAMEPLACEHOLDERVALUE(char const*, int, char const*, ...) */

void __thiscall
CToolFileLog::_ZN12CToolFileLogclEPKciS1_z
          (CToolFileLog *this,char *param_1,int param_2,char *param_3,...)

{
  size_t sVar1;
  CFileLogWriter *pCVar2;
  int iVar3;
  char *pcVar4;
  byte bVar5;
  char local_e110 [28672];
  char local_7110 [28672];
  char local_110 [256];
  undefined1 *local_10;
  
  bVar5 = 0;
  memset(local_7110,0,0x7000);
  memset(local_e110,0,0x7000);
  pcVar4 = local_110;
  for (iVar3 = 0x40; iVar3 != 0; iVar3 = iVar3 + -1) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    pcVar4[3] = '\0';
    pcVar4 = pcVar4 + ((uint)bVar5 * -2 + 1) * 4;
  }
  sprintf(local_7110,"%s(%d): ",*(undefined4 *)this,*(undefined4 *)(this + 4));
  local_10 = &stack0x00000014;
  vsprintf(local_e110,param_3,local_10);
  sVar1 = strlen(local_7110);
  strcat(local_7110 + sVar1,local_e110);
  if (param_2 == -1) {
    pCVar2 = (CFileLogWriter *)CFileLogWriterInstance();
    CFileLogWriter::writeLog(pCVar2,param_1,local_7110);
  }
  else {
    sprintf(local_110,"%s_%02d_",param_1,param_2);
    pCVar2 = (CFileLogWriter *)CFileLogWriterInstance();
    CFileLogWriter::writeLog(pCVar2,local_110,local_7110);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/ServerCommon/DNFFileLog.cpp](source/DNFServer/ServerCommon/DNFFileLog.cpp)（约第 189 行）：

```cpp
void CToolFileLog::operator()(char const* filename, int no, char const* format, ...) {
    char buff[0x7000];
    char argsbuff[0x7000];
    // 原始：先 memset line/message（ORIG 每处现装 %edx；此处两个独立 register 局部以匹配
    // 两次现装的指令数，寄存器名差异为工具链伪影），再 subfile 聚合初始化（rep stosl）
    {
        register size_t n1 = 0x7000;
        memset(buff, 0, n1);
    }
    {
        register size_t n2 = 0x7000;
        memset(argsbuff, 0, n2);
    }
    char fbuff[256] = {0};
    sprintf(buff, "%s(%d): ", name, level);
    va_list args;
    va_start(args, format);
    vsprintf(argsbuff, format, args);
    va_end(args);
    // 原始：strlen 内联于 strcat 参数
    strcat(buff + strlen(buff), argsbuff);
    // 原始：no != -1 分支在前（fall-through 写 subfile），no==-1 用 je 跳到后块
    // → if (no != -1) { sprintf+write(subfile) } else { write(file) }
    if (no != -1) {
        sprintf(fbuff, "%s_%02d_", filename, no);
        CFileLogWriterInstance()->writeLog(fbuff, buff);
    } else {
        CFileLogWriterInstance()->writeLog(filename, buff);
    }
}
```

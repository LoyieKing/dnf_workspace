# _ZN3nsl8TraceLog6sysLogEiPKcz

`nsl::TraceLog::sysLog(int, char const*, ...)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| auction | DIFF | `0x80b6664` | `0x1dd` | `0x80b4e94` | `0x1da` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,127 +1,125 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x1068,%esp
 movb   $0x0,-0xd(%ebp)
 cmpl   $0x9,0xc(%ebp)
 jne    <T> <_ZN3nsl8TraceLog6sysLogEiPKcz+0x19>
 movb   $0x1,-0xd(%ebp)
 jmp    <T> <_ZN3nsl8TraceLog6sysLogEiPKcz+0x38>
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog8get_maskEi>
 test   %eax,%eax
 sete   %al
 test   %al,%al
 jne    <T> <_ZN3nsl8TraceLog6sysLogEiPKcz+0x1d7>
 lea    0x14(%ebp),%eax
 mov    %eax,-0x14(%ebp)
 mov    -0x14(%ebp),%eax
 mov    %eax,0x10(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $0x800,0x8(%esp)
 lea    -0x814(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog9VsnPrintfEPciPKcS1_>
 mov    %eax,-0xc(%ebp)
 mov    0x8(%ebp),%eax
 lea    0x1c(%eax),%edx
 mov    0x8(%ebp),%eax
 add    $0x8,%eax
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog8get_timeEPcS1_>
 jmp    <T> <_ZN3nsl8TraceLog6sysLogEiPKcz+0x9f>
 mov    -0xc(%ebp),%eax
 sub    $0x1,%eax
 movb   $0x0,-0x814(%ebp,%eax,1)
 subl   $0x1,-0xc(%ebp)
 mov    -0xc(%ebp),%eax
 sub    $0x1,%eax
 movzbl -0x814(%ebp,%eax,1),%eax
 cmp    $0xa,%al
 sete   %al
 test   %al,%al
 jne    <T> <_ZN3nsl8TraceLog6sysLogEiPKcz+0x8d>
 mov    0x8(%ebp),%eax
 lea    0x1c(%eax),%ecx
 mov    0x8(%ebp),%eax
 lea    0x8(%eax),%edx
 lea    -0x814(%ebp),%eax
 mov    %eax,0x18(%esp)
 mov    %ecx,0x14(%esp)
 mov    %edx,0x10(%esp)
 movl   $"%s %s : %s\n",0xc(%esp)
 movl   $0x2028,0x8(%esp)
 lea    -0x103c(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog8SnPrintfEPciS1_S1_S1_S1_>
 mov    %eax,-0xc(%ebp)
 cmpl   $0x0,-0xc(%ebp)
-js     <T> <_ZN3nsl8TraceLog6sysLogEiPKcz+0x1da>
+js     <T> <_ZN3nsl8TraceLog6sysLogEiPKcz+0x1d8>
 mov    0x8(%ebp),%eax
 movzbl 0x340(%eax),%eax
 test   %al,%al
 je     <T> <_ZN3nsl8TraceLog6sysLogEiPKcz+0x13b>
 mov    0x8(%ebp),%eax
 mov    0x35c(%eax),%eax
 mov    -0xc(%ebp),%edx
 mov    %edx,0x8(%esp)
 lea    -0x103c(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl13LogSendThread10SendLogMsgEPci>
-jmp    <T> <_ZN3nsl8TraceLog6sysLogEiPKcz+0x1db>
+jmp    <T> <_ZN3nsl8TraceLog6sysLogEiPKcz+0x1d8>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog18sysNSL_LOG_date_chEv>
 mov    0x8(%ebp),%eax
 mov    0x330(%eax),%eax
 test   %eax,%eax
 jg     <T> <_ZN3nsl8TraceLog6sysLogEiPKcz+0x161>
 movl   $"syslog fd error",(%esp)
 call   <T> <puts>
-jmp    <T> <_ZN3nsl8TraceLog6sysLogEiPKcz+0x1db>
+jmp    <T> <_ZN3nsl8TraceLog6sysLogEiPKcz+0x1d8>
 cmpb   $0x0,-0xd(%ebp)
 je     <T> <_ZN3nsl8TraceLog6sysLogEiPKcz+0x18b>
 mov    -0xc(%ebp),%edx
 mov    0x8(%ebp),%eax
 mov    0x338(%eax),%eax
 mov    %edx,0x8(%esp)
 lea    -0x103c(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <write>
-jmp    <T> <_ZN3nsl8TraceLog6sysLogEiPKcz+0x1db>
+jmp    <T> <_ZN3nsl8TraceLog6sysLogEiPKcz+0x1d8>
 cmpl   $0x7,0xc(%ebp)
 jne    <T> <_ZN3nsl8TraceLog6sysLogEiPKcz+0x1b3>
 mov    -0xc(%ebp),%edx
 mov    0x8(%ebp),%eax
 mov    0x334(%eax),%eax
 mov    %edx,0x8(%esp)
 lea    -0x103c(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <write>
 mov    -0xc(%ebp),%edx
 mov    0x8(%ebp),%eax
 mov    0x330(%eax),%eax
 mov    %edx,0x8(%esp)
 lea    -0x103c(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <write>
-jmp    <T> <_ZN3nsl8TraceLog6sysLogEiPKcz+0x1db>
-nop
-jmp    <T> <_ZN3nsl8TraceLog6sysLogEiPKcz+0x1db>
+jmp    <T> <_ZN3nsl8TraceLog6sysLogEiPKcz+0x1d8>
 nop
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* DWARF original prototype: void sysLog(TraceLog * this, int flag, char * msg, ...) */

void __thiscall nsl::TraceLog::_ZN3nsl8TraceLog6sysLogEiPKcz(TraceLog *this,int flag,char *msg,...)

{
  int iVar1;
  char local_1040 [2087];
  char acStack_819 [2049];
  va_list local_18;
  char local_11;
  size_t local_10;
  
                    /* Unresolved local var: bool other_file_log@[???]
                       Unresolved local var: int len@[???]
                       Unresolved local var: va_list ap@[???]
                       Unresolved local var: char[2048] tmpbuf@[???]
                       Unresolved local var: char[2088] buf@[???] */
  local_11 = '\0';
  if (flag == 9) {
    local_11 = '\x01';
  }
  else {
    iVar1 = get_mask(this,flag);
    if (iVar1 == 0) {
      return;
    }
  }
  local_18 = &stack0x00000010;
  local_10 = VsnPrintf(this,acStack_819 + 1,0x800,msg,local_18);
  get_time(this,this->cur_date,this->cur_time);
  for (; acStack_819[local_10] == '\n'; local_10 = local_10 + -1) {
    acStack_819[local_10] = '\0';
  }
  local_10 = SnPrintf(this,local_1040,0x2028,"%s %s : %s\n",this->cur_date,this->cur_time,
                      acStack_819 + 1);
  if (-1 < (int)local_10) {
    if (this->write_to_logserver == false) {
      _ZN3nsl8TraceLog18sysNSL_LOG_date_chEv(this);
      if (this->logfd < 1) {
        puts("syslog fd error");
      }
      else if (local_11 == '\0') {
        if (flag == 7) {
          write(this->errfd,local_1040,local_10);
        }
        write(this->logfd,local_1040,local_10);
      }
      else {
        write(this->statfd,local_1040,local_10);
      }
    }
    else {
      LogSendThread::_ZN3nsl13LogSendThread10SendLogMsgEPci
                (this->logSendThread_,local_1040,local_10);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/ServerLab/ServerLib/basic_source/TraceLog.cpp](source/DNFServer/GameServer/ServerLab/ServerLib/basic_source/TraceLog.cpp)（约第 170 行）：

```cpp
void TraceLog::sysLog(int flag, const char* msg, ...)
{
    bool other_file_log = false;
    if (flag == 9)
    {
        other_file_log = true;
    }
    else if (get_mask(flag) == 0)
    {
        return;
    }
    va_list ap;
    va_start(ap, msg);
    char tmpbuf[2048];
    // 原始：VsnPrintf 写到 tmpbuf 基址（非 tmpbuf+1）
    int len = VsnPrintf(tmpbuf, 0x800, msg, ap);
    va_end(ap);
    get_time(cur_date, cur_time);
    // 原始：while (tmpbuf[len-1] == '\n') { tmpbuf[len-1]=0; len--; }
    while (tmpbuf[len - 1] == '\n')
    {
        tmpbuf[len - 1] = '\0';
        len = len - 1;
    }
    char buf[2088];
    len = SnPrintf(buf, 0x2028, (char*)"%s %s : %s\n", cur_date, cur_time, tmpbuf);
    if (len >= 0)
    {
        // 原始：if (write_to_logserver) SendLogMsg 在前，else 本地写
        if (write_to_logserver != false)
        {
            logSendThread_->SendLogMsg(buf, len);
        }
        else
        {
            sysNSL_LOG_date_ch();
            if (logfd < 1)
            {
                puts("syslog fd error");
            }
            else if (other_file_log != false)
            {
                write(statfd, buf, len);
            }
            else
            {
                if (flag == 7)
                {
                    write(errfd, buf, len);
                }
                write(logfd, buf, len);
            }
        }
    }
}
```

# _ZN15CExchangeServer16SetExchageServerEjsiRb

`CExchangeServer::SetExchageServer(unsigned int, short, int, bool&)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8093d4a` | `0x205` | `0x805cc70` | `0x236` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,155 +1,172 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x6c,%esp
 mov    0x10(%ebp),%eax
 mov    %ax,-0x3c(%ebp)
 movl   $0x0,(%esp)
 call   <T> <time>
 mov    %eax,-0x1c(%ebp)
-mov    0xc(%ebp),%eax
-mov    %eax,-0x30(%ebp)
 mov    0x8(%ebp),%eax
-mov    0x8(%eax),%eax
-mov    %eax,-0x34(%ebp)
+add    $0x8,%eax
+mov    (%eax),%eax
+mov    %eax,-0x20(%ebp)
 mov    0x18(%ebp),%eax
 movb   $0x0,(%eax)
 mov    0x8(%ebp),%eax
 movzbl (%eax),%eax
 test   %al,%al
-je     <T> <_ZN15CExchangeServer16SetExchageServerEjsiRb+0x171>
+jne    <T> <_ZN15CExchangeServer16SetExchageServerEjsiRb+0xd4>
+movl   $0xe2c,0x8(%esp)
+movl   $"SetExchageServer",0x4(%esp)
+lea    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+movswl -0x3c(%ebp),%ebx
+lea    0xc(%ebp),%eax
+mov    (%eax),%eax
+mov    %eax,(%esp)
+call   <T> <inet_ntoa>
+mov    -0x1c(%ebp),%edx
+mov    %edx,0x18(%esp)
+mov    0x14(%ebp),%edx
+mov    %edx,0x14(%esp)
+mov    %ebx,0x10(%esp)
+mov    %eax,0xc(%esp)
+movl   $"insert new(%s,%d,%d,%d)",0x8(%esp)
+movl   $"./log/ExchangeServer",0x4(%esp)
+lea    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    0xc(%ebp),%edx
 mov    0x8(%ebp),%eax
-mov    0x8(%eax),%eax
-cmp    0xc(%ebp),%eax
-jne    <T> <_ZN15CExchangeServer16SetExchageServerEjsiRb+0x8e>
+mov    %edx,0xc(%eax)
 mov    0x8(%ebp),%eax
-movzwl 0xc(%eax),%eax
+movzwl -0x3c(%ebp),%edx
+mov    %dx,0x10(%eax)
+mov    0x8(%ebp),%eax
+mov    0x14(%ebp),%edx
+mov    %edx,0x14(%eax)
+mov    -0x1c(%ebp),%eax
+mov    %eax,%edx
+sar    $0x1f,%edx
+mov    0x8(%ebp),%ecx
+mov    %eax,0x4(%ecx)
+mov    %edx,0x8(%ecx)
+mov    0x8(%ebp),%eax
+movb   $0x1,(%eax)
+jmp    <T> <_ZN15CExchangeServer16SetExchageServerEjsiRb+0x22e>
+mov    0x8(%ebp),%eax
+mov    0xc(%eax),%edx
+mov    0xc(%ebp),%eax
+cmp    %eax,%edx
+jne    <T> <_ZN15CExchangeServer16SetExchageServerEjsiRb+0x137>
+mov    0x8(%ebp),%eax
+movzwl 0x10(%eax),%eax
 cmp    -0x3c(%ebp),%ax
-jne    <T> <_ZN15CExchangeServer16SetExchageServerEjsiRb+0x8e>
+jne    <T> <_ZN15CExchangeServer16SetExchageServerEjsiRb+0x137>
 mov    0x8(%ebp),%eax
-mov    0x10(%eax),%eax
+mov    0x14(%eax),%eax
 cmp    0x14(%ebp),%eax
-jne    <T> <_ZN15CExchangeServer16SetExchageServerEjsiRb+0x8e>
-mov    0x8(%ebp),%eax
-mov    0x4(%eax),%eax
-mov    -0x1c(%ebp),%edx
-mov    %edx,%ecx
-sub    %eax,%ecx
-mov    %ecx,%eax
+jne    <T> <_ZN15CExchangeServer16SetExchageServerEjsiRb+0x137>
+mov    -0x1c(%ebp),%eax
+mov    %eax,%edx
+sar    $0x1f,%edx
+mov    0x8(%ebp),%ecx
+mov    0x8(%ecx),%ebx
+mov    0x4(%ecx),%ecx
+sub    %ecx,%eax
+sbb    %ebx,%edx
+test   %edx,%edx
+jg     <T> <_ZN15CExchangeServer16SetExchageServerEjsiRb+0x121>
+test   %edx,%edx
+js     <T> <_ZN15CExchangeServer16SetExchageServerEjsiRb+0x11b>
 cmp    $0x1e,%eax
-jg     <T> <_ZN15CExchangeServer16SetExchageServerEjsiRb+0x7f>
+ja     <T> <_ZN15CExchangeServer16SetExchageServerEjsiRb+0x121>
 mov    0x18(%ebp),%eax
 movb   $0x1,(%eax)
+mov    -0x1c(%ebp),%eax
+mov    %eax,%edx
+sar    $0x1f,%edx
+mov    0x8(%ebp),%ecx
+mov    %eax,0x4(%ecx)
+mov    %edx,0x8(%ecx)
+jmp    <T> <_ZN15CExchangeServer16SetExchageServerEjsiRb+0x22e>
+mov    -0x1c(%ebp),%eax
+mov    %eax,%edx
+sar    $0x1f,%edx
+mov    0x8(%ebp),%ecx
+mov    0x8(%ecx),%ebx
+mov    0x4(%ecx),%ecx
+sub    %ecx,%eax
+sbb    %ebx,%edx
+test   %edx,%edx
+js     <T> <_ZN15CExchangeServer16SetExchageServerEjsiRb+0x22e>
+test   %edx,%edx
+jg     <T> <_ZN15CExchangeServer16SetExchageServerEjsiRb+0x161>
+cmp    $0x1e,%eax
+jbe    <T> <_ZN15CExchangeServer16SetExchageServerEjsiRb+0x22e>
+movl   $0xe21,0x8(%esp)
+movl   $"SetExchageServer",0x4(%esp)
+lea    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    0x8(%ebp),%eax
-mov    -0x1c(%ebp),%edx
-mov    %edx,0x4(%eax)
-nop
-jmp    <T> <_ZN15CExchangeServer16SetExchageServerEjsiRb+0x1fd>
-mov    0x8(%ebp),%eax
+mov    0x8(%eax),%edx
 mov    0x4(%eax),%eax
-mov    -0x1c(%ebp),%edx
-mov    %edx,%ecx
-sub    %eax,%ecx
-mov    %ecx,%eax
-cmp    $0x1e,%eax
-jle    <T> <_ZN15CExchangeServer16SetExchageServerEjsiRb+0x1fc>
-mov    0x8(%ebp),%eax
-mov    0x4(%eax),%eax
-mov    %eax,-0x48(%ebp)
-mov    0x8(%ebp),%eax
-mov    0x10(%eax),%eax
 mov    %eax,-0x44(%ebp)
 mov    0x8(%ebp),%eax
-movzwl 0xc(%eax),%eax
-cwtl
+mov    0x14(%eax),%eax
 mov    %eax,-0x40(%ebp)
-mov    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <inet_ntoa>
-mov    %eax,%esi
-movswl -0x3c(%ebp),%edi
-mov    -0x30(%ebp),%eax
+mov    0x8(%ebp),%eax
+movzwl 0x10(%eax),%eax
+movswl %ax,%edi
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <inet_ntoa>
 mov    %eax,%ebx
-movl   $0xe21,0x8(%esp)
-movl   $"SetExchageServer",0x4(%esp)
-lea    -0x2c(%ebp),%eax
+movswl -0x3c(%ebp),%esi
+lea    0xc(%ebp),%eax
+mov    (%eax),%eax
 mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    -0x48(%ebp),%eax
-mov    %eax,0x28(%esp)
-mov    -0x44(%ebp),%ecx
-mov    %ecx,0x24(%esp)
-mov    -0x40(%ebp),%eax
-mov    %eax,0x20(%esp)
-mov    %esi,0x1c(%esp)
-mov    -0x1c(%ebp),%eax
-mov    %eax,0x18(%esp)
-mov    0x14(%ebp),%eax
-mov    %eax,0x14(%esp)
-mov    %edi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+call   <T> <inet_ntoa>
+mov    -0x44(%ebp),%edx
+mov    %edx,0x28(%esp)
+mov    -0x40(%ebp),%edx
+mov    %edx,0x24(%esp)
+mov    %edi,0x20(%esp)
+mov    %ebx,0x1c(%esp)
+mov    -0x1c(%ebp),%edx
+mov    %edx,0x18(%esp)
+mov    0x14(%ebp),%edx
+mov    %edx,0x14(%esp)
+mov    %esi,0x10(%esp)
+mov    %eax,0xc(%esp)
 movl   $"timeout : new(%s,%d,%d,%d) old(%s,%d,%d,%d)",0x8(%esp)
 movl   $"./log/ExchangeServer",0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    0xc(%ebp),%edx
 mov    0x8(%ebp),%eax
-mov    0xc(%ebp),%edx
-mov    %edx,0x8(%eax)
+mov    %edx,0xc(%eax)
 mov    0x8(%ebp),%eax
 movzwl -0x3c(%ebp),%edx
-mov    %dx,0xc(%eax)
+mov    %dx,0x10(%eax)
 mov    0x8(%ebp),%eax
 mov    0x14(%ebp),%edx
-mov    %edx,0x10(%eax)
-mov    0x8(%ebp),%eax
-mov    -0x1c(%ebp),%edx
-mov    %edx,0x4(%eax)
-jmp    <T> <_ZN15CExchangeServer16SetExchageServerEjsiRb+0x1fd>
-movswl -0x3c(%ebp),%esi
-mov    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <inet_ntoa>
-mov    %eax,%ebx
-movl   $0xe2c,0x8(%esp)
-movl   $"SetExchageServer",0x4(%esp)
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    %edx,0x14(%eax)
 mov    -0x1c(%ebp),%eax
-mov    %eax,0x18(%esp)
-mov    0x14(%ebp),%eax
-mov    %eax,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
-movl   $"insert new(%s,%d,%d,%d)",0x8(%esp)
-movl   $"./log/ExchangeServer",0x4(%esp)
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    0x8(%ebp),%eax
-mov    0xc(%ebp),%edx
-mov    %edx,0x8(%eax)
-mov    0x8(%ebp),%eax
-movzwl -0x3c(%ebp),%edx
-mov    %dx,0xc(%eax)
-mov    0x8(%ebp),%eax
-mov    0x14(%ebp),%edx
-mov    %edx,0x10(%eax)
-mov    0x8(%ebp),%eax
-mov    -0x1c(%ebp),%edx
-mov    %edx,0x4(%eax)
-mov    0x8(%ebp),%eax
-movb   $0x1,(%eax)
-jmp    <T> <_ZN15CExchangeServer16SetExchageServerEjsiRb+0x1fd>
-nop
+mov    %eax,%edx
+sar    $0x1f,%edx
+mov    0x8(%ebp),%ecx
+mov    %eax,0x4(%ecx)
+mov    %edx,0x8(%ecx)
 add    $0x6c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CExchangeServer::SetExchageServer(unsigned int, short, int, bool&) */

void __thiscall
CExchangeServer::_ZN15CExchangeServer16SetExchageServerEjsiRb
          (CExchangeServer *this,uint param_1,short param_2,int param_3,bool *param_4)

{
  short sVar1;
  in_addr __in;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  char *pcVar5;
  CMyFileLog local_30 [8];
  CMyFileLog local_28 [8];
  time_t local_20;
  
  local_20 = time((time_t *)0x0);
  __in.s_addr = *(in_addr_t *)(this + 8);
  *param_4 = false;
  if (*this == (CExchangeServer)0x0) {
    pcVar4 = inet_ntoa((in_addr)param_1);
    CMyFileLog::CMyFileLog(local_28,"SetExchageServer",0xe2c);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_28,"./log/ExchangeServer","insert new(%s,%d,%d,%d)",pcVar4,(int)param_2,param_3
               ,local_20);
    *(uint *)(this + 8) = param_1;
    *(short *)(this + 0xc) = param_2;
    *(int *)(this + 0x10) = param_3;
    *(time_t *)(this + 4) = local_20;
    *this = (CExchangeServer)0x1;
  }
  else if (((*(uint *)(this + 8) == param_1) && (*(short *)(this + 0xc) == param_2)) &&
          (*(int *)(this + 0x10) == param_3)) {
    if (local_20 - *(int *)(this + 4) < 0x1f) {
      *param_4 = true;
    }
    *(time_t *)(this + 4) = local_20;
  }
  else if (0x1e < local_20 - *(int *)(this + 4)) {
    uVar2 = *(undefined4 *)(this + 4);
    uVar3 = *(undefined4 *)(this + 0x10);
    sVar1 = *(short *)(this + 0xc);
    pcVar4 = inet_ntoa(__in);
    pcVar5 = inet_ntoa((in_addr)param_1);
    CMyFileLog::CMyFileLog(local_30,"SetExchageServer",0xe21);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_30,"./log/ExchangeServer","timeout : new(%s,%d,%d,%d) old(%s,%d,%d,%d)",pcVar5,
               (int)param_2,param_3,local_20,pcVar4,(int)sVar1,uVar3,uVar2);
    *(uint *)(this + 8) = param_1;
    *(short *)(this + 0xc) = param_2;
    *(int *)(this + 0x10) = param_3;
    *(time_t *)(this + 4) = local_20;
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFManagerServer.cpp](source/DNFServer/GameServer/Monitor/DNFManagerServer.cpp)（约第 58 行）：

```cpp
void CExchangeServer::SetExchageServer(unsigned int ip, short port, int code, bool& result)
{
    time_t now = time(0);
    in_addr oldIp;
    oldIp.s_addr = *(unsigned int*)((char*)this + 8);
    result = false;
    if (m_active == 0)
    {
        DNF_LOG_SCOPE_LINE(0xe2c,"./log/ExchangeServer", "insert new(%s,%d,%d,%d)", inet_ntoa(*(in_addr*)&ip), port,
            code, now);
        m_ip = ip;
        m_port = port;
        m_code = code;
        m_time = now;
        m_active = 1;
    }
    else if (m_ip == ip && m_port == port && m_code == code)
    {
        if (now - m_time < 0x1f)
        {
            result = true;
        }
        m_time = now;
    }
    else if (0x1e < now - m_time)
    {
        DNF_LOG_SCOPE_LINE(0xe21,"./log/ExchangeServer",
            "timeout : new(%s,%d,%d,%d) old(%s,%d,%d,%d)", inet_ntoa(*(in_addr*)&ip), port,
            code, now, inet_ntoa(oldIp), m_port, m_code, (int)m_time);
        m_ip = ip;
        m_port = port;
        m_code = code;
        m_time = now;
    }
}
```

# _ZN20CDNFUserInOutCounter8WriteLogEv

`CDNFUserInOutCounter::WriteLog()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| coserver | DIFF | `0x804dc5a` | `0x165` | `0x80588d4` | `0x17d` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,101 +1,104 @@
 push   %ebp
 mov    %esp,%ebp
-push   %edi
-push   %esi
 push   %ebx
-sub    $0xfdc,%esp
-lea    -0xfc8(%ebp),%ebx
-mov    $0x0,%eax
-mov    $0x3e8,%edx
-mov    %ebx,%edi
-mov    %edx,%ecx
-rep stos %eax,%es:(%edi)
-movl   $0x0,-0x20(%ebp)
-jmp    <T> <_ZN20CDNFUserInOutCounter8WriteLogEv+0x14b>
-movl   $0x0,-0x1c(%ebp)
-jmp    <T> <_ZN20CDNFUserInOutCounter8WriteLogEv+0xda>
-mov    -0x20(%ebp),%edx
-mov    -0x1c(%ebp),%ebx
-mov    0x8(%ebp),%ecx
+sub    $0xfd4,%esp
+movl   $0xfa0,0x8(%esp)
+movl   $0x0,0x4(%esp)
+lea    -0xfb8(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <memset>
+movl   $0x0,-0x10(%ebp)
+jmp    <T> <_ZN20CDNFUserInOutCounter8WriteLogEv+0x165>
+movl   $0x0,-0xc(%ebp)
+jmp    <T> <_ZN20CDNFUserInOutCounter8WriteLogEv+0xf4>
+mov    0x8(%ebp),%eax
+mov    %eax,%ecx
+mov    -0x10(%ebp),%edx
 mov    %edx,%eax
 shl    $0x8,%eax
 sub    %edx,%eax
-add    %ebx,%eax
-mov    (%ecx,%eax,8),%eax
+add    -0xc(%ebp),%eax
+shl    $0x3,%eax
+lea    (%ecx,%eax,1),%eax
+mov    (%eax),%eax
 test   %eax,%eax
-jne    <T> <_ZN20CDNFUserInOutCounter8WriteLogEv+0x71>
-mov    -0x20(%ebp),%edx
-mov    -0x1c(%ebp),%ebx
-mov    0x8(%ebp),%ecx
+jne    <T> <_ZN20CDNFUserInOutCounter8WriteLogEv+0x81>
+mov    0x8(%ebp),%eax
+mov    %eax,%ecx
+mov    -0x10(%ebp),%edx
 mov    %edx,%eax
 shl    $0x8,%eax
 sub    %edx,%eax
-add    %ebx,%eax
+add    -0xc(%ebp),%eax
 add    %eax,%eax
 add    $0x1,%eax
-mov    (%ecx,%eax,4),%eax
+shl    $0x2,%eax
+lea    (%ecx,%eax,1),%eax
+mov    (%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN20CDNFUserInOutCounter8WriteLogEv+0xd6>
-mov    -0x20(%ebp),%edx
-mov    -0x1c(%ebp),%ebx
-mov    0x8(%ebp),%ecx
+je     <T> <_ZN20CDNFUserInOutCounter8WriteLogEv+0xf0>
+mov    0x8(%ebp),%eax
+mov    %eax,%ecx
+mov    -0x10(%ebp),%edx
 mov    %edx,%eax
 shl    $0x8,%eax
 sub    %edx,%eax
-add    %ebx,%eax
+add    -0xc(%ebp),%eax
 add    %eax,%eax
 add    $0x1,%eax
-mov    (%ecx,%eax,4),%ecx
-mov    -0x20(%ebp),%edx
-mov    -0x1c(%ebp),%esi
-mov    0x8(%ebp),%ebx
+shl    $0x2,%eax
+lea    (%ecx,%eax,1),%eax
+mov    (%eax),%ecx
+mov    0x8(%ebp),%eax
+mov    %eax,%ebx
+mov    -0x10(%ebp),%edx
 mov    %edx,%eax
 shl    $0x8,%eax
 sub    %edx,%eax
-add    %esi,%eax
-mov    (%ebx,%eax,8),%eax
+add    -0xc(%ebp),%eax
+shl    $0x3,%eax
+lea    (%ebx,%eax,1),%eax
+mov    (%eax),%eax
 mov    %ecx,0x18(%esp)
 mov    %eax,0x14(%esp)
-mov    -0x1c(%ebp),%eax
+mov    -0xc(%ebp),%eax
 mov    %eax,0x10(%esp)
-mov    -0x20(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,0xc(%esp)
-lea    -0xfc8(%ebp),%eax
+lea    -0xfb8(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"%s G(%d)Ch(%d)In(%d)Out(%d) ",0x4(%esp)
-lea    -0xfc8(%ebp),%eax
+lea    -0xfb8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <sprintf>
-addl   $0x1,-0x1c(%ebp)
-cmpl   $0x3f,-0x1c(%ebp)
+addl   $0x1,-0xc(%ebp)
+cmpl   $0x3f,-0xc(%ebp)
 setle  %al
 test   %al,%al
-jne    <T> <_ZN20CDNFUserInOutCounter8WriteLogEv+0x3a>
+jne    <T> <_ZN20CDNFUserInOutCounter8WriteLogEv+0x40>
 movl   $0x24,0x8(%esp)
 movl   $&_ZZN20CDNFUserInOutCounter8WriteLogEvE12__FUNCTION__,0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-lea    -0xfc8(%ebp),%eax
+lea    -0xfb8(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"%s",0x8(%esp)
 movl   $"./log/UserCounter",0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 movl   $0xfa0,0x8(%esp)
 movl   $0x0,0x4(%esp)
-lea    -0xfc8(%ebp),%eax
+lea    -0xfb8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <memset>
-addl   $0x1,-0x20(%ebp)
-cmpl   $0x9,-0x20(%ebp)
+addl   $0x1,-0x10(%ebp)
+cmpl   $0x9,-0x10(%ebp)
 setle  %al
 test   %al,%al
-jne    <T> <_ZN20CDNFUserInOutCounter8WriteLogEv+0x2e>
-add    $0xfdc,%esp
+jne    <T> <_ZN20CDNFUserInOutCounter8WriteLogEv+0x34>
+add    $0xfd4,%esp
 pop    %ebx
-pop    %esi
-pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDNFUserInOutCounter::WriteLog() */

void __thiscall
CDNFUserInOutCounter::_ZN20CDNFUserInOutCounter8WriteLogEv(CDNFUserInOutCounter *this)

{
  int iVar1;
  char *pcVar2;
  char local_fcc [4000];
  CMyFileLog local_2c [8];
  int local_24;
  int local_20;
  
  pcVar2 = local_fcc;
  for (iVar1 = 1000; iVar1 != 0; iVar1 = iVar1 + -1) {
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2 = pcVar2 + 4;
  }
  for (local_24 = 0; local_24 < 10; local_24 = local_24 + 1) {
    for (local_20 = 0; local_20 < 0x40; local_20 = local_20 + 1) {
      if ((*(int *)(this + (local_24 * 0xff + local_20) * 8) != 0) ||
         (*(int *)(this + ((local_24 * 0xff + local_20) * 2 + 1) * 4) != 0)) {
        sprintf(local_fcc,"%s G(%d)Ch(%d)In(%d)Out(%d) ",local_fcc,local_24,local_20,
                *(undefined4 *)(this + (local_24 * 0xff + local_20) * 8),
                *(undefined4 *)(this + ((local_24 * 0xff + local_20) * 2 + 1) * 4));
      }
    }
    CMyFileLog::CMyFileLog(local_2c,"WriteLog",0x24);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z(local_2c,"./log/UserCounter","%s",local_fcc);
    memset(local_fcc,0,4000);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/COServer/DNFUserInOutCounter.cpp](source/DNFServer/GameServer/COServer/DNFUserInOutCounter.cpp)（约第 26 行）：

```cpp
void CDNFUserInOutCounter::WriteLog()
{
    char buf[4000];
    memset(buf, 0, sizeof(buf));
    for (int g = 0; g < 10; g++)
    {
        for (int c = 0; c < 0x40; c++)
        {
            if (*(int*)(m_counters + (g * 0xff + c) * 8) != 0 ||
                *(int*)(m_counters + ((g * 0xff + c) * 2 + 1) * 4) != 0)
            {
                sprintf(buf, "%s G(%d)Ch(%d)In(%d)Out(%d) ", buf, g, c,
                        *(int*)(m_counters + (g * 0xff + c) * 8),
                        *(int*)(m_counters + ((g * 0xff + c) * 2 + 1) * 4));
            }
        }
        DNF_LOG_SCOPE_LINE(0x24, "./log/UserCounter", "%s", buf);
        memset(buf, 0, 4000);
    }
}
```

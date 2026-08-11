# _ZN13CPacketTracer6AddLogEii

`CPacketTracer::AddLog(int, int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x807da7c` | `0xdf` | `0x8068e0e` | `0xbc` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,72 +1,61 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x74,%esp
 lea    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <time>
 lea    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <localtime>
 mov    (%eax),%edx
 mov    %edx,-0x58(%ebp)
 mov    0x4(%eax),%edx
 mov    %edx,-0x54(%ebp)
 mov    0x8(%eax),%edx
 mov    %edx,-0x50(%ebp)
 mov    0xc(%eax),%edx
 mov    %edx,-0x4c(%ebp)
 mov    0x10(%eax),%edx
 mov    %edx,-0x48(%ebp)
 mov    0x14(%eax),%edx
 mov    %edx,-0x44(%ebp)
 mov    0x18(%eax),%edx
 mov    %edx,-0x40(%ebp)
 mov    0x1c(%eax),%edx
 mov    %edx,-0x3c(%ebp)
 mov    0x20(%eax),%edx
 mov    %edx,-0x38(%ebp)
 mov    0x24(%eax),%edx
 mov    %edx,-0x34(%ebp)
 mov    0x28(%eax),%eax
 mov    %eax,-0x30(%ebp)
-lea    -0x2c(%ebp),%edx
-mov    $0x0,%ecx
-mov    $0x20,%eax
-mov    %eax,%ebx
-and    $0xfffffffc,%ebx
-mov    $0x0,%eax
-mov    %ecx,(%edx,%eax,1)
-add    $0x4,%eax
-cmp    %ebx,%eax
-jb     <T> <_ZN13CPacketTracer6AddLogEii+0x75>
-add    %eax,%edx
 mov    -0x58(%ebp),%ecx
 mov    -0x54(%ebp),%edx
 mov    -0x50(%ebp),%eax
 mov    0xc(%ebp),%ebx
 mov    %ebx,0x18(%esp)
 mov    0x10(%ebp),%ebx
 mov    %ebx,0x14(%esp)
 mov    %ecx,0x10(%esp)
 mov    %edx,0xc(%esp)
 mov    %eax,0x8(%esp)
 movl   $"(%02d:%02d:%02d/%d/%d)",0x4(%esp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <sprintf>
 mov    0x8(%ebp),%eax
 lea    0x4(%eax),%edx
 lea    -0x2c(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNSspLEPKc>
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 lea    0x1(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %edx,(%eax)
 add    $0x74,%esp
 pop    %ebx
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTracer::AddLog(int, int) */

void __thiscall
CPacketTracer::_ZN13CPacketTracer6AddLogEii(CPacketTracer *this,int param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  tm *ptVar5;
  uint uVar6;
  char local_30 [32];
  time_t local_10 [2];
  
  time(local_10);
  ptVar5 = localtime(local_10);
  iVar2 = ptVar5->tm_sec;
  iVar3 = ptVar5->tm_min;
  iVar4 = ptVar5->tm_hour;
  uVar6 = 0;
  do {
    pcVar1 = local_30 + uVar6;
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    uVar6 = uVar6 + 4;
  } while (uVar6 < 0x20);
  sprintf(local_30,"(%02d:%02d:%02d/%d/%d)",iVar4,iVar3,iVar2,param_2,param_1);
  std::string::operator+=((string *)(this + 4),local_30);
  *(int *)this = *(int *)this + 1;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/COServer/DNFPacketTracer.cpp](source/DNFServer/GameServer/COServer/DNFPacketTracer.cpp)（约第 23 行）：

```cpp
void CPacketTracer::AddLog(int p1, int p2)
{
    time_t t;
    time(&t);
    tm t2 = *localtime(&t);
    char buf[32];
    for (unsigned int i = 0; i < 0x20; i += 4)
    {
        *(unsigned int*)(buf + i) = 0;
    }
    sprintf(buf, "(%02d:%02d:%02d/%d/%d)", t2.tm_hour, t2.tm_min, t2.tm_sec, p2, p1);
    m_log += buf;
    m_count++;
}
```

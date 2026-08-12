# _ZN17CSignalTranslator13regist_signalEiPFviE

`CSignalTranslator::regist_signal(int, void (*)(int))`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x805516a` | `0x8f` | `0x80e0f4e` | `0x8d` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,38 +1,36 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x138,%esp
 mov    0x10(%ebp),%eax
-mov    %eax,-0x94(%ebp)
-lea    -0x94(%ebp),%eax
+mov    %eax,-0x98(%ebp)
+lea    -0x98(%ebp),%eax
 add    $0x4,%eax
 mov    %eax,(%esp)
 call   <T> <sigemptyset>
-movl   $0x0,-0x10(%ebp)
+movl   $0x0,-0xc(%ebp)
 cmpl   $0xe,0xc(%ebp)
-jne    <T> <_ZN17CSignalTranslator13regist_signalEiPFviE+0x3d>
-mov    -0x10(%ebp),%eax
-or     $0x20000000,%eax
-mov    %eax,-0x10(%ebp)
-jmp    <T> <_ZN17CSignalTranslator13regist_signalEiPFviE+0x48>
-mov    -0x10(%ebp),%eax
-or     $0x10000000,%eax
-mov    %eax,-0x10(%ebp)
-lea    -0x120(%ebp),%eax
+jne    <T> <_ZN17CSignalTranslator13regist_signalEiPFviE+0x39>
+orl    $0x20000000,-0xc(%ebp)
+jmp    <T> <_ZN17CSignalTranslator13regist_signalEiPFviE+0x40>
+orl    $0x10000000,-0xc(%ebp)
+mov    -0xc(%ebp),%eax
+mov    %eax,-0x14(%ebp)
+lea    -0x124(%ebp),%eax
 mov    %eax,0x8(%esp)
-lea    -0x94(%ebp),%eax
+lea    -0x98(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <sigaction>
 shr    $0x1f,%eax
 test   %al,%al
-je     <T> <_ZN17CSignalTranslator13regist_signalEiPFviE+0x88>
+je     <T> <_ZN17CSignalTranslator13regist_signalEiPFviE+0x86>
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 movl   $"%d번 signal 등록 실패\n",(%esp)
 call   <T> <printf>
 mov    $0x0,%eax
-jmp    <T> <_ZN17CSignalTranslator13regist_signalEiPFviE+0x8d>
+jmp    <T> <_ZN17CSignalTranslator13regist_signalEiPFviE+0x8b>
 mov    $0x1,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CSignalTranslator::regist_signal(int, void (*)(int)) */

bool __thiscall
CSignalTranslator::_ZN17CSignalTranslator13regist_signalEiPFviE
          (CSignalTranslator *this,int param_1,_func_void_int *param_2)

{
  int iVar1;
  sigaction local_124;
  _union_1051 local_98;
  sigset_t sStack_94;
  undefined4 local_14;
  
  local_98.sa_handler = (__sighandler_t)param_2;
  sigemptyset(&sStack_94);
  if (param_1 == 0xe) {
    local_14 = 0x20000000;
  }
  else {
    local_14 = 0x10000000;
  }
  iVar1 = sigaction(param_1,(sigaction *)&local_98,&local_124);
  if (-1 >= iVar1) {
    printf(&DAT_081a0446,param_1);
  }
  return -1 < iVar1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFSignalTranslator.cpp](source/DNFServer/GameServer/DBMW/DNFSignalTranslator.cpp)（约第 37 行）：

```cpp
bool CSignalTranslator::regist_signal(int sig, void (*handler)(int))
{
    struct sigaction act;
    act.sa_handler = handler;
    sigemptyset(&act.sa_mask);
    int flags = 0;
    if (sig == 0xe)
        flags |= 0x20000000;
    else
        flags |= 0x10000000;
    act.sa_flags = flags;
    struct sigaction old;
    if (sigaction(sig, &act, &old) < 0)
    {
        printf("%d\xB9\xF8 signal \xB5\xEE\xB7\xCF \xBD\xC7\xC6\xD0\n", sig);
        return false;
    }
    return true;
}
```

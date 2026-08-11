# _ZN8CAppBase6CreateEiPPc

`CAppBase::Create(int, char**)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x8063878` | `0x64` | `0x806c838` | `0x67` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,35 +1,37 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 add    $0xc,%eax
 mov    (%eax),%edx
 mov    0x10(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    0x10(%ebp),%eax
 add    $0x8,%eax
 mov    (%eax),%eax
 movl   $"stop",0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <strcmp>
 test   %eax,%eax
-je     <T> <_ZN8CAppBase6CreateEiPPc+0x62>
+je     <T> <_ZN8CAppBase6CreateEiPPc+0x64>
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 add    $0x10,%eax
 mov    (%eax),%edx
 mov    0x10(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
+jmp    <T> <_ZN8CAppBase6CreateEiPPc+0x65>
+nop
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CAppBase::Create(int, char**) */

void __thiscall CAppBase::_ZN8CAppBase6CreateEiPPc(CAppBase *this,int param_1,char **param_2)

{
  int iVar1;
  
  (**(code **)(*(int *)this + 0xc))(this,param_1,param_2);
  iVar1 = strcmp(param_2[2],"stop");
  if (iVar1 != 0) {
    (**(code **)(*(int *)this + 0x10))(this,param_1,param_2);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFApplication.cpp](source/DNFServer/GameServer/DBMW/DNFApplication.cpp)（约第 42 行）：

```cpp
void CAppBase::Create(int argc, char** argv)
{
    Init(argc, argv);
    if (strcmp(argv[2], "stop") == 0)
        return;
    Load(argc, argv);
}
```

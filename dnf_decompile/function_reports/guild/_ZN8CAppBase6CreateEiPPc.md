# _ZN8CAppBase6CreateEiPPc

`CAppBase::Create(int, char**)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x805aa86` | `0x48` | `0x804d71c` | `0x5a` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,27 +1,34 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 add    $0xc,%eax
-mov    (%eax),%edx
-mov    0x10(%ebp),%eax
-mov    %eax,0x8(%esp)
-mov    0xc(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    0x8(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    (%eax),%eax
+mov    0x10(%ebp),%edx
+mov    %edx,0x8(%esp)
+mov    0xc(%ebp),%edx
+mov    %edx,0x4(%esp)
+mov    0x8(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 add    $0x10,%eax
-mov    (%eax),%edx
-mov    0x10(%ebp),%eax
-mov    %eax,0x8(%esp)
-mov    0xc(%ebp),%eax
-mov    %eax,0x4(%esp)
+mov    (%eax),%eax
+mov    0x10(%ebp),%edx
+mov    %edx,0x8(%esp)
+mov    0xc(%ebp),%edx
+mov    %edx,0x4(%esp)
+mov    0x8(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
 mov    0x8(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    (%eax),%eax
+add    $0x8,%eax
+mov    (%eax),%eax
+mov    0x8(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CAppBase::Create(int, char**) */

void __thiscall CAppBase::_ZN8CAppBase6CreateEiPPc(CAppBase *this,int param_1,char **param_2)

{
  (**(code **)(*(int *)this + 0xc))(this,param_1,param_2);
  (**(code **)(*(int *)this + 0x10))(this,param_1,param_2);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/COServer/DNFApplication.cpp](source/DNFServer/GameServer/COServer/DNFApplication.cpp)（约第 38 行）：

```cpp
void CAppBase::Create(int argc, char** argv)
{
    Init(argc, argv);
    Load(argc, argv);
}
```

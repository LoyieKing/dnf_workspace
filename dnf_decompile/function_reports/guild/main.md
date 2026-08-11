# main

`main`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | NEAR | `0x805a9a8` | `0x82` | `0x8061079` | `0x82` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,44 +1,44 @@
 push   %ebp
 mov    %esp,%ebp
 and    $0xfffffff0,%esp
 push   %esi
 push   %ebx
 sub    $0x28,%esp
 call   <T> <_Z20CApplicationInstancev>
 mov    %eax,0x1c(%esp)
 mov    0x1c(%esp),%eax
 mov    0xc(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    0x8(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN8CAppBase6CreateEiPPc>
 mov    0x1c(%esp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
-mov    (%eax),%edx
-mov    0x1c(%esp),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    (%eax),%eax
+mov    0x1c(%esp),%edx
+mov    %edx,(%esp)
+call   *%eax
 jmp    <T> <main+0x74>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    0x1c(%esp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8CAppBase5ClearEv>
 jmp    <T> <main+0x6f>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 mov    $0x1,%eax
 add    $0x28,%esp
 pop    %ebx
 pop    %esi
 mov    %ebp,%esp
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

undefined4 main(int param_1,char **param_2)

{
  CAppBase *this;
  
  this = (CAppBase *)CApplicationInstance();
                    /* try { // try from 0805a9d1 to 0805a9e9 has its CatchHandler @ 0805a9ec */
  CAppBase::_ZN8CAppBase6CreateEiPPc(this,param_1,param_2);
  (**(code **)(*(int *)this + 8))(this);
  return 1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuildServerMain.cpp](source/DNFServer/GameServer/Guild/DNFGuildServerMain.cpp)（约第 72 行）：

```cpp
int main(int argc, char** argv)
{
    CApplication* app = CApplicationInstance();
    try
    {
        app->Create(argc, argv);
        app->Process();
    }
    catch (...)
    {
        app->Clear();
    }
    return 1;
}
```

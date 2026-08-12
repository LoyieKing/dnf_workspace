# main

`main`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x805abb0` | `0x53` | `0x8063d26` | `0x5b` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,26 +1,28 @@
 push   %ebp
 mov    %esp,%ebp
 and    $0xfffffff0,%esp
 sub    $0x20,%esp
 call   <T> <_Z20CApplicationInstancev>
+mov    %eax,0x18(%esp)
+mov    0xc(%ebp),%eax
+mov    %eax,0x8(%esp)
+mov    0x8(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    0x18(%esp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN8CAppBase6CreateEiPPc>
+mov    0x18(%esp),%eax
+mov    (%eax),%eax
 mov    %eax,0x1c(%esp)
 mov    0x1c(%esp),%eax
-mov    0xc(%ebp),%edx
-mov    %edx,0x8(%esp)
-mov    0x8(%ebp),%edx
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN8CAppBase6CreateEiPPc>
-mov    0x1c(%esp),%eax
-mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
-mov    0x1c(%esp),%eax
+mov    0x18(%esp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    0x1c(%esp),%eax
+mov    0x18(%esp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8CAppBase5ClearEv>
 mov    $0x1,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

undefined4 main(int param_1,char **param_2)

{
  CAppBase *this;
  
  this = (CAppBase *)CApplicationInstance();
  CAppBase::_ZN8CAppBase6CreateEiPPc(this,param_1,param_2);
  (**(code **)(*(int *)this + 8))(this);
  CAppBase::_ZN8CAppBase5ClearEv(this);
  return 1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFMonitorServerMain.cpp](source/DNFServer/GameServer/Monitor/DNFMonitorServerMain.cpp)（约第 4 行）：

```cpp
int main(int argc, char** argv)
{
    CAppBase* app = CApplicationInstance();
    app->Create(argc, argv);
    void (**vtab)(void*) = (void(**)(void*))(*(void**)app);
    vtab[2](app);
    app->Clear();
    return 1;
}
```

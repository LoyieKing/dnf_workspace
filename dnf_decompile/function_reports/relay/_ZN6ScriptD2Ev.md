# _ZN6ScriptD2Ev

`Script::~Script()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| relay | DIFF | `0x804a7e6` | `0x6c` | `0x8056850` | `0x78` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,39 +1,43 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
-sub    $0x10,%esp
+sub    $0x20,%esp
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN6ScriptD1Ev+0x55>
+je     <T> <_ZN6ScriptD1Ev+0x61>
 mov    0x8(%ebp),%eax
-mov    (%eax),%ebx
+mov    (%eax),%eax
+mov    %eax,-0xc(%ebp)
+cmpl   $0x0,-0xc(%ebp)
+je     <T> <_ZN6ScriptD1Ev+0x36>
+mov    -0xc(%ebp),%ebx
 test   %ebx,%ebx
-je     <T> <_ZN6ScriptD1Ev+0x2a>
+je     <T> <_ZN6ScriptD1Ev+0x36>
 mov    %ebx,(%esp)
 call   <T> <_ZN13ScriptRawDataD1Ev>
 mov    %ebx,(%esp)
 call   <T> <_ZdlPv>
 mov    0x8(%ebp),%eax
 movl   $0x0,(%eax)
-jmp    <T> <_ZN6ScriptD1Ev+0x55>
+jmp    <T> <_ZN6ScriptD1Ev+0x61>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x108,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5TokenD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 mov    0x8(%ebp),%eax
 add    $0x108,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5TokenD1Ev>
-add    $0x10,%esp
+add    $0x20,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* Script::~Script() */

void __thiscall Script::_ZN6ScriptD2Ev(Script *this)

{
  ScriptRawData *this_00;
  
  if (*(int *)this != 0) {
    this_00 = *(ScriptRawData **)this;
    if (this_00 != (ScriptRawData *)0x0) {
                    /* try { // try from 0804a803 to 0804a807 has its CatchHandler @ 0804a81b */
      ScriptRawData::~ScriptRawData(this_00);
      operator_delete(this_00);
    }
    *(undefined4 *)this = 0;
  }
  Token::~Token((Token *)(this + 0x108));
  return;
}
```

## 3. 我们的源码函数

定义于 [source/ChannelOld/DNFChannelBridge/Script.cpp](source/ChannelOld/DNFChannelBridge/Script.cpp)（约第 12 行）：

```cpp
Script::~Script()
{
    if (data != NULL)
    {
        delete data;
        data = NULL;
    }
}
```

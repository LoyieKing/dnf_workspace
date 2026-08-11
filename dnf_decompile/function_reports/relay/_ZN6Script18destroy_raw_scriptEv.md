# _ZN6Script18destroy_raw_scriptEv

`Script::destroy_raw_script()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| relay | DIFF | `0x804ad96` | `0x38` | `0x8056d8c` | `0x44` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,22 +1,26 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
-sub    $0x14,%esp
+sub    $0x24,%esp
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN6Script18destroy_raw_scriptEv+0x32>
+je     <T> <_ZN6Script18destroy_raw_scriptEv+0x3e>
 mov    0x8(%ebp),%eax
-mov    (%eax),%ebx
+mov    (%eax),%eax
+mov    %eax,-0xc(%ebp)
+cmpl   $0x0,-0xc(%ebp)
+je     <T> <_ZN6Script18destroy_raw_scriptEv+0x35>
+mov    -0xc(%ebp),%ebx
 test   %ebx,%ebx
-je     <T> <_ZN6Script18destroy_raw_scriptEv+0x29>
+je     <T> <_ZN6Script18destroy_raw_scriptEv+0x35>
 mov    %ebx,(%esp)
 call   <T> <_ZN13ScriptRawDataD1Ev>
 mov    %ebx,(%esp)
 call   <T> <_ZdlPv>
 mov    0x8(%ebp),%eax
 movl   $0x0,(%eax)
-add    $0x14,%esp
+add    $0x24,%esp
 pop    %ebx
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* Script::destroy_raw_script() */

void __thiscall Script::_ZN6Script18destroy_raw_scriptEv(Script *this)

{
  ScriptRawData *this_00;
  
  if (*(int *)this != 0) {
    this_00 = *(ScriptRawData **)this;
    if (this_00 != (ScriptRawData *)0x0) {
      ScriptRawData::~ScriptRawData(this_00);
      operator_delete(this_00);
    }
    *(undefined4 *)this = 0;
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/ChannelOld/DNFChannelBridge/Script.cpp](source/ChannelOld/DNFChannelBridge/Script.cpp)（约第 251 行）：

```cpp
void Script::destroy_raw_script()
{
    if (data != NULL)
    {
        delete data;
        data = NULL;
    }
}
```

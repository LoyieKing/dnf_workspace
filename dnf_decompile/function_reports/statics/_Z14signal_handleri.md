# _Z14signal_handleri

`signal_handler(int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | NEAR | `0x804c0b0` | `0x2c` | `0x805cf22` | `0x2c` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,16 +1,16 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 call   <T> <_Z25CSignalTranslatorInstancev>
 mov    0x8(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNK17CSignalTranslator9getSignalEi>
 mov    (%eax),%edx
-mov    (%edx),%ecx
-mov    0x8(%ebp),%edx
-mov    %edx,0x4(%esp)
+mov    (%edx),%edx
+mov    0x8(%ebp),%ecx
+mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
-call   *%ecx
+call   *%edx
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* signal_handler(int) */

void signal_handler(int param_1)

{
  CSignalTranslator *this;
  undefined4 *puVar1;
  
  this = (CSignalTranslator *)CSignalTranslatorInstance();
  puVar1 = (undefined4 *)CSignalTranslator::getSignal(this,param_1);
  (**(code **)*puVar1)(puVar1,param_1);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/COServer/DNFSignalTranslator.cpp](source/DNFServer/GameServer/COServer/DNFSignalTranslator.cpp)（约第 173 行）：

```cpp
void signal_handler(int sig)
{
    CSignalTranslatorInstance()->getSignal(sig)->handle(sig);
}
```

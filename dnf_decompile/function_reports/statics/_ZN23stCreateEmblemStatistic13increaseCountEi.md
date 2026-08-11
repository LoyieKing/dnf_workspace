# _ZN23stCreateEmblemStatistic13increaseCountEi

`stCreateEmblemStatistic::increaseCount(int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x807579a` | `0x29` | `0x8065834` | `0x26` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,18 +1,15 @@
 push   %ebp
 mov    %esp,%ebp
 cmpl   $0x0,0xc(%ebp)
-js     <T> <_ZN23stCreateEmblemStatistic13increaseCountEi+0x23>
+js     <T> <_ZN23stCreateEmblemStatistic13increaseCountEi+0x24>
 cmpl   $0x6,0xc(%ebp)
-jg     <T> <_ZN23stCreateEmblemStatistic13increaseCountEi+0x26>
-mov    0xc(%ebp),%eax
-mov    0x8(%ebp),%edx
-mov    (%edx,%eax,4),%edx
-lea    0x1(%edx),%ecx
-mov    0x8(%ebp),%edx
-mov    %ecx,(%edx,%eax,4)
-jmp    <T> <_ZN23stCreateEmblemStatistic13increaseCountEi+0x27>
-nop
-jmp    <T> <_ZN23stCreateEmblemStatistic13increaseCountEi+0x27>
-nop
+jg     <T> <_ZN23stCreateEmblemStatistic13increaseCountEi+0x24>
+mov    0xc(%ebp),%edx
+mov    0xc(%ebp),%ecx
+mov    0x8(%ebp),%eax
+mov    (%eax,%ecx,4),%eax
+lea    0x1(%eax),%ecx
+mov    0x8(%ebp),%eax
+mov    %ecx,(%eax,%edx,4)
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* stCreateEmblemStatistic::increaseCount(int) */

void __thiscall
stCreateEmblemStatistic::_ZN23stCreateEmblemStatistic13increaseCountEi
          (stCreateEmblemStatistic *this,int param_1)

{
  if ((-1 < param_1) && (param_1 < 7)) {
    *(int *)(this + param_1 * 4) = *(int *)(this + param_1 * 4) + 1;
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/GMAccounts.cpp](source/DNFServer/GameServer/Statics/GMAccounts.cpp)（约第 115 行）：

```cpp
void stCreateEmblemStatistic::increaseCount(int idx)
{
    if (-1 < idx && idx < 7)
    {
        m_data[idx] += 1;
    }
}
```

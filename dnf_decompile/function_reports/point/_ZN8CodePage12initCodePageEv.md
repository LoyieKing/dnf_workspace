# _ZN8CodePage12initCodePageEv

`CodePage::initCodePage()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| point | NEAR | `0x806b774` | `0x44` | `0x806901c` | `0x44` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,14 +1,14 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 movl   $"UTF-8",0x4(%esp)
 movl   $&_ZL15gClientEncoding,(%esp)
 call   <T> <_ZNSsaSEPKc>
-movl   $"GBK",0x4(%esp)
+movl   $"BIG5",0x4(%esp)
 movl   $&_ZL15gScriptEncoding,(%esp)
 call   <T> <_ZNSsaSEPKc>
 movl   $"UTF-8",0x4(%esp)
 movl   $&_ZL17gDatabaseEncoding,(%esp)
 call   <T> <_ZNSsaSEPKc>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

void CodePage::_ZN8CodePage12initCodePageEv(void)

{
  std::string::operator=(&gClientEncoding,"UTF-8");
  std::string::operator=(&gScriptEncoding,"GBK");
  std::string::operator=(&gDatabaseEncoding,"UTF-8");
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/ServerCommon/DNFFunctionLib.cpp](source/DNFServer/ServerCommon/DNFFunctionLib.cpp)（约第 367 行）：

```cpp
void CodePage::initCodePage() {
    gClientEncoding = "UTF-8";
    gScriptEncoding = "BIG5";
    gDatabaseEncoding = "UTF-8";
}
```

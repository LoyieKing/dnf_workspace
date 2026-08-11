# _ZN13ScriptRawData10push_childEPS_

`ScriptRawData::push_child(ScriptRawData*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| channel | NEAR | `0x80608ca` | `0x50` | `0x8051f4a` | `0x50` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,20 +1,20 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0xc(%ebp),%eax
 test   %eax,%eax
 jne    <T> <_ZN13ScriptRawData10push_childEPS_+0x31>
 movl   $"bool ScriptRawData::push_child(ScriptRawData*)",0xc(%esp)
-movl   $0x41,0x8(%esp)
+movl   $0x5a,0x8(%esp)
 movl   $"ScriptRawData.cpp",0x4(%esp)
 movl   $"sd",(%esp)
 call   <T> <__assert_fail>
 mov    0x8(%ebp),%eax
 lea    0x10c(%eax),%edx
 lea    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNSt4listIP13ScriptRawDataSaIS1_EE9push_backERKS1_>
 mov    $0x1,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* DWARF original prototype: bool push_child(ScriptRawData * this, ScriptRawData * sd) */

bool __thiscall
ScriptRawData::_ZN13ScriptRawData10push_childEPS_(ScriptRawData *this,ScriptRawData *sd)

{
  if (sd == (ScriptRawData *)0x0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("sd","ScriptRawData.cpp",0x41,"bool ScriptRawData::push_child(ScriptRawData*)");
  }
  std::list<ScriptRawData*,_std::allocator<ScriptRawData*>_>::push_back(&this->m_child_list,&sd);
  return true;
}
```

## 3. 我们的源码函数

定义于 [source/ChannelOld/DNFChannelBridge/ScriptRawData.cpp](source/ChannelOld/DNFChannelBridge/ScriptRawData.cpp)（约第 88 行）：

```cpp
bool ScriptRawData::push_child(ScriptRawData* sd)
{
    assert(sd);
    m_child_list.push_back(sd);
    return true;
}
```

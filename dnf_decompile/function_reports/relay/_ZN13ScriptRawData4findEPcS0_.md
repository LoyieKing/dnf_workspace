# _ZN13ScriptRawData4findEPcS0_

`ScriptRawData::find(char*, char*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| relay | DIFF | `0x804b4da` | `0x42` | `0x8057384` | `0x44` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,22 +1,22 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13ScriptRawData4findEPc>
 mov    %eax,-0xc(%ebp)
 cmpl   $0x0,-0xc(%ebp)
-jne    <T> <_ZN13ScriptRawData4findEPcS0_+0x28>
-mov    $0x0,%eax
-jmp    <T> <_ZN13ScriptRawData4findEPcS0_+0x40>
+jne    <T> <_ZN13ScriptRawData4findEPcS0_+0x2a>
+movl   $0x0,-0xc(%ebp)
+jmp    <T> <_ZN13ScriptRawData4findEPcS0_+0x3f>
 mov    0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13ScriptRawData4findEPc>
 mov    %eax,-0xc(%ebp)
 mov    -0xc(%ebp),%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* ScriptRawData::find(char*, char*) */

undefined4 __thiscall
ScriptRawData::_ZN13ScriptRawData4findEPcS0_(ScriptRawData *this,char *param_1,char *param_2)

{
  ScriptRawData *this_00;
  undefined4 uVar1;
  
  this_00 = (ScriptRawData *)find(this,param_1);
  if (this_00 == (ScriptRawData *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = find(this_00,param_2);
  }
  return uVar1;
}
```

## 3. 我们的源码函数

定义于 [source/ChannelOld/DNFChannelBridge/ScriptRawData.cpp](source/ChannelOld/DNFChannelBridge/ScriptRawData.cpp)（约第 57 行）：

```cpp
ScriptRawData* ScriptRawData::find(char* parent_key, char* child_key)
{
    ScriptRawData* p = find(parent_key);
    if (p == NULL)
    {
        return NULL;
    }
    p = p->find(child_key);
    return p;
}
```

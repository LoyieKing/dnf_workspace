# _ZN6Script13on_keyval_tagEPcS0_

`Script::on_keyval_tag(char*, char*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| relay | DIFF | `0x804ac8e` | `0x95` | `0x8056cfc` | `0x90` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,51 +1,50 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x2c,%esp
 movl   $0x114,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strlen>
 mov    %eax,%edx
 mov    %ebx,%eax
 mov    %edx,0xc(%esp)
 mov    0x10(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    0xc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13ScriptRawDataC1EPcS0_i>
 jmp    <T> <_ZN6Script13on_keyval_tagEPcS0_+0x5a>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <_ZdlPv>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 mov    %ebx,-0x1c(%ebp)
 cmpl   $0x0,-0x1c(%ebp)
-jne    <T> <_ZN6Script13on_keyval_tagEPcS0_+0x6a>
-mov    $0x0,%eax
-jmp    <T> <_ZN6Script13on_keyval_tagEPcS0_+0x8d>
+je     <T> <_ZN6Script13on_keyval_tagEPcS0_+0x81>
 mov    0x8(%ebp),%eax
 lea    0x4(%eax),%ecx
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    -0x1c(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13ScriptRawData10push_childEPcPS_>
-mov    $0x1,%eax
+cmpl   $0x0,-0x1c(%ebp)
+setne  %al
 add    $0x2c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* Script::on_keyval_tag(char*, char*) */

bool __thiscall Script::_ZN6Script13on_keyval_tagEPcS0_(Script *this,char *param_1,char *param_2)

{
  ScriptRawData *this_00;
  size_t sVar1;
  
  this_00 = operator_new(0x114);
  sVar1 = strlen(param_2);
                    /* try { // try from 0804acc9 to 0804accd has its CatchHandler @ 0804acd0 */
  ScriptRawData::ScriptRawData(this_00,param_1,param_2,sVar1);
  if (this_00 != (ScriptRawData *)0x0) {
    ScriptRawData::push_child(*(char **)this,(ScriptRawData *)(this + 4));
  }
  return this_00 != (ScriptRawData *)0x0;
}
```

## 3. 我们的源码函数

定义于 [source/ChannelOld/DNFChannelBridge/Script.cpp](source/ChannelOld/DNFChannelBridge/Script.cpp)（约第 137 行）：

```cpp
bool Script::on_keyval_tag(char* key, char* val)
{
    ScriptRawData* s = new ScriptRawData(key, val, strlen(val));
    if (s == NULL)
    {
        return false;
    }
    assert(strlen(parent_tag));
    data->push_child(parent_tag, s);
    return true;
}
```

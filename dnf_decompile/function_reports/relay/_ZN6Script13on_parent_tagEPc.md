# _ZN6Script13on_parent_tagEPc

`Script::on_parent_tag(char*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| relay | DIFF | `0x804abc6` | `0xc8` | `0x8056c38` | `0xc3` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,58 +1,57 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x2c,%esp
 movl   $0x114,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 movl   $0x0,0xc(%esp)
 movl   $0x0,0x8(%esp)
 mov    0xc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13ScriptRawDataC1EPcS0_i>
 jmp    <T> <_ZN6Script13on_parent_tagEPc+0x52>
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
-jne    <T> <_ZN6Script13on_parent_tagEPc+0x62>
-mov    $0x0,%eax
-jmp    <T> <_ZN6Script13on_parent_tagEPc+0xc0>
+je     <T> <_ZN6Script13on_parent_tagEPc+0xb4>
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    -0x1c(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13ScriptRawData10push_childEPS_>
 mov    0x8(%ebp),%eax
 add    $0x4,%eax
 movl   $0x100,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memset>
 mov    0x8(%ebp),%eax
 lea    0x4(%eax),%edx
 movl   $0xff,0x8(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <strncpy>
 mov    0x8(%ebp),%eax
 movb   $0x0,0x103(%eax)
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

/* Script::on_parent_tag(char*) */

bool __thiscall Script::_ZN6Script13on_parent_tagEPc(Script *this,char *param_1)

{
  ScriptRawData *this_00;
  
  this_00 = operator_new(0x114);
                    /* try { // try from 0804abf9 to 0804abfd has its CatchHandler @ 0804ac00 */
  ScriptRawData::ScriptRawData(this_00,param_1,(char *)0x0,0);
  if (this_00 != (ScriptRawData *)0x0) {
    ScriptRawData::push_child(*(ScriptRawData **)this);
    memset(this + 4,0,0x100);
    strncpy((char *)(this + 4),param_1,0xff);
    this[0x103] = (Script)0x0;
  }
  return this_00 != (ScriptRawData *)0x0;
}
```

## 3. 我们的源码函数

定义于 [source/ChannelOld/DNFChannelBridge/Script.cpp](source/ChannelOld/DNFChannelBridge/Script.cpp)（约第 124 行）：

```cpp
bool Script::on_parent_tag(char* key)
{
    ScriptRawData* s = new ScriptRawData(key, NULL, 0);
    if (s == NULL)
    {
        return false;
    }
    data->push_child(s);
    memset(parent_tag, 0, 0x100);
    strncpy(parent_tag, key, 0xff);
    return true;
}
```

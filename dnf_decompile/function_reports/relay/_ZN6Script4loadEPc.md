# _ZN6Script4loadEPc

`Script::load(char*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| relay | DIFF | `0x804a852` | `0x120` | `0x80568c8` | `0x122` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,78 +1,77 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x42c,%esp
 movl   $0x114,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 movl   $0x1,0xc(%esp)
 movl   $"title",0x8(%esp)
 movl   $"[__root__]",0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13ScriptRawDataC1EPcS0_i>
 jmp    <T> <_ZN6Script4loadEPc+0x56>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <_ZdlPv>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
-mov    %ebx,%edx
+mov    %ebx,-0x20(%ebp)
 mov    0x8(%ebp),%eax
+mov    -0x20(%ebp),%edx
 mov    %edx,(%eax)
 mov    0x8(%ebp),%eax
 add    $0x4,%eax
 movl   $0x100,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memset>
 mov    0x8(%ebp),%eax
 movl   $0x0,0x540(%eax)
 movl   $"rb",0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <fopen>
 mov    0x8(%ebp),%edx
 mov    %eax,0x104(%edx)
 mov    0x8(%ebp),%eax
 mov    0x104(%eax),%eax
 test   %eax,%eax
-jne    <T> <_ZN6Script4loadEPc+0xb9>
+jne    <T> <_ZN6Script4loadEPc+0xbc>
 mov    $0x0,%eax
-jmp    <T> <_ZN6Script4loadEPc+0x115>
-nop
+jmp    <T> <_ZN6Script4loadEPc+0x117>
 mov    0x8(%ebp),%eax
 mov    0x104(%eax),%eax
-lea    -0x41a(%ebp),%edx
+lea    -0x421(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6Script6fgetlnEP8_IO_FILEPc>
-mov    %al,-0x19(%ebp)
-lea    -0x41a(%ebp),%eax
+mov    %eax,-0x1c(%ebp)
+lea    -0x421(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6Script5parseEPc>
-movzbl -0x19(%ebp),%eax
-xor    $0x1,%eax
+cmpl   $0x1,-0x1c(%ebp)
+sete   %al
 test   %al,%al
-je     <T> <_ZN6Script4loadEPc+0xb8>
-nop
+jne    <T> <_ZN6Script4loadEPc+0xbc>
 mov    0x8(%ebp),%eax
 mov    0x104(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <fclose>
 mov    $0x1,%eax
 add    $0x42c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* Script::load(char*) */

undefined4 __thiscall Script::_ZN6Script4loadEPc(Script *this,char *param_1)

{
  ScriptRawData *this_00;
  FILE *pFVar1;
  undefined4 uVar2;
  char local_41e [1025];
  char local_1d;
  
  this_00 = operator_new(0x114);
                    /* try { // try from 0804a889 to 0804a88d has its CatchHandler @ 0804a890 */
  ScriptRawData::ScriptRawData(this_00,"[__root__]","title",1);
  *(ScriptRawData **)this = this_00;
  memset(this + 4,0,0x100);
  *(undefined4 *)(this + 0x540) = 0;
  pFVar1 = fopen(param_1,"rb");
  *(FILE **)(this + 0x104) = pFVar1;
  if (*(int *)(this + 0x104) == 0) {
    uVar2 = 0;
  }
  else {
    do {
      local_1d = fgetln(this,*(_IO_FILE **)(this + 0x104),local_41e);
      parse(this,local_41e);
    } while (local_1d == '\x01');
    fclose(*(FILE **)(this + 0x104));
    uVar2 = 1;
  }
  return uVar2;
}
```

## 3. 我们的源码函数

定义于 [source/ChannelOld/DNFChannelBridge/Script.cpp](source/ChannelOld/DNFChannelBridge/Script.cpp)（约第 21 行）：

```cpp
bool Script::load(char* filename)
{
    data = new ScriptRawData("[__root__]", "title", 1);
    assert(data);
    memset(parent_tag, 0, 0x100);
    depth = 0;
    fp = fopen(filename, "rb");
    if (fp == NULL)
    {
        return false;
    }
    char buf[0x401];
    bool ret;
    for (;;)
    {
        ret = fgetln(fp, buf);
        parse(buf);
        if (!ret)
        {
            break;
        }
    }
    fclose(fp);
    return true;
}
```

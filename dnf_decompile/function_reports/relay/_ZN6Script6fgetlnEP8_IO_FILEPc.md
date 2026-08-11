# _ZN6Script6fgetlnEP8_IO_FILEPc

`Script::fgetln(_IO_FILE*, char*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| relay | DIFF | `0x804a972` | `0xb2` | `0x80569ea` | `0xad` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,57 +1,55 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
-movl   $0x0,-0x10(%ebp)
-jmp    <T> <_ZN6Script6fgetlnEP8_IO_FILEPc+0x99>
+movl   $0x0,-0x14(%ebp)
+cmpl   $0x3ff,-0x14(%ebp)
+jle    <T> <_ZN6Script6fgetlnEP8_IO_FILEPc+0x20>
+mov    $0x1,%eax
+jmp    <T> <_ZN6Script6fgetlnEP8_IO_FILEPc+0xab>
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <fgetc>
-mov    %eax,-0xc(%ebp)
+mov    %eax,-0x10(%ebp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <feof>
-test   %eax,%eax
-setne  %al
-test   %al,%al
-je     <T> <_ZN6Script6fgetlnEP8_IO_FILEPc+0x44>
-mov    -0x10(%ebp),%eax
+mov    %eax,-0xc(%ebp)
+cmpl   $0x0,-0xc(%ebp)
+jne    <T> <_ZN6Script6fgetlnEP8_IO_FILEPc+0x9c>
+mov    -0x14(%ebp),%eax
 add    0x10(%ebp),%eax
-movb   $0x0,(%eax)
-mov    $0x0,%eax
-jmp    <T> <_ZN6Script6fgetlnEP8_IO_FILEPc+0xb0>
-mov    -0x10(%ebp),%eax
-add    0x10(%ebp),%eax
-mov    -0xc(%ebp),%edx
+mov    -0x10(%ebp),%edx
 mov    %dl,(%eax)
-mov    -0x10(%ebp),%eax
+mov    -0x14(%ebp),%eax
 add    0x10(%ebp),%eax
 movzbl (%eax),%eax
 cmp    $0xa,%al
-jne    <T> <_ZN6Script6fgetlnEP8_IO_FILEPc+0x95>
-mov    -0x10(%ebp),%eax
+jne    <T> <_ZN6Script6fgetlnEP8_IO_FILEPc+0x93>
+mov    -0x14(%ebp),%eax
 add    0x10(%ebp),%eax
 movb   $0x0,(%eax)
-cmpl   $0x0,-0x10(%ebp)
-jle    <T> <_ZN6Script6fgetlnEP8_IO_FILEPc+0x8e>
-mov    -0x10(%ebp),%eax
+cmpl   $0x0,-0x14(%ebp)
+jle    <T> <_ZN6Script6fgetlnEP8_IO_FILEPc+0x8c>
+mov    -0x14(%ebp),%eax
 sub    $0x1,%eax
 add    0x10(%ebp),%eax
 movzbl (%eax),%eax
 cmp    $0xd,%al
-jne    <T> <_ZN6Script6fgetlnEP8_IO_FILEPc+0x8e>
-mov    -0x10(%ebp),%eax
+jne    <T> <_ZN6Script6fgetlnEP8_IO_FILEPc+0x8c>
+mov    -0x14(%ebp),%eax
 sub    $0x1,%eax
 add    0x10(%ebp),%eax
 movb   $0x0,(%eax)
 mov    $0x1,%eax
-jmp    <T> <_ZN6Script6fgetlnEP8_IO_FILEPc+0xb0>
+jmp    <T> <_ZN6Script6fgetlnEP8_IO_FILEPc+0xab>
 mov    $0x1,%eax
-jmp    <T> <_ZN6Script6fgetlnEP8_IO_FILEPc+0xb0>
-addl   $0x1,-0x10(%ebp)
-cmpl   $0x3ff,-0x10(%ebp)
-setle  %al
-test   %al,%al
-jne    <T> <_ZN6Script6fgetlnEP8_IO_FILEPc+0x12>
-mov    $0x1,%eax
+jmp    <T> <_ZN6Script6fgetlnEP8_IO_FILEPc+0xab>
+addl   $0x1,-0x14(%ebp)
+jmp    <T> <_ZN6Script6fgetlnEP8_IO_FILEPc+0xd>
+nop
+mov    -0x14(%ebp),%eax
+add    0x10(%ebp),%eax
+movb   $0x0,(%eax)
+mov    $0x0,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* Script::fgetln(_IO_FILE*, char*) */

undefined4 __thiscall
Script::_ZN6Script6fgetlnEP8_IO_FILEPc(Script *this,_IO_FILE *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  int local_14;
  
  local_14 = 0;
  while( true ) {
    if (0x3ff < local_14) {
      return 1;
    }
    iVar1 = fgetc(param_1);
    iVar2 = feof(param_1);
    if (iVar2 != 0) break;
    param_2[local_14] = (char)iVar1;
    if (param_2[local_14] == '\n') {
      param_2[local_14] = '\0';
      if ((0 < local_14) && (param_2[local_14 + -1] == '\r')) {
        param_2[local_14 + -1] = '\0';
        return 1;
      }
      return 1;
    }
    local_14 = local_14 + 1;
  }
  param_2[local_14] = '\0';
  return 0;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/ChannelOld/DNFChannelBridge/Script.cpp, source/ChannelOld/DNFChannelServer/Script.cpp, source/DNFServer/GameServer/Relay/Script.cpp, source/DNFServer/GameServer/ServerLab/ServerLib/basic_source/Script.cpp, source/ChannelOld/DNFChannelBridge/Authenticator.h, source/ChannelOld/DNFChannelBridge/ChannelService.h, source/ChannelOld/DNFChannelBridge/ChannelServiceApp.h, source/ChannelOld/DNFChannelBridge/CheckThread.h 等 340 个文件*

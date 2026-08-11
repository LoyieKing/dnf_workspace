# _Z15convertFromUtf8PKciP10WideString

`convertFromUtf8(char const*, int, WideString*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| point | NEAR | `0x8097647` | `0x1fd` | `0x80b660b` | `0x1fd` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,161 +1,161 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x30,%esp
 movl   $0x0,-0x24(%ebp)
-movl   $0x0,-0x18(%ebp)
+movl   $0x0,-0x20(%ebp)
 jmp    <T> <_Z15convertFromUtf8PKciP10WideString+0x76>
-mov    -0x18(%ebp),%eax
+mov    -0x20(%ebp),%eax
 add    0x8(%ebp),%eax
 movzbl (%eax),%eax
-mov    %al,-0x11(%ebp)
-movzbl -0x11(%ebp),%eax
+mov    %al,-0x19(%ebp)
+movzbl -0x19(%ebp),%eax
 test   %al,%al
 js     <T> <_Z15convertFromUtf8PKciP10WideString+0x36>
 addl   $0x1,-0x24(%ebp)
-addl   $0x1,-0x18(%ebp)
+addl   $0x1,-0x20(%ebp)
 jmp    <T> <_Z15convertFromUtf8PKciP10WideString+0x76>
-cmpb   $0xdf,-0x11(%ebp)
+cmpb   $0xdf,-0x19(%ebp)
 ja     <T> <_Z15convertFromUtf8PKciP10WideString+0x51>
-mov    -0x18(%ebp),%eax
+mov    -0x20(%ebp),%eax
 add    $0x1,%eax
 cmp    0xc(%ebp),%eax
 jge    <T> <_Z15convertFromUtf8PKciP10WideString+0x51>
 addl   $0x1,-0x24(%ebp)
-addl   $0x2,-0x18(%ebp)
+addl   $0x2,-0x20(%ebp)
 jmp    <T> <_Z15convertFromUtf8PKciP10WideString+0x76>
-cmpb   $0xef,-0x11(%ebp)
+cmpb   $0xef,-0x19(%ebp)
 ja     <T> <_Z15convertFromUtf8PKciP10WideString+0x6c>
-mov    -0x18(%ebp),%eax
+mov    -0x20(%ebp),%eax
 add    $0x2,%eax
 cmp    0xc(%ebp),%eax
 jge    <T> <_Z15convertFromUtf8PKciP10WideString+0x6c>
 addl   $0x1,-0x24(%ebp)
-addl   $0x3,-0x18(%ebp)
+addl   $0x3,-0x20(%ebp)
 jmp    <T> <_Z15convertFromUtf8PKciP10WideString+0x76>
 mov    $0x0,%eax
 jmp    <T> <_Z15convertFromUtf8PKciP10WideString+0x1f6>
-mov    -0x18(%ebp),%eax
+mov    -0x20(%ebp),%eax
 cmp    0xc(%ebp),%eax
 setl   %al
 test   %al,%al
 jne    <T> <_Z15convertFromUtf8PKciP10WideString+0x18>
 cmpl   $0x0,-0x24(%ebp)
 jne    <T> <_Z15convertFromUtf8PKciP10WideString+0xa6>
-movl   $&data#ad71c57e(.rodata),0x4(%esp)
+movl   $&data#1f2671d4(.rodata),0x4(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10WideStringaSEPKw>
 mov    $0x1,%eax
 jmp    <T> <_Z15convertFromUtf8PKciP10WideString+0x1f6>
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14WideStringData16createTerminatedEi>
-mov    %eax,-0x20(%ebp)
-mov    -0x20(%ebp),%eax
+mov    %eax,-0x18(%ebp)
+mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14WideStringData9getBufferEv>
-mov    %eax,-0x1c(%ebp)
+mov    %eax,-0x14(%ebp)
 movl   $0x0,-0x10(%ebp)
 jmp    <T> <_Z15convertFromUtf8PKciP10WideString+0x194>
 mov    -0x10(%ebp),%eax
 add    0x8(%ebp),%eax
 movzbl (%eax),%eax
 mov    %al,-0x9(%ebp)
 movzbl -0x9(%ebp),%eax
 test   %al,%al
 js     <T> <_Z15convertFromUtf8PKciP10WideString+0xf8>
 movzbl -0x9(%ebp),%edx
-mov    -0x1c(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %edx,(%eax)
-addl   $0x4,-0x1c(%ebp)
+addl   $0x4,-0x14(%ebp)
 addl   $0x1,-0x10(%ebp)
 jmp    <T> <_Z15convertFromUtf8PKciP10WideString+0x194>
 cmpb   $0xdf,-0x9(%ebp)
 ja     <T> <_Z15convertFromUtf8PKciP10WideString+0x138>
 mov    -0x10(%ebp),%eax
 add    $0x1,%eax
 cmp    0xc(%ebp),%eax
 jge    <T> <_Z15convertFromUtf8PKciP10WideString+0x138>
 movzbl -0x9(%ebp),%eax
 and    $0x1f,%eax
 mov    %eax,%edx
 shl    $0x6,%edx
 mov    -0x10(%ebp),%eax
 add    $0x1,%eax
 add    0x8(%ebp),%eax
 movzbl (%eax),%eax
 movsbl %al,%eax
 and    $0x3f,%eax
 add    %eax,%edx
-mov    -0x1c(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %edx,(%eax)
-addl   $0x4,-0x1c(%ebp)
+addl   $0x4,-0x14(%ebp)
 addl   $0x2,-0x10(%ebp)
 jmp    <T> <_Z15convertFromUtf8PKciP10WideString+0x194>
 cmpb   $0xef,-0x9(%ebp)
 ja     <T> <_Z15convertFromUtf8PKciP10WideString+0x18d>
 mov    -0x10(%ebp),%eax
 add    $0x2,%eax
 cmp    0xc(%ebp),%eax
 jge    <T> <_Z15convertFromUtf8PKciP10WideString+0x18d>
 movzbl -0x9(%ebp),%eax
 shl    $0xc,%eax
 movzwl %ax,%edx
 mov    -0x10(%ebp),%eax
 add    $0x1,%eax
 add    0x8(%ebp),%eax
 movzbl (%eax),%eax
 movsbl %al,%eax
 and    $0x3f,%eax
 shl    $0x6,%eax
 add    %eax,%edx
 mov    -0x10(%ebp),%eax
 add    $0x2,%eax
 add    0x8(%ebp),%eax
 movzbl (%eax),%eax
 movsbl %al,%eax
 and    $0x3f,%eax
 add    %eax,%edx
-mov    -0x1c(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %edx,(%eax)
-addl   $0x4,-0x1c(%ebp)
+addl   $0x4,-0x14(%ebp)
 addl   $0x3,-0x10(%ebp)
 jmp    <T> <_Z15convertFromUtf8PKciP10WideString+0x194>
 mov    $0x0,%eax
 jmp    <T> <_Z15convertFromUtf8PKciP10WideString+0x1f6>
 mov    -0x10(%ebp),%eax
 cmp    0xc(%ebp),%eax
 setl   %al
 test   %al,%al
 jne    <T> <_Z15convertFromUtf8PKciP10WideString+0xce>
-mov    -0x20(%ebp),%eax
+mov    -0x18(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10WideStringC1EP14WideStringData>
 lea    -0x28(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10WideStringaSERKS_>
 jmp    <T> <_Z15convertFromUtf8PKciP10WideString+0x1e6>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10WideStringD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10WideStringD1Ev>
 mov    $0x1,%eax
 add    $0x30,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

bool convertFromUtf8(char *source,int32 sourceLen,WideString *dest)

{
  WideString *src;
  WideString local_2c;
  int local_28;
  WideStringData *local_24;
  uint *local_20;
  int local_1c;
  byte local_15;
  int local_14;
  byte local_d;
  
                    /* Unresolved local var: int32 newLength@[???]
                       Unresolved local var: WideStringData * newData@[???]
                       Unresolved local var: wchar * newBuf@[???] */
  local_28 = 0;
                    /* Unresolved local var: int32 i@[???] */
  local_1c = 0;
  while (local_1c < sourceLen) {
                    /* Unresolved local var: byte c@[???] */
    local_15 = source[local_1c];
    if ((char)local_15 < '\0') {
      if ((local_15 < 0xe0) && (local_1c + 1 < sourceLen)) {
        local_28 = local_28 + 1;
        local_1c = local_1c + 2;
      }
      else {
        if ((0xef < local_15) || (sourceLen <= local_1c + 2)) {
          return false;
        }
        local_28 = local_28 + 1;
        local_1c = local_1c + 3;
      }
    }
    else {
      local_28 = local_28 + 1;
      local_1c = local_1c + 1;
    }
  }
  if (local_28 == 0) {
    WideString::operator=(dest,(wchar *)&DAT_0815e078);
  }
  else {
    local_24 = WideStringData::createTerminated(local_28);
    local_20 = (uint *)WideStringData::getBuffer(local_24);
                    /* Unresolved local var: int32 i@[???] */
    local_14 = 0;
    while (local_14 < sourceLen) {
                    /* Unresolved local var: byte c@[???] */
      local_d = source[local_14];
      if ((char)local_d < '\0') {
        if ((local_d < 0xe0) && (local_14 + 1 < sourceLen)) {
          *local_20 = (local_d & 0x1f) * 0x40 + ((int)source[local_14 + 1] & 0x3fU);
          local_20 = local_20 + 1;
          local_14 = local_14 + 2;
        }
        else {
          if ((0xef < local_d) || (sourceLen <= local_14 + 2)) {
            return false;
          }
          *local_20 = (local_d & 0xf) * 0x1000 + ((int)source[local_14 + 1] & 0x3fU) * 0x40 +
                      ((int)source[local_14 + 2] & 0x3fU);
          local_20 = local_20 + 1;
          local_14 = local_14 + 3;
        }
      }
      else {
        *local_20 = (uint)local_d;
        local_20 = local_20 + 1;
        local_14 = local_14 + 1;
      }
    }
    WideString::WideString(&local_2c,local_24);
    src = &local_2c;
                    /* try { // try from 0809780b to 0809780f has its CatchHandler @ 08097812 */
    WideString::operator=(dest,src);
    WideString::~WideString(&local_2c,(int)src);
  }
  return true;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/Library/Include/Core/UnicodeConvert.cpp, source/ChannelOld/DNFChannelBridge/Authenticator.h, source/ChannelOld/DNFChannelBridge/ChannelService.h, source/ChannelOld/DNFChannelBridge/ChannelServiceApp.h, source/ChannelOld/DNFChannelBridge/CheckThread.h, source/ChannelOld/DNFChannelBridge/CommandLineParser.h, source/ChannelOld/DNFChannelBridge/DBMgr.h, source/ChannelOld/DNFChannelBridge/DebugLog.h 等 581 个文件*

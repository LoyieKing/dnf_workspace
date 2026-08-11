# _Z13convertToUtf8PKwiP10CharString

`convertToUtf8(wchar_t const*, int, CharString*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| auction | NEAR | `0x809749b` | `0x1ac` | `0x80b6463` | `0x1ac` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,135 +1,135 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x30,%esp
 movl   $0x0,-0x24(%ebp)
-movl   $0x0,-0x18(%ebp)
+movl   $0x0,-0x20(%ebp)
 jmp    <T> <_Z13convertToUtf8PKwiP10CharString+0x51>
-mov    -0x18(%ebp),%eax
+mov    -0x20(%ebp),%eax
 shl    $0x2,%eax
 add    0x8(%ebp),%eax
 mov    (%eax),%eax
-mov    %eax,-0x14(%ebp)
-cmpl   $0x7f,-0x14(%ebp)
+mov    %eax,-0x1c(%ebp)
+cmpl   $0x7f,-0x1c(%ebp)
 jg     <T> <_Z13convertToUtf8PKwiP10CharString+0x36>
 addl   $0x1,-0x24(%ebp)
-addl   $0x1,-0x18(%ebp)
+addl   $0x1,-0x20(%ebp)
 jmp    <T> <_Z13convertToUtf8PKwiP10CharString+0x51>
-cmpl   $0x7ff,-0x14(%ebp)
+cmpl   $0x7ff,-0x1c(%ebp)
 jg     <T> <_Z13convertToUtf8PKwiP10CharString+0x49>
 addl   $0x2,-0x24(%ebp)
-addl   $0x1,-0x18(%ebp)
+addl   $0x1,-0x20(%ebp)
 jmp    <T> <_Z13convertToUtf8PKwiP10CharString+0x51>
 addl   $0x3,-0x24(%ebp)
-addl   $0x1,-0x18(%ebp)
-mov    -0x18(%ebp),%eax
+addl   $0x1,-0x20(%ebp)
+mov    -0x20(%ebp),%eax
 cmp    0xc(%ebp),%eax
 setl   %al
 test   %al,%al
 jne    <T> <_Z13convertToUtf8PKwiP10CharString+0x18>
 cmpl   $0x0,-0x24(%ebp)
 jne    <T> <_Z13convertToUtf8PKwiP10CharString+0x81>
-movl   $&data#91c0ae37(.rodata),0x4(%esp)
+movl   $&data#b4f0f2b0(.rodata),0x4(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CharStringaSEPKc>
 mov    $0x1,%eax
 jmp    <T> <_Z13convertToUtf8PKwiP10CharString+0x1a5>
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CharStringData16createTerminatedEi>
-mov    %eax,-0x20(%ebp)
-mov    -0x20(%ebp),%eax
+mov    %eax,-0x18(%ebp)
+mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CharStringData9getBufferEv>
-mov    %eax,-0x1c(%ebp)
+mov    %eax,-0x14(%ebp)
 movl   $0x0,-0x10(%ebp)
 jmp    <T> <_Z13convertToUtf8PKwiP10CharString+0x143>
 mov    -0x10(%ebp),%eax
 shl    $0x2,%eax
 add    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,-0xc(%ebp)
 cmpl   $0x7f,-0xc(%ebp)
 jg     <T> <_Z13convertToUtf8PKwiP10CharString+0xcd>
 mov    -0xc(%ebp),%eax
 mov    %eax,%edx
-mov    -0x1c(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %dl,(%eax)
-addl   $0x1,-0x1c(%ebp)
+addl   $0x1,-0x14(%ebp)
 jmp    <T> <_Z13convertToUtf8PKwiP10CharString+0x13f>
 cmpl   $0x7ff,-0xc(%ebp)
 jg     <T> <_Z13convertToUtf8PKwiP10CharString+0x100>
 mov    -0xc(%ebp),%eax
 sar    $0x6,%eax
 mov    %eax,%edx
 or     $0xffffffc0,%edx
-mov    -0x1c(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %dl,(%eax)
-addl   $0x1,-0x1c(%ebp)
+addl   $0x1,-0x14(%ebp)
 mov    -0xc(%ebp),%eax
 and    $0x3f,%eax
 mov    %eax,%edx
 or     $0xffffff80,%edx
-mov    -0x1c(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %dl,(%eax)
-addl   $0x1,-0x1c(%ebp)
+addl   $0x1,-0x14(%ebp)
 jmp    <T> <_Z13convertToUtf8PKwiP10CharString+0x13f>
 mov    -0xc(%ebp),%eax
 sar    $0xc,%eax
 mov    %eax,%edx
 or     $0xffffffe0,%edx
-mov    -0x1c(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %dl,(%eax)
-addl   $0x1,-0x1c(%ebp)
+addl   $0x1,-0x14(%ebp)
 mov    -0xc(%ebp),%eax
 sar    $0x6,%eax
 and    $0x3f,%eax
 mov    %eax,%edx
 or     $0xffffff80,%edx
-mov    -0x1c(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %dl,(%eax)
-addl   $0x1,-0x1c(%ebp)
+addl   $0x1,-0x14(%ebp)
 mov    -0xc(%ebp),%eax
 and    $0x3f,%eax
 mov    %eax,%edx
 or     $0xffffff80,%edx
-mov    -0x1c(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %dl,(%eax)
-addl   $0x1,-0x1c(%ebp)
+addl   $0x1,-0x14(%ebp)
 addl   $0x1,-0x10(%ebp)
 mov    -0x10(%ebp),%eax
 cmp    0xc(%ebp),%eax
 setl   %al
 test   %al,%al
 jne    <T> <_Z13convertToUtf8PKwiP10CharString+0xa9>
-mov    -0x20(%ebp),%eax
+mov    -0x18(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CharStringC1EP14CharStringData>
 lea    -0x28(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CharStringaSERKS_>
 jmp    <T> <_Z13convertToUtf8PKwiP10CharString+0x195>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CharStringD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CharStringD1Ev>
 mov    $0x1,%eax
 add    $0x30,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

bool convertToUtf8(wchar *source,int32 sourceLen,CharString *dest)

{
  byte bVar1;
  byte bVar2;
  CharString *src;
  CharString local_2c;
  int local_28;
  CharStringData *local_24;
  byte *local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
                    /* Unresolved local var: int32 newLength@[???]
                       Unresolved local var: CharStringData * newData@[???]
                       Unresolved local var: char * newBuf@[???] */
  local_28 = 0;
                    /* Unresolved local var: int32 i@[???] */
  local_1c = 0;
  while (local_1c < sourceLen) {
                    /* Unresolved local var: wchar c@[???] */
    local_18 = source[local_1c];
    if (local_18 < 0x80) {
      local_28 = local_28 + 1;
      local_1c = local_1c + 1;
    }
    else if (local_18 < 0x800) {
      local_28 = local_28 + 2;
      local_1c = local_1c + 1;
    }
    else {
      local_28 = local_28 + 3;
      local_1c = local_1c + 1;
    }
  }
  if (local_28 == 0) {
    CharString::operator=(dest,"");
  }
  else {
    local_24 = CharStringData::createTerminated(local_28);
    local_20 = (byte *)CharStringData::getBuffer(local_24);
                    /* Unresolved local var: int32 i@[???] */
    for (local_14 = 0; local_14 < sourceLen; local_14 = local_14 + 1) {
                    /* Unresolved local var: wchar c@[???] */
      local_10 = source[local_14];
      bVar2 = (byte)local_10;
      if (local_10 < 0x80) {
        *local_20 = bVar2;
        local_20 = local_20 + 1;
      }
      else {
        bVar1 = (byte)(local_10 >> 6);
        if (local_10 < 0x800) {
          *local_20 = bVar1 | 0xc0;
          local_20[1] = bVar2 & 0x3f | 0x80;
          local_20 = local_20 + 2;
        }
        else {
          *local_20 = (byte)(local_10 >> 0xc) | 0xe0;
          local_20[1] = bVar1 & 0x3f | 0x80;
          local_20[2] = bVar2 & 0x3f | 0x80;
          local_20 = local_20 + 3;
        }
      }
    }
    CharString::CharString(&local_2c,local_24);
    src = &local_2c;
                    /* try { // try from 0809760e to 08097612 has its CatchHandler @ 08097615 */
    CharString::operator=(dest,src);
    CharString::~CharString(&local_2c,(int)src);
  }
  return true;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：mnt/d/Docs/my_sources/dnf_workspace/dnf_decompile/source/Library/Include/Core/UnicodeConvert.cpp, source/Library/Include/Core/Strings.h, source/Library/Include/Core/UnicodeConvert.cpp, source/Library/Include/Core/UnicodeConvert.h, source/DNFServer/ServerCommon/DNFFileLog.h, source/DNFServer/ServerCommon/DNFFunctionLib.h, source/DNFServer/ServerCommon/ServerXml.h, source/DNFServer/ServerCommon/Thread.h 等 219 个文件*

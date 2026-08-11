# _ZN10WideString6concatEwRKS_

`WideString::concat(wchar_t, WideString const&)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| point | DIFF | `0x809d0c0` | `0xd4` | `0x80a49bc` | `0xd2` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,69 +1,70 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x2c,%esp
 mov    0x8(%ebp),%ebx
 cmpl   $0x0,0xc(%ebp)
 jne    <T> <_ZN10WideString6concatEwRKS_+0x28>
 mov    %ebx,%eax
 mov    0x10(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN10WideStringC1ERKS_>
-jmp    <T> <_ZN10WideString6concatEwRKS_+0xc6>
+jmp    <T> <_ZN10WideString6concatEwRKS_+0xc4>
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK10WideString6lengthEv>
 test   %eax,%eax
 sete   %al
 test   %al,%al
 je     <T> <_ZN10WideString6concatEwRKS_+0x4f>
 mov    %ebx,%eax
 mov    0xc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN10WideStringC1Ew>
-jmp    <T> <_ZN10WideString6concatEwRKS_+0xc6>
+jmp    <T> <_ZN10WideString6concatEwRKS_+0xc4>
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK10WideString6lengthEv>
 add    $0x1,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14WideStringData16createTerminatedEi>
 mov    %eax,-0x1c(%ebp)
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14WideStringData9getBufferEv>
 mov    0xc(%ebp),%edx
 mov    %edx,(%eax)
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK10WideString6lengthEv>
-lea    0x0(,%eax,4),%edi
+shl    $0x2,%eax
+mov    %eax,%edi
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK10WideString5c_strEv>
 mov    %eax,%esi
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14WideStringData9getBufferEv>
 add    $0x4,%eax
 mov    %edi,0x8(%esp)
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memcpy>
 mov    %ebx,%eax
 mov    -0x1c(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN10WideStringC1EP14WideStringData>
 mov    %ebx,%eax
 mov    %ebx,%eax
 add    $0x2c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret    $0x4
```
## 2. Ghidra 反编译 C

```c

WideString *
WideString::_ZN10WideString6concatEwRKS_
          (WideString *__return_storage_ptr__,wchar src1,WideString *src2)

{
  int32 iVar1;
  WideStringData *this;
  wchar *pwVar2;
  wchar *pwVar3;
  
                    /* Unresolved local var: WideStringData * newData@[???] */
  if (src1 == 0) {
    WideString(__return_storage_ptr__,src2);
  }
  else {
    iVar1 = length(src2);
    if (iVar1 == 0) {
      WideString(__return_storage_ptr__,src1);
    }
    else {
      iVar1 = length(src2);
      this = WideStringData::createTerminated(iVar1 + 1);
      pwVar2 = WideStringData::getBuffer(this);
      *pwVar2 = src1;
      iVar1 = length(src2);
      pwVar2 = c_str(src2);
      pwVar3 = WideStringData::getBuffer(this);
      memcpy(pwVar3 + 1,pwVar2,iVar1 * 4);
      WideString(__return_storage_ptr__,this);
    }
  }
  return __return_storage_ptr__;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/Library/Include/Core/Strings.cpp, source/ChannelOld/DNFChannelBridge/Authenticator.h, source/ChannelOld/DNFChannelBridge/ChannelService.h, source/ChannelOld/DNFChannelBridge/ChannelServiceApp.h, source/ChannelOld/DNFChannelBridge/CheckThread.h, source/ChannelOld/DNFChannelBridge/CommandLineParser.h, source/ChannelOld/DNFChannelBridge/DBMgr.h, source/ChannelOld/DNFChannelBridge/DebugLog.h 等 581 个文件*

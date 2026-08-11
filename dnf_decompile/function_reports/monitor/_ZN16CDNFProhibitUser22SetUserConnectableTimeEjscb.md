# _ZN16CDNFProhibitUser22SetUserConnectableTimeEjscb

`CDNFProhibitUser::SetUserConnectableTime(unsigned int, short, char, bool)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x806cd2e` | `0x50` | `0x807f32e` | `0x55` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,28 +1,31 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0xc,%esp
 mov    0x10(%ebp),%ecx
 mov    0x14(%ebp),%edx
 mov    0x18(%ebp),%eax
 mov    %cx,-0x4(%ebp)
 mov    %dl,-0x8(%ebp)
 mov    %al,-0xc(%ebp)
 mov    0x8(%ebp),%eax
-movzbl 0x7(%eax),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN16CDNFProhibitUser22SetUserConnectableTimeEjscb+0x4e>
+add    $0x7,%eax
+movzbl (%eax),%eax
+cmp    $0x1,%al
+je     <T> <_ZN16CDNFProhibitUser22SetUserConnectableTimeEjscb+0x53>
 mov    0x8(%ebp),%eax
-movzwl -0x4(%ebp),%edx
-mov    %dx,0x4(%eax)
+lea    0x4(%eax),%edx
+movzwl -0x4(%ebp),%eax
+mov    %ax,(%edx)
 mov    0x8(%ebp),%eax
 mov    0xc(%ebp),%edx
 mov    %edx,(%eax)
 mov    0x8(%ebp),%eax
-movzbl -0x8(%ebp),%edx
-mov    %dl,0x6(%eax)
+lea    0x6(%eax),%edx
+movzbl -0x8(%ebp),%eax
+mov    %al,(%edx)
 mov    0x8(%ebp),%eax
-movzbl -0xc(%ebp),%edx
-mov    %dl,0x7(%eax)
+lea    0x7(%eax),%edx
+movzbl -0xc(%ebp),%eax
+mov    %al,(%edx)
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDNFProhibitUser::SetUserConnectableTime(unsigned int, short, char, bool) */

void __thiscall
CDNFProhibitUser::_ZN16CDNFProhibitUser22SetUserConnectableTimeEjscb
          (CDNFProhibitUser *this,uint param_1,short param_2,char param_3,bool param_4)

{
  if (this[7] != (CDNFProhibitUser)0x1) {
    *(short *)(this + 4) = param_2;
    *(uint *)this = param_1;
    this[6] = (CDNFProhibitUser)param_3;
    this[7] = (CDNFProhibitUser)param_4;
  }
  return;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/DNFProhibitUser.cpp, source/DNFServer/GameServer/Monitor/DNFProhibitUser.cpp, source/ChannelOld/DNFChannelBridge/Authenticator.h, source/ChannelOld/DNFChannelBridge/ChannelService.h, source/ChannelOld/DNFChannelBridge/ChannelServiceApp.h, source/ChannelOld/DNFChannelBridge/CheckThread.h, source/ChannelOld/DNFChannelBridge/CommandLineParser.h, source/ChannelOld/DNFChannelBridge/DBMgr.h 等 639 个文件*

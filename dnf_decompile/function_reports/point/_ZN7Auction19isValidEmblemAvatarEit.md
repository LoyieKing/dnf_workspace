# _ZN7Auction19isValidEmblemAvatarEit

`Auction::isValidEmblemAvatar(int, unsigned short)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| point | NEAR | `0x805c250` | `0xb5` | `0x804fcba` | `0xb5` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,63 +1,63 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x4,%esp
 mov    0x10(%ebp),%eax
 mov    %ax,-0x4(%ebp)
 cmpw   $0x0,-0x4(%ebp)
 jne    <T> <_ZN7Auction19isValidEmblemAvatarEit+0x1e>
 mov    $0x1,%eax
 jmp    <T> <_ZN7Auction19isValidEmblemAvatarEit+0xb3>
 mov    0xc(%ebp),%ecx
 mov    $0x66666667,%edx
 mov    %ecx,%eax
 imul   %edx
 sar    $0x2,%edx
 mov    %ecx,%eax
 sar    $0x1f,%eax
 sub    %eax,%edx
 mov    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
 add    %eax,%eax
 mov    %ecx,%edx
 sub    %eax,%edx
 lea    -0x2(%edx),%eax
 mov    %eax,0xc(%ebp)
 cmpl   $0x7,0xc(%ebp)
 ja     <T> <_ZN7Auction19isValidEmblemAvatarEit+0x9a>
 mov    0xc(%ebp),%eax
 shl    $0x2,%eax
-mov    &data#c7a988ca(.rodata)(%eax),%eax
+mov    &data#912d3bf4(.rodata)(%eax),%eax
 jmp    *%eax
 cmpw   $0x1,-0x4(%ebp)
 je     <T> <_ZN7Auction19isValidEmblemAvatarEit+0xa1>
 mov    $0x0,%eax
 jmp    <T> <_ZN7Auction19isValidEmblemAvatarEit+0xb3>
 cmpw   $0x2,-0x4(%ebp)
 je     <T> <_ZN7Auction19isValidEmblemAvatarEit+0xa4>
 mov    $0x0,%eax
 jmp    <T> <_ZN7Auction19isValidEmblemAvatarEit+0xb3>
 cmpw   $0x4,-0x4(%ebp)
 je     <T> <_ZN7Auction19isValidEmblemAvatarEit+0xa7>
 cmpw   $0x10,-0x4(%ebp)
 je     <T> <_ZN7Auction19isValidEmblemAvatarEit+0xaa>
 mov    $0x0,%eax
 jmp    <T> <_ZN7Auction19isValidEmblemAvatarEit+0xb3>
 cmpw   $0x8,-0x4(%ebp)
 je     <T> <_ZN7Auction19isValidEmblemAvatarEit+0xad>
 mov    $0x0,%eax
 jmp    <T> <_ZN7Auction19isValidEmblemAvatarEit+0xb3>
 mov    $0x0,%eax
 jmp    <T> <_ZN7Auction19isValidEmblemAvatarEit+0xb3>
 nop
 jmp    <T> <_ZN7Auction19isValidEmblemAvatarEit+0xae>
 nop
 jmp    <T> <_ZN7Auction19isValidEmblemAvatarEit+0xae>
 nop
 jmp    <T> <_ZN7Auction19isValidEmblemAvatarEit+0xae>
 nop
 jmp    <T> <_ZN7Auction19isValidEmblemAvatarEit+0xae>
 nop
 mov    $0x1,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* DWARF original prototype: bool isValidEmblemAvatar(Auction * this, int category,
   avatarEmblemType_t emblemSocketType_) */

bool __thiscall
Auction::_ZN7Auction19isValidEmblemAvatarEit
          (Auction *this,int category,avatarEmblemType_t emblemSocketType_)

{
  if (emblemSocketType_ != 0) {
    switch(category % 10) {
    case 2:
    case 3:
      if (emblemSocketType_ != 1) {
        return false;
      }
      break;
    case 4:
    case 8:
      if (emblemSocketType_ != 2) {
        return false;
      }
      break;
    case 5:
    case 6:
      if ((emblemSocketType_ != 4) && (emblemSocketType_ != 0x10)) {
        return false;
      }
      break;
    case 7:
    case 9:
      if (emblemSocketType_ != 8) {
        return false;
      }
      break;
    default:
      return false;
    }
  }
  return true;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/auction/Auction.cpp, source/ChannelOld/DNFChannelBridge/Authenticator.h, source/ChannelOld/DNFChannelBridge/ChannelService.h, source/ChannelOld/DNFChannelBridge/ChannelServiceApp.h, source/ChannelOld/DNFChannelBridge/CheckThread.h, source/ChannelOld/DNFChannelBridge/CommandLineParser.h, source/ChannelOld/DNFChannelBridge/DBMgr.h, source/ChannelOld/DNFChannelBridge/DebugLog.h 等 581 个文件*

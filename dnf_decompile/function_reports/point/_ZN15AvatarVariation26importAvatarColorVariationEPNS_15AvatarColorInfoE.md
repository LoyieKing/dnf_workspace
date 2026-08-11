# _ZN15AvatarVariation26importAvatarColorVariationEPNS_15AvatarColorInfoE

`AvatarVariation::importAvatarColorVariation(AvatarVariation::AvatarColorInfo*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| point | DIFF | `0x807b6c2` | `0xef` | `0x807eb9f` | `0xf1` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,66 +1,67 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x428,%esp
 movl   $0x0,-0x10(%ebp)
 movl   $"rb",0x4(%esp)
 movl   $"AvatarColorVariation.etc",(%esp)
 call   <T> <fopen>
 mov    %eax,-0xc(%ebp)
 cmpl   $0x0,-0xc(%ebp)
-sete   %al
-test   %al,%al
-je     <T> <_ZN15AvatarVariation26importAvatarColorVariationEPNS_15AvatarColorInfoE+0x3c>
+jne    <T> <_ZN15AvatarVariation26importAvatarColorVariationEPNS_15AvatarColorInfoE+0x37>
 mov    $0x0,%eax
-jmp    <T> <_ZN15AvatarVariation26importAvatarColorVariationEPNS_15AvatarColorInfoE+0xed>
+jmp    <T> <_ZN15AvatarVariation26importAvatarColorVariationEPNS_15AvatarColorInfoE+0xef>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIiN15AvatarVariation8colorRGBESt4lessIiESaISt4pairIKiS1_EEE5clearEv>
-jmp    <T> <_ZN15AvatarVariation26importAvatarColorVariationEPNS_15AvatarColorInfoE+0x99>
+jmp    <T> <_ZN15AvatarVariation26importAvatarColorVariationEPNS_15AvatarColorInfoE+0x4b>
+nop
+jmp    <T> <_ZN15AvatarVariation26importAvatarColorVariationEPNS_15AvatarColorInfoE+0x4b>
+nop
+jmp    <T> <_ZN15AvatarVariation26importAvatarColorVariationEPNS_15AvatarColorInfoE+0x4b>
+nop
+mov    -0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <feof>
+test   %eax,%eax
+jne    <T> <_ZN15AvatarVariation26importAvatarColorVariationEPNS_15AvatarColorInfoE+0x82>
+mov    -0xc(%ebp),%eax
+mov    %eax,0x8(%esp)
+movl   $0x400,0x4(%esp)
+lea    -0x410(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <fgets>
+test   %eax,%eax
+je     <T> <_ZN15AvatarVariation26importAvatarColorVariationEPNS_15AvatarColorInfoE+0x82>
+mov    $0x1,%eax
+jmp    <T> <_ZN15AvatarVariation26importAvatarColorVariationEPNS_15AvatarColorInfoE+0x87>
+mov    $0x0,%eax
+test   %al,%al
+je     <T> <_ZN15AvatarVariation26importAvatarColorVariationEPNS_15AvatarColorInfoE+0xde>
 movzbl -0x410(%ebp),%eax
 cmp    $0x23,%al
-je     <T> <_ZN15AvatarVariation26importAvatarColorVariationEPNS_15AvatarColorInfoE+0x95>
+je     <T> <_ZN15AvatarVariation26importAvatarColorVariationEPNS_15AvatarColorInfoE+0x44>
 movzbl -0x410(%ebp),%eax
 cmp    $0x2f,%al
-je     <T> <_ZN15AvatarVariation26importAvatarColorVariationEPNS_15AvatarColorInfoE+0x98>
+je     <T> <_ZN15AvatarVariation26importAvatarColorVariationEPNS_15AvatarColorInfoE+0x47>
 cmpl   $0xfe,-0x10(%ebp)
-jle    <T> <_ZN15AvatarVariation26importAvatarColorVariationEPNS_15AvatarColorInfoE+0x6f>
+jle    <T> <_ZN15AvatarVariation26importAvatarColorVariationEPNS_15AvatarColorInfoE+0xb1>
 mov    $0x0,%eax
-jmp    <T> <_ZN15AvatarVariation26importAvatarColorVariationEPNS_15AvatarColorInfoE+0xed>
+jmp    <T> <_ZN15AvatarVariation26importAvatarColorVariationEPNS_15AvatarColorInfoE+0xef>
 mov    0x8(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x410(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN15AvatarVariation11Parse_TableEPciPNS_15AvatarColorInfoE>
 test   %al,%al
-je     <T> <_ZN15AvatarVariation26importAvatarColorVariationEPNS_15AvatarColorInfoE+0x99>
+je     <T> <_ZN15AvatarVariation26importAvatarColorVariationEPNS_15AvatarColorInfoE+0x4a>
 addl   $0x1,-0x10(%ebp)
-jmp    <T> <_ZN15AvatarVariation26importAvatarColorVariationEPNS_15AvatarColorInfoE+0x99>
+jmp    <T> <_ZN15AvatarVariation26importAvatarColorVariationEPNS_15AvatarColorInfoE+0x4b>
 nop
-jmp    <T> <_ZN15AvatarVariation26importAvatarColorVariationEPNS_15AvatarColorInfoE+0x99>
-nop
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <feof>
-test   %eax,%eax
-jne    <T> <_ZN15AvatarVariation26importAvatarColorVariationEPNS_15AvatarColorInfoE+0xd0>
-mov    -0xc(%ebp),%eax
-mov    %eax,0x8(%esp)
-movl   $0x400,0x4(%esp)
-lea    -0x410(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <fgets>
-test   %eax,%eax
-je     <T> <_ZN15AvatarVariation26importAvatarColorVariationEPNS_15AvatarColorInfoE+0xd0>
-mov    $0x1,%eax
-jmp    <T> <_ZN15AvatarVariation26importAvatarColorVariationEPNS_15AvatarColorInfoE+0xd5>
-mov    $0x0,%eax
-test   %al,%al
-jne    <T> <_ZN15AvatarVariation26importAvatarColorVariationEPNS_15AvatarColorInfoE+0x49>
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <fclose>
 mov    $0x1,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

bool AvatarVariation::_ZN15AvatarVariation26importAvatarColorVariationEPNS_15AvatarColorInfoE
               (AvatarColorInfo *avatarColorInfo)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  char local_414 [1024];
  int local_14;
  FILE *local_10;
  
                    /* Unresolved local var: int iParseCount@[???]
                       Unresolved local var: FILE * pFile@[???]
                       Unresolved local var: char[1024] cReadData@[???] */
  local_14 = 0;
  local_10 = fopen("AvatarColorVariation.etc","rb");
  if (local_10 == (FILE *)0x0) {
    bVar1 = false;
  }
  else {
    std::
    map<int,_AvatarVariation::colorRGB,_std::less<int>,_std::allocator<std::pair<const_int,_AvatarVariation::colorRGB>_>_>
    ::clear(&avatarColorInfo->avatarColorMap);
    while( true ) {
      iVar2 = feof(local_10);
      if ((iVar2 == 0) && (pcVar3 = fgets(local_414,0x400,local_10), pcVar3 != (char *)0x0)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (!bVar1) break;
      if ((local_414[0] != '#') && (local_414[0] != '/')) {
        if (0xfe < local_14) {
          return false;
        }
        bVar1 = _ZN15AvatarVariation11Parse_TableEPciPNS_15AvatarColorInfoE
                          (local_414,local_14,avatarColorInfo);
        if (bVar1) {
          local_14 = local_14 + 1;
        }
      }
    }
    fclose(local_10);
    bVar1 = true;
  }
  return bVar1;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFShared/GameScript/RDARScriptAvatarColorInfo.cpp, source/DNFShared/GameScript/RDARScriptAvatarColorInfo.cpp, source/DNFShared/GameScript/RDARScriptAvatarColorInfo.h, source/DNFServer/GameServer/ServerLab/ServerLib/basic_source/stdafx.h, source/DNFServer/ServerCommon/DNFFunctionLib.h, source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/StatisticsCollector.h, source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/DNFFunctionLibWrapper.h, source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/Character.h 等 301 个文件*

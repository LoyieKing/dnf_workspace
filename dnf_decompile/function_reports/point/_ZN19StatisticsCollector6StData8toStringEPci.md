# _ZN19StatisticsCollector6StData8toStringEPci

`StatisticsCollector::StData::toString(char*, int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| point | NEAR | `0x80923d8` | `0xe2` | `0x80a0682` | `0xe2` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,61 +1,61 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x124,%esp
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    %edx,0xc(%esp)
 mov    %eax,0x8(%esp)
 movl   $"%8d Try, %8d Fail",0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <sprintf>
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 test   %eax,%eax
 je     <T> <_ZN19StatisticsCollector6StData8toStringEPci+0xd9>
 movl   $0x2,0x8(%esp)
-movl   $&data#08c1d223(.rodata),0x4(%esp)
+movl   $&data#faf397a0(.rodata),0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strlen>
 add    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
 movl   $0x0,-0xc(%ebp)
 jmp    <T> <_ZN19StatisticsCollector6StData8toStringEPci+0xce>
 mov    -0xc(%ebp),%edx
 mov    0x8(%ebp),%eax
 mov    0x8(%eax,%edx,4),%eax
 test   %eax,%eax
 je     <T> <_ZN19StatisticsCollector6StData8toStringEPci+0xca>
 mov    -0xc(%ebp),%edx
 mov    0x8(%ebp),%eax
 mov    0x8(%eax,%edx,4),%ebx
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl11GetErrorStrEi>
 mov    %ebx,0xc(%esp)
 mov    %eax,0x8(%esp)
 movl   $"                  %s # %d\n",0x4(%esp)
 lea    -0x10c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <sprintf>
 mov    0x10(%ebp),%eax
 mov    %eax,0x8(%esp)
 lea    -0x10c(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strncat>
 addl   $0x1,-0xc(%ebp)
 cmpl   $0x36,-0xc(%ebp)
 setbe  %al
 test   %al,%al
 jne    <T> <_ZN19StatisticsCollector6StData8toStringEPci+0x6d>
 add    $0x124,%esp
 pop    %ebx
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* DWARF original prototype: void toString(StData.conflict * this, char * buf, int len) */

void __thiscall
StatisticsCollector::StData::_ZN19StatisticsCollector6StData8toStringEPci
          (StData *this,char *buf,int len)

{
  undefined4 uVar1;
  size_t sVar2;
  char *pcVar3;
  undefined *__src;
  size_t __n;
  char local_110 [256];
  uint local_10;
  
  sprintf(buf,"%8d Try, %8d Fail",*(undefined4 *)this,*(undefined4 *)&this->field_0x4);
  if (*(int *)&this->field_0x4 != 0) {
                    /* Unresolved local var: char[256] tmp@[???] */
    __n = 2;
    __src = &DAT_0815ce26;
    sVar2 = strlen(buf);
    memcpy(buf + sVar2,__src,__n);
                    /* Unresolved local var: size_t i@[???] */
    for (local_10 = 0; local_10 < 0x37; local_10 = local_10 + 1) {
      if (*(int *)(&this->field_0x8 + local_10 * 4) != 0) {
        uVar1 = *(undefined4 *)(&this->field_0x8 + local_10 * 4);
        pcVar3 = nsl::GetErrorStr(local_10);
        sprintf(local_110,"                  %s # %d\n",pcVar3,uVar1);
        strncat(buf,local_110,len);
      }
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/StatisticsCollector.cpp](source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/StatisticsCollector.cpp)（约第 104 行）：

```cpp
void StatisticsCollector::StData::toString(char* buf, int len)
{
    sprintf(buf, "%8d Try, %8d Fail", tryCnt, failCnt);
    if (failCnt != 0)
    {
        // 原版：memcpy(buf+strlen(buf), "\n", 2)（含 NUL；rodata 紧挨 format 串）
        // __builtin_strcat 在 4.4 -O0 降为该 memcpy 形态（先铺 n/src 再 strlen）
        __builtin_strcat(buf, "\n");
        char tmp[256];
        for (unsigned int i = 0; i < 0x37; i++)
        {
            if (becauseCnt[i] != 0)
            {
                sprintf(tmp, "                  %s # %d\n", nsl::GetErrorStr(i), becauseCnt[i]);
                strncat(buf, tmp, len);
            }
        }
    }
}
```

# unregistRanking

`_ZN8WongWork18CDeathTowerRanking15unregistRankingEj`

`WongWork::CDeathTowerRanking::unregistRanking(unsigned int)`

| 类 | 地址 |
|---|---|
| `WongWork::CDeathTowerRanking` | `0x08468552` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08468552  _ZN8WongWork18CDeathTowerRanking15unregistRankingEj
#           WongWork::CDeathTowerRanking::unregistRanking(unsigned int)
# range [0x08468552, 0x08468593]
08468552 +0x00:  push   %ebp
08468553 +0x01:  mov    %esp,%ebp
08468555 +0x03:  sub    $0x28,%esp
08468558 +0x06:  movl   $0x0,-0xc(%ebp)
0846855f +0x0d:  jmp    08468586 <+0x34>
08468561 +0x0f:  mov    -0xc(%ebp),%eax
08468564 +0x12:  mov    %eax,0x4(%esp)
08468568 +0x16:  mov    0x8(%ebp),%eax
0846856b +0x19:  mov    %eax,(%esp)
0846856e +0x1c:  call   08469d90 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x473>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x473
08468573 +0x21:  lea    0xc(%ebp),%edx
08468576 +0x24:  mov    %edx,0x4(%esp)
0846857a +0x28:  mov    %eax,(%esp)
0846857d +0x2b:  call   0846a02c <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x70f>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x70f
08468582 +0x30:  addl   $0x1,-0xc(%ebp)
08468586 +0x34:  cmpl   $0x4,-0xc(%ebp)
0846858a +0x38:  setle  %al
0846858d +0x3b:  test   %al,%al
0846858f +0x3d:  jne    08468561 <+0xf>
08468591 +0x3f:  leave
08468592 +0x40:  ret
08468593 +0x41:  nop
```

## 反编译 C

```c
// WongWork::CDeathTowerRanking::unregistRanking @ 0x8468552

/* WongWork::CDeathTowerRanking::unregistRanking(unsigned int) */

void WongWork::CDeathTowerRanking::unregistRanking(uint param_1)

{
  hash_map<unsigned_int,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<unsigned_int>>
  *this;
  uint local_10;
  
  for (local_10 = 0; (int)local_10 < 5; local_10 = local_10 + 1) {
    this = (hash_map<unsigned_int,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<unsigned_int>>
            *)_getRankingTable((CDeathTowerRanking *)param_1,local_10);
    __gnu_cxx::
    hash_map<unsigned_int,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<unsigned_int>>
    ::erase(this,(uint *)&stack0x00000008);
  }
  return;
}
```

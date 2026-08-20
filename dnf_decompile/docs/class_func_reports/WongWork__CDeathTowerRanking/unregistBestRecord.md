# unregistBestRecord

`_ZN8WongWork18CDeathTowerRanking18unregistBestRecordEj`

`WongWork::CDeathTowerRanking::unregistBestRecord(unsigned int)`

| 类 | 地址 |
|---|---|
| `WongWork::CDeathTowerRanking` | `0x08468b4c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08468b4c  _ZN8WongWork18CDeathTowerRanking18unregistBestRecordEj
#           WongWork::CDeathTowerRanking::unregistBestRecord(unsigned int)
# range [0x08468b4c, 0x08468b8d]
08468b4c +0x00:  push   %ebp
08468b4d +0x01:  mov    %esp,%ebp
08468b4f +0x03:  sub    $0x28,%esp
08468b52 +0x06:  movl   $0x0,-0xc(%ebp)
08468b59 +0x0d:  jmp    08468b80 <+0x34>
08468b5b +0x0f:  mov    -0xc(%ebp),%eax
08468b5e +0x12:  mov    %eax,0x4(%esp)
08468b62 +0x16:  mov    0x8(%ebp),%eax
08468b65 +0x19:  mov    %eax,(%esp)
08468b68 +0x1c:  call   08469dae <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x491>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x491
08468b6d +0x21:  lea    0xc(%ebp),%edx
08468b70 +0x24:  mov    %edx,0x4(%esp)
08468b74 +0x28:  mov    %eax,(%esp)
08468b77 +0x2b:  call   0846a20a <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x8ed>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x8ed
08468b7c +0x30:  addl   $0x1,-0xc(%ebp)
08468b80 +0x34:  cmpl   $0x4,-0xc(%ebp)
08468b84 +0x38:  setle  %al
08468b87 +0x3b:  test   %al,%al
08468b89 +0x3d:  jne    08468b5b <+0xf>
08468b8b +0x3f:  leave
08468b8c +0x40:  ret
08468b8d +0x41:  nop
```

## 反编译 C

```c
// WongWork::CDeathTowerRanking::unregistBestRecord @ 0x8468b4c

/* WongWork::CDeathTowerRanking::unregistBestRecord(unsigned int) */

void WongWork::CDeathTowerRanking::unregistBestRecord(uint param_1)

{
  hash_map<unsigned_int,WongWork::CDeathTowerRanking::stBestRecord_t,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<WongWork::CDeathTowerRanking::stBestRecord_t>>
  *this;
  uint local_10;
  
  for (local_10 = 0; (int)local_10 < 5; local_10 = local_10 + 1) {
    this = (hash_map<unsigned_int,WongWork::CDeathTowerRanking::stBestRecord_t,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<WongWork::CDeathTowerRanking::stBestRecord_t>>
            *)_getBestRecordTable((CDeathTowerRanking *)param_1,local_10);
    __gnu_cxx::
    hash_map<unsigned_int,WongWork::CDeathTowerRanking::stBestRecord_t,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<WongWork::CDeathTowerRanking::stBestRecord_t>>
    ::erase(this,(uint *)&stack0x00000008);
  }
  return;
}
```

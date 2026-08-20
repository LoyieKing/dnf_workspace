# resetRanking

`_ZN8WongWork18CDeathTowerRanking12resetRankingEv`

`WongWork::CDeathTowerRanking::resetRanking()`

| 类 | 地址 |
|---|---|
| `WongWork::CDeathTowerRanking` | `0x08468594` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08468594  _ZN8WongWork18CDeathTowerRanking12resetRankingEv
#           WongWork::CDeathTowerRanking::resetRanking()
# range [0x08468594, 0x08468613]
08468594 +0x00:  push   %ebp
08468595 +0x01:  mov    %esp,%ebp
08468597 +0x03:  sub    $0x28,%esp
0846859a +0x06:  movl   $0x0,-0x10(%ebp)
084685a1 +0x0d:  jmp    08468607 <+0x73>
084685a3 +0x0f:  mov    -0x10(%ebp),%eax
084685a6 +0x12:  mov    %eax,0x4(%esp)
084685aa +0x16:  mov    0x8(%ebp),%eax
084685ad +0x19:  mov    %eax,(%esp)
084685b0 +0x1c:  call   08469d90 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x473>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x473
084685b5 +0x21:  mov    %eax,(%esp)
084685b8 +0x24:  call   0846a046 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x729>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x729
084685bd +0x29:  movl   $0x0,-0xc(%ebp)
084685c4 +0x30:  jmp    084685f4 <+0x60>
084685c6 +0x32:  mov    -0x10(%ebp),%ecx
084685c9 +0x35:  mov    -0xc(%ebp),%edx
084685cc +0x38:  mov    %edx,%eax
084685ce +0x3a:  add    %eax,%eax
084685d0 +0x3c:  add    %edx,%eax
084685d2 +0x3e:  shl    $0x3,%eax
084685d5 +0x41:  imul   $0x12c0,%ecx,%edx
084685db +0x47:  add    %edx,%eax
084685dd +0x49:  add    $0x1290,%eax
084685e2 +0x4e:  add    0x8(%ebp),%eax
084685e5 +0x51:  add    $0x8,%eax
084685e8 +0x54:  mov    %eax,(%esp)
084685eb +0x57:  call   080e273a <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x4e0>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x4e0
084685f0 +0x5c:  addl   $0x1,-0xc(%ebp)
084685f4 +0x60:  mov    -0xc(%ebp),%eax
084685f7 +0x63:  cmp    $0xc7,%eax
084685fc +0x68:  setbe  %al
084685ff +0x6b:  test   %al,%al
08468601 +0x6d:  jne    084685c6 <+0x32>
08468603 +0x6f:  addl   $0x1,-0x10(%ebp)
08468607 +0x73:  cmpl   $0x4,-0x10(%ebp)
0846860b +0x77:  setle  %al
0846860e +0x7a:  test   %al,%al
08468610 +0x7c:  jne    084685a3 <+0xf>
08468612 +0x7e:  leave
08468613 +0x7f:  ret
```

## 反编译 C

```c
// WongWork::CDeathTowerRanking::resetRanking @ 0x8468594

/* WongWork::CDeathTowerRanking::resetRanking() */

void __thiscall WongWork::CDeathTowerRanking::resetRanking(CDeathTowerRanking *this)

{
  hash_map<unsigned_int,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<unsigned_int>>
  *this_00;
  uint local_14;
  uint local_10;
  
  for (local_14 = 0; (int)local_14 < 5; local_14 = local_14 + 1) {
    this_00 = (hash_map<unsigned_int,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<unsigned_int>>
               *)_getRankingTable(this,local_14);
    __gnu_cxx::
    hash_map<unsigned_int,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<unsigned_int>>
    ::clear(this_00);
    for (local_10 = 0; local_10 < 200; local_10 = local_10 + 1) {
      std::
      map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
      ::clear((map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
               *)(this + local_10 * 0x18 + local_14 * 0x12c0 + 0x1298));
    }
  }
  return;
}
```

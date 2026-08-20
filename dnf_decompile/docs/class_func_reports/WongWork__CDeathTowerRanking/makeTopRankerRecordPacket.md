# makeTopRankerRecordPacket

`_ZN8WongWork18CDeathTowerRanking25makeTopRankerRecordPacketEjR11PacketGuard`

`WongWork::CDeathTowerRanking::makeTopRankerRecordPacket(unsigned int, PacketGuard&)`

| 类 | 地址 |
|---|---|
| `WongWork::CDeathTowerRanking` | `0x08468c68` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08468c68  _ZN8WongWork18CDeathTowerRanking25makeTopRankerRecordPacketEjR11PacketGuard
#           WongWork::CDeathTowerRanking::makeTopRankerRecordPacket(unsigned int, PacketGuard&)
# range [0x08468c68, 0x08468cb5]
08468c68 +0x00:  push   %ebp
08468c69 +0x01:  mov    %esp,%ebp
08468c6b +0x03:  sub    $0x28,%esp
08468c6e +0x06:  movl   $0x1,-0xc(%ebp)
08468c75 +0x0d:  jmp    08468ca9 <+0x41>
08468c77 +0x0f:  mov    0xc(%ebp),%eax
08468c7a +0x12:  mov    -0xc(%ebp),%edx
08468c7d +0x15:  imul   $0x98,%edx,%edx
08468c83 +0x1b:  imul   $0x390,%eax,%eax
08468c89 +0x21:  lea    (%edx,%eax,1),%eax
08468c8c +0x24:  add    0x8(%ebp),%eax
08468c8f +0x27:  mov    0x10(%ebp),%edx
08468c92 +0x2a:  mov    %edx,0x8(%esp)
08468c96 +0x2e:  mov    %eax,0x4(%esp)
08468c9a +0x32:  mov    0x8(%ebp),%eax
08468c9d +0x35:  mov    %eax,(%esp)
08468ca0 +0x38:  call   08468cb6 <_ZN8WongWork18CDeathTowerRanking17_makeRecordPacketERKNS0_14stBestRecord_tER11PacketGuard>  ; WongWork::CDeathTowerRanking::_makeRecordPacket(WongWork::CDeathTowerRanking::stBestRecord_t const&, PacketGuard&)
08468ca5 +0x3d:  addl   $0x1,-0xc(%ebp)
08468ca9 +0x41:  cmpl   $0x5,-0xc(%ebp)
08468cad +0x45:  setle  %al
08468cb0 +0x48:  test   %al,%al
08468cb2 +0x4a:  jne    08468c77 <+0xf>
08468cb4 +0x4c:  leave
08468cb5 +0x4d:  ret
```

## 反编译 C

```c
// WongWork::CDeathTowerRanking::makeTopRankerRecordPacket @ 0x8468c68

/* WongWork::CDeathTowerRanking::makeTopRankerRecordPacket(unsigned int, PacketGuard&) */

void __thiscall
WongWork::CDeathTowerRanking::makeTopRankerRecordPacket
          (CDeathTowerRanking *this,uint param_1,PacketGuard *param_2)

{
  int local_10;
  
  for (local_10 = 1; local_10 < 6; local_10 = local_10 + 1) {
    _makeRecordPacket(this,(stBestRecord_t *)(this + local_10 * 0x98 + param_1 * 0x390),param_2);
  }
  return;
}
```

# _makeRecordPacket

`_ZN8WongWork18CDeathTowerRanking17_makeRecordPacketERKNS0_14stBestRecord_tER11PacketGuard`

`WongWork::CDeathTowerRanking::_makeRecordPacket(WongWork::CDeathTowerRanking::stBestRecord_t const&, PacketGuard&)`

| 类 | 地址 |
|---|---|
| `WongWork::CDeathTowerRanking` | `0x08468cb6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08468cb6  _ZN8WongWork18CDeathTowerRanking17_makeRecordPacketERKNS0_14stBestRecord_tER11PacketGuard
#           WongWork::CDeathTowerRanking::_makeRecordPacket(WongWork::CDeathTowerRanking::stBestRecord_t const&, PacketGuard&)
# range [0x08468cb6, 0x08468ddf]
08468cb6 +0x000:  push   %ebp
08468cb7 +0x001:  mov    %esp,%ebp
08468cb9 +0x003:  sub    $0x28,%esp
08468cbc +0x006:  movl   $0x0,-0xc(%ebp)
08468cc3 +0x00d:  jmp    08468d80 <+0xca>
08468cc8 +0x012:  mov    -0xc(%ebp),%eax
08468ccb +0x015:  add    %eax,%eax
08468ccd +0x017:  mov    %eax,%edx
08468ccf +0x019:  shl    $0x4,%edx
08468cd2 +0x01c:  sub    %eax,%edx
08468cd4 +0x01e:  mov    %edx,%eax
08468cd6 +0x020:  add    0xc(%ebp),%eax
08468cd9 +0x023:  add    $0x4,%eax
08468cdc +0x026:  mov    %eax,(%esp)
08468cdf +0x029:  call   0807e3b0 <_init+0xca8>
08468ce4 +0x02e:  mov    %eax,%edx
08468ce6 +0x030:  mov    0x10(%ebp),%eax
08468ce9 +0x033:  mov    %edx,0x4(%esp)
08468ced +0x037:  mov    %eax,(%esp)
08468cf0 +0x03a:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08468cf5 +0x03f:  mov    -0xc(%ebp),%eax
08468cf8 +0x042:  add    %eax,%eax
08468cfa +0x044:  mov    %eax,%edx
08468cfc +0x046:  shl    $0x4,%edx
08468cff +0x049:  sub    %eax,%edx
08468d01 +0x04b:  mov    %edx,%eax
08468d03 +0x04d:  add    0xc(%ebp),%eax
08468d06 +0x050:  add    $0x4,%eax
08468d09 +0x053:  mov    %eax,(%esp)
08468d0c +0x056:  call   0807e3b0 <_init+0xca8>
08468d11 +0x05b:  mov    %eax,%ecx
08468d13 +0x05d:  mov    -0xc(%ebp),%eax
08468d16 +0x060:  add    %eax,%eax
08468d18 +0x062:  mov    %eax,%edx
08468d1a +0x064:  shl    $0x4,%edx
08468d1d +0x067:  sub    %eax,%edx
08468d1f +0x069:  mov    %edx,%eax
08468d21 +0x06b:  add    0xc(%ebp),%eax
08468d24 +0x06e:  add    $0x4,%eax
08468d27 +0x071:  mov    %eax,%edx
08468d29 +0x073:  mov    0x10(%ebp),%eax
08468d2c +0x076:  mov    %ecx,0x8(%esp)
08468d30 +0x07a:  mov    %edx,0x4(%esp)
08468d34 +0x07e:  mov    %eax,(%esp)
08468d37 +0x081:  call   0822b770 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xe1a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xe1a
08468d3c +0x086:  mov    -0xc(%ebp),%eax
08468d3f +0x089:  mov    0xc(%ebp),%edx
08468d42 +0x08c:  movzbl 0x80(%edx,%eax,1),%eax
08468d4a +0x094:  movzbl %al,%edx
08468d4d +0x097:  mov    0x10(%ebp),%eax
08468d50 +0x09a:  mov    %edx,0x4(%esp)
08468d54 +0x09e:  mov    %eax,(%esp)
08468d57 +0x0a1:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08468d5c +0x0a6:  mov    -0xc(%ebp),%eax
08468d5f +0x0a9:  mov    0xc(%ebp),%edx
08468d62 +0x0ac:  movzbl 0x84(%edx,%eax,1),%eax
08468d6a +0x0b4:  movzbl %al,%edx
08468d6d +0x0b7:  mov    0x10(%ebp),%eax
08468d70 +0x0ba:  mov    %edx,0x4(%esp)
08468d74 +0x0be:  mov    %eax,(%esp)
08468d77 +0x0c1:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08468d7c +0x0c6:  addl   $0x1,-0xc(%ebp)
08468d80 +0x0ca:  cmpl   $0x3,-0xc(%ebp)
08468d84 +0x0ce:  setle  %al
08468d87 +0x0d1:  test   %al,%al
08468d89 +0x0d3:  jne    08468cc8 <+0x12>
08468d8f +0x0d9:  mov    0xc(%ebp),%eax
08468d92 +0x0dc:  mov    0x88(%eax),%eax
08468d98 +0x0e2:  mov    %eax,%edx
08468d9a +0x0e4:  mov    0x10(%ebp),%eax
08468d9d +0x0e7:  mov    %edx,0x4(%esp)
08468da1 +0x0eb:  mov    %eax,(%esp)
08468da4 +0x0ee:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08468da9 +0x0f3:  mov    0xc(%ebp),%eax
08468dac +0x0f6:  mov    0x8c(%eax),%eax
08468db2 +0x0fc:  mov    %eax,%edx
08468db4 +0x0fe:  mov    0x10(%ebp),%eax
08468db7 +0x101:  mov    %edx,0x4(%esp)
08468dbb +0x105:  mov    %eax,(%esp)
08468dbe +0x108:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08468dc3 +0x10d:  mov    0xc(%ebp),%eax
08468dc6 +0x110:  mov    0x94(%eax),%eax
08468dcc +0x116:  mov    %eax,%edx
08468dce +0x118:  mov    0x10(%ebp),%eax
08468dd1 +0x11b:  mov    %edx,0x4(%esp)
08468dd5 +0x11f:  mov    %eax,(%esp)
08468dd8 +0x122:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08468ddd +0x127:  leave
08468dde +0x128:  ret
08468ddf +0x129:  nop
```

## 反编译 C

```c
// WongWork::CDeathTowerRanking::_makeRecordPacket @ 0x8468cb6

/* WongWork::CDeathTowerRanking::_makeRecordPacket(WongWork::CDeathTowerRanking::stBestRecord_t
   const&, PacketGuard&) */

void __thiscall
WongWork::CDeathTowerRanking::_makeRecordPacket
          (CDeathTowerRanking *this,stBestRecord_t *param_1,PacketGuard *param_2)

{
  size_t sVar1;
  int local_10;
  
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
    sVar1 = strlen((char *)(param_1 + local_10 * 0x1e + 4));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)param_2,sVar1);
    sVar1 = strlen((char *)(param_1 + local_10 * 0x1e + 4));
    InterfacePacketBuf::put_str
              ((InterfacePacketBuf *)param_2,(char *)(param_1 + local_10 * 0x1e + 4),sVar1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_2,(uint)(byte)param_1[local_10 + 0x80])
    ;
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_2,(uint)(byte)param_1[local_10 + 0x84])
    ;
  }
  InterfacePacketBuf::put_short((InterfacePacketBuf *)param_2,*(int *)(param_1 + 0x88));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_2,*(int *)(param_1 + 0x8c));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_2,*(int *)(param_1 + 0x94));
  return;
}
```

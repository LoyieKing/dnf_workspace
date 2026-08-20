# read_packet

`_ZNK12advancealtar16Dispatcher_Pause11read_packetER9PacketBufRN15CMDPacketStruct13STBaseRequestE`

`advancealtar::Dispatcher_Pause::read_packet(PacketBuf&, CMDPacketStruct::STBaseRequest&) const`

| 类 | 地址 |
|---|---|
| `advancealtar::Dispatcher_Pause` | `0x08140b04` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08140b04  _ZNK12advancealtar16Dispatcher_Pause11read_packetER9PacketBufRN15CMDPacketStruct13STBaseRequestE
#           advancealtar::Dispatcher_Pause::read_packet(PacketBuf&, CMDPacketStruct::STBaseRequest&) const
# range [0x08140b04, 0x08140b31]
08140b04 +0x00:  push   %ebp
08140b05 +0x01:  mov    %esp,%ebp
08140b07 +0x03:  sub    $0x28,%esp
08140b0a +0x06:  mov    0x10(%ebp),%eax
08140b0d +0x09:  mov    %eax,-0xc(%ebp)
08140b10 +0x0c:  mov    -0xc(%ebp),%eax
08140b13 +0x0f:  movl   $0xe,0x8(%esp)
08140b1b +0x17:  mov    %eax,0x4(%esp)
08140b1f +0x1b:  mov    0xc(%ebp),%eax
08140b22 +0x1e:  mov    %eax,(%esp)
08140b25 +0x21:  call   0858d3b2 <_ZN9PacketBuf10get_binaryEPci>  ; PacketBuf::get_binary(char*, int)
08140b2a +0x26:  mov    $0x0,%eax
08140b2f +0x2b:  leave
08140b30 +0x2c:  ret
08140b31 +0x2d:  nop
```

## 反编译 C

```c
// advancealtar::Dispatcher_Pause::read_packet @ 0x8140b04

/* advancealtar::Dispatcher_Pause::read_packet(PacketBuf&, CMDPacketStruct::STBaseRequest&) const */

undefined4 __thiscall
advancealtar::Dispatcher_Pause::read_packet
          (Dispatcher_Pause *this,PacketBuf *param_1,STBaseRequest *param_2)

{
  PacketBuf::get_binary(param_1,(char *)param_2,0xe);
  return 0;
}
```

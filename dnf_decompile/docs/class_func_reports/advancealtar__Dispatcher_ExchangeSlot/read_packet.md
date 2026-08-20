# read_packet

`_ZNK12advancealtar23Dispatcher_ExchangeSlot11read_packetER9PacketBufRN15CMDPacketStruct13STBaseRequestE`

`advancealtar::Dispatcher_ExchangeSlot::read_packet(PacketBuf&, CMDPacketStruct::STBaseRequest&) const`

| 类 | 地址 |
|---|---|
| `advancealtar::Dispatcher_ExchangeSlot` | `0x08140856` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08140856  _ZNK12advancealtar23Dispatcher_ExchangeSlot11read_packetER9PacketBufRN15CMDPacketStruct13STBaseRequestE
#           advancealtar::Dispatcher_ExchangeSlot::read_packet(PacketBuf&, CMDPacketStruct::STBaseRequest&) const
# range [0x08140856, 0x08140883]
08140856 +0x00:  push   %ebp
08140857 +0x01:  mov    %esp,%ebp
08140859 +0x03:  sub    $0x28,%esp
0814085c +0x06:  mov    0x10(%ebp),%eax
0814085f +0x09:  mov    %eax,-0xc(%ebp)
08140862 +0x0c:  mov    -0xc(%ebp),%eax
08140865 +0x0f:  movl   $0x30,0x8(%esp)
0814086d +0x17:  mov    %eax,0x4(%esp)
08140871 +0x1b:  mov    0xc(%ebp),%eax
08140874 +0x1e:  mov    %eax,(%esp)
08140877 +0x21:  call   0858d3b2 <_ZN9PacketBuf10get_binaryEPci>  ; PacketBuf::get_binary(char*, int)
0814087c +0x26:  mov    $0x0,%eax
08140881 +0x2b:  leave
08140882 +0x2c:  ret
08140883 +0x2d:  nop
```

## 反编译 C

```c
// advancealtar::Dispatcher_ExchangeSlot::read_packet @ 0x8140856

/* advancealtar::Dispatcher_ExchangeSlot::read_packet(PacketBuf&, CMDPacketStruct::STBaseRequest&)
   const */

undefined4 __thiscall
advancealtar::Dispatcher_ExchangeSlot::read_packet
          (Dispatcher_ExchangeSlot *this,PacketBuf *param_1,STBaseRequest *param_2)

{
  PacketBuf::get_binary(param_1,(char *)param_2,0x30);
  return 0;
}
```

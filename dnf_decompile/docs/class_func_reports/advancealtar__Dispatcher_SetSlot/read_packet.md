# read_packet

`_ZNK12advancealtar18Dispatcher_SetSlot11read_packetER9PacketBufRN15CMDPacketStruct13STBaseRequestE`

`advancealtar::Dispatcher_SetSlot::read_packet(PacketBuf&, CMDPacketStruct::STBaseRequest&) const`

| 类 | 地址 |
|---|---|
| `advancealtar::Dispatcher_SetSlot` | `0x08140020` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08140020  _ZNK12advancealtar18Dispatcher_SetSlot11read_packetER9PacketBufRN15CMDPacketStruct13STBaseRequestE
#           advancealtar::Dispatcher_SetSlot::read_packet(PacketBuf&, CMDPacketStruct::STBaseRequest&) const
# range [0x08140020, 0x0814004d]
08140020 +0x00:  push   %ebp
08140021 +0x01:  mov    %esp,%ebp
08140023 +0x03:  sub    $0x28,%esp
08140026 +0x06:  mov    0x10(%ebp),%eax
08140029 +0x09:  mov    %eax,-0xc(%ebp)
0814002c +0x0c:  mov    -0xc(%ebp),%eax
0814002f +0x0f:  movl   $0x24,0x8(%esp)
08140037 +0x17:  mov    %eax,0x4(%esp)
0814003b +0x1b:  mov    0xc(%ebp),%eax
0814003e +0x1e:  mov    %eax,(%esp)
08140041 +0x21:  call   0858d3b2 <_ZN9PacketBuf10get_binaryEPci>  ; PacketBuf::get_binary(char*, int)
08140046 +0x26:  mov    $0x0,%eax
0814004b +0x2b:  leave
0814004c +0x2c:  ret
0814004d +0x2d:  nop
```

## 反编译 C

```c
// advancealtar::Dispatcher_SetSlot::read_packet @ 0x8140020

/* advancealtar::Dispatcher_SetSlot::read_packet(PacketBuf&, CMDPacketStruct::STBaseRequest&) const
    */

undefined4 __thiscall
advancealtar::Dispatcher_SetSlot::read_packet
          (Dispatcher_SetSlot *this,PacketBuf *param_1,STBaseRequest *param_2)

{
  PacketBuf::get_binary(param_1,(char *)param_2,0x24);
  return 0;
}
```

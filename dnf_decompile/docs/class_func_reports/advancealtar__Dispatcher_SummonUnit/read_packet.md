# read_packet

`_ZNK12advancealtar21Dispatcher_SummonUnit11read_packetER9PacketBufRN15CMDPacketStruct13STBaseRequestE`

`advancealtar::Dispatcher_SummonUnit::read_packet(PacketBuf&, CMDPacketStruct::STBaseRequest&) const`

| 类 | 地址 |
|---|---|
| `advancealtar::Dispatcher_SummonUnit` | `0x08140580` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08140580  _ZNK12advancealtar21Dispatcher_SummonUnit11read_packetER9PacketBufRN15CMDPacketStruct13STBaseRequestE
#           advancealtar::Dispatcher_SummonUnit::read_packet(PacketBuf&, CMDPacketStruct::STBaseRequest&) const
# range [0x08140580, 0x081405ad]
08140580 +0x00:  push   %ebp
08140581 +0x01:  mov    %esp,%ebp
08140583 +0x03:  sub    $0x28,%esp
08140586 +0x06:  mov    0x10(%ebp),%eax
08140589 +0x09:  mov    %eax,-0xc(%ebp)
0814058c +0x0c:  mov    -0xc(%ebp),%eax
0814058f +0x0f:  movl   $0x18,0x8(%esp)
08140597 +0x17:  mov    %eax,0x4(%esp)
0814059b +0x1b:  mov    0xc(%ebp),%eax
0814059e +0x1e:  mov    %eax,(%esp)
081405a1 +0x21:  call   0858d3b2 <_ZN9PacketBuf10get_binaryEPci>  ; PacketBuf::get_binary(char*, int)
081405a6 +0x26:  mov    $0x0,%eax
081405ab +0x2b:  leave
081405ac +0x2c:  ret
081405ad +0x2d:  nop
```

## 反编译 C

```c
// advancealtar::Dispatcher_SummonUnit::read_packet @ 0x8140580

/* advancealtar::Dispatcher_SummonUnit::read_packet(PacketBuf&, CMDPacketStruct::STBaseRequest&)
   const */

undefined4 __thiscall
advancealtar::Dispatcher_SummonUnit::read_packet
          (Dispatcher_SummonUnit *this,PacketBuf *param_1,STBaseRequest *param_2)

{
  PacketBuf::get_binary(param_1,(char *)param_2,0x18);
  return 0;
}
```

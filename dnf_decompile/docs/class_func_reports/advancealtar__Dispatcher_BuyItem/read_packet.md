# read_packet

`_ZNK12advancealtar18Dispatcher_BuyItem11read_packetER9PacketBufRN15CMDPacketStruct13STBaseRequestE`

`advancealtar::Dispatcher_BuyItem::read_packet(PacketBuf&, CMDPacketStruct::STBaseRequest&) const`

| 类 | 地址 |
|---|---|
| `advancealtar::Dispatcher_BuyItem` | `0x0813fbb8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0813fbb8  _ZNK12advancealtar18Dispatcher_BuyItem11read_packetER9PacketBufRN15CMDPacketStruct13STBaseRequestE
#           advancealtar::Dispatcher_BuyItem::read_packet(PacketBuf&, CMDPacketStruct::STBaseRequest&) const
# range [0x0813fbb8, 0x0813fbe5]
0813fbb8 +0x00:  push   %ebp
0813fbb9 +0x01:  mov    %esp,%ebp
0813fbbb +0x03:  sub    $0x28,%esp
0813fbbe +0x06:  mov    0x10(%ebp),%eax
0813fbc1 +0x09:  mov    %eax,-0xc(%ebp)
0813fbc4 +0x0c:  mov    -0xc(%ebp),%eax
0813fbc7 +0x0f:  movl   $0x20,0x8(%esp)
0813fbcf +0x17:  mov    %eax,0x4(%esp)
0813fbd3 +0x1b:  mov    0xc(%ebp),%eax
0813fbd6 +0x1e:  mov    %eax,(%esp)
0813fbd9 +0x21:  call   0858d3b2 <_ZN9PacketBuf10get_binaryEPci>  ; PacketBuf::get_binary(char*, int)
0813fbde +0x26:  mov    $0x0,%eax
0813fbe3 +0x2b:  leave
0813fbe4 +0x2c:  ret
0813fbe5 +0x2d:  nop
```

## 反编译 C

```c
// advancealtar::Dispatcher_BuyItem::read_packet @ 0x813fbb8

/* advancealtar::Dispatcher_BuyItem::read_packet(PacketBuf&, CMDPacketStruct::STBaseRequest&) const
    */

undefined4 __thiscall
advancealtar::Dispatcher_BuyItem::read_packet
          (Dispatcher_BuyItem *this,PacketBuf *param_1,STBaseRequest *param_2)

{
  PacketBuf::get_binary(param_1,(char *)param_2,0x20);
  return 0;
}
```

# read_packet

`_ZNK12advancealtar22Dispatcher_UpgradeGage11read_packetER9PacketBufRN15CMDPacketStruct13STBaseRequestE`

`advancealtar::Dispatcher_UpgradeGage::read_packet(PacketBuf&, CMDPacketStruct::STBaseRequest&) const`

| 类 | 地址 |
|---|---|
| `advancealtar::Dispatcher_UpgradeGage` | `0x081402e6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081402e6  _ZNK12advancealtar22Dispatcher_UpgradeGage11read_packetER9PacketBufRN15CMDPacketStruct13STBaseRequestE
#           advancealtar::Dispatcher_UpgradeGage::read_packet(PacketBuf&, CMDPacketStruct::STBaseRequest&) const
# range [0x081402e6, 0x08140313]
081402e6 +0x00:  push   %ebp
081402e7 +0x01:  mov    %esp,%ebp
081402e9 +0x03:  sub    $0x28,%esp
081402ec +0x06:  mov    0x10(%ebp),%eax
081402ef +0x09:  mov    %eax,-0xc(%ebp)
081402f2 +0x0c:  mov    -0xc(%ebp),%eax
081402f5 +0x0f:  movl   $0x18,0x8(%esp)
081402fd +0x17:  mov    %eax,0x4(%esp)
08140301 +0x1b:  mov    0xc(%ebp),%eax
08140304 +0x1e:  mov    %eax,(%esp)
08140307 +0x21:  call   0858d3b2 <_ZN9PacketBuf10get_binaryEPci>  ; PacketBuf::get_binary(char*, int)
0814030c +0x26:  mov    $0x0,%eax
08140311 +0x2b:  leave
08140312 +0x2c:  ret
08140313 +0x2d:  nop
```

## 反编译 C

```c
// advancealtar::Dispatcher_UpgradeGage::read_packet @ 0x81402e6

/* advancealtar::Dispatcher_UpgradeGage::read_packet(PacketBuf&, CMDPacketStruct::STBaseRequest&)
   const */

undefined4 __thiscall
advancealtar::Dispatcher_UpgradeGage::read_packet
          (Dispatcher_UpgradeGage *this,PacketBuf *param_1,STBaseRequest *param_2)

{
  PacketBuf::get_binary(param_1,(char *)param_2,0x18);
  return 0;
}
```

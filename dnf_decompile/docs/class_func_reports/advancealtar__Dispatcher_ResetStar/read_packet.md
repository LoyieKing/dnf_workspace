# read_packet

`_ZNK12advancealtar20Dispatcher_ResetStar11read_packetER9PacketBufRN15CMDPacketStruct13STBaseRequestE`

`advancealtar::Dispatcher_ResetStar::read_packet(PacketBuf&, CMDPacketStruct::STBaseRequest&) const`

| 类 | 地址 |
|---|---|
| `advancealtar::Dispatcher_ResetStar` | `0x0814105c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0814105c  _ZNK12advancealtar20Dispatcher_ResetStar11read_packetER9PacketBufRN15CMDPacketStruct13STBaseRequestE
#           advancealtar::Dispatcher_ResetStar::read_packet(PacketBuf&, CMDPacketStruct::STBaseRequest&) const
# range [0x0814105c, 0x08141089]
0814105c +0x00:  push   %ebp
0814105d +0x01:  mov    %esp,%ebp
0814105f +0x03:  sub    $0x28,%esp
08141062 +0x06:  mov    0x10(%ebp),%eax
08141065 +0x09:  mov    %eax,-0xc(%ebp)
08141068 +0x0c:  mov    -0xc(%ebp),%eax
0814106b +0x0f:  movl   $0x14,0x8(%esp)
08141073 +0x17:  mov    %eax,0x4(%esp)
08141077 +0x1b:  mov    0xc(%ebp),%eax
0814107a +0x1e:  mov    %eax,(%esp)
0814107d +0x21:  call   0858d3b2 <_ZN9PacketBuf10get_binaryEPci>  ; PacketBuf::get_binary(char*, int)
08141082 +0x26:  mov    $0x0,%eax
08141087 +0x2b:  leave
08141088 +0x2c:  ret
08141089 +0x2d:  nop
```

## 反编译 C

```c
// advancealtar::Dispatcher_ResetStar::read_packet @ 0x814105c

/* advancealtar::Dispatcher_ResetStar::read_packet(PacketBuf&, CMDPacketStruct::STBaseRequest&)
   const */

undefined4 __thiscall
advancealtar::Dispatcher_ResetStar::read_packet
          (Dispatcher_ResetStar *this,PacketBuf *param_1,STBaseRequest *param_2)

{
  PacketBuf::get_binary(param_1,(char *)param_2,0x14);
  return 0;
}
```

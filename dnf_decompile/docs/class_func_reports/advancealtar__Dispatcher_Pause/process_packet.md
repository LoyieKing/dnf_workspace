# process_packet

`_ZNK12advancealtar16Dispatcher_Pause14process_packetEP5CUserRN15CMDPacketStruct13STBaseRequestERNS3_14STBaseResponseE`

`advancealtar::Dispatcher_Pause::process_packet(CUser*, CMDPacketStruct::STBaseRequest&, CMDPacketStruct::STBaseResponse&) const`

| 类 | 地址 |
|---|---|
| `advancealtar::Dispatcher_Pause` | `0x08140b3c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08140b3c  _ZNK12advancealtar16Dispatcher_Pause14process_packetEP5CUserRN15CMDPacketStruct13STBaseRequestERNS3_14STBaseResponseE
#           advancealtar::Dispatcher_Pause::process_packet(CUser*, CMDPacketStruct::STBaseRequest&, CMDPacketStruct::STBaseResponse&) const
# range [0x08140b3c, 0x08140bad]
08140b3c +0x00:  push   %ebp
08140b3d +0x01:  mov    %esp,%ebp
08140b3f +0x03:  sub    $0x28,%esp
08140b42 +0x06:  mov    0x10(%ebp),%eax
08140b45 +0x09:  mov    %eax,-0x10(%ebp)
08140b48 +0x0c:  mov    0x14(%ebp),%eax
08140b4b +0x0f:  mov    %eax,-0xc(%ebp)
08140b4e +0x12:  mov    0x10(%ebp),%eax
08140b51 +0x15:  mov    %eax,0x8(%esp)
08140b55 +0x19:  mov    0xc(%ebp),%eax
08140b58 +0x1c:  mov    %eax,0x4(%esp)
08140b5c +0x20:  mov    0x8(%ebp),%eax
08140b5f +0x23:  mov    %eax,(%esp)
08140b62 +0x26:  call   08140b32 <_ZNK12advancealtar16Dispatcher_Pause11check_errorEP5CUserRN15CMDPacketStruct13STBaseRequestE>  ; advancealtar::Dispatcher_Pause::check_error(CUser*, CMDPacketStruct::STBaseRequest&) const
08140b67 +0x2b:  mov    %eax,%edx
08140b69 +0x2d:  mov    -0xc(%ebp),%eax
08140b6c +0x30:  mov    %edx,0x4(%eax)
08140b6f +0x33:  mov    -0xc(%ebp),%eax
08140b72 +0x36:  mov    0x4(%eax),%eax
08140b75 +0x39:  test   %eax,%eax
08140b77 +0x3b:  je     08140b80 <+0x44>
08140b79 +0x3d:  mov    $0x0,%eax
08140b7e +0x42:  jmp    08140bab <+0x6f>
08140b80 +0x44:  mov    -0x10(%ebp),%eax
08140b83 +0x47:  movzbl 0xd(%eax),%edx
08140b87 +0x4b:  mov    -0xc(%ebp),%eax
08140b8a +0x4e:  mov    %dl,0x8(%eax)
08140b8d +0x51:  mov    -0x10(%ebp),%eax
08140b90 +0x54:  movzbl 0xd(%eax),%eax
08140b94 +0x58:  movzbl %al,%eax
08140b97 +0x5b:  mov    %eax,0x4(%esp)
08140b9b +0x5f:  mov    0xc(%ebp),%eax
08140b9e +0x62:  mov    %eax,(%esp)
08140ba1 +0x65:  call   0813105c <_ZN12advancealtar7Manager5pauseEP5CUserb>  ; advancealtar::Manager::pause(CUser*, bool)
08140ba6 +0x6a:  mov    $0x0,%eax
08140bab +0x6f:  leave
08140bac +0x70:  ret
08140bad +0x71:  nop
```

## 反编译 C

```c
// advancealtar::Dispatcher_Pause::process_packet @ 0x8140b3c

/* advancealtar::Dispatcher_Pause::process_packet(CUser*, CMDPacketStruct::STBaseRequest&,
   CMDPacketStruct::STBaseResponse&) const */

undefined4 __thiscall
advancealtar::Dispatcher_Pause::process_packet
          (Dispatcher_Pause *this,CUser *param_1,STBaseRequest *param_2,STBaseResponse *param_3)

{
  undefined4 uVar1;
  
  uVar1 = check_error((CUser *)this,(STBaseRequest *)param_1);
  *(undefined4 *)(param_3 + 4) = uVar1;
  if (*(int *)(param_3 + 4) == 0) {
    *(STBaseRequest *)(param_3 + 8) = param_2[0xd];
    Manager::pause(param_1,(bool)param_2[0xd]);
  }
  return 0;
}
```

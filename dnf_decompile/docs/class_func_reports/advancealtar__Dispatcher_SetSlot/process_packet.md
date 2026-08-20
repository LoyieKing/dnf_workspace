# process_packet

`_ZNK12advancealtar18Dispatcher_SetSlot14process_packetEP5CUserRN15CMDPacketStruct13STBaseRequestERNS3_14STBaseResponseE`

`advancealtar::Dispatcher_SetSlot::process_packet(CUser*, CMDPacketStruct::STBaseRequest&, CMDPacketStruct::STBaseResponse&) const`

| 类 | 地址 |
|---|---|
| `advancealtar::Dispatcher_SetSlot` | `0x0814006e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0814006e  _ZNK12advancealtar18Dispatcher_SetSlot14process_packetEP5CUserRN15CMDPacketStruct13STBaseRequestERNS3_14STBaseResponseE
#           advancealtar::Dispatcher_SetSlot::process_packet(CUser*, CMDPacketStruct::STBaseRequest&, CMDPacketStruct::STBaseResponse&) const
# range [0x0814006e, 0x08140147]
0814006e +0x00:  push   %ebp
0814006f +0x01:  mov    %esp,%ebp
08140071 +0x03:  sub    $0x28,%esp
08140074 +0x06:  mov    0x10(%ebp),%eax
08140077 +0x09:  mov    %eax,-0x10(%ebp)
0814007a +0x0c:  mov    0x14(%ebp),%eax
0814007d +0x0f:  mov    %eax,-0xc(%ebp)
08140080 +0x12:  mov    -0x10(%ebp),%eax
08140083 +0x15:  movzbl 0x14(%eax),%edx
08140087 +0x19:  mov    -0xc(%ebp),%eax
0814008a +0x1c:  mov    %dl,0xc(%eax)
0814008d +0x1f:  mov    -0x10(%ebp),%eax
08140090 +0x22:  mov    0x10(%eax),%edx
08140093 +0x25:  mov    -0xc(%ebp),%eax
08140096 +0x28:  mov    %edx,0x8(%eax)
08140099 +0x2b:  mov    -0x10(%ebp),%eax
0814009c +0x2e:  lea    0x18(%eax),%edx
0814009f +0x31:  mov    -0xc(%ebp),%eax
081400a2 +0x34:  add    $0x10,%eax
081400a5 +0x37:  movl   $0xc,0x8(%esp)
081400ad +0x3f:  mov    %edx,0x4(%esp)
081400b1 +0x43:  mov    %eax,(%esp)
081400b4 +0x46:  call   0807d8a0 <_init+0x198>
081400b9 +0x4b:  mov    0x10(%ebp),%eax
081400bc +0x4e:  mov    %eax,0x8(%esp)
081400c0 +0x52:  mov    0xc(%ebp),%eax
081400c3 +0x55:  mov    %eax,0x4(%esp)
081400c7 +0x59:  mov    0x8(%ebp),%eax
081400ca +0x5c:  mov    %eax,(%esp)
081400cd +0x5f:  call   0814004e <_ZNK12advancealtar18Dispatcher_SetSlot11check_errorEP5CUserRN15CMDPacketStruct13STBaseRequestE>  ; advancealtar::Dispatcher_SetSlot::check_error(CUser*, CMDPacketStruct::STBaseRequest&) const
081400d2 +0x64:  mov    %eax,%edx
081400d4 +0x66:  mov    -0xc(%ebp),%eax
081400d7 +0x69:  mov    %edx,0x4(%eax)
081400da +0x6c:  mov    -0xc(%ebp),%eax
081400dd +0x6f:  mov    0x4(%eax),%eax
081400e0 +0x72:  test   %eax,%eax
081400e2 +0x74:  je     081400eb <+0x7d>
081400e4 +0x76:  mov    $0x0,%eax
081400e9 +0x7b:  jmp    08140146 <+0xd8>
081400eb +0x7d:  mov    -0x10(%ebp),%eax
081400ee +0x80:  mov    0x18(%eax),%eax
081400f1 +0x83:  cmp    $0x2,%eax
081400f4 +0x86:  je     08140112 <+0xa4>
081400f6 +0x88:  mov    -0x10(%ebp),%eax
081400f9 +0x8b:  mov    0x18(%eax),%eax
081400fc +0x8e:  cmp    $0x1,%eax
081400ff +0x91:  je     08140112 <+0xa4>
08140101 +0x93:  mov    -0xc(%ebp),%eax
08140104 +0x96:  movl   $0x2,0x4(%eax)
0814010b +0x9d:  mov    $0x0,%eax
08140110 +0xa2:  jmp    08140146 <+0xd8>
08140112 +0xa4:  mov    -0x10(%ebp),%eax
08140115 +0xa7:  lea    0x18(%eax),%ecx
08140118 +0xaa:  mov    -0x10(%ebp),%eax
0814011b +0xad:  movzbl 0x14(%eax),%eax
0814011f +0xb1:  movzbl %al,%eax
08140122 +0xb4:  mov    0xc(%ebp),%edx
08140125 +0xb7:  add    $0x8df60,%edx
0814012b +0xbd:  mov    %ecx,0x8(%esp)
0814012f +0xc1:  mov    %eax,0x4(%esp)
08140133 +0xc5:  mov    %edx,(%esp)
08140136 +0xc8:  call   08131b58 <_ZN12advancealtar25CharacAdvanceAltarManager7setSlotEbRKN15CMDPacketStruct12_SetSlotDataE>  ; advancealtar::CharacAdvanceAltarManager::setSlot(bool, CMDPacketStruct::_SetSlotData const&)
0814013b +0xcd:  mov    -0xc(%ebp),%edx
0814013e +0xd0:  mov    %eax,0x4(%edx)
08140141 +0xd3:  mov    $0x0,%eax
08140146 +0xd8:  leave
08140147 +0xd9:  ret
```

## 反编译 C

```c
// advancealtar::Dispatcher_SetSlot::process_packet @ 0x814006e

/* advancealtar::Dispatcher_SetSlot::process_packet(CUser*, CMDPacketStruct::STBaseRequest&,
   CMDPacketStruct::STBaseResponse&) const */

undefined4 __thiscall
advancealtar::Dispatcher_SetSlot::process_packet
          (Dispatcher_SetSlot *this,CUser *param_1,STBaseRequest *param_2,STBaseResponse *param_3)

{
  undefined4 uVar1;
  
  *(STBaseRequest *)(param_3 + 0xc) = param_2[0x14];
  *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_2 + 0x10);
  memcpy(param_3 + 0x10,param_2 + 0x18,0xc);
  uVar1 = check_error((CUser *)this,(STBaseRequest *)param_1);
  *(undefined4 *)(param_3 + 4) = uVar1;
  if (*(int *)(param_3 + 4) == 0) {
    if ((*(int *)(param_2 + 0x18) == 2) || (*(int *)(param_2 + 0x18) == 1)) {
      uVar1 = CharacAdvanceAltarManager::setSlot
                        ((CharacAdvanceAltarManager *)(param_1 + 0x8df60),(bool)param_2[0x14],
                         (_SetSlotData *)(param_2 + 0x18));
      *(undefined4 *)(param_3 + 4) = uVar1;
    }
    else {
      *(undefined4 *)(param_3 + 4) = 2;
    }
  }
  return 0;
}
```

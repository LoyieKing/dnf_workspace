# process_packet

`_ZNK12advancealtar23Dispatcher_ExchangeSlot14process_packetEP5CUserRN15CMDPacketStruct13STBaseRequestERNS3_14STBaseResponseE`

`advancealtar::Dispatcher_ExchangeSlot::process_packet(CUser*, CMDPacketStruct::STBaseRequest&, CMDPacketStruct::STBaseResponse&) const`

| 类 | 地址 |
|---|---|
| `advancealtar::Dispatcher_ExchangeSlot` | `0x081408a4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081408a4  _ZNK12advancealtar23Dispatcher_ExchangeSlot14process_packetEP5CUserRN15CMDPacketStruct13STBaseRequestERNS3_14STBaseResponseE
#           advancealtar::Dispatcher_ExchangeSlot::process_packet(CUser*, CMDPacketStruct::STBaseRequest&, CMDPacketStruct::STBaseResponse&) const
# range [0x081408a4, 0x08140965]
081408a4 +0x00:  push   %ebp
081408a5 +0x01:  mov    %esp,%ebp
081408a7 +0x03:  sub    $0x28,%esp
081408aa +0x06:  mov    0x10(%ebp),%eax
081408ad +0x09:  mov    %eax,-0x10(%ebp)
081408b0 +0x0c:  mov    0x14(%ebp),%eax
081408b3 +0x0f:  mov    %eax,-0xc(%ebp)
081408b6 +0x12:  mov    -0x10(%ebp),%eax
081408b9 +0x15:  mov    0x10(%eax),%edx
081408bc +0x18:  mov    -0xc(%ebp),%eax
081408bf +0x1b:  mov    %edx,0x8(%eax)
081408c2 +0x1e:  mov    0x10(%ebp),%eax
081408c5 +0x21:  mov    %eax,0x8(%esp)
081408c9 +0x25:  mov    0xc(%ebp),%eax
081408cc +0x28:  mov    %eax,0x4(%esp)
081408d0 +0x2c:  mov    0x8(%ebp),%eax
081408d3 +0x2f:  mov    %eax,(%esp)
081408d6 +0x32:  call   08140884 <_ZNK12advancealtar23Dispatcher_ExchangeSlot11check_errorEP5CUserRN15CMDPacketStruct13STBaseRequestE>  ; advancealtar::Dispatcher_ExchangeSlot::check_error(CUser*, CMDPacketStruct::STBaseRequest&) const
081408db +0x37:  mov    %eax,%edx
081408dd +0x39:  mov    -0xc(%ebp),%eax
081408e0 +0x3c:  mov    %edx,0x4(%eax)
081408e3 +0x3f:  mov    -0xc(%ebp),%eax
081408e6 +0x42:  mov    0x4(%eax),%eax
081408e9 +0x45:  test   %eax,%eax
081408eb +0x47:  je     081408f4 <+0x50>
081408ed +0x49:  mov    $0x0,%eax
081408f2 +0x4e:  jmp    08140963 <+0xbf>
081408f4 +0x50:  mov    -0x10(%ebp),%eax
081408f7 +0x53:  lea    0x24(%eax),%ecx
081408fa +0x56:  mov    -0x10(%ebp),%eax
081408fd +0x59:  lea    0x18(%eax),%edx
08140900 +0x5c:  mov    0xc(%ebp),%eax
08140903 +0x5f:  add    $0x8df60,%eax
08140908 +0x64:  mov    %ecx,0x8(%esp)
0814090c +0x68:  mov    %edx,0x4(%esp)
08140910 +0x6c:  mov    %eax,(%esp)
08140913 +0x6f:  call   08131f0a <_ZN12advancealtar25CharacAdvanceAltarManager12exchangeSlotERN15CMDPacketStruct12_SetSlotDataES3_>  ; advancealtar::CharacAdvanceAltarManager::exchangeSlot(CMDPacketStruct::_SetSlotData&, CMDPacketStruct::_SetSlotData&)
08140918 +0x74:  mov    -0xc(%ebp),%edx
0814091b +0x77:  mov    %eax,0x4(%edx)
0814091e +0x7a:  mov    -0x10(%ebp),%eax
08140921 +0x7d:  lea    0x18(%eax),%edx
08140924 +0x80:  mov    -0xc(%ebp),%eax
08140927 +0x83:  add    $0xc,%eax
0814092a +0x86:  movl   $0xc,0x8(%esp)
08140932 +0x8e:  mov    %edx,0x4(%esp)
08140936 +0x92:  mov    %eax,(%esp)
08140939 +0x95:  call   0807d8a0 <_init+0x198>
0814093e +0x9a:  mov    -0x10(%ebp),%eax
08140941 +0x9d:  lea    0x24(%eax),%edx
08140944 +0xa0:  mov    -0xc(%ebp),%eax
08140947 +0xa3:  add    $0x18,%eax
0814094a +0xa6:  movl   $0xc,0x8(%esp)
08140952 +0xae:  mov    %edx,0x4(%esp)
08140956 +0xb2:  mov    %eax,(%esp)
08140959 +0xb5:  call   0807d8a0 <_init+0x198>
0814095e +0xba:  mov    $0x0,%eax
08140963 +0xbf:  leave
08140964 +0xc0:  ret
08140965 +0xc1:  nop
```

## 反编译 C

```c
// advancealtar::Dispatcher_ExchangeSlot::process_packet @ 0x81408a4

/* advancealtar::Dispatcher_ExchangeSlot::process_packet(CUser*, CMDPacketStruct::STBaseRequest&,
   CMDPacketStruct::STBaseResponse&) const */

undefined4 __thiscall
advancealtar::Dispatcher_ExchangeSlot::process_packet
          (Dispatcher_ExchangeSlot *this,CUser *param_1,STBaseRequest *param_2,
          STBaseResponse *param_3)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_2 + 0x10);
  uVar1 = check_error((CUser *)this,(STBaseRequest *)param_1);
  *(undefined4 *)(param_3 + 4) = uVar1;
  if (*(int *)(param_3 + 4) == 0) {
    uVar1 = CharacAdvanceAltarManager::exchangeSlot
                      ((CharacAdvanceAltarManager *)(param_1 + 0x8df60),
                       (_SetSlotData *)(param_2 + 0x18),(_SetSlotData *)(param_2 + 0x24));
    *(undefined4 *)(param_3 + 4) = uVar1;
    memcpy(param_3 + 0xc,param_2 + 0x18,0xc);
    memcpy(param_3 + 0x18,param_2 + 0x24,0xc);
  }
  return 0;
}
```

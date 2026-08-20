# verifyUserPcRoomPlayEvent

`_ZN13EventClassify15CPcRoomPlayTime25verifyUserPcRoomPlayEventEP5CUser`

`EventClassify::CPcRoomPlayTime::verifyUserPcRoomPlayEvent(CUser*)`

| 类 | 地址 |
|---|---|
| `EventClassify::CPcRoomPlayTime` | `0x08110a38` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08110a38  _ZN13EventClassify15CPcRoomPlayTime25verifyUserPcRoomPlayEventEP5CUser
#           EventClassify::CPcRoomPlayTime::verifyUserPcRoomPlayEvent(CUser*)
# range [0x08110a38, 0x08110aad]
08110a38 +0x00:  push   %ebp
08110a39 +0x01:  mov    %esp,%ebp
08110a3b +0x03:  sub    $0x18,%esp
08110a3e +0x06:  mov    0x8(%ebp),%eax
08110a41 +0x09:  mov    (%eax),%eax
08110a43 +0x0b:  add    $0x8,%eax
08110a46 +0x0e:  mov    (%eax),%edx
08110a48 +0x10:  mov    0x8(%ebp),%eax
08110a4b +0x13:  mov    %eax,(%esp)
08110a4e +0x16:  call   *%edx
08110a50 +0x18:  xor    $0x1,%eax
08110a53 +0x1b:  test   %al,%al
08110a55 +0x1d:  je     08110a5e <+0x26>
08110a57 +0x1f:  mov    $0xb2,%eax
08110a5c +0x24:  jmp    08110aac <+0x74>
08110a5e +0x26:  movl   $0xc,0x4(%esp)
08110a66 +0x2e:  mov    0xc(%ebp),%eax
08110a69 +0x31:  mov    %eax,(%esp)
08110a6c +0x34:  call   080e600e <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x144>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x144
08110a71 +0x39:  xor    $0x1,%eax
08110a74 +0x3c:  test   %al,%al
08110a76 +0x3e:  je     08110a7f <+0x47>
08110a78 +0x40:  mov    $0x7,%eax
08110a7d +0x45:  jmp    08110aac <+0x74>
08110a7f +0x47:  mov    0xc(%ebp),%eax
08110a82 +0x4a:  mov    %eax,(%esp)
08110a85 +0x4d:  call   08110dec <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x2fe>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x2fe
08110a8a +0x52:  mov    0x8(%ebp),%edx
08110a8d +0x55:  mov    0x1c(%edx),%edx
08110a90 +0x58:  movzbl 0x10(%edx),%edx
08110a94 +0x5c:  movzbl %dl,%edx
08110a97 +0x5f:  cmp    %edx,%eax
08110a99 +0x61:  setae  %al
08110a9c +0x64:  test   %al,%al
08110a9e +0x66:  je     08110aa7 <+0x6f>
08110aa0 +0x68:  mov    $0x12,%eax
08110aa5 +0x6d:  jmp    08110aac <+0x74>
08110aa7 +0x6f:  mov    $0x0,%eax
08110aac +0x74:  leave
08110aad +0x75:  ret
```

## 反编译 C

```c
// EventClassify::CPcRoomPlayTime::verifyUserPcRoomPlayEvent @ 0x8110a38

/* EventClassify::CPcRoomPlayTime::verifyUserPcRoomPlayEvent(CUser*) */

undefined4 __thiscall
EventClassify::CPcRoomPlayTime::verifyUserPcRoomPlayEvent(CPcRoomPlayTime *this,CUser *param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  
  cVar1 = (**(code **)(*(int *)this + 8))(this);
  if (cVar1 == '\x01') {
    cVar1 = CUser::isAffectedPremium(param_1,0xc);
    if (cVar1 == '\x01') {
      uVar3 = CUser::getPcRoomPlayTimeRewardCnt(param_1);
      if (uVar3 < *(byte *)(*(int *)(this + 0x1c) + 0x10)) {
        uVar2 = 0;
      }
      else {
        uVar2 = 0x12;
      }
    }
    else {
      uVar2 = 7;
    }
  }
  else {
    uVar2 = 0xb2;
  }
  return uVar2;
}
```

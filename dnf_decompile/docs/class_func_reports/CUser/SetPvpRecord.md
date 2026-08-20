# SetPvpRecord

`_ZN5CUser12SetPvpRecordER13PvpResultType`

`CUser::SetPvpRecord(PvpResultType&)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0864deea` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0864deea  _ZN5CUser12SetPvpRecordER13PvpResultType
#           CUser::SetPvpRecord(PvpResultType&)
# range [0x0864deea, 0x0864df11]
0864deea +0x00:  push   %ebp
0864deeb +0x01:  mov    %esp,%ebp
0864deed +0x03:  sub    $0x18,%esp
0864def0 +0x06:  mov    0x8(%ebp),%eax
0864def3 +0x09:  mov    %eax,(%esp)
0864def6 +0x0c:  call   0822f16a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4814>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4814
0864defb +0x11:  mov    0xc(%ebp),%edx
0864defe +0x14:  mov    %edx,0x4(%esp)
0864df02 +0x18:  mov    %eax,(%esp)
0864df05 +0x1b:  call   085d58e6 <_ZN13PvpResultType3SetERKS_>  ; PvpResultType::Set(PvpResultType const&)
0864df0a +0x20:  mov    $0x1,%eax
0864df0f +0x25:  leave
0864df10 +0x26:  ret
0864df11 +0x27:  nop
```

## 反编译 C

```c
// CUser::SetPvpRecord @ 0x864deea

/* CUser::SetPvpRecord(PvpResultType&) */

undefined4 __thiscall CUser::SetPvpRecord(CUser *this,PvpResultType *param_1)

{
  PvpResultType *this_00;
  
  this_00 = (PvpResultType *)CUserCharacInfo::getPVPResultW((CUserCharacInfo *)this);
  PvpResultType::Set(this_00,param_1);
  return 1;
}
```

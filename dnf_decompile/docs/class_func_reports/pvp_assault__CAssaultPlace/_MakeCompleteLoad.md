# _MakeCompleteLoad

`_ZN11pvp_assault13CAssaultPlace17_MakeCompleteLoadEP11PacketGuardi`

`pvp_assault::CAssaultPlace::_MakeCompleteLoad(PacketGuard*, int)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultPlace` | `0x082e8810` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082e8810  _ZN11pvp_assault13CAssaultPlace17_MakeCompleteLoadEP11PacketGuardi
#           pvp_assault::CAssaultPlace::_MakeCompleteLoad(PacketGuard*, int)
# range [0x082e8810, 0x082e8869]
082e8810 +0x00:  push   %ebp
082e8811 +0x01:  mov    %esp,%ebp
082e8813 +0x03:  sub    $0x18,%esp
082e8816 +0x06:  mov    0xc(%ebp),%eax
082e8819 +0x09:  movl   $0x81,0x8(%esp)
082e8821 +0x11:  movl   $0x0,0x4(%esp)
082e8829 +0x19:  mov    %eax,(%esp)
082e882c +0x1c:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
082e8831 +0x21:  mov    0x10(%ebp),%eax
082e8834 +0x24:  shl    $0x5,%eax
082e8837 +0x27:  add    0x8(%ebp),%eax
082e883a +0x2a:  mov    %eax,(%esp)
082e883d +0x2d:  call   082e6662 <_ZN11pvp_assault10CAssaulter15GetUserUniqueIdEv>  ; pvp_assault::CAssaulter::GetUserUniqueId()
082e8842 +0x32:  movzwl %ax,%edx
082e8845 +0x35:  mov    0xc(%ebp),%eax
082e8848 +0x38:  mov    %edx,0x4(%esp)
082e884c +0x3c:  mov    %eax,(%esp)
082e884f +0x3f:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
082e8854 +0x44:  mov    0xc(%ebp),%eax
082e8857 +0x47:  movl   $0x1,0x4(%esp)
082e885f +0x4f:  mov    %eax,(%esp)
082e8862 +0x52:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
082e8867 +0x57:  leave
082e8868 +0x58:  ret
082e8869 +0x59:  nop
```

## 反编译 C

```c
// pvp_assault::CAssaultPlace::_MakeCompleteLoad @ 0x82e8810

/* pvp_assault::CAssaultPlace::_MakeCompleteLoad(PacketGuard*, int) */

void __thiscall
pvp_assault::CAssaultPlace::_MakeCompleteLoad(CAssaultPlace *this,PacketGuard *param_1,int param_2)

{
  uint uVar1;
  
  InterfacePacketBuf::put_header((InterfacePacketBuf *)param_1,0,0x81);
  uVar1 = CAssaulter::GetUserUniqueId((CAssaulter *)(this + param_2 * 0x20));
  InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,uVar1 & 0xffff);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)param_1,true);
  return;
}
```

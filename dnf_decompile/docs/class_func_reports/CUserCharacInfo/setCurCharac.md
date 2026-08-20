# setCurCharac

`_ZN15CUserCharacInfo12setCurCharacEP12_Charac_info`

`CUserCharacInfo::setCurCharac(_Charac_info*)`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x0864e25c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0864e25c  _ZN15CUserCharacInfo12setCurCharacEP12_Charac_info
#           CUserCharacInfo::setCurCharac(_Charac_info*)
# range [0x0864e25c, 0x0864e28d]
0864e25c +0x00:  push   %ebp
0864e25d +0x01:  mov    %esp,%ebp
0864e25f +0x03:  sub    $0x18,%esp
0864e262 +0x06:  mov    0x8(%ebp),%eax
0864e265 +0x09:  mov    %eax,(%esp)
0864e268 +0x0c:  call   0822f262 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x490c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x490c
0864e26d +0x11:  mov    0x8(%ebp),%eax
0864e270 +0x14:  mov    %eax,(%esp)
0864e273 +0x17:  call   0819a870 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x556>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x556
0864e278 +0x1c:  mov    0x8(%ebp),%eax
0864e27b +0x1f:  mov    %eax,(%esp)
0864e27e +0x22:  call   0812cdca <_GLOBAL__I__ZN16CLocalChina_User16SendFatigueEventEv+0x46>  ; global constructors keyed to CLocalChina_User::SendFatigueEvent()+0x46
0864e283 +0x27:  mov    0x8(%ebp),%eax
0864e286 +0x2a:  mov    0xc(%ebp),%edx
0864e289 +0x2d:  mov    %edx,0x10(%eax)
0864e28c +0x30:  leave
0864e28d +0x31:  ret
```

## 反编译 C

```c
// CUserCharacInfo::setCurCharac @ 0x864e25c

/* CUserCharacInfo::setCurCharac(_Charac_info*) */

void __thiscall CUserCharacInfo::setCurCharac(CUserCharacInfo *this,_Charac_info *param_1)

{
  enableSaveCharacInfo(this);
  enableSaveCharacStat(this);
  enableSaveCharacEtc(this);
  *(_Charac_info **)(this + 0x10) = param_1;
  return;
}
```

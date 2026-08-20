# DimensionInoutUpdate

`_ZN5CUser20DimensionInoutUpdateEbb`

`CUser::DimensionInoutUpdate(bool, bool)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08656c12` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08656c12  _ZN5CUser20DimensionInoutUpdateEbb
#           CUser::DimensionInoutUpdate(bool, bool)
# range [0x08656c12, 0x08656ca9]
08656c12 +0x00:  push   %ebp
08656c13 +0x01:  mov    %esp,%ebp
08656c15 +0x03:  sub    $0x38,%esp
08656c18 +0x06:  mov    0xc(%ebp),%edx
08656c1b +0x09:  mov    0x10(%ebp),%eax
08656c1e +0x0c:  mov    %dl,-0x1c(%ebp)
08656c21 +0x0f:  mov    %al,-0x20(%ebp)
08656c24 +0x12:  movl   $0x0,-0xc(%ebp)
08656c2b +0x19:  jmp    08656c67 <+0x55>
08656c2d +0x1b:  cmpb   $0x0,-0x1c(%ebp)
08656c31 +0x1f:  je     08656c63 <+0x51>
08656c33 +0x21:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08656c38 +0x26:  mov    -0xc(%ebp),%edx
08656c3b +0x29:  mov    %edx,0x4(%esp)
08656c3f +0x2d:  mov    %eax,(%esp)
08656c42 +0x30:  call   0822b612 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcbc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcbc
08656c47 +0x35:  movsbl %al,%ecx
08656c4a +0x38:  mov    -0xc(%ebp),%eax
08656c4d +0x3b:  movsbl %al,%edx
08656c50 +0x3e:  mov    0x8(%ebp),%eax
08656c53 +0x41:  mov    %ecx,0x8(%esp)
08656c57 +0x45:  mov    %edx,0x4(%esp)
08656c5b +0x49:  mov    %eax,(%esp)
08656c5e +0x4c:  call   0822f184 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x482e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x482e
08656c63 +0x51:  addl   $0x1,-0xc(%ebp)
08656c67 +0x55:  cmpl   $0x5,-0xc(%ebp)
08656c6b +0x59:  setle  %al
08656c6e +0x5c:  test   %al,%al
08656c70 +0x5e:  jne    08656c2d <+0x1b>
08656c72 +0x60:  cmpb   $0x0,-0x20(%ebp)
08656c76 +0x64:  je     08656ca7 <+0x95>
08656c78 +0x66:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08656c7d +0x6b:  movl   $0x2,0x4(%esp)
08656c85 +0x73:  mov    %eax,(%esp)
08656c88 +0x76:  call   0822b638 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xce2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xce2
08656c8d +0x7b:  movsbl %al,%edx
08656c90 +0x7e:  mov    0x8(%ebp),%eax
08656c93 +0x81:  mov    %edx,0x8(%esp)
08656c97 +0x85:  movl   $0x2,0x4(%esp)
08656c9f +0x8d:  mov    %eax,(%esp)
08656ca2 +0x90:  call   0822f1cc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4876>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4876
08656ca7 +0x95:  leave
08656ca8 +0x96:  ret
08656ca9 +0x97:  nop
```

## 反编译 C

```c
// CUser::DimensionInoutUpdate @ 0x8656c12

/* CUser::DimensionInoutUpdate(bool, bool) */

void __thiscall CUser::DimensionInoutUpdate(CUser *this,bool param_1,bool param_2)

{
  char cVar1;
  CDataManager *pCVar2;
  undefined4 local_10;
  
  for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
    if (param_1) {
      pCVar2 = (CDataManager *)G_CDataManager();
      cVar1 = CDataManager::get_dimensionInout(pCVar2,local_10);
      CUserCharacInfo::setDemensionInoutValue((CUserCharacInfo *)this,(char)local_10,cVar1);
    }
  }
  if (param_2) {
    pCVar2 = (CDataManager *)G_CDataManager();
    cVar1 = CDataManager::get_limit_inout_count(pCVar2,2);
    CUserCharacInfo::setUltimateInoutValue((CUserCharacInfo *)this,'\x02',cVar1);
  }
  return;
}
```

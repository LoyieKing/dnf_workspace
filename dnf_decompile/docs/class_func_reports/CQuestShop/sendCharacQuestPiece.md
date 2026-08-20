# sendCharacQuestPiece

`_ZN10CQuestShop20sendCharacQuestPieceEP5CUser`

`CQuestShop::sendCharacQuestPiece(CUser*)`

| 类 | 地址 |
|---|---|
| `CQuestShop` | `0x085ef7cc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085ef7cc  _ZN10CQuestShop20sendCharacQuestPieceEP5CUser
#           CQuestShop::sendCharacQuestPiece(CUser*)
# range [0x085ef7cc, 0x085ef867]
085ef7cc +0x00:  push   %ebp
085ef7cd +0x01:  mov    %esp,%ebp
085ef7cf +0x03:  push   %esi
085ef7d0 +0x04:  push   %ebx
085ef7d1 +0x05:  sub    $0x20,%esp
085ef7d4 +0x08:  lea    -0x14(%ebp),%eax
085ef7d7 +0x0b:  mov    %eax,(%esp)
085ef7da +0x0e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
085ef7df +0x13:  movl   $0x1be,0x8(%esp)
085ef7e7 +0x1b:  movl   $0x0,0x4(%esp)
085ef7ef +0x23:  lea    -0x14(%ebp),%eax
085ef7f2 +0x26:  mov    %eax,(%esp)
085ef7f5 +0x29:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085ef7fa +0x2e:  mov    0x8(%ebp),%eax
085ef7fd +0x31:  mov    %eax,(%esp)
085ef800 +0x34:  call   085eff44 <_GLOBAL__I__ZN10CQuestShopC2Ev+0xb0>  ; global constructors keyed to CQuestShop::CQuestShop()+0xb0
085ef805 +0x39:  mov    %eax,0x4(%esp)
085ef809 +0x3d:  lea    -0x14(%ebp),%eax
085ef80c +0x40:  mov    %eax,(%esp)
085ef80f +0x43:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085ef814 +0x48:  movl   $0x1,0x4(%esp)
085ef81c +0x50:  lea    -0x14(%ebp),%eax
085ef81f +0x53:  mov    %eax,(%esp)
085ef822 +0x56:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085ef827 +0x5b:  lea    -0x14(%ebp),%eax
085ef82a +0x5e:  mov    %eax,0x4(%esp)
085ef82e +0x62:  mov    0xc(%ebp),%eax
085ef831 +0x65:  mov    %eax,(%esp)
085ef834 +0x68:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
085ef839 +0x6d:  jmp    085ef856 <+0x8a>
085ef83b +0x6f:  mov    %edx,%ebx
085ef83d +0x71:  mov    %eax,%esi
085ef83f +0x73:  lea    -0x14(%ebp),%eax
085ef842 +0x76:  mov    %eax,(%esp)
085ef845 +0x79:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085ef84a +0x7e:  mov    %esi,%eax
085ef84c +0x80:  mov    %ebx,%edx
085ef84e +0x82:  mov    %eax,(%esp)
085ef851 +0x85:  call   08ae3750 <_Unwind_Resume>
085ef856 +0x8a:  lea    -0x14(%ebp),%eax
085ef859 +0x8d:  mov    %eax,(%esp)
085ef85c +0x90:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085ef861 +0x95:  add    $0x20,%esp
085ef864 +0x98:  pop    %ebx
085ef865 +0x99:  pop    %esi
085ef866 +0x9a:  pop    %ebp
085ef867 +0x9b:  ret
```

## 反编译 C

```c
// CQuestShop::sendCharacQuestPiece @ 0x85ef7cc

/* CQuestShop::sendCharacQuestPiece(CUser*) */

void __thiscall CQuestShop::sendCharacQuestPiece(CQuestShop *this,CUser *param_1)

{
  int iVar1;
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 085ef7f5 to 085ef838 has its CatchHandler @ 085ef83b */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x1be);
  iVar1 = getPiece(this);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,iVar1);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  CUser::Send(param_1,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}
```

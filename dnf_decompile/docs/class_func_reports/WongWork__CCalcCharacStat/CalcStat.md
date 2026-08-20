# CalcStat

`_ZN8WongWork15CCalcCharacStat8CalcStatEP15_Additioal_infoiiii`

`WongWork::CCalcCharacStat::CalcStat(_Additioal_info*, int, int, int, int)`

| 类 | 地址 |
|---|---|
| `WongWork::CCalcCharacStat` | `0x0831ec4a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0831ec4a  _ZN8WongWork15CCalcCharacStat8CalcStatEP15_Additioal_infoiiii
#           WongWork::CCalcCharacStat::CalcStat(_Additioal_info*, int, int, int, int)
# range [0x0831ec4a, 0x0831ed6b]
0831ec4a +0x000:  push   %ebp
0831ec4b +0x001:  mov    %esp,%ebp
0831ec4d +0x003:  sub    $0x28,%esp
0831ec50 +0x006:  mov    0x8(%ebp),%eax
0831ec53 +0x009:  mov    %eax,(%esp)
0831ec56 +0x00c:  call   08348268 <_ZN15_Additioal_info5clearEv>  ; _Additioal_info::clear()
0831ec5b +0x011:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0831ec60 +0x016:  mov    0x14(%eax),%edx
0831ec63 +0x019:  mov    0xc(%ebp),%eax
0831ec66 +0x01c:  imul   $0x7dc,%eax,%eax
0831ec6c +0x022:  lea    (%edx,%eax,1),%eax
0831ec6f +0x025:  mov    %eax,0x4(%esp)
0831ec73 +0x029:  mov    0x8(%ebp),%eax
0831ec76 +0x02c:  mov    %eax,(%esp)
0831ec79 +0x02f:  call   08146300 <_GLOBAL__I__ZN6global5tools20InitializeCharacStat14initCharacStatER15_Additioal_infojiiii+0x1d>  ; global constructors keyed to global::tools::InitializeCharacStat::initCharacStat(_Additioal_info&, unsigned int, int, int, int, int)+0x1d
0831ec7e +0x034:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0831ec83 +0x039:  mov    0x14(%eax),%edx
0831ec86 +0x03c:  mov    0xc(%ebp),%eax
0831ec89 +0x03f:  imul   $0x7dc,%eax,%eax
0831ec8f +0x045:  lea    (%edx,%eax,1),%eax
0831ec92 +0x048:  movl   $0x0,0x8(%esp)
0831ec9a +0x050:  movl   $0x0,0x4(%esp)
0831eca2 +0x058:  mov    %eax,(%esp)
0831eca5 +0x05b:  call   0834883e <_ZNK10CCharacter17get_growtype_statEii>  ; CCharacter::get_growtype_stat(int, int) const
0831ecaa +0x060:  mov    %eax,-0x18(%ebp)
0831ecad +0x063:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0831ecb2 +0x068:  mov    0x14(%eax),%edx
0831ecb5 +0x06b:  mov    0xc(%ebp),%eax
0831ecb8 +0x06e:  imul   $0x7dc,%eax,%eax
0831ecbe +0x074:  add    %eax,%edx
0831ecc0 +0x076:  movl   $0x0,0x8(%esp)
0831ecc8 +0x07e:  mov    0x10(%ebp),%eax
0831eccb +0x081:  mov    %eax,0x4(%esp)
0831eccf +0x085:  mov    %edx,(%esp)
0831ecd2 +0x088:  call   0834883e <_ZNK10CCharacter17get_growtype_statEii>  ; CCharacter::get_growtype_stat(int, int) const
0831ecd7 +0x08d:  mov    %eax,-0x14(%ebp)
0831ecda +0x090:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0831ecdf +0x095:  mov    0x14(%eax),%edx
0831ece2 +0x098:  mov    0xc(%ebp),%eax
0831ece5 +0x09b:  imul   $0x7dc,%eax,%eax
0831eceb +0x0a1:  add    %eax,%edx
0831eced +0x0a3:  mov    0x14(%ebp),%eax
0831ecf0 +0x0a6:  mov    %eax,0x8(%esp)
0831ecf4 +0x0aa:  mov    0x10(%ebp),%eax
0831ecf7 +0x0ad:  mov    %eax,0x4(%esp)
0831ecfb +0x0b1:  mov    %edx,(%esp)
0831ecfe +0x0b4:  call   0834883e <_ZNK10CCharacter17get_growtype_statEii>  ; CCharacter::get_growtype_stat(int, int) const
0831ed03 +0x0b9:  mov    %eax,-0x10(%ebp)
0831ed06 +0x0bc:  movl   $0x1,-0xc(%ebp)
0831ed0d +0x0c3:  jmp    0831ed59 <+0x10f>
0831ed0f +0x0c5:  cmpl   $0xe,-0xc(%ebp)
0831ed13 +0x0c9:  jg     0831ed29 <+0xdf>
0831ed15 +0x0cb:  mov    -0x18(%ebp),%eax
0831ed18 +0x0ce:  mov    %eax,0x4(%esp)
0831ed1c +0x0d2:  mov    0x8(%ebp),%eax
0831ed1f +0x0d5:  mov    %eax,(%esp)
0831ed22 +0x0d8:  call   08146300 <_GLOBAL__I__ZN6global5tools20InitializeCharacStat14initCharacStatER15_Additioal_infojiiii+0x1d>  ; global constructors keyed to global::tools::InitializeCharacStat::initCharacStat(_Additioal_info&, unsigned int, int, int, int, int)+0x1d
0831ed27 +0x0dd:  jmp    0831ed55 <+0x10b>
0831ed29 +0x0df:  cmpl   $0x31,-0xc(%ebp)
0831ed2d +0x0e3:  jg     0831ed43 <+0xf9>
0831ed2f +0x0e5:  mov    -0x14(%ebp),%eax
0831ed32 +0x0e8:  mov    %eax,0x4(%esp)
0831ed36 +0x0ec:  mov    0x8(%ebp),%eax
0831ed39 +0x0ef:  mov    %eax,(%esp)
0831ed3c +0x0f2:  call   08146300 <_GLOBAL__I__ZN6global5tools20InitializeCharacStat14initCharacStatER15_Additioal_infojiiii+0x1d>  ; global constructors keyed to global::tools::InitializeCharacStat::initCharacStat(_Additioal_info&, unsigned int, int, int, int, int)+0x1d
0831ed41 +0x0f7:  jmp    0831ed55 <+0x10b>
0831ed43 +0x0f9:  mov    -0x10(%ebp),%eax
0831ed46 +0x0fc:  mov    %eax,0x4(%esp)
0831ed4a +0x100:  mov    0x8(%ebp),%eax
0831ed4d +0x103:  mov    %eax,(%esp)
0831ed50 +0x106:  call   08146300 <_GLOBAL__I__ZN6global5tools20InitializeCharacStat14initCharacStatER15_Additioal_infojiiii+0x1d>  ; global constructors keyed to global::tools::InitializeCharacStat::initCharacStat(_Additioal_info&, unsigned int, int, int, int, int)+0x1d
0831ed55 +0x10b:  addl   $0x1,-0xc(%ebp)
0831ed59 +0x10f:  mov    -0xc(%ebp),%eax
0831ed5c +0x112:  cmp    0x18(%ebp),%eax
0831ed5f +0x115:  setl   %al
0831ed62 +0x118:  test   %al,%al
0831ed64 +0x11a:  jne    0831ed0f <+0xc5>
0831ed66 +0x11c:  mov    0x8(%ebp),%eax
0831ed69 +0x11f:  leave
0831ed6a +0x120:  ret
0831ed6b +0x121:  nop
```

## 反编译 C

```c
// WongWork::CCalcCharacStat::CalcStat @ 0x831ec4a

/* WongWork::CCalcCharacStat::CalcStat(_Additioal_info*, int, int, int, int) */

_Additioal_info *
WongWork::CCalcCharacStat::CalcStat
          (_Additioal_info *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  _Additioal_info *p_Var2;
  _Additioal_info *p_Var3;
  _Additioal_info *p_Var4;
  undefined4 local_10;
  
  _Additioal_info::clear(param_1);
  iVar1 = G_CDataManager();
  _Additioal_info::add(param_1,(_Additioal_info *)(*(int *)(iVar1 + 0x14) + param_2 * 0x7dc));
  iVar1 = G_CDataManager();
  p_Var2 = (_Additioal_info *)
           CCharacter::get_growtype_stat
                     ((CCharacter *)(*(int *)(iVar1 + 0x14) + param_2 * 0x7dc),0,0);
  iVar1 = G_CDataManager();
  p_Var3 = (_Additioal_info *)
           CCharacter::get_growtype_stat
                     ((CCharacter *)(*(int *)(iVar1 + 0x14) + param_2 * 0x7dc),param_3,0);
  iVar1 = G_CDataManager();
  p_Var4 = (_Additioal_info *)
           CCharacter::get_growtype_stat
                     ((CCharacter *)(*(int *)(iVar1 + 0x14) + param_2 * 0x7dc),param_3,param_4);
  for (local_10 = 1; local_10 < param_5; local_10 = local_10 + 1) {
    if (local_10 < 0xf) {
      _Additioal_info::add(param_1,p_Var2);
    }
    else if (local_10 < 0x32) {
      _Additioal_info::add(param_1,p_Var3);
    }
    else {
      _Additioal_info::add(param_1,p_Var4);
    }
  }
  return param_1;
}
```

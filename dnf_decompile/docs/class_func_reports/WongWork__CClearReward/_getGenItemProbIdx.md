# _getGenItemProbIdx

`_ZN8WongWork12CClearReward18_getGenItemProbIdxEiNS_22eClearRewardDropProb_tE`

`WongWork::CClearReward::_getGenItemProbIdx(int, WongWork::eClearRewardDropProb_t)`

| 类 | 地址 |
|---|---|
| `WongWork::CClearReward` | `0x08538694` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08538694  _ZN8WongWork12CClearReward18_getGenItemProbIdxEiNS_22eClearRewardDropProb_tE
#           WongWork::CClearReward::_getGenItemProbIdx(int, WongWork::eClearRewardDropProb_t)
# range [0x08538694, 0x08538739]
08538694 +0x00:  push   %ebp
08538695 +0x01:  mov    %esp,%ebp
08538697 +0x03:  sub    $0x28,%esp
0853869a +0x06:  movl   $0x0,-0x10(%ebp)
085386a1 +0x0d:  jmp    085386e3 <+0x4f>
085386a3 +0x0f:  mov    0x8(%ebp),%eax
085386a6 +0x12:  lea    0x60(%eax),%ecx
085386a9 +0x15:  mov    0x10(%ebp),%edx
085386ac +0x18:  mov    %edx,%eax
085386ae +0x1a:  add    %eax,%eax
085386b0 +0x1c:  add    %edx,%eax
085386b2 +0x1e:  shl    $0x2,%eax
085386b5 +0x21:  lea    (%ecx,%eax,1),%edx
085386b8 +0x24:  mov    -0x10(%ebp),%eax
085386bb +0x27:  mov    %eax,0x4(%esp)
085386bf +0x2b:  mov    %edx,(%esp)
085386c2 +0x2e:  call   0853bd58 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x1fe4>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x1fe4
085386c7 +0x33:  mov    %eax,-0xc(%ebp)
085386ca +0x36:  mov    -0xc(%ebp),%eax
085386cd +0x39:  mov    (%eax),%eax
085386cf +0x3b:  cmp    0xc(%ebp),%eax
085386d2 +0x3e:  jg     085386df <+0x4b>
085386d4 +0x40:  mov    -0xc(%ebp),%eax
085386d7 +0x43:  mov    0x4(%eax),%eax
085386da +0x46:  cmp    0xc(%ebp),%eax
085386dd +0x49:  jge    08538709 <+0x75>
085386df +0x4b:  addl   $0x1,-0x10(%ebp)
085386e3 +0x4f:  mov    0x10(%ebp),%edx
085386e6 +0x52:  mov    %edx,%eax
085386e8 +0x54:  add    %eax,%eax
085386ea +0x56:  add    %edx,%eax
085386ec +0x58:  shl    $0x2,%eax
085386ef +0x5b:  add    $0x60,%eax
085386f2 +0x5e:  add    0x8(%ebp),%eax
085386f5 +0x61:  mov    %eax,(%esp)
085386f8 +0x64:  call   0853bd36 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x1fc2>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x1fc2
085386fd +0x69:  cmp    -0x10(%ebp),%eax
08538700 +0x6c:  seta   %al
08538703 +0x6f:  test   %al,%al
08538705 +0x71:  jne    085386a3 <+0xf>
08538707 +0x73:  jmp    0853870a <+0x76>
08538709 +0x75:  nop
0853870a +0x76:  mov    0x10(%ebp),%edx
0853870d +0x79:  mov    %edx,%eax
0853870f +0x7b:  add    %eax,%eax
08538711 +0x7d:  add    %edx,%eax
08538713 +0x7f:  shl    $0x2,%eax
08538716 +0x82:  add    $0x60,%eax
08538719 +0x85:  add    0x8(%ebp),%eax
0853871c +0x88:  mov    %eax,(%esp)
0853871f +0x8b:  call   0853bd36 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x1fc2>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x1fc2
08538724 +0x90:  cmp    -0x10(%ebp),%eax
08538727 +0x93:  setbe  %al
0853872a +0x96:  test   %al,%al
0853872c +0x98:  je     08538735 <+0xa1>
0853872e +0x9a:  mov    $0xffffffff,%eax
08538733 +0x9f:  jmp    08538738 <+0xa4>
08538735 +0xa1:  mov    -0x10(%ebp),%eax
08538738 +0xa4:  leave
08538739 +0xa5:  ret
```

## 反编译 C

```c
// WongWork::CClearReward::_getGenItemProbIdx @ 0x8538694

/* WongWork::CClearReward::_getGenItemProbIdx(int, WongWork::eClearRewardDropProb_t) */

uint __thiscall
WongWork::CClearReward::_getGenItemProbIdx(CClearReward *this,int param_1,int param_3)

{
  int *piVar1;
  uint uVar2;
  uint local_14;
  
  local_14 = 0;
  while ((uVar2 = std::
                  vector<WongWork::CClearReward::stGenItemProb_t,std::allocator<WongWork::CClearReward::stGenItemProb_t>>
                  ::size((vector<WongWork::CClearReward::stGenItemProb_t,std::allocator<WongWork::CClearReward::stGenItemProb_t>>
                          *)(this + param_3 * 0xc + 0x60)), local_14 < uVar2 &&
         ((piVar1 = (int *)std::
                           vector<WongWork::CClearReward::stGenItemProb_t,std::allocator<WongWork::CClearReward::stGenItemProb_t>>
                           ::operator[]((vector<WongWork::CClearReward::stGenItemProb_t,std::allocator<WongWork::CClearReward::stGenItemProb_t>>
                                         *)(this + param_3 * 0xc + 0x60),local_14),
          param_1 < *piVar1 || (piVar1[1] < param_1))))) {
    local_14 = local_14 + 1;
  }
  uVar2 = std::
          vector<WongWork::CClearReward::stGenItemProb_t,std::allocator<WongWork::CClearReward::stGenItemProb_t>>
          ::size((vector<WongWork::CClearReward::stGenItemProb_t,std::allocator<WongWork::CClearReward::stGenItemProb_t>>
                  *)(this + param_3 * 0xc + 0x60));
  if (uVar2 <= local_14) {
    local_14 = 0xffffffff;
  }
  return local_14;
}
```

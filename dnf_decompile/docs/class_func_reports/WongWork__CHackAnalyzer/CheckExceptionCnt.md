# CheckExceptionCnt

`_ZN8WongWork13CHackAnalyzer17CheckExceptionCntENS_13ENUM_HACKTYPEEi`

`WongWork::CHackAnalyzer::CheckExceptionCnt(WongWork::ENUM_HACKTYPE, int)`

| 类 | 地址 |
|---|---|
| `WongWork::CHackAnalyzer` | `0x080f81fc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080f81fc  _ZN8WongWork13CHackAnalyzer17CheckExceptionCntENS_13ENUM_HACKTYPEEi
#           WongWork::CHackAnalyzer::CheckExceptionCnt(WongWork::ENUM_HACKTYPE, int)
# range [0x080f81fc, 0x080f831f]
080f81fc +0x000:  push   %ebp
080f81fd +0x001:  mov    %esp,%ebp
080f81ff +0x003:  push   %ebx
080f8200 +0x004:  sub    $0x44,%esp
080f8203 +0x007:  mov    0xc(%ebp),%eax
080f8206 +0x00a:  mov    %eax,%ecx
080f8208 +0x00c:  mov    &_ZN10GlobalData27g_autoPunishRuleHackTypeMgrE,%edx
080f820e +0x012:  lea    -0x28(%ebp),%eax
080f8211 +0x015:  mov    %ecx,0x8(%esp)
080f8215 +0x019:  mov    %edx,0x4(%esp)
080f8219 +0x01d:  mov    %eax,(%esp)
080f821c +0x020:  call   080f972a <_ZN8WongWork26CAutoPunishRuleHackTypeMgr15GetExceptionCntEi>  ; WongWork::CAutoPunishRuleHackTypeMgr::GetExceptionCnt(int)
080f8221 +0x025:  sub    $0x4,%esp
080f8224 +0x028:  movzwl -0x28(%ebp),%eax
080f8228 +0x02c:  test   %ax,%ax
080f822b +0x02f:  je     080f82fb <+0xff>
080f8231 +0x035:  lea    -0x30(%ebp),%eax
080f8234 +0x038:  mov    %eax,(%esp)
080f8237 +0x03b:  call   080f9d56 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x562>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x562
080f823c +0x040:  movl   $0x1,-0xc(%ebp)
080f8243 +0x047:  lea    -0x14(%ebp),%eax
080f8246 +0x04a:  lea    -0xc(%ebp),%edx
080f8249 +0x04d:  mov    %edx,0x8(%esp)
080f824d +0x051:  lea    0xc(%ebp),%edx
080f8250 +0x054:  mov    %edx,0x4(%esp)
080f8254 +0x058:  mov    %eax,(%esp)
080f8257 +0x05b:  call   080f9d70 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x57c>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x57c
080f825c +0x060:  sub    $0x4,%esp
080f825f +0x063:  lea    -0x14(%ebp),%eax
080f8262 +0x066:  mov    %eax,0x4(%esp)
080f8266 +0x06a:  lea    -0x1c(%ebp),%eax
080f8269 +0x06d:  mov    %eax,(%esp)
080f826c +0x070:  call   080f9db2 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x5be>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x5be
080f8271 +0x075:  mov    0x8(%ebp),%eax
080f8274 +0x078:  lea    0x7a0c(%eax),%ecx
080f827a +0x07e:  lea    -0x24(%ebp),%eax
080f827d +0x081:  lea    -0x1c(%ebp),%edx
080f8280 +0x084:  mov    %edx,0x8(%esp)
080f8284 +0x088:  mov    %ecx,0x4(%esp)
080f8288 +0x08c:  mov    %eax,(%esp)
080f828b +0x08f:  call   080c6d50 <_GLOBAL__I_g_ServerString_+0x2bb>  ; global constructors keyed to g_ServerString_+0x2bb
080f8290 +0x094:  sub    $0x4,%esp
080f8293 +0x097:  lea    -0x24(%ebp),%eax
080f8296 +0x09a:  mov    %eax,0x4(%esp)
080f829a +0x09e:  lea    -0x30(%ebp),%eax
080f829d +0x0a1:  mov    %eax,(%esp)
080f82a0 +0x0a4:  call   080f9de4 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x5f0>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x5f0
080f82a5 +0x0a9:  movzbl -0x2c(%ebp),%eax
080f82a9 +0x0ad:  xor    $0x1,%eax
080f82ac +0x0b0:  test   %al,%al
080f82ae +0x0b2:  je     080f82f4 <+0xf8>
080f82b0 +0x0b4:  lea    -0x30(%ebp),%eax
080f82b3 +0x0b7:  mov    %eax,(%esp)
080f82b6 +0x0ba:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
080f82bb +0x0bf:  mov    %eax,%ebx
080f82bd +0x0c1:  lea    -0x30(%ebp),%eax
080f82c0 +0x0c4:  mov    %eax,(%esp)
080f82c3 +0x0c7:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
080f82c8 +0x0cc:  mov    0x4(%eax),%eax
080f82cb +0x0cf:  add    0x10(%ebp),%eax
080f82ce +0x0d2:  mov    %eax,0x4(%ebx)
080f82d1 +0x0d5:  lea    -0x30(%ebp),%eax
080f82d4 +0x0d8:  mov    %eax,(%esp)
080f82d7 +0x0db:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
080f82dc +0x0e0:  mov    0x4(%eax),%edx
080f82df +0x0e3:  movzwl -0x28(%ebp),%eax
080f82e3 +0x0e7:  cwtl
080f82e4 +0x0e8:  cmp    %eax,%edx
080f82e6 +0x0ea:  setge  %al
080f82e9 +0x0ed:  test   %al,%al
080f82eb +0x0ef:  je     080f82f4 <+0xf8>
080f82ed +0x0f1:  mov    $0x0,%eax
080f82f2 +0x0f6:  jmp    080f831a <+0x11e>
080f82f4 +0x0f8:  mov    $0x1,%eax
080f82f9 +0x0fd:  jmp    080f831a <+0x11e>
080f82fb +0x0ff:  movzwl -0x26(%ebp),%eax
080f82ff +0x103:  test   %ax,%ax
080f8302 +0x106:  je     080f8315 <+0x119>
080f8304 +0x108:  movzwl -0x26(%ebp),%eax
080f8308 +0x10c:  cwtl
080f8309 +0x10d:  cmp    0x10(%ebp),%eax
080f830c +0x110:  jl     080f8315 <+0x119>
080f830e +0x112:  mov    $0x1,%eax
080f8313 +0x117:  jmp    080f831a <+0x11e>
080f8315 +0x119:  mov    $0x0,%eax
080f831a +0x11e:  mov    -0x4(%ebp),%ebx
080f831d +0x121:  leave
080f831e +0x122:  ret
080f831f +0x123:  nop
```

## 反编译 C

```c
// WongWork::CHackAnalyzer::CheckExceptionCnt @ 0x80f81fc

/* WongWork::CHackAnalyzer::CheckExceptionCnt(WongWork::ENUM_HACKTYPE, int) */

undefined4 __thiscall
WongWork::CHackAnalyzer::CheckExceptionCnt(undefined4 this,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  pair<std::_Rb_tree_iterator<std::pair<int_const,int>>,bool> local_34 [4];
  char local_30;
  short local_2c;
  short local_2a;
  pair local_28 [8];
  pair<int_const,int> local_20 [8];
  ENUM_HACKTYPE local_18 [8];
  undefined4 local_10;
  
  CAutoPunishRuleHackTypeMgr::GetExceptionCnt((int)&local_2c);
  if (local_2c == 0) {
    if ((local_2a == 0) || (local_2a < param_3)) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  else {
    std::pair<std::_Rb_tree_iterator<std::pair<int_const,int>>,bool>::pair(local_34);
    local_10 = 1;
    std::make_pair<WongWork::ENUM_HACKTYPE&,int>(local_18,&param_2);
    std::pair<int_const,int>::pair<WongWork::ENUM_HACKTYPE,int>(local_20,local_18);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert(local_28);
    std::pair<std::_Rb_tree_iterator<std::pair<int_const,int>>,bool>::operator=(local_34,local_28);
    if (local_30 != '\x01') {
      iVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_34);
      iVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_34);
      *(int *)(iVar1 + 4) = *(int *)(iVar2 + 4) + param_3;
      iVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_34);
      if ((int)local_2c <= *(int *)(iVar1 + 4)) {
        return 0;
      }
    }
    uVar3 = 1;
  }
  return uVar3;
}
```

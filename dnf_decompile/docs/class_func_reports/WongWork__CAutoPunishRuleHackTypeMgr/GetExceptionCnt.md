# GetExceptionCnt

`_ZN8WongWork26CAutoPunishRuleHackTypeMgr15GetExceptionCntEi`

`WongWork::CAutoPunishRuleHackTypeMgr::GetExceptionCnt(int)`

| 类 | 地址 |
|---|---|
| `WongWork::CAutoPunishRuleHackTypeMgr` | `0x080f972a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080f972a  _ZN8WongWork26CAutoPunishRuleHackTypeMgr15GetExceptionCntEi
#           WongWork::CAutoPunishRuleHackTypeMgr::GetExceptionCnt(int)
# range [0x080f972a, 0x080f97b1]
080f972a +0x00:  push   %ebp
080f972b +0x01:  mov    %esp,%ebp
080f972d +0x03:  push   %ebx
080f972e +0x04:  sub    $0x24,%esp
080f9731 +0x07:  mov    0x8(%ebp),%ebx
080f9734 +0x0a:  mov    0xc(%ebp),%eax
080f9737 +0x0d:  lea    0x58(%eax),%ecx
080f973a +0x10:  lea    -0x10(%ebp),%eax
080f973d +0x13:  lea    0x10(%ebp),%edx
080f9740 +0x16:  mov    %edx,0x8(%esp)
080f9744 +0x1a:  mov    %ecx,0x4(%esp)
080f9748 +0x1e:  mov    %eax,(%esp)
080f974b +0x21:  call   080fa122 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x92e>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x92e
080f9750 +0x26:  sub    $0x4,%esp
080f9753 +0x29:  mov    0xc(%ebp),%eax
080f9756 +0x2c:  lea    0x58(%eax),%edx
080f9759 +0x2f:  lea    -0xc(%ebp),%eax
080f975c +0x32:  mov    %edx,0x4(%esp)
080f9760 +0x36:  mov    %eax,(%esp)
080f9763 +0x39:  call   080fa14e <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x95a>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x95a
080f9768 +0x3e:  sub    $0x4,%esp
080f976b +0x41:  lea    -0xc(%ebp),%eax
080f976e +0x44:  mov    %eax,0x4(%esp)
080f9772 +0x48:  lea    -0x10(%ebp),%eax
080f9775 +0x4b:  mov    %eax,(%esp)
080f9778 +0x4e:  call   080fa174 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x980>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x980
080f977d +0x53:  test   %al,%al
080f977f +0x55:  je     080f9793 <+0x69>
080f9781 +0x57:  lea    -0x10(%ebp),%eax
080f9784 +0x5a:  mov    %eax,(%esp)
080f9787 +0x5d:  call   080fa188 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x994>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x994
080f978c +0x62:  mov    0x4(%eax),%eax
080f978f +0x65:  mov    %eax,(%ebx)
080f9791 +0x67:  jmp    080f97ab <+0x81>
080f9793 +0x69:  movl   $0x0,0x8(%esp)
080f979b +0x71:  movl   $0x0,0x4(%esp)
080f97a3 +0x79:  mov    %ebx,(%esp)
080f97a6 +0x7c:  call   080f982a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x36>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x36
080f97ab +0x81:  mov    %ebx,%eax
080f97ad +0x83:  mov    -0x4(%ebp),%ebx
080f97b0 +0x86:  leave
080f97b1 +0x87:  ret    $0x4
```

## 反编译 C

```c
// WongWork::CAutoPunishRuleHackTypeMgr::GetExceptionCnt @ 0x80f972a

/* WongWork::CAutoPunishRuleHackTypeMgr::GetExceptionCnt(int) */

int WongWork::CAutoPunishRuleHackTypeMgr::GetExceptionCnt(int param_1)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator<std::pair<int_const,WongWork::stHacktypeExceptionInfo_t>> local_14 [4];
  map<int,WongWork::stHacktypeExceptionInfo_t,std::less<int>,std::allocator<std::pair<int_const,WongWork::stHacktypeExceptionInfo_t>>>
  local_10 [8];
  
  std::
  map<int,WongWork::stHacktypeExceptionInfo_t,std::less<int>,std::allocator<std::pair<int_const,WongWork::stHacktypeExceptionInfo_t>>>
  ::find((int *)local_14);
  std::
  map<int,WongWork::stHacktypeExceptionInfo_t,std::less<int>,std::allocator<std::pair<int_const,WongWork::stHacktypeExceptionInfo_t>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,WongWork::stHacktypeExceptionInfo_t>>::
          operator!=(local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    stHacktypeExceptionInfo_t::stHacktypeExceptionInfo_t((stHacktypeExceptionInfo_t *)param_1,0,0);
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,WongWork::stHacktypeExceptionInfo_t>>::
            operator->(local_14);
    *(undefined4 *)param_1 = *(undefined4 *)(iVar2 + 4);
  }
  return param_1;
}
```

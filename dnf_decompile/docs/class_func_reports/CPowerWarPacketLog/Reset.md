# Reset

`_ZN18CPowerWarPacketLog5ResetEv`

`CPowerWarPacketLog::Reset()`

| 类 | 地址 |
|---|---|
| `CPowerWarPacketLog` | `0x084808de` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084808de  _ZN18CPowerWarPacketLog5ResetEv
#           CPowerWarPacketLog::Reset()
# range [0x084808de, 0x0848096f]
084808de +0x00:  push   %ebp
084808df +0x01:  mov    %esp,%ebp
084808e1 +0x03:  push   %ebx
084808e2 +0x04:  sub    $0x24,%esp
084808e5 +0x07:  mov    0x8(%ebp),%edx
084808e8 +0x0a:  lea    -0x14(%ebp),%eax
084808eb +0x0d:  mov    %edx,0x4(%esp)
084808ef +0x11:  mov    %eax,(%esp)
084808f2 +0x14:  call   08481190 <_GLOBAL__I__ZN13CPowerManagerC2Ev+0x20e>  ; global constructors keyed to CPowerManager::CPowerManager()+0x20e
084808f7 +0x19:  sub    $0x4,%esp
084808fa +0x1c:  jmp    08480935 <+0x57>
084808fc +0x1e:  lea    -0x14(%ebp),%eax
084808ff +0x21:  mov    %eax,(%esp)
08480902 +0x24:  call   084811f0 <_GLOBAL__I__ZN13CPowerManagerC2Ev+0x26e>  ; global constructors keyed to CPowerManager::CPowerManager()+0x26e
08480907 +0x29:  mov    0x4(%eax),%eax
0848090a +0x2c:  mov    %eax,-0xc(%ebp)
0848090d +0x2f:  cmpl   $0x0,-0xc(%ebp)
08480911 +0x33:  je     0848092a <+0x4c>
08480913 +0x35:  mov    -0xc(%ebp),%ebx
08480916 +0x38:  test   %ebx,%ebx
08480918 +0x3a:  je     0848092a <+0x4c>
0848091a +0x3c:  mov    %ebx,(%esp)
0848091d +0x3f:  call   084810ea <_GLOBAL__I__ZN13CPowerManagerC2Ev+0x168>  ; global constructors keyed to CPowerManager::CPowerManager()+0x168
08480922 +0x44:  mov    %ebx,(%esp)
08480925 +0x47:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0848092a +0x4c:  lea    -0x14(%ebp),%eax
0848092d +0x4f:  mov    %eax,(%esp)
08480930 +0x52:  call   084811fe <_GLOBAL__I__ZN13CPowerManagerC2Ev+0x27c>  ; global constructors keyed to CPowerManager::CPowerManager()+0x27c
08480935 +0x57:  mov    0x8(%ebp),%edx
08480938 +0x5a:  lea    -0x10(%ebp),%eax
0848093b +0x5d:  mov    %edx,0x4(%esp)
0848093f +0x61:  mov    %eax,(%esp)
08480942 +0x64:  call   084811b6 <_GLOBAL__I__ZN13CPowerManagerC2Ev+0x234>  ; global constructors keyed to CPowerManager::CPowerManager()+0x234
08480947 +0x69:  sub    $0x4,%esp
0848094a +0x6c:  lea    -0x10(%ebp),%eax
0848094d +0x6f:  mov    %eax,0x4(%esp)
08480951 +0x73:  lea    -0x14(%ebp),%eax
08480954 +0x76:  mov    %eax,(%esp)
08480957 +0x79:  call   084811dc <_GLOBAL__I__ZN13CPowerManagerC2Ev+0x25a>  ; global constructors keyed to CPowerManager::CPowerManager()+0x25a
0848095c +0x7e:  test   %al,%al
0848095e +0x80:  jne    084808fc <+0x1e>
08480960 +0x82:  mov    0x8(%ebp),%eax
08480963 +0x85:  mov    %eax,(%esp)
08480966 +0x88:  call   0848121c <_GLOBAL__I__ZN13CPowerManagerC2Ev+0x29a>  ; global constructors keyed to CPowerManager::CPowerManager()+0x29a
0848096b +0x8d:  mov    -0x4(%ebp),%ebx
0848096e +0x90:  leave
0848096f +0x91:  ret
```

## 反编译 C

```c
// CPowerWarPacketLog::Reset @ 0x84808de

/* CPowerWarPacketLog::Reset() */

void __thiscall CPowerWarPacketLog::Reset(CPowerWarPacketLog *this)

{
  STPacketLog *this_00;
  char cVar1;
  int iVar2;
  map<int,STPacketLog*,std::less<int>,std::allocator<std::pair<int_const,STPacketLog*>>>
  local_18 [4];
  map<int,STPacketLog*,std::less<int>,std::allocator<std::pair<int_const,STPacketLog*>>>
  local_14 [4];
  STPacketLog *local_10;
  
  std::map<int,STPacketLog*,std::less<int>,std::allocator<std::pair<int_const,STPacketLog*>>>::begin
            (local_18);
  while( true ) {
    std::map<int,STPacketLog*,std::less<int>,std::allocator<std::pair<int_const,STPacketLog*>>>::end
              (local_14);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,STPacketLog*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,STPacketLog*>> *)local_18,
                       (_Rb_tree_iterator *)local_14);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,STPacketLog*>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,STPacketLog*>> *)local_18);
    this_00 = *(STPacketLog **)(iVar2 + 4);
    local_10 = this_00;
    if ((this_00 != (STPacketLog *)0x0) && (this_00 != (STPacketLog *)0x0)) {
      STPacketLog::~STPacketLog(this_00);
      operator_delete(this_00);
    }
    std::_Rb_tree_iterator<std::pair<int_const,STPacketLog*>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,STPacketLog*>> *)local_18);
  }
  std::map<int,STPacketLog*,std::less<int>,std::allocator<std::pair<int_const,STPacketLog*>>>::clear
            ((map<int,STPacketLog*,std::less<int>,std::allocator<std::pair<int_const,STPacketLog*>>>
              *)this);
  return;
}
```

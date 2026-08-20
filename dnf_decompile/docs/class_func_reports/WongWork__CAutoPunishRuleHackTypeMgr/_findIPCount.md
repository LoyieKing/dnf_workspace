# _findIPCount

`_ZN8WongWork26CAutoPunishRuleHackTypeMgr12_findIPCountEjjPKc`

`WongWork::CAutoPunishRuleHackTypeMgr::_findIPCount(unsigned int, unsigned int, char const*)`

| 类 | 地址 |
|---|---|
| `WongWork::CAutoPunishRuleHackTypeMgr` | `0x080f9322` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080f9322  _ZN8WongWork26CAutoPunishRuleHackTypeMgr12_findIPCountEjjPKc
#           WongWork::CAutoPunishRuleHackTypeMgr::_findIPCount(unsigned int, unsigned int, char const*)
# range [0x080f9322, 0x080f9469]
080f9322 +0x000:  push   %ebp
080f9323 +0x001:  mov    %esp,%ebp
080f9325 +0x003:  sub    $0x58,%esp
080f9328 +0x006:  mov    0xc(%ebp),%eax
080f932b +0x009:  mov    %ax,-0x12(%ebp)
080f932f +0x00d:  mov    0x8(%ebp),%eax
080f9332 +0x010:  lea    0x24(%eax),%ecx
080f9335 +0x013:  lea    -0x18(%ebp),%eax
080f9338 +0x016:  lea    -0x12(%ebp),%edx
080f933b +0x019:  mov    %edx,0x8(%esp)
080f933f +0x01d:  mov    %ecx,0x4(%esp)
080f9343 +0x021:  mov    %eax,(%esp)
080f9346 +0x024:  call   080f9f16 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x722>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x722
080f934b +0x029:  sub    $0x4,%esp
080f934e +0x02c:  lea    -0x18(%ebp),%eax
080f9351 +0x02f:  mov    %eax,0x4(%esp)
080f9355 +0x033:  lea    -0x1c(%ebp),%eax
080f9358 +0x036:  mov    %eax,(%esp)
080f935b +0x039:  call   080f9f42 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x74e>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x74e
080f9360 +0x03e:  mov    0xc(%ebp),%eax
080f9363 +0x041:  mov    %ax,-0xa(%ebp)
080f9367 +0x045:  mov    0x8(%ebp),%eax
080f936a +0x048:  lea    0x24(%eax),%ecx
080f936d +0x04b:  lea    -0x10(%ebp),%eax
080f9370 +0x04e:  lea    -0xa(%ebp),%edx
080f9373 +0x051:  mov    %edx,0x8(%esp)
080f9377 +0x055:  mov    %ecx,0x4(%esp)
080f937b +0x059:  mov    %eax,(%esp)
080f937e +0x05c:  call   080f9f52 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x75e>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x75e
080f9383 +0x061:  sub    $0x4,%esp
080f9386 +0x064:  lea    -0x10(%ebp),%eax
080f9389 +0x067:  mov    %eax,0x4(%esp)
080f938d +0x06b:  lea    -0x20(%ebp),%eax
080f9390 +0x06e:  mov    %eax,(%esp)
080f9393 +0x071:  call   080f9f42 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x74e>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x74e
080f9398 +0x076:  jmp    080f9449 <+0x127>
080f939d +0x07b:  lea    -0x1c(%ebp),%eax
080f93a0 +0x07e:  mov    %eax,(%esp)
080f93a3 +0x081:  call   080f9fb0 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x7bc>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x7bc
080f93a8 +0x086:  mov    0x4(%eax),%edx
080f93ab +0x089:  mov    %edx,-0x38(%ebp)
080f93ae +0x08c:  mov    0x8(%eax),%edx
080f93b1 +0x08f:  mov    %edx,-0x34(%ebp)
080f93b4 +0x092:  mov    0xc(%eax),%edx
080f93b7 +0x095:  mov    %edx,-0x30(%ebp)
080f93ba +0x098:  mov    0x10(%eax),%edx
080f93bd +0x09b:  mov    %edx,-0x2c(%ebp)
080f93c0 +0x09e:  mov    0x14(%eax),%edx
080f93c3 +0x0a1:  mov    %edx,-0x28(%ebp)
080f93c6 +0x0a4:  mov    0x18(%eax),%eax
080f93c9 +0x0a7:  mov    %eax,-0x24(%ebp)
080f93cc +0x0aa:  movzwl -0x36(%ebp),%eax
080f93d0 +0x0ae:  movzwl %ax,%eax
080f93d3 +0x0b1:  cmp    0x10(%ebp),%eax
080f93d6 +0x0b4:  jne    080f943e <+0x11c>
080f93d8 +0x0b6:  movl   $0x0,-0x48(%ebp)
080f93df +0x0bd:  movl   $0x0,-0x44(%ebp)
080f93e6 +0x0c4:  movl   $0x0,-0x40(%ebp)
080f93ed +0x0cb:  movl   $0x0,-0x3c(%ebp)
080f93f4 +0x0d2:  mov    0x14(%ebp),%eax
080f93f7 +0x0d5:  mov    %eax,0x8(%esp)
080f93fb +0x0d9:  movl   $0x0,0x4(%esp)
080f9403 +0x0e1:  lea    -0x48(%ebp),%eax
080f9406 +0x0e4:  mov    %eax,(%esp)
080f9409 +0x0e7:  call   086b1dd5 <_Z22Divide_C_ClassIP_EndIPPcS_S_>  ; Divide_C_ClassIP_EndIP(char*, char*, char*)
080f940e +0x0ec:  lea    -0x48(%ebp),%eax
080f9411 +0x0ef:  movzbl (%eax),%eax
080f9414 +0x0f2:  test   %al,%al
080f9416 +0x0f4:  je     080f943e <+0x11c>
080f9418 +0x0f6:  movl   $0xc,0x8(%esp)
080f9420 +0x0fe:  lea    -0x38(%ebp),%eax
080f9423 +0x101:  add    $0x4,%eax
080f9426 +0x104:  mov    %eax,0x4(%esp)
080f942a +0x108:  lea    -0x48(%ebp),%eax
080f942d +0x10b:  mov    %eax,(%esp)
080f9430 +0x10e:  call   0807e8c0 <_init+0x11b8>
080f9435 +0x113:  test   %eax,%eax
080f9437 +0x115:  jne    080f943e <+0x11c>
080f9439 +0x117:  mov    -0x24(%ebp),%eax
080f943c +0x11a:  jmp    080f9468 <+0x146>
080f943e +0x11c:  lea    -0x1c(%ebp),%eax
080f9441 +0x11f:  mov    %eax,(%esp)
080f9444 +0x122:  call   080f9f92 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x79e>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x79e
080f9449 +0x127:  lea    -0x20(%ebp),%eax
080f944c +0x12a:  mov    %eax,0x4(%esp)
080f9450 +0x12e:  lea    -0x1c(%ebp),%eax
080f9453 +0x131:  mov    %eax,(%esp)
080f9456 +0x134:  call   080f9f7e <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x78a>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x78a
080f945b +0x139:  test   %al,%al
080f945d +0x13b:  jne    080f939d <+0x7b>
080f9463 +0x141:  mov    $0x0,%eax
080f9468 +0x146:  leave
080f9469 +0x147:  ret
```

## 反编译 C

```c
// WongWork::CAutoPunishRuleHackTypeMgr::_findIPCount @ 0x80f9322

/* WongWork::CAutoPunishRuleHackTypeMgr::_findIPCount(unsigned int, unsigned int, char const*) */

undefined4 __thiscall
WongWork::CAutoPunishRuleHackTypeMgr::_findIPCount
          (CAutoPunishRuleHackTypeMgr *this,uint param_1,uint param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  char local_4c [16];
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  _Rb_tree_const_iterator<std::pair<unsigned_short_const,WongWork::HackIPCounter_t>> local_24 [4];
  _Rb_tree_const_iterator<std::pair<unsigned_short_const,WongWork::HackIPCounter_t>> local_20 [4];
  multimap<unsigned_short,WongWork::HackIPCounter_t,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,WongWork::HackIPCounter_t>>>
  local_1c [6];
  undefined2 local_16;
  multimap<unsigned_short,WongWork::HackIPCounter_t,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,WongWork::HackIPCounter_t>>>
  local_14 [6];
  undefined2 local_e;
  
  local_16 = (short)param_1;
  std::
  multimap<unsigned_short,WongWork::HackIPCounter_t,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,WongWork::HackIPCounter_t>>>
  ::lower_bound(local_1c,(ushort *)(this + 0x24));
  std::_Rb_tree_const_iterator<std::pair<unsigned_short_const,WongWork::HackIPCounter_t>>::
  _Rb_tree_const_iterator(local_20,(_Rb_tree_iterator *)local_1c);
  local_e = (short)param_1;
  std::
  multimap<unsigned_short,WongWork::HackIPCounter_t,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,WongWork::HackIPCounter_t>>>
  ::upper_bound(local_14,(ushort *)(this + 0x24));
  std::_Rb_tree_const_iterator<std::pair<unsigned_short_const,WongWork::HackIPCounter_t>>::
  _Rb_tree_const_iterator(local_24,(_Rb_tree_iterator *)local_14);
  do {
    cVar1 = std::_Rb_tree_const_iterator<std::pair<unsigned_short_const,WongWork::HackIPCounter_t>>
            ::operator!=(local_20,(_Rb_tree_const_iterator *)local_24);
    if (cVar1 == '\0') {
      return 0;
    }
    iVar2 = std::_Rb_tree_const_iterator<std::pair<unsigned_short_const,WongWork::HackIPCounter_t>>
            ::operator->(local_20);
    local_3c = *(uint *)(iVar2 + 4);
    local_38 = *(undefined4 *)(iVar2 + 8);
    local_34 = *(undefined4 *)(iVar2 + 0xc);
    local_30 = *(undefined4 *)(iVar2 + 0x10);
    local_2c = *(undefined4 *)(iVar2 + 0x14);
    local_28 = *(undefined4 *)(iVar2 + 0x18);
    if (local_3c >> 0x10 == param_2) {
      local_4c[0] = '\0';
      local_4c[1] = '\0';
      local_4c[2] = '\0';
      local_4c[3] = '\0';
      local_4c[4] = '\0';
      local_4c[5] = '\0';
      local_4c[6] = '\0';
      local_4c[7] = '\0';
      local_4c[8] = '\0';
      local_4c[9] = '\0';
      local_4c[10] = '\0';
      local_4c[0xb] = '\0';
      local_4c[0xc] = '\0';
      local_4c[0xd] = '\0';
      local_4c[0xe] = '\0';
      local_4c[0xf] = '\0';
      Divide_C_ClassIP_EndIP(local_4c,(char *)0x0,param_3);
      if ((local_4c[0] != '\0') && (iVar2 = strncmp(local_4c,(char *)&local_38,0xc), iVar2 == 0)) {
        return local_28;
      }
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned_short_const,WongWork::HackIPCounter_t>>::
    operator++(local_20);
  } while( true );
}
```

# GetGmLevel

`_ZN11CGM_Manager10GetGmLevelEj`

`CGM_Manager::GetGmLevel(unsigned int)`

| 类 | 地址 |
|---|---|
| `CGM_Manager` | `0x082993d8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082993d8  _ZN11CGM_Manager10GetGmLevelEj
#           CGM_Manager::GetGmLevel(unsigned int)
# range [0x082993d8, 0x0829948b]
082993d8 +0x00:  push   %ebp
082993d9 +0x01:  mov    %esp,%ebp
082993db +0x03:  push   %esi
082993dc +0x04:  push   %ebx
082993dd +0x05:  sub    $0x20,%esp
082993e0 +0x08:  mov    0x8(%ebp),%eax
082993e3 +0x0b:  add    $0x1c,%eax
082993e6 +0x0e:  mov    %eax,0x4(%esp)
082993ea +0x12:  lea    -0x10(%ebp),%eax
082993ed +0x15:  mov    %eax,(%esp)
082993f0 +0x18:  call   082b2d3c <_GLOBAL__I__ZN4CLog5this_E+0xf163>  ; global constructors keyed to CLog::this_+0xf163
082993f5 +0x1d:  mov    0x8(%ebp),%edx
082993f8 +0x20:  lea    -0x14(%ebp),%eax
082993fb +0x23:  lea    0xc(%ebp),%ecx
082993fe +0x26:  mov    %ecx,0x8(%esp)
08299402 +0x2a:  mov    %edx,0x4(%esp)
08299406 +0x2e:  mov    %eax,(%esp)
08299409 +0x31:  call   082b2d6e <_GLOBAL__I__ZN4CLog5this_E+0xf195>  ; global constructors keyed to CLog::this_+0xf195
0829940e +0x36:  sub    $0x4,%esp
08299411 +0x39:  mov    0x8(%ebp),%edx
08299414 +0x3c:  lea    -0xc(%ebp),%eax
08299417 +0x3f:  mov    %edx,0x4(%esp)
0829941b +0x43:  mov    %eax,(%esp)
0829941e +0x46:  call   082b2d9a <_GLOBAL__I__ZN4CLog5this_E+0xf1c1>  ; global constructors keyed to CLog::this_+0xf1c1
08299423 +0x4b:  sub    $0x4,%esp
08299426 +0x4e:  lea    -0xc(%ebp),%eax
08299429 +0x51:  mov    %eax,0x4(%esp)
0829942d +0x55:  lea    -0x14(%ebp),%eax
08299430 +0x58:  mov    %eax,(%esp)
08299433 +0x5b:  call   082b2dc0 <_GLOBAL__I__ZN4CLog5this_E+0xf1e7>  ; global constructors keyed to CLog::this_+0xf1e7
08299438 +0x60:  test   %al,%al
0829943a +0x62:  je     08299443 <+0x6b>
0829943c +0x64:  mov    $0x0,%ebx
08299441 +0x69:  jmp    08299475 <+0x9d>
08299443 +0x6b:  mov    0x8(%ebp),%eax
08299446 +0x6e:  lea    0xc(%ebp),%edx
08299449 +0x71:  mov    %edx,0x4(%esp)
0829944d +0x75:  mov    %eax,(%esp)
08299450 +0x78:  call   082b2dea <_GLOBAL__I__ZN4CLog5this_E+0xf211>  ; global constructors keyed to CLog::this_+0xf211
08299455 +0x7d:  mov    0x4(%eax),%ebx
08299458 +0x80:  jmp    08299475 <+0x9d>
0829945a +0x82:  mov    %edx,%ebx
0829945c +0x84:  mov    %eax,%esi
0829945e +0x86:  lea    -0x10(%ebp),%eax
08299461 +0x89:  mov    %eax,(%esp)
08299464 +0x8c:  call   082b2d58 <_GLOBAL__I__ZN4CLog5this_E+0xf17f>  ; global constructors keyed to CLog::this_+0xf17f
08299469 +0x91:  mov    %esi,%eax
0829946b +0x93:  mov    %ebx,%edx
0829946d +0x95:  mov    %eax,(%esp)
08299470 +0x98:  call   08ae3750 <_Unwind_Resume>
08299475 +0x9d:  lea    -0x10(%ebp),%eax
08299478 +0xa0:  mov    %eax,(%esp)
0829947b +0xa3:  call   082b2d58 <_GLOBAL__I__ZN4CLog5this_E+0xf17f>  ; global constructors keyed to CLog::this_+0xf17f
08299480 +0xa8:  mov    %ebx,%eax
08299482 +0xaa:  lea    -0x8(%ebp),%esp
08299485 +0xad:  add    $0x0,%esp
08299488 +0xb0:  pop    %ebx
08299489 +0xb1:  pop    %esi
0829948a +0xb2:  pop    %ebp
0829948b +0xb3:  ret
```

## 反编译 C

```c
// CGM_Manager::GetGmLevel @ 0x82993d8

/* CGM_Manager::GetGmLevel(unsigned int) */

undefined4 CGM_Manager::GetGmLevel(uint param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  _Rb_tree_iterator<std::pair<unsigned_int_const,CGMRecord>> local_18 [4];
  readGuard<rwLock> local_14 [4];
  map<unsigned_int,CGMRecord,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGMRecord>>>
  local_10 [4];
  
  readGuard<rwLock>::readGuard(local_14,(rwLock *)(param_1 + 0x1c));
                    /* try { // try from 08299409 to 08299454 has its CatchHandler @ 0829945a */
  std::
  map<unsigned_int,CGMRecord,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGMRecord>>>
  ::find((uint *)local_18);
  std::
  map<unsigned_int,CGMRecord,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGMRecord>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CGMRecord>>::operator==
                    (local_18,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    iVar2 = std::
            map<unsigned_int,CGMRecord,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGMRecord>>>
            ::operator[]((map<unsigned_int,CGMRecord,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGMRecord>>>
                          *)param_1,(uint *)&stack0x00000008);
    uVar3 = *(undefined4 *)(iVar2 + 4);
  }
  else {
    uVar3 = 0;
  }
  readGuard<rwLock>::~readGuard(local_14);
  return uVar3;
}
```

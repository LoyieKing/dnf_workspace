# GetCurrentGmMode

`_ZN11CGM_Manager16GetCurrentGmModeEj`

`CGM_Manager::GetCurrentGmMode(unsigned int)`

| 类 | 地址 |
|---|---|
| `CGM_Manager` | `0x08299276` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08299276  _ZN11CGM_Manager16GetCurrentGmModeEj
#           CGM_Manager::GetCurrentGmMode(unsigned int)
# range [0x08299276, 0x08299329]
08299276 +0x00:  push   %ebp
08299277 +0x01:  mov    %esp,%ebp
08299279 +0x03:  push   %esi
0829927a +0x04:  push   %ebx
0829927b +0x05:  sub    $0x20,%esp
0829927e +0x08:  mov    0x8(%ebp),%eax
08299281 +0x0b:  add    $0x1c,%eax
08299284 +0x0e:  mov    %eax,0x4(%esp)
08299288 +0x12:  lea    -0x10(%ebp),%eax
0829928b +0x15:  mov    %eax,(%esp)
0829928e +0x18:  call   082b2d3c <_GLOBAL__I__ZN4CLog5this_E+0xf163>  ; global constructors keyed to CLog::this_+0xf163
08299293 +0x1d:  mov    0x8(%ebp),%edx
08299296 +0x20:  lea    -0x14(%ebp),%eax
08299299 +0x23:  lea    0xc(%ebp),%ecx
0829929c +0x26:  mov    %ecx,0x8(%esp)
082992a0 +0x2a:  mov    %edx,0x4(%esp)
082992a4 +0x2e:  mov    %eax,(%esp)
082992a7 +0x31:  call   082b2d6e <_GLOBAL__I__ZN4CLog5this_E+0xf195>  ; global constructors keyed to CLog::this_+0xf195
082992ac +0x36:  sub    $0x4,%esp
082992af +0x39:  mov    0x8(%ebp),%edx
082992b2 +0x3c:  lea    -0xc(%ebp),%eax
082992b5 +0x3f:  mov    %edx,0x4(%esp)
082992b9 +0x43:  mov    %eax,(%esp)
082992bc +0x46:  call   082b2d9a <_GLOBAL__I__ZN4CLog5this_E+0xf1c1>  ; global constructors keyed to CLog::this_+0xf1c1
082992c1 +0x4b:  sub    $0x4,%esp
082992c4 +0x4e:  lea    -0xc(%ebp),%eax
082992c7 +0x51:  mov    %eax,0x4(%esp)
082992cb +0x55:  lea    -0x14(%ebp),%eax
082992ce +0x58:  mov    %eax,(%esp)
082992d1 +0x5b:  call   082b2dc0 <_GLOBAL__I__ZN4CLog5this_E+0xf1e7>  ; global constructors keyed to CLog::this_+0xf1e7
082992d6 +0x60:  test   %al,%al
082992d8 +0x62:  je     082992e1 <+0x6b>
082992da +0x64:  mov    $0x0,%ebx
082992df +0x69:  jmp    08299313 <+0x9d>
082992e1 +0x6b:  mov    0x8(%ebp),%eax
082992e4 +0x6e:  lea    0xc(%ebp),%edx
082992e7 +0x71:  mov    %edx,0x4(%esp)
082992eb +0x75:  mov    %eax,(%esp)
082992ee +0x78:  call   082b2dea <_GLOBAL__I__ZN4CLog5this_E+0xf211>  ; global constructors keyed to CLog::this_+0xf211
082992f3 +0x7d:  movzbl (%eax),%ebx
082992f6 +0x80:  jmp    08299313 <+0x9d>
082992f8 +0x82:  mov    %edx,%ebx
082992fa +0x84:  mov    %eax,%esi
082992fc +0x86:  lea    -0x10(%ebp),%eax
082992ff +0x89:  mov    %eax,(%esp)
08299302 +0x8c:  call   082b2d58 <_GLOBAL__I__ZN4CLog5this_E+0xf17f>  ; global constructors keyed to CLog::this_+0xf17f
08299307 +0x91:  mov    %esi,%eax
08299309 +0x93:  mov    %ebx,%edx
0829930b +0x95:  mov    %eax,(%esp)
0829930e +0x98:  call   08ae3750 <_Unwind_Resume>
08299313 +0x9d:  lea    -0x10(%ebp),%eax
08299316 +0xa0:  mov    %eax,(%esp)
08299319 +0xa3:  call   082b2d58 <_GLOBAL__I__ZN4CLog5this_E+0xf17f>  ; global constructors keyed to CLog::this_+0xf17f
0829931e +0xa8:  mov    %ebx,%eax
08299320 +0xaa:  lea    -0x8(%ebp),%esp
08299323 +0xad:  add    $0x0,%esp
08299326 +0xb0:  pop    %ebx
08299327 +0xb1:  pop    %esi
08299328 +0xb2:  pop    %ebp
08299329 +0xb3:  ret
```

## 反编译 C

```c
// CGM_Manager::GetCurrentGmMode @ 0x8299276

/* CGM_Manager::GetCurrentGmMode(unsigned int) */

undefined1 CGM_Manager::GetCurrentGmMode(uint param_1)

{
  char cVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  _Rb_tree_iterator<std::pair<unsigned_int_const,CGMRecord>> local_18 [4];
  readGuard<rwLock> local_14 [4];
  map<unsigned_int,CGMRecord,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGMRecord>>>
  local_10 [4];
  
  readGuard<rwLock>::readGuard(local_14,(rwLock *)(param_1 + 0x1c));
                    /* try { // try from 082992a7 to 082992f2 has its CatchHandler @ 082992f8 */
  std::
  map<unsigned_int,CGMRecord,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGMRecord>>>
  ::find((uint *)local_18);
  std::
  map<unsigned_int,CGMRecord,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGMRecord>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CGMRecord>>::operator==
                    (local_18,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    puVar2 = (undefined1 *)
             std::
             map<unsigned_int,CGMRecord,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGMRecord>>>
             ::operator[]((map<unsigned_int,CGMRecord,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGMRecord>>>
                           *)param_1,(uint *)&stack0x00000008);
    uVar3 = *puVar2;
  }
  else {
    uVar3 = 0;
  }
  readGuard<rwLock>::~readGuard(local_14);
  return uVar3;
}
```
